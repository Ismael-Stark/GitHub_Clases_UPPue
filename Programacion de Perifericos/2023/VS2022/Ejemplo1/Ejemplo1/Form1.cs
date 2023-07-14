using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Linq.Expressions;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Ejemplo1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            label_muestraMensaje.Text = "saludos";
            //MessageBox.Show("Hola mundo: "+textBox_mensaje.Text);
            serialPort1.Open();
            /*try (serialPort1.Open()) {

            }catch{

            }*/
        }

        private void checkBox1_CheckedChanged(object sender, EventArgs e)
        {
            if (checkBox1.Checked)
            {
                label_muestraMensaje.Text = "";
            }
        }

        private void acercaDeToolStripMenuItem_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Este programa fue hehco para la clase de programacion de perifericos 2023","Acerca DE....", MessageBoxButtons.OKCancel, MessageBoxIcon.Exclamation);
        }

        private void button2_Click(object sender, EventArgs e)
        {
            if (serialPort1.IsOpen == true)
            {
                serialPort1.Write("t");
            }
            
        }

        private void button3_Click(object sender, EventArgs e)
        {
            if (serialPort1.IsOpen == true)
            {
                serialPort1.Write("y");
            }
            else
            {
                MessageBox.Show("wey primero abre el puerto");
            }
        }

        private void button4_Click(object sender, EventArgs e)
        {
            serialPort1.Close();
        }
    }
}
