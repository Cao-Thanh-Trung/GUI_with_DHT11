#pragma once
#include<math.h>
#include<thread>
#include "Plot1.h" 

namespace Project9 {


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO::Ports;
	using namespace System::Threading::Tasks;
	using namespace System::Threading;
	using namespace System::IO;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btoThong_tin;
	protected:

	private: System::IO::Ports::SerialPort^ serialPort1;
	private: System::Windows::Forms::TextBox^ txtDatareceive;
	private: System::Windows::Forms::ComboBox^ cboSerial_port;
	private: System::Windows::Forms::Button^ btnConnect;

	private: System::Windows::Forms::StatusStrip^ statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^ tStatus_lbl_connect;

	private: System::Windows::Forms::TextBox^ txtb_test;
	private: System::Windows::Forms::Button^ bto_stop;
	private: System::Windows::Forms::Button^ bto_Reset;
	private: System::Windows::Forms::GroupBox^ groupBox1;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ CBO_BAU;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ bto_disconnect;


	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txt_temp;
	private: System::Windows::Forms::TextBox^ txt_humi;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btn_Plot;


	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ newToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::TextBox^ txt_hienthi;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txt_path;














	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->btoThong_tin = (gcnew System::Windows::Forms::Button());
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->txtDatareceive = (gcnew System::Windows::Forms::TextBox());
			this->cboSerial_port = (gcnew System::Windows::Forms::ComboBox());
			this->btnConnect = (gcnew System::Windows::Forms::Button());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->tStatus_lbl_connect = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->txtb_test = (gcnew System::Windows::Forms::TextBox());
			this->bto_stop = (gcnew System::Windows::Forms::Button());
			this->bto_Reset = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->bto_disconnect = (gcnew System::Windows::Forms::Button());
			this->CBO_BAU = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->btn_Plot = (gcnew System::Windows::Forms::Button());
			this->txt_temp = (gcnew System::Windows::Forms::TextBox());
			this->txt_humi = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->txt_hienthi = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txt_path = (gcnew System::Windows::Forms::TextBox());
			this->statusStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btoThong_tin
			// 
			this->btoThong_tin->Enabled = false;
			this->btoThong_tin->Location = System::Drawing::Point(6, 105);
			this->btoThong_tin->Name = L"btoThong_tin";
			this->btoThong_tin->Size = System::Drawing::Size(75, 23);
			this->btoThong_tin->TabIndex = 0;
			this->btoThong_tin->Text = L"Imformation";
			this->btoThong_tin->UseVisualStyleBackColor = true;
			this->btoThong_tin->Click += gcnew System::EventHandler(this, &MyForm::btoThong_tin_Click);
			// 
			// serialPort1
			// 
			this->serialPort1->PortName = L"COM4";
			this->serialPort1->DataReceived += gcnew System::IO::Ports::SerialDataReceivedEventHandler(this, &MyForm::serialPort1_DataReceived);
			// 
			// txtDatareceive
			// 
			this->txtDatareceive->BackColor = System::Drawing::SystemColors::ControlDark;
			this->txtDatareceive->Location = System::Drawing::Point(10, 19);
			this->txtDatareceive->Multiline = true;
			this->txtDatareceive->Name = L"txtDatareceive";
			this->txtDatareceive->ReadOnly = true;
			this->txtDatareceive->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->txtDatareceive->Size = System::Drawing::Size(147, 76);
			this->txtDatareceive->TabIndex = 1;
			// 
			// cboSerial_port
			// 
			this->cboSerial_port->FormattingEnabled = true;
			this->cboSerial_port->Location = System::Drawing::Point(49, 20);
			this->cboSerial_port->Name = L"cboSerial_port";
			this->cboSerial_port->Size = System::Drawing::Size(121, 21);
			this->cboSerial_port->TabIndex = 2;
			// 
			// btnConnect
			// 
			this->btnConnect->Location = System::Drawing::Point(188, 19);
			this->btnConnect->Name = L"btnConnect";
			this->btnConnect->Size = System::Drawing::Size(75, 21);
			this->btnConnect->TabIndex = 3;
			this->btnConnect->Text = L"Connect";
			this->btnConnect->UseVisualStyleBackColor = true;
			this->btnConnect->Click += gcnew System::EventHandler(this, &MyForm::btnConnect_Click);
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->tStatus_lbl_connect });
			this->statusStrip1->Location = System::Drawing::Point(0, 430);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(460, 22);
			this->statusStrip1->TabIndex = 5;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// tStatus_lbl_connect
			// 
			this->tStatus_lbl_connect->Name = L"tStatus_lbl_connect";
			this->tStatus_lbl_connect->Size = System::Drawing::Size(66, 17);
			this->tStatus_lbl_connect->Text = L"Disconnect";
			// 
			// txtb_test
			// 
			this->txtb_test->Location = System::Drawing::Point(163, 19);
			this->txtb_test->Multiline = true;
			this->txtb_test->Name = L"txtb_test";
			this->txtb_test->ReadOnly = true;
			this->txtb_test->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->txtb_test->Size = System::Drawing::Size(100, 45);
			this->txtb_test->TabIndex = 7;
			// 
			// bto_stop
			// 
			this->bto_stop->Enabled = false;
			this->bto_stop->Location = System::Drawing::Point(95, 105);
			this->bto_stop->Name = L"bto_stop";
			this->bto_stop->Size = System::Drawing::Size(75, 23);
			this->bto_stop->TabIndex = 8;
			this->bto_stop->Text = L"Stoped";
			this->bto_stop->UseVisualStyleBackColor = true;
			this->bto_stop->Click += gcnew System::EventHandler(this, &MyForm::bto_stop_Click);
			// 
			// bto_Reset
			// 
			this->bto_Reset->Location = System::Drawing::Point(188, 105);
			this->bto_Reset->Name = L"bto_Reset";
			this->bto_Reset->Size = System::Drawing::Size(75, 23);
			this->bto_Reset->TabIndex = 9;
			this->bto_Reset->Text = L"Reset";
			this->bto_Reset->UseVisualStyleBackColor = true;
			this->bto_Reset->Click += gcnew System::EventHandler(this, &MyForm::bto_Reset_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->bto_disconnect);
			this->groupBox1->Controls->Add(this->CBO_BAU);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->btnConnect);
			this->groupBox1->Controls->Add(this->cboSerial_port);
			this->groupBox1->Location = System::Drawing::Point(12, 54);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(271, 100);
			this->groupBox1->TabIndex = 10;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Connect";
			// 
			// bto_disconnect
			// 
			this->bto_disconnect->Location = System::Drawing::Point(188, 58);
			this->bto_disconnect->Name = L"bto_disconnect";
			this->bto_disconnect->Size = System::Drawing::Size(75, 23);
			this->bto_disconnect->TabIndex = 7;
			this->bto_disconnect->Text = L"Disconnect";
			this->bto_disconnect->UseVisualStyleBackColor = true;
			this->bto_disconnect->Click += gcnew System::EventHandler(this, &MyForm::bto_disconnect_Click);
			// 
			// CBO_BAU
			// 
			this->CBO_BAU->FormattingEnabled = true;
			this->CBO_BAU->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"4800", L"9600", L"19200", L"38400", L"57600", L"115200" });
			this->CBO_BAU->Location = System::Drawing::Point(49, 60);
			this->CBO_BAU->Name = L"CBO_BAU";
			this->CBO_BAU->Size = System::Drawing::Size(121, 21);
			this->CBO_BAU->TabIndex = 6;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(6, 63);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(40, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"BAU: ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(6, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(42, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"COM: ";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->bto_Reset);
			this->groupBox2->Controls->Add(this->btoThong_tin);
			this->groupBox2->Controls->Add(this->bto_stop);
			this->groupBox2->Controls->Add(this->btn_Plot);
			this->groupBox2->Controls->Add(this->txt_temp);
			this->groupBox2->Controls->Add(this->txt_humi);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Location = System::Drawing::Point(12, 160);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(271, 144);
			this->groupBox2->TabIndex = 11;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Result";
			// 
			// btn_Plot
			// 
			this->btn_Plot->Location = System::Drawing::Point(188, 28);
			this->btn_Plot->Name = L"btn_Plot";
			this->btn_Plot->Size = System::Drawing::Size(75, 60);
			this->btn_Plot->TabIndex = 3;
			this->btn_Plot->Text = L"Plot";
			this->btn_Plot->UseVisualStyleBackColor = true;
			this->btn_Plot->Click += gcnew System::EventHandler(this, &MyForm::btn_Plot_Click);
			// 
			// txt_temp
			// 
			this->txt_temp->Location = System::Drawing::Point(49, 68);
			this->txt_temp->Name = L"txt_temp";
			this->txt_temp->ReadOnly = true;
			this->txt_temp->Size = System::Drawing::Size(121, 20);
			this->txt_temp->TabIndex = 2;
			this->txt_temp->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txt_humi
			// 
			this->txt_humi->Location = System::Drawing::Point(49, 28);
			this->txt_humi->Name = L"txt_humi";
			this->txt_humi->ReadOnly = true;
			this->txt_humi->Size = System::Drawing::Size(121, 20);
			this->txt_humi->TabIndex = 1;
			this->txt_humi->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(6, 31);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(39, 13);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Humi:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(4, 75);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(42, 13);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Temp:";
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::Color::Transparent;
			this->groupBox3->Controls->Add(this->button1);
			this->groupBox3->Controls->Add(this->txtDatareceive);
			this->groupBox3->Controls->Add(this->txtb_test);
			this->groupBox3->Location = System::Drawing::Point(12, 310);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(271, 115);
			this->groupBox3->TabIndex = 12;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Receive";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button1->Location = System::Drawing::Point(163, 72);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Clear";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->fileToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(460, 24);
			this->menuStrip1->TabIndex = 13;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->newToolStripMenuItem,
					this->saveToolStripMenuItem, this->saveToolStripMenuItem1
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// newToolStripMenuItem
			// 
			this->newToolStripMenuItem->Name = L"newToolStripMenuItem";
			this->newToolStripMenuItem->Size = System::Drawing::Size(115, 22);
			this->newToolStripMenuItem->Text = L"Open";
			this->newToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::openToolStripMenuItem_Click);
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(115, 22);
			this->saveToolStripMenuItem->Text = L"Save ";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::saveToolStripMenuItem_Click);
			// 
			// saveToolStripMenuItem1
			// 
			this->saveToolStripMenuItem1->Name = L"saveToolStripMenuItem1";
			this->saveToolStripMenuItem1->Size = System::Drawing::Size(115, 22);
			this->saveToolStripMenuItem1->Text = L" Save as";
			this->saveToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::save_asToolStripMenuItem_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// txt_hienthi
			// 
			this->txt_hienthi->Location = System::Drawing::Point(298, 54);
			this->txt_hienthi->Multiline = true;
			this->txt_hienthi->Name = L"txt_hienthi";
			this->txt_hienthi->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->txt_hienthi->Size = System::Drawing::Size(137, 365);
			this->txt_hienthi->TabIndex = 14;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(15, 27);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(37, 13);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Path:";
			// 
			// txt_path
			// 
			this->txt_path->Location = System::Drawing::Point(61, 24);
			this->txt_path->Name = L"txt_path";
			this->txt_path->Size = System::Drawing::Size(374, 20);
			this->txt_path->TabIndex = 16;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->ClientSize = System::Drawing::Size(460, 452);
			this->Controls->Add(this->txt_path);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txt_hienthi);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"DHT_11";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		array<String^>^ ports = SerialPort::GetPortNames();
		cboSerial_port->Items->Clear();
		cboSerial_port->Items->AddRange(ports);
		cboSerial_port->SelectedIndex= 0;
		CBO_BAU->SelectedIndex = 0;
		//serialPort1->Open();
		
	}	// load du lieu truoc khi connect
	private: System::Void MyForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		if(serialPort1->IsOpen)
			serialPort1->Close();
	}//ttawst form 
	private: System::Void btoThong_tin_Click(System::Object^ sender, System::EventArgs^ e) {
		
		bto_stop->Enabled = true;
		bto_disconnect->Enabled=false;
		bto_stop->Text = L"Stop";
		/*while (1)
		{*/
		serialPort1->Write("ON");
			/*if (bto_stop->Text == "Stoped")
			{
				break;
			}
		}*/

		
	}//khi ấn gửi dữ liệu và làm mờ nút stop
	private: System::Void serialPort1_DataReceived(System::Object^ sender, System::IO::Ports::SerialDataReceivedEventArgs^ e) {
				
		if (serialPort1->ReadTo("*"))//ddocj du lieu chuan 
		{
			while (1)
			{
				if (bto_stop->Text=="Stoped")
				{
					serialPort1->Write("OFF");
					break;
				}
				Thread::Sleep(1100);
				 String^ dataInput = serialPort1->ReadExisting();
				/*Thread::Sleep(2000);*/
				if (dataInput != String::Empty)
				{
					Double^ data_humi_int = Convert::ToDouble(dataInput->Substring(4, 4));
					Double^ data_temp_int = Convert::ToDouble(dataInput->Substring(0, 4));
					String^ data_humi = Convert::ToString(*data_humi_int / (10 * 10));
					String^ data_temp = Convert::ToString(*data_temp_int / (10 * 10));
					if (dataInput != String::Empty)
					{
						this->Invoke(gcnew SetTextDelegate(this, &MyForm::SetText_test), gcnew array<Object^>{dataInput});
						this->Invoke(gcnew SetTextDelegate(this, &MyForm::SetText), gcnew array<Object^>{dataInput});
						this->Invoke(gcnew SetTextDelegate(this, &MyForm::SetText_humi), gcnew array<Object^>{data_humi});
						this->Invoke(gcnew SetTextDelegate(this, &MyForm::SetText_temp), gcnew array<Object^>{data_temp});
					}
					truyen(dataInput);
					
				}

				serialPort1->Write("ON");
				//Thread::Sleep(1000);*/
				
			}

		}
	}//đọc và gửi dữ liệu lên chỗ cần gửi
		   delegate void truyendata(String^ text);
		   event truyendata^ truyen;
		   
		   delegate void SetTextDelegate(String^ text);
		   void SetText(String^ text)
		   {
			  txtDatareceive->Text += text+"\n";
		   }// gửi dữ llieeuj lên txtdatareceive
		   void SetText_test(String^ text)
		   {
			   txtb_test->Clear();
			   txtb_test->Text += text;
		   }// gửi dữ liệu lên txt_tét

		   void SetText_humi(String^ text)
		   {
			   txt_humi->Clear();
			   txt_humi->Text += text+"%";
		   }// gửi dữ liệu lên txt-humi

		   void SetText_temp(String^ text)
		   {
			   txt_temp->Clear();
			   txt_temp->Text += text + "_*C";
		   }//gửi dữ liệu lên txt_temp
	
	private: System::Void btnConnect_Click(System::Object^ sender, System::EventArgs^ e) {
	
		serialPort1->PortName = cboSerial_port->Text;
		serialPort1->BaudRate =Convert::ToInt32(CBO_BAU->Text);
		serialPort1->Open();
		btnConnect->Enabled = false;
		cboSerial_port->Enabled = false;
		CBO_BAU->Enabled = false;
		tStatus_lbl_connect->Text = L"Connect";
		btoThong_tin->Enabled = true;
		
	}// hàm cài đặt khi connect

