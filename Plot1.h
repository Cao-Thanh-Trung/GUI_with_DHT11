#pragma once

namespace Project9 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for Plot
	/// </summary>
	public ref class Plot : public System::Windows::Forms::Form
	{
	public:
		Plot(void)
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
		~Plot()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ gbx_selecsion_plot;
	private: System::Windows::Forms::RadioButton^ rabt_ca2;
	private: System::Windows::Forms::RadioButton^ rabt_Humi;
	private: System::Windows::Forms::RadioButton^ rabt_Tempeture;
	private: System::Windows::Forms::Button^ btn_plot_real_time;


	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Button^ btn_plot_file;
	private: System::Windows::Forms::CheckBox^ ckb_plot_real_time;
	private: System::Windows::Forms::CheckBox^ ckb_plot_file;
	private: System::Windows::Forms::Button^ btn_stop_plot;
	private: System::Windows::Forms::TextBox^ txtb_recein;



	private: System::Windows::Forms::Button^ btn_Reset;
	private: System::Windows::Forms::Button^ btn_connect;
	private: System::Windows::Forms::StatusStrip^ statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^ tss_connect;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ plot_data;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem;
	private: System::Windows::Forms::TextBox^ txt_path;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txt_hien_thi;
	private: System::Windows::Forms::Label^ lb_test;
	private: System::Windows::Forms::Label^ lb_test2;





	private: System::ComponentModel::IContainer^ components;
	protected:

	protected:

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->gbx_selecsion_plot = (gcnew System::Windows::Forms::GroupBox());
			this->ckb_plot_real_time = (gcnew System::Windows::Forms::CheckBox());
			this->ckb_plot_file = (gcnew System::Windows::Forms::CheckBox());
			this->rabt_ca2 = (gcnew System::Windows::Forms::RadioButton());
			this->rabt_Humi = (gcnew System::Windows::Forms::RadioButton());
			this->rabt_Tempeture = (gcnew System::Windows::Forms::RadioButton());
			this->btn_plot_real_time = (gcnew System::Windows::Forms::Button());
			this->plot_data = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->btn_plot_file = (gcnew System::Windows::Forms::Button());
			this->btn_stop_plot = (gcnew System::Windows::Forms::Button());
			this->txtb_recein = (gcnew System::Windows::Forms::TextBox());
			this->btn_Reset = (gcnew System::Windows::Forms::Button());
			this->btn_connect = (gcnew System::Windows::Forms::Button());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->tss_connect = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->txt_path = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt_hien_thi = (gcnew System::Windows::Forms::TextBox());
			this->lb_test = (gcnew System::Windows::Forms::Label());
			this->lb_test2 = (gcnew System::Windows::Forms::Label());
			this->gbx_selecsion_plot->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->plot_data))->BeginInit();
			this->statusStrip1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// gbx_selecsion_plot
			// 
			this->gbx_selecsion_plot->Controls->Add(this->ckb_plot_real_time);
			this->gbx_selecsion_plot->Controls->Add(this->ckb_plot_file);
			this->gbx_selecsion_plot->Controls->Add(this->rabt_ca2);
			this->gbx_selecsion_plot->Controls->Add(this->rabt_Humi);
			this->gbx_selecsion_plot->Controls->Add(this->rabt_Tempeture);
			this->gbx_selecsion_plot->Location = System::Drawing::Point(30, 48);
			this->gbx_selecsion_plot->Name = L"gbx_selecsion_plot";
			this->gbx_selecsion_plot->Size = System::Drawing::Size(254, 88);
			this->gbx_selecsion_plot->TabIndex = 0;
			this->gbx_selecsion_plot->TabStop = false;
			this->gbx_selecsion_plot->Text = L"Selection";
			// 
			// ckb_plot_real_time
			// 
			this->ckb_plot_real_time->AutoSize = true;
			this->ckb_plot_real_time->Location = System::Drawing::Point(6, 20);
			this->ckb_plot_real_time->Name = L"ckb_plot_real_time";
			this->ckb_plot_real_time->Size = System::Drawing::Size(86, 17);
			this->ckb_plot_real_time->TabIndex = 5;
			this->ckb_plot_real_time->Text = L"Plot real time";
			this->ckb_plot_real_time->UseVisualStyleBackColor = true;
			this->ckb_plot_real_time->CheckedChanged += gcnew System::EventHandler(this, &Plot::ckb_plot_real_time_CheckedChanged);
			// 
			// ckb_plot_file
			// 
			this->ckb_plot_file->AutoSize = true;
			this->ckb_plot_file->Location = System::Drawing::Point(132, 20);
			this->ckb_plot_file->Name = L"ckb_plot_file";
			this->ckb_plot_file->Size = System::Drawing::Size(60, 17);
			this->ckb_plot_file->TabIndex = 4;
			this->ckb_plot_file->Text = L"Plot file";
			this->ckb_plot_file->UseVisualStyleBackColor = true;
			this->ckb_plot_file->CheckedChanged += gcnew System::EventHandler(this, &Plot::ckb_plot_file_CheckedChanged);
			// 
			// rabt_ca2
			// 
			this->rabt_ca2->AutoSize = true;
			this->rabt_ca2->Location = System::Drawing::Point(191, 55);
			this->rabt_ca2->Name = L"rabt_ca2";
			this->rabt_ca2->Size = System::Drawing::Size(36, 17);
			this->rabt_ca2->TabIndex = 2;
			this->rabt_ca2->TabStop = true;
			this->rabt_ca2->Text = L"All";
			this->rabt_ca2->UseVisualStyleBackColor = true;
			// 
			// rabt_Humi
			// 
			this->rabt_Humi->AutoSize = true;
			this->rabt_Humi->Location = System::Drawing::Point(103, 55);
			this->rabt_Humi->Name = L"rabt_Humi";
			this->rabt_Humi->Size = System::Drawing::Size(65, 17);
			this->rabt_Humi->TabIndex = 1;
			this->rabt_Humi->TabStop = true;
			this->rabt_Humi->Text = L"Humidity";
			this->rabt_Humi->UseVisualStyleBackColor = true;
			// 
			// rabt_Tempeture
			// 
			this->rabt_Tempeture->AutoSize = true;
			this->rabt_Tempeture->Location = System::Drawing::Point(6, 55);
			this->rabt_Tempeture->Name = L"rabt_Tempeture";
			this->rabt_Tempeture->Size = System::Drawing::Size(79, 17);
			this->rabt_Tempeture->TabIndex = 0;
			this->rabt_Tempeture->TabStop = true;
			this->rabt_Tempeture->Text = L"Temprature";
			this->rabt_Tempeture->UseVisualStyleBackColor = true;
			// 
			// btn_plot_real_time
			// 
			this->btn_plot_real_time->Enabled = false;
			this->btn_plot_real_time->Location = System::Drawing::Point(300, 113);
			this->btn_plot_real_time->Name = L"btn_plot_real_time";
			this->btn_plot_real_time->Size = System::Drawing::Size(108, 23);
			this->btn_plot_real_time->TabIndex = 1;
			this->btn_plot_real_time->Text = L"Plot Real Time";
			this->btn_plot_real_time->UseVisualStyleBackColor = true;
			this->btn_plot_real_time->Click += gcnew System::EventHandler(this, &Plot::btn_plot_real_time_Click);
			// 
			// plot_data
			// 
			this->plot_data->BackColor = System::Drawing::Color::Gray;
			this->plot_data->BackSecondaryColor = System::Drawing::Color::White;
			this->plot_data->BorderlineColor = System::Drawing::Color::Coral;
			this->plot_data->BorderlineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Solid;
			this->plot_data->BorderSkin->BackColor = System::Drawing::Color::White;
			this->plot_data->BorderSkin->BorderColor = System::Drawing::Color::Maroon;
			this->plot_data->BorderSkin->PageColor = System::Drawing::Color::Maroon;
			chartArea1->Name = L"ChartArea1";
			this->plot_data->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->plot_data->Legends->Add(legend1);
			this->plot_data->Location = System::Drawing::Point(30, 139);
			this->plot_data->Name = L"plot_data";
			this->plot_data->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Bright;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Color = System::Drawing::Color::Red;
			series1->CustomProperties = L"IsXAxisQuantitative=False";
			series1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			series1->LabelBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			series1->LabelBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			series1->LabelForeColor = System::Drawing::Color::DarkRed;
			series1->Legend = L"Legend1";
			series1->MarkerBorderColor = System::Drawing::Color::Yellow;
			series1->MarkerColor = System::Drawing::Color::Yellow;
			series1->Name = L"Temprature";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series2->Color = System::Drawing::Color::Lime;
			series2->Legend = L"Legend1";
			series2->Name = L"Humidity";
			this->plot_data->Series->Add(series1);
			this->plot_data->Series->Add(series2);
			this->plot_data->Size = System::Drawing::Size(378, 300);
			this->plot_data->TabIndex = 2;
			this->plot_data->Text = L"chart_plot_data";
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &Plot::timer1_Tick);
			// 
			// btn_plot_file
			// 
			this->btn_plot_file->Enabled = false;
			this->btn_plot_file->Location = System::Drawing::Point(300, 84);
			this->btn_plot_file->Name = L"btn_plot_file";
			this->btn_plot_file->Size = System::Drawing::Size(108, 23);
			this->btn_plot_file->TabIndex = 3;
			this->btn_plot_file->Text = L"Plot File";
			this->btn_plot_file->UseVisualStyleBackColor = true;
			this->btn_plot_file->Click += gcnew System::EventHandler(this, &Plot::btn_plot_file_Click);
			// 
			// btn_stop_plot
			// 
			this->btn_stop_plot->Location = System::Drawing::Point(333, 393);
			this->btn_stop_plot->Name = L"btn_stop_plot";
			this->btn_stop_plot->Size = System::Drawing::Size(75, 23);
			this->btn_stop_plot->TabIndex = 4;
			this->btn_stop_plot->Text = L"Stop";
			this->btn_stop_plot->UseVisualStyleBackColor = true;
			this->btn_stop_plot->Click += gcnew System::EventHandler(this, &Plot::button1_Click);
			// 
			// txtb_recein
			// 
			this->txtb_recein->Location = System::Drawing::Point(288, 196);
			this->txtb_recein->Multiline = true;
			this->txtb_recein->Name = L"txtb_recein";
			this->txtb_recein->ReadOnly = true;
			this->txtb_recein->Size = System::Drawing::Size(110, 32);
			this->txtb_recein->TabIndex = 5;
			// 
			// btn_Reset
			// 
			this->btn_Reset->Location = System::Drawing::Point(332, 364);
			this->btn_Reset->Name = L"btn_Reset";
			this->btn_Reset->Size = System::Drawing::Size(75, 23);
			this->btn_Reset->TabIndex = 9;
			this->btn_Reset->Text = L"Reset";
			this->btn_Reset->UseVisualStyleBackColor = true;
			this->btn_Reset->Click += gcnew System::EventHandler(this, &Plot::btn_Reset_Click);
			// 
			// btn_connect
			// 
			this->btn_connect->Location = System::Drawing::Point(299, 55);
			this->btn_connect->Name = L"btn_connect";
			this->btn_connect->Size = System::Drawing::Size(108, 23);
			this->btn_connect->TabIndex = 10;
			this->btn_connect->Text = L"Connect";
			this->btn_connect->UseVisualStyleBackColor = true;
			this->btn_connect->Click += gcnew System::EventHandler(this, &Plot::btn_connect_Click);
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->tss_connect });
			this->statusStrip1->Location = System::Drawing::Point(0, 442);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(725, 22);
			this->statusStrip1->TabIndex = 11;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// tss_connect
			// 
			this->tss_connect->Name = L"tss_connect";
			this->tss_connect->Size = System::Drawing::Size(79, 17);
			this->tss_connect->Text = L"Disconnected";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->fileToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(725, 24);
			this->menuStrip1->TabIndex = 12;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->openToolStripMenuItem });
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(103, 22);
			this->openToolStripMenuItem->Text = L"Open";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &Plot::openToolStripMenuItem_Click);
			// 
			// txt_path
			// 
			this->txt_path->Location = System::Drawing::Point(70, 22);
			this->txt_path->Name = L"txt_path";
			this->txt_path->Size = System::Drawing::Size(337, 20);
			this->txt_path->TabIndex = 13;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(27, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(37, 13);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Path:";
			// 
			// txt_hien_thi
			// 
			this->txt_hien_thi->Location = System::Drawing::Point(427, 27);
			this->txt_hien_thi->Multiline = true;
			this->txt_hien_thi->Name = L"txt_hien_thi";
			this->txt_hien_thi->Size = System::Drawing::Size(186, 412);
			this->txt_hien_thi->TabIndex = 15;
			// 
			// lb_test
			// 
			this->lb_test->AutoSize = true;
			this->lb_test->Location = System::Drawing::Point(653, 118);
			this->lb_test->Name = L"lb_test";
			this->lb_test->Size = System::Drawing::Size(35, 13);
			this->lb_test->TabIndex = 16;
			this->lb_test->Text = L"label2";
			// 
			// lb_test2
			// 
			this->lb_test2->AutoSize = true;
			this->lb_test2->Location = System::Drawing::Point(656, 179);
			this->lb_test2->Name = L"lb_test2";
			this->lb_test2->Size = System::Drawing::Size(35, 13);
			this->lb_test2->TabIndex = 17;
			this->lb_test2->Text = L"label2";
			// 
			// Plot
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(725, 464);
			this->Controls->Add(this->lb_test2);
			this->Controls->Add(this->lb_test);
			this->Controls->Add(this->txt_hien_thi);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_path);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->btn_connect);
			this->Controls->Add(this->btn_Reset);
			this->Controls->Add(this->txtb_recein);
			this->Controls->Add(this->btn_stop_plot);
			this->Controls->Add(this->btn_plot_file);
			this->Controls->Add(this->plot_data);
			this->Controls->Add(this->btn_plot_real_time);
			this->Controls->Add(this->gbx_selecsion_plot);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"Plot";
			this->Text = L"Plot";
			this->gbx_selecsion_plot->ResumeLayout(false);
			this->gbx_selecsion_plot->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->plot_data))->EndInit();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int i = 0;
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		i+=1;

		if (i == 100)
		{
			i = 0;
			plot_data->Series[0]->Points->Clear();
			plot_data->Series[1]->Points->Clear();
		}
		
		String^ data = txtb_recein->Text;
		//lb_test->Text = data;
		Double^ data_humi_int = Convert::ToDouble(data->Substring(4, 4));
		Double^ data_temp_int = Convert::ToDouble(data->Substring(0, 4));
		String^ data_humi = Convert::ToString(*data_humi_int / (10 * 10));
		String^ data_temp = Convert::ToString(*data_temp_int / (10 * 10));
		/*lb_humi->Text = data_humi;
		lb_temp->Text = data_temp;*/
		if (ckb_plot_real_time->Checked == true && rabt_ca2->Checked == true)
		{

			plot_data->Series[1]->Points->AddY(*data_humi_int / (10 * 10));
			plot_data->Series[0]->Points->AddY(*data_temp_int / (10 * 10));
		}
		else if (ckb_plot_real_time->Checked == true && rabt_Tempeture->Checked == true)
		{
			plot_data->Series[0]->Points->AddY(*data_temp_int / (10 * 10));
		}
		else if (ckb_plot_real_time->Checked == true && rabt_Humi->Checked == true)
		{
			plot_data->Series[1]->Points->AddY(*data_humi_int / (10 * 10));
		}
	}
	public: void SetText_delegate(String^ text)
	{
		if (tss_connect->Text == "Connected")

		{
			this->Invoke(gcnew SetTextDelegate(this, &Plot::SetText), gcnew array<Object^>{text});
		}
	}
	delegate void SetTextDelegate(String^ text);
	public: void SetText(String^ text)
	{
		txtb_recein->Clear();
		txtb_recein->Text += text;
     }// gửi dữ llieeuj lên txtdatareceive
