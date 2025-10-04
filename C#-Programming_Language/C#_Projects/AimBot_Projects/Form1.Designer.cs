namespace AimBotBase
{
    partial class Form1
    {
        /// <summary>
        ///  Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        ///  Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        ///  Required method for Designer support - do not modify
        ///  the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            components = new System.ComponentModel.Container();
            Guna.UI2.WinForms.Suite.CustomizableEdges customizableEdges5 = new Guna.UI2.WinForms.Suite.CustomizableEdges();
            Guna.UI2.WinForms.Suite.CustomizableEdges customizableEdges6 = new Guna.UI2.WinForms.Suite.CustomizableEdges();
            Guna.UI2.WinForms.Suite.CustomizableEdges customizableEdges3 = new Guna.UI2.WinForms.Suite.CustomizableEdges();
            Guna.UI2.WinForms.Suite.CustomizableEdges customizableEdges4 = new Guna.UI2.WinForms.Suite.CustomizableEdges();
            Guna.UI2.WinForms.Suite.CustomizableEdges customizableEdges1 = new Guna.UI2.WinForms.Suite.CustomizableEdges();
            Guna.UI2.WinForms.Suite.CustomizableEdges customizableEdges2 = new Guna.UI2.WinForms.Suite.CustomizableEdges();
            guna2BorderlessForm1 = new Guna.UI2.WinForms.Guna2BorderlessForm(components);
            label1 = new Label();
            guna2ControlBox1 = new Guna.UI2.WinForms.Guna2ControlBox();
            guna2ControlBox2 = new Guna.UI2.WinForms.Guna2ControlBox();
            guna2ToggleSwitch1 = new Guna.UI2.WinForms.Guna2ToggleSwitch();
            label2 = new Label();
            label3 = new Label();
            Sta = new Label();
            SuspendLayout();
            // 
            // guna2BorderlessForm1
            // 
            guna2BorderlessForm1.ContainerControl = this;
            guna2BorderlessForm1.DockIndicatorTransparencyValue = 0.6D;
            guna2BorderlessForm1.TransparentWhileDrag = true;
            // 
            // label1
            // 
            label1.AutoSize = true;
            label1.Font = new Font("Viner Hand ITC", 20F, FontStyle.Regular, GraphicsUnit.Point, 0);
            label1.ForeColor = Color.Cyan;
            label1.Location = new Point(26, 69);
            label1.Name = "label1";
            label1.Size = new Size(279, 65);
            label1.TabIndex = 0;
            label1.Text = "AimBotClone";
            label1.Click += label1_Click;
            // 
            // guna2ControlBox1
            // 
            guna2ControlBox1.Anchor = AnchorStyles.Top | AnchorStyles.Right;
            guna2ControlBox1.BackColor = Color.IndianRed;
            guna2ControlBox1.CustomizableEdges = customizableEdges5;
            guna2ControlBox1.FillColor = Color.Red;
            guna2ControlBox1.ForeColor = Color.Red;
            guna2ControlBox1.IconColor = Color.Cyan;
            guna2ControlBox1.Location = new Point(275, 12);
            guna2ControlBox1.Name = "guna2ControlBox1";
            guna2ControlBox1.ShadowDecoration.CustomizableEdges = customizableEdges6;
            guna2ControlBox1.Size = new Size(44, 44);
            guna2ControlBox1.TabIndex = 1;
            // 
            // guna2ControlBox2
            // 
            guna2ControlBox2.Anchor = AnchorStyles.Top | AnchorStyles.Right;
            guna2ControlBox2.BackColor = Color.IndianRed;
            guna2ControlBox2.ControlBoxType = Guna.UI2.WinForms.Enums.ControlBoxType.MinimizeBox;
            guna2ControlBox2.CustomizableEdges = customizableEdges3;
            guna2ControlBox2.FillColor = Color.Yellow;
            guna2ControlBox2.ForeColor = Color.Yellow;
            guna2ControlBox2.IconColor = Color.Navy;
            guna2ControlBox2.Location = new Point(225, 12);
            guna2ControlBox2.Name = "guna2ControlBox2";
            guna2ControlBox2.ShadowDecoration.CustomizableEdges = customizableEdges4;
            guna2ControlBox2.Size = new Size(44, 44);
            guna2ControlBox2.TabIndex = 2;
            // 
            // guna2ToggleSwitch1
            // 
            guna2ToggleSwitch1.CheckedState.BorderColor = Color.FromArgb(94, 148, 255);
            guna2ToggleSwitch1.CheckedState.FillColor = Color.FromArgb(94, 148, 255);
            guna2ToggleSwitch1.CheckedState.InnerBorderColor = Color.White;
            guna2ToggleSwitch1.CheckedState.InnerColor = Color.White;
            guna2ToggleSwitch1.CustomizableEdges = customizableEdges1;
            guna2ToggleSwitch1.Location = new Point(188, 163);
            guna2ToggleSwitch1.Name = "guna2ToggleSwitch1";
            guna2ToggleSwitch1.ShadowDecoration.CustomizableEdges = customizableEdges2;
            guna2ToggleSwitch1.Size = new Size(81, 42);
            guna2ToggleSwitch1.TabIndex = 3;
            guna2ToggleSwitch1.UncheckedState.BorderColor = Color.FromArgb(125, 137, 149);
            guna2ToggleSwitch1.UncheckedState.FillColor = Color.FromArgb(125, 137, 149);
            guna2ToggleSwitch1.UncheckedState.InnerBorderColor = Color.White;
            guna2ToggleSwitch1.UncheckedState.InnerColor = Color.White;
            guna2ToggleSwitch1.CheckedChanged += guna2ToggleSwitch1_CheckedChanged;
            // 
            // label2
            // 
            label2.AutoSize = true;
            label2.Font = new Font("Stencil", 16F, FontStyle.Regular, GraphicsUnit.Point, 0);
            label2.ForeColor = Color.Cyan;
            label2.Location = new Point(26, 167);
            label2.Name = "label2";
            label2.Size = new Size(153, 38);
            label2.TabIndex = 4;
            label2.Text = "AimBot :";
            // 
            // label3
            // 
            label3.AutoSize = true;
            label3.Font = new Font("Monotype Corsiva", 10F, FontStyle.Bold | FontStyle.Italic, GraphicsUnit.Point, 0);
            label3.ForeColor = Color.Cyan;
            label3.Location = new Point(26, 403);
            label3.Name = "label3";
            label3.Size = new Size(71, 24);
            label3.TabIndex = 5;
            label3.Text = "Status :";
            // 
            // Sta
            // 
            Sta.AutoSize = true;
            Sta.Font = new Font("Microsoft Sans Serif", 10F, FontStyle.Italic, GraphicsUnit.Point, 0);
            Sta.ForeColor = Color.Cyan;
            Sta.Location = new Point(108, 403);
            Sta.Name = "Sta";
            Sta.Size = new Size(46, 25);
            Sta.TabIndex = 6;
            Sta.Text = "N/A";
            Sta.Click += label4_Click;
            // 
            // Form1
            // 
            AutoScaleDimensions = new SizeF(10F, 25F);
            AutoScaleMode = AutoScaleMode.Font;
            BackColor = Color.Black;
            ClientSize = new Size(331, 450);
            Controls.Add(Sta);
            Controls.Add(label3);
            Controls.Add(label2);
            Controls.Add(guna2ToggleSwitch1);
            Controls.Add(guna2ControlBox2);
            Controls.Add(guna2ControlBox1);
            Controls.Add(label1);
            ForeColor = SystemColors.ControlLightLight;
            FormBorderStyle = FormBorderStyle.None;
            Name = "Form1";
            Text = "Form1";
            Load += Form1_Load_1;
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private Guna.UI2.WinForms.Guna2BorderlessForm guna2BorderlessForm1;
        private Label label1;
        private Guna.UI2.WinForms.Guna2ControlBox guna2ControlBox1;
        private Label label2;
        private Guna.UI2.WinForms.Guna2ToggleSwitch guna2ToggleSwitch1;
        private Guna.UI2.WinForms.Guna2ControlBox guna2ControlBox2;
        private Label Sta;
        private Label label3;
    }
}