private: System::Void bto_stop_Click(System::Object^ sender, System::EventArgs^ e) {
	serialPort1->Write("1");
	bto_stop->Text = L"Stoped";
	bto_stop->Enabled = false;
	Thread::Sleep(1000);
	bto_disconnect->Enabled = true;
}// khi nút stop đc click sẽ gửi dữ liệu và làm mờ 
private: System::Void bto_Reset_Click(System::Object^ sender, System::EventArgs^ e) {
	txt_temp->Clear();
	txt_humi->Clear();
	txtb_test->Clear();
}// hàm clear các khung hiển thị

private: System::Void bto_disconnect_Click(System::Object^ sender, System::EventArgs^ e) {
	serialPort1->Write("OFF");// gửi dữ liệu
	serialPort1->Close();// đóng cổng pỏt
	btnConnect->Enabled = true;//hiện nút
	tStatus_lbl_connect->Text = L"Disconnect";// đổi tên
	bto_stop->Enabled = false;// làm mờ
	bto_stop->Text = L"Stoped";// đổi tên
	cboSerial_port->Enabled = true;
	CBO_BAU->Enabled = true;
	btoThong_tin->Enabled = false;
}//
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	txtDatareceive->Clear();
}

private: System::Void btn_Plot_Click(System::Object^ sender, System::EventArgs^ e) {
	Plot^ plot = gcnew Plot();
	
	this->truyen += gcnew truyendata(plot, &Plot::SetText_delegate);
	//plot->Invoke(gcnew truyendata(plot, &Plot::SetText), gcnew array<Object^>{"abc"});
	Windows::Forms::DialogResult plot_select = plot->ShowDialog();
}
	   OpenFileDialog^ open;
private: System::Void openToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	open=gcnew OpenFileDialog();
	open->Filter = "|*.txt";
	if (open->ShowDialog() == Windows::Forms::DialogResult::OK)
	{
		txt_path->Text = open->FileName;
		StreamReader^ read = gcnew StreamReader(open->FileName);
		txt_hienthi->Text = read->ReadToEnd();
		read->Close();
	}
}
private: System::Void saveToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	StreamWriter^ write = gcnew StreamWriter(open->FileName->Trim());
	write->WriteLine(txtDatareceive->Text);
	write->Close();
	StreamReader^ read = gcnew StreamReader(open->FileName);
	txt_hienthi->Text = read->ReadToEnd();
	read->Close();

}
private: System::Void save_asToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	SaveFileDialog^ save = gcnew SaveFileDialog();

	save->Filter = "|*.txt";
	save->RestoreDirectory = true;
	if (save->ShowDialog() == Windows::Forms::DialogResult::OK)
	{
		StreamWriter^ write = gcnew StreamWriter(save->FileName);
		write->WriteLine(txtDatareceive->Text);
		write->Close();

	}
}
};
}