private: System::Void ckb_plot_file_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	ckb_plot_real_time->Enabled = false;
	/*rabt_Tempeture->Enabled = false;
	rabt_Humi->Enabled = false;
	rabt_ca2->Enabled = false;*/
	if (ckb_plot_file->Checked == false)
	{
		ckb_plot_real_time->Enabled = true;
		/*rabt_Tempeture->Enabled = true;
		rabt_Humi->Enabled = true;
		rabt_ca2->Enabled = true;*/
	}
	if (ckb_plot_file->Checked == true)
	{
		btn_plot_file->Enabled = true;
	}
	else
	{
		btn_plot_file->Enabled = false;
	}
}
private: System::Void ckb_plot_real_time_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	ckb_plot_file->Enabled = false;
	if (ckb_plot_real_time->Checked == false)
	{
		ckb_plot_file->Enabled = true;
	}
	if (ckb_plot_real_time->Checked == true&&btn_connect->Text=="Disconnect") {
		btn_plot_real_time->Enabled = true;
	}
	else
	{
		btn_plot_real_time->Enabled = false;
	}
}
private: System::Void btn_plot_real_time_Click(System::Object^ sender, System::EventArgs^ e) {
	timer1->Start();
	
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	timer1->Stop();
}

private: System::Void btn_Reset_Click(System::Object^ sender, System::EventArgs^ e) {
	plot_data->Series[0]->Points->Clear();
	plot_data->Series[1]->Points->Clear();
}

