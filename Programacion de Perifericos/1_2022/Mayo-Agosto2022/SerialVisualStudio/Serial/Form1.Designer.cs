namespace Serial
{
    partial class Form1
    {
        /// <summary>
        /// Variable del diseñador necesaria.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Limpiar los recursos que se estén usando.
        /// </summary>
        /// <param name="disposing">true si los recursos administrados se deben desechar; false en caso contrario.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Código generado por el Diseñador de Windows Forms

        /// <summary>
        /// Método necesario para admitir el Diseñador. No se puede modificar
        /// el contenido de este método con el editor de código.
        /// </summary>
        private void InitializeComponent()
        {
            this.components = new System.ComponentModel.Container();
            this.btn_conectar = new System.Windows.Forms.Button();
            this.label1 = new System.Windows.Forms.Label();
            this.btn_desconectar = new System.Windows.Forms.Button();
            this.btn_recarga = new System.Windows.Forms.Button();
            this.btn_encender = new System.Windows.Forms.Button();
            this.listapuertosCOM = new System.Windows.Forms.ComboBox();
            this.btn_apagar = new System.Windows.Forms.Button();
            this.serialPort1 = new System.IO.Ports.SerialPort(this.components);
            this.listaBaudios = new System.Windows.Forms.ComboBox();
            this.richTextBox1 = new System.Windows.Forms.RichTextBox();
            this.timer1 = new System.Windows.Forms.Timer(this.components);
            this.btn_borrarTexto = new System.Windows.Forms.Button();
            this.button1 = new System.Windows.Forms.Button();
            this.button2 = new System.Windows.Forms.Button();
            this.trackBar1 = new System.Windows.Forms.TrackBar();
            ((System.ComponentModel.ISupportInitialize)(this.trackBar1)).BeginInit();
            this.SuspendLayout();
            // 
            // btn_conectar
            // 
            this.btn_conectar.Location = new System.Drawing.Point(25, 86);
            this.btn_conectar.Name = "btn_conectar";
            this.btn_conectar.Size = new System.Drawing.Size(75, 23);
            this.btn_conectar.TabIndex = 0;
            this.btn_conectar.Text = "Conectar";
            this.btn_conectar.UseVisualStyleBackColor = true;
            this.btn_conectar.Click += new System.EventHandler(this.btn_conectar_Click);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(12, 9);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(35, 13);
            this.label1.TabIndex = 1;
            this.label1.Text = "label1";
            // 
            // btn_desconectar
            // 
            this.btn_desconectar.Location = new System.Drawing.Point(124, 86);
            this.btn_desconectar.Name = "btn_desconectar";
            this.btn_desconectar.Size = new System.Drawing.Size(75, 23);
            this.btn_desconectar.TabIndex = 2;
            this.btn_desconectar.Text = "desconectar";
            this.btn_desconectar.UseVisualStyleBackColor = true;
            this.btn_desconectar.Click += new System.EventHandler(this.btn_desconectar_Click);
            // 
            // btn_recarga
            // 
            this.btn_recarga.Location = new System.Drawing.Point(124, 44);
            this.btn_recarga.Name = "btn_recarga";
            this.btn_recarga.Size = new System.Drawing.Size(75, 23);
            this.btn_recarga.TabIndex = 3;
            this.btn_recarga.Text = "recarga";
            this.btn_recarga.UseVisualStyleBackColor = true;
            this.btn_recarga.Click += new System.EventHandler(this.btn_recarga_Click);
            // 
            // btn_encender
            // 
            this.btn_encender.Location = new System.Drawing.Point(335, 42);
            this.btn_encender.Name = "btn_encender";
            this.btn_encender.Size = new System.Drawing.Size(75, 23);
            this.btn_encender.TabIndex = 4;
            this.btn_encender.Text = "encender";
            this.btn_encender.UseVisualStyleBackColor = true;
            this.btn_encender.Click += new System.EventHandler(this.btn_encender_Click);
            // 
            // listapuertosCOM
            // 
            this.listapuertosCOM.FormattingEnabled = true;
            this.listapuertosCOM.Location = new System.Drawing.Point(12, 44);
            this.listapuertosCOM.Name = "listapuertosCOM";
            this.listapuertosCOM.Size = new System.Drawing.Size(106, 21);
            this.listapuertosCOM.TabIndex = 6;
            this.listapuertosCOM.SelectedIndexChanged += new System.EventHandler(this.listapuertosCOM_SelectedIndexChanged);
            // 
            // btn_apagar
            // 
            this.btn_apagar.Location = new System.Drawing.Point(335, 79);
            this.btn_apagar.Name = "btn_apagar";
            this.btn_apagar.Size = new System.Drawing.Size(75, 23);
            this.btn_apagar.TabIndex = 7;
            this.btn_apagar.Text = "apagar";
            this.btn_apagar.UseVisualStyleBackColor = true;
            this.btn_apagar.Click += new System.EventHandler(this.btn_apagar_Click);
            // 
            // listaBaudios
            // 
            this.listaBaudios.FormattingEnabled = true;
            this.listaBaudios.Location = new System.Drawing.Point(205, 44);
            this.listaBaudios.Name = "listaBaudios";
            this.listaBaudios.Size = new System.Drawing.Size(106, 21);
            this.listaBaudios.TabIndex = 8;
            this.listaBaudios.SelectedIndexChanged += new System.EventHandler(this.listaBaudios_SelectedIndexChanged);
            // 
            // richTextBox1
            // 
            this.richTextBox1.Font = new System.Drawing.Font("Cascadia Code SemiBold", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.richTextBox1.Location = new System.Drawing.Point(12, 137);
            this.richTextBox1.Name = "richTextBox1";
            this.richTextBox1.Size = new System.Drawing.Size(588, 270);
            this.richTextBox1.TabIndex = 9;
            this.richTextBox1.Text = "";
            this.richTextBox1.TextChanged += new System.EventHandler(this.richTextBox1_TextChanged);
            // 
            // timer1
            // 
            this.timer1.Interval = 500;
            this.timer1.Tick += new System.EventHandler(this.timer1_Tick);
            // 
            // btn_borrarTexto
            // 
            this.btn_borrarTexto.Location = new System.Drawing.Point(25, 417);
            this.btn_borrarTexto.Name = "btn_borrarTexto";
            this.btn_borrarTexto.Size = new System.Drawing.Size(70, 42);
            this.btn_borrarTexto.TabIndex = 10;
            this.btn_borrarTexto.Text = "Borrar Texto";
            this.btn_borrarTexto.UseVisualStyleBackColor = true;
            this.btn_borrarTexto.Click += new System.EventHandler(this.btn_borrarTexto_Click);
            // 
            // button1
            // 
            this.button1.Location = new System.Drawing.Point(263, 419);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(112, 35);
            this.button1.TabIndex = 11;
            this.button1.Text = "button1";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.button1_Click);
            // 
            // button2
            // 
            this.button2.Location = new System.Drawing.Point(124, 417);
            this.button2.Name = "button2";
            this.button2.Size = new System.Drawing.Size(118, 38);
            this.button2.TabIndex = 12;
            this.button2.Text = "button2";
            this.button2.UseVisualStyleBackColor = true;
            this.button2.Click += new System.EventHandler(this.button2_Click);
            // 
            // trackBar1
            // 
            this.trackBar1.Location = new System.Drawing.Point(397, 419);
            this.trackBar1.Name = "trackBar1";
            this.trackBar1.Size = new System.Drawing.Size(262, 45);
            this.trackBar1.TabIndex = 13;
            this.trackBar1.Scroll += new System.EventHandler(this.trackBar1_Scroll);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(839, 471);
            this.Controls.Add(this.trackBar1);
            this.Controls.Add(this.button2);
            this.Controls.Add(this.button1);
            this.Controls.Add(this.btn_borrarTexto);
            this.Controls.Add(this.richTextBox1);
            this.Controls.Add(this.listaBaudios);
            this.Controls.Add(this.btn_apagar);
            this.Controls.Add(this.listapuertosCOM);
            this.Controls.Add(this.btn_encender);
            this.Controls.Add(this.btn_recarga);
            this.Controls.Add(this.btn_desconectar);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.btn_conectar);
            this.Name = "Form1";
            this.Text = "Form1";
            this.Load += new System.EventHandler(this.Form1_Load);
            ((System.ComponentModel.ISupportInitialize)(this.trackBar1)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button btn_conectar;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Button btn_desconectar;
        private System.Windows.Forms.Button btn_recarga;
        private System.Windows.Forms.Button btn_encender;
        private System.Windows.Forms.ComboBox listapuertosCOM;
        private System.Windows.Forms.Button btn_apagar;
        private System.IO.Ports.SerialPort serialPort1;
        private System.Windows.Forms.ComboBox listaBaudios;
        private System.Windows.Forms.RichTextBox richTextBox1;
        private System.Windows.Forms.Timer timer1;
        private System.Windows.Forms.Button btn_borrarTexto;
        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.Button button2;
        private System.Windows.Forms.TrackBar trackBar1;
    }
}

