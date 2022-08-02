using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.IO.Ports;          //para listar los puertos COM disponibles
using System.Media;
using System.Text.RegularExpressions;


namespace Serial
{
    public partial class Form1 : Form
    {
        //creo miobjeto que contiene la ruta del audio
        SoundPlayer simpleSound = new SoundPlayer(@"D:\OneDriveTrabajo\Visual Studio\1_Audios_botones_interfaz\aranas.wav");
        //Crear un delegado y una variable para no usar Timers
        delegate void SetTextCallback(string text);
        string SerialInputData = String.Empty;
        public Form1()
        {
            InitializeComponent();
            serialPort1.DataReceived += new System.IO.Ports.SerialDataReceivedEventHandler(RecibirDatosCom);
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            btn_desconectar.Enabled = false;
            btn_encender.Enabled = false;
            btn_apagar.Enabled = false;
            listaBaudios.Items.Add("9600");
            listaBaudios.Items.Add("115200");
            listaBaudios.SelectedIndex = 0;
            serialPort1.BaudRate = Convert.ToInt32(listaBaudios.SelectedItem.ToString());

        }

        private void btn_conectar_Click(object sender, EventArgs e)
        {
            try {
                serialPort1.Open();
                serialPort1.DtrEnable = true;//habilitar forzamente para poder mandar
                                             //datos a la curyosity
                btn_desconectar.Enabled = true;
                btn_conectar.Enabled = false;
                btn_encender.Enabled = true;
                btn_apagar.Enabled = true;
                //timer1.Enabled = true;
            }catch (Exception ex)
            {
                MessageBox.Show(ex.Message);
            }
            


        }

        private void btn_desconectar_Click(object sender, EventArgs e)
        {
            try
            {
                serialPort1.Close();
                btn_desconectar.Enabled = false;
                btn_conectar.Enabled = true;
                btn_encender.Enabled = false;
                btn_apagar.Enabled = false;
                timer1.Enabled = false;
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message);
            }
            
        }

        private void btn_encender_Click(object sender, EventArgs e)
        {
            try
            {
                serialPort1.Write("q");
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message);
                btn_desconectar_Click( sender,  e);
            }
            
        }

        private void btn_apagar_Click(object sender, EventArgs e)
        {
            try
            {
                serialPort1.Write("N");
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message);
                btn_desconectar_Click( sender,  e);
            }
            
        }

        private void btn_recarga_Click(object sender, EventArgs e)
        {
            try
            {
                string[] ports;

                ports = SerialPort.GetPortNames();
                listapuertosCOM.Items.Clear();
                foreach (string port in ports)
                {
                    listapuertosCOM.Items.Add(port);
                }
                listapuertosCOM.SelectedIndex = 0;
            }
                
            catch
            {
                ;
            }
        }

        private void listapuertosCOM_SelectedIndexChanged(object sender, EventArgs e)
        {
            serialPort1.PortName = listapuertosCOM.SelectedItem.ToString();
        }

        private void listaBaudios_SelectedIndexChanged(object sender, EventArgs e)
        {
            serialPort1.BaudRate = Convert.ToInt32(listaBaudios.SelectedItem.ToString());
        }

        private void timer1_Tick(object sender, EventArgs e)
        {
            string datosRecibidos = serialPort1.ReadLine();
            richTextBox1.Text = richTextBox1.Text + datosRecibidos + "\n";
        }

        private void btn_borrarTexto_Click(object sender, EventArgs e)
        {
            richTextBox1.Text = "";
        }

        private void button1_Click(object sender, EventArgs e)
        {
            



            simpleSound.Play();
            //player.Play();

            //simpleSound.Stop();
            //player.Stop();
        }
        private void button2_Click(object sender, EventArgs e)
        {
            simpleSound.Stop();
        }

        private void RecibirDatosCom(object sender, SerialDataReceivedEventArgs e)
        {
            if (serialPort1.IsOpen)
            {
                try
                {
                    SerialInputData = serialPort1.ReadLine();
                    if (SerialInputData != String.Empty)
                    {

                        this.BeginInvoke(new SetTextCallback(SetText), new object[] { SerialInputData });
                    }
                }
                catch
                {

                }
            }


            /*dataint = serialPort1.ReadExisting();
            if (serialPort1.IsOpen)
            {
                dataint = serialPort1.ReadLine();
            }*/

            //label3.Text = Convert.ToString(dataint);
            //int datain = serialPort1.ReadChar();

            //MessageBox.Show(datain);
            /*if (datain.Contains("Hola"))
            {
                pictureBoxBoton.Image = Properties.Resources.btnRed_ON;
            }*/
        }

        private void SetText(string text)
        {
            //string numero = string.Empty;
            richTextBox1.Text = richTextBox1.Text + text + "\n";

            /* 
             int j = 0, index;
             string dato = string.Empty;System.Text.StringBuilder 
            sb = new System.Text.StringBuilder(text);
             if (Char.IsDigit(sb[j]) == true)
             {
                 bunifuCircleProgress1.Value = Convert.ToInt32(text);
             }*/

            /*if (text.Contains("#"))
            {
                Match m = Regex.Match(text, "(\\d+)");
                //string num = string.Empty;
                if (m.Success)
                {
                    numero = m.Value;
                    bunifuCircleProgress1.Value = Convert.ToInt32(numero);
                    bunifuRadialGauge1.Value = Convert.ToInt32(numero);
                }
            }
            if (text.Contains("d"))
            {
                Match m = Regex.Match(text, "(\\d+)");
                //string num = string.Empty;
                if (m.Success)
                {
                    numero = m.Value;
                    bunifuCircleProgress1.SubScriptText = "." + numero;
                }

            }*/
        }

        
    }
}