private: System::Void btn_connect_Click(System::Object^ sender, System::EventArgs^ e) {
	if (tss_connect->Text == "Disconnected")
	{
		btn_connect->Text = "Disconnect";
		tss_connect->Text = "Connected";
	}
	else
	{
		btn_connect->Text = "Connect";
		tss_connect->Text = "Disconnected";
	}
}

private: System::Void btn_plot_file_Click(System::Object^ sender, System::EventArgs^ e) {
	int a = 0;
	String^ data_file = txt_hien_thi->Text;
	array<String^>^ data;
	data =data_file->Split('*');
	
	for (int i = 0; i < txt_hien_thi->Text->Length; i++)
	{
		a +=1;
	}
	int c = (a - 2)/10;
	if (ckb_plot_file->Checked == true && rabt_Humi->Checked == true)
	{
		plot_data->Series[0]->Points->Clear();
		plot_data->Series[1]->Points->Clear();
		for (int i = 0; i < c; i++)
		{
			if (i == 0)
			{
				Double^ data_humi_int = Convert::ToDouble(data[i]->Substring(4, 4));
				Double^ data_humi = *data_humi_int / (10 * 10);
				plot_data->Series[1]->Points->AddY(data_humi);
			}
			else
			{
				Double^ data_humi_int = Convert::ToDouble(data[i]->Substring(4, 4));
				Double^ data_humi = *data_humi_int / 10;
				plot_data->Series[1]->Points->AddY(data_humi);

			}
		}
	}
	if (ckb_plot_file->Checked == true && rabt_Tempeture->Checked == true)
	{
		plot_data->Series[0]->Points->Clear();
		plot_data->Series[1]->Points->Clear();
		for (int i = 0; i < c; i++)
		{
			if (i == 0)
			{
				Double^ data_temp_int = Convert::ToDouble(data[i]->Substring(0, 4));
				Double^ data_temp = *data_temp_int / (10 * 10);
				plot_data->Series[0]->Points->AddY(data_temp);
			}
			else
			{
				Double^ data_temp_int = Convert::ToDouble(data[i]->Substring(0, 4));
				Double^ data_temp = *data_temp_int / 10;
				plot_data->Series[0]->Points->AddY(data_temp);

			}
		}
	}
	if (ckb_plot_file->Checked == true && rabt_ca2->Checked == true)
	{
		plot_data->Series[0]->Points->Clear();
		plot_data->Series[1]->Points->Clear();
		for (int i = 0; i < c; i++)
		{
			if (i == 0)
			{
				Double^ data_humi_int = Convert::ToDouble(data[i]->Substring(4, 4));
				Double^ data_humi = *data_humi_int / (10 * 10);
				plot_data->Series[1]->Points->AddY(data_humi);
				Double^ data_temp_int = Convert::ToDouble(data[i]->Substring(0, 4));
				Double^ data_temp = *data_temp_int / (10 * 10);
				plot_data->Series[0]->Points->AddY(data_temp);
			}
			else
			{
				Double^ data_humi_int = Convert::ToDouble(data[i]->Substring(4, 4));
				Double^ data_humi = *data_humi_int / 10;
				plot_data->Series[1]->Points->AddY(data_humi);
				Double^ data_temp_int = Convert::ToDouble(data[i]->Substring(0, 4));
				Double^ data_temp = *data_temp_int / 10 ;
				plot_data->Series[0]->Points->AddY(data_temp);

			}
		}
	}

}
private: System::Void openToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ open = gcnew OpenFileDialog();
	open->Filter = "|*.txt";
	if (open->ShowDialog() == Windows::Forms::DialogResult::OK)
	{
		txt_path->Text = open->FileName;
		StreamReader^ read = gcnew StreamReader(open->FileName);
		txt_hien_thi->Text = read->ReadToEnd();
		read->Close();
	}
}
};
}
