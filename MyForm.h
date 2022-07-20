#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	/// <summary>
	/// MyForm 的摘要
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO:  在此加入建構函式程式碼
			//
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dgv;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ID_NO;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NAME;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ SEX;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ERROR;

	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器修改
		/// 這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->dgv = (gcnew System::Windows::Forms::DataGridView());
			this->ID_NO = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NAME = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->SEX = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ERROR = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(13, 13);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(440, 110);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"應檢人資料";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(19, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(37, 15);
			this->label1->TabIndex = 0;
			this->label1->Text = L"姓名";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(66, 25);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 25);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"康姿瑩";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(19, 70);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 15);
			this->label2->TabIndex = 0;
			this->label2->Text = L"座號";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(66, 67);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 25);
			this->textBox2->TabIndex = 1;
			this->textBox2->Text = L"17";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(201, 28);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(97, 15);
			this->label3->TabIndex = 0;
			this->label3->Text = L"術科測試編號";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(304, 24);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 25);
			this->textBox3->TabIndex = 1;
			this->textBox3->Text = L"106010203";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(201, 70);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(91, 15);
			this->label4->TabIndex = 0;
			this->label4->Text = L"考  試  日  期";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(304, 67);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 25);
			this->textBox4->TabIndex = 1;
			this->textBox4->Text = L"2022/06/06";
			// 
			// dgv
			// 
			this->dgv->AllowUserToAddRows = false;
			this->dgv->AllowUserToDeleteRows = false;
			this->dgv->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgv->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->ID_NO, this->NAME,
					this->SEX, this->ERROR
			});
			this->dgv->Location = System::Drawing::Point(13, 130);
			this->dgv->Name = L"dgv";
			this->dgv->ReadOnly = true;
			this->dgv->RowHeadersWidth = 51;
			this->dgv->RowTemplate->Height = 27;
			this->dgv->Size = System::Drawing::Size(440, 400);
			this->dgv->TabIndex = 1;
			// 
			// ID_NO
			// 
			this->ID_NO->HeaderText = L"ID_NO";
			this->ID_NO->MinimumWidth = 6;
			this->ID_NO->Name = L"ID_NO";
			this->ID_NO->ReadOnly = true;
			// 
			// NAME
			// 
			this->NAME->HeaderText = L"NAME";
			this->NAME->MinimumWidth = 6;
			this->NAME->Name = L"NAME";
			this->NAME->ReadOnly = true;
			// 
			// SEX
			// 
			this->SEX->HeaderText = L"SEX";
			this->SEX->MinimumWidth = 6;
			this->SEX->Name = L"SEX";
			this->SEX->ReadOnly = true;
			// 
			// ERROR
			// 
			this->ERROR->HeaderText = L"ERROR";
			this->ERROR->MinimumWidth = 6;
			this->ERROR->Name = L"ERROR";
			this->ERROR->ReadOnly = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(462, 533);
			this->Controls->Add(this->dgv);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"身分證號碼檢查";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		StreamReader^ din = File::OpenText("C:\\test\\1060306.T03");
		String^ line;
		String^ ec;
		while (line = din->ReadLine())
		{
			array<String^>^ col = line->Split(',');
			String^ idno = col[0];
			String^ name = col[1];
			String^ sex = col[2];
			ec = "";
			//檢查格式
			if (idno->Length != 10) ec = "FORMAT ERROR";
			if(idno[0] < 'A' || idno[0] > 'Z') ec = "FORMAT ERROR";
			if (ec == "") {
				for (int i = 1; i <= 9; i++) {
					if(idno[i] < '0' || idno[i] > '9') ec = "FORMAT ERROR";
				}
			}
			//檢查性別
			if (ec == "") {
				if (!(idno[1] == '1' && sex == "M" || idno[1] =='2' && sex == "F")) ec = "SEX CODE ERROR";
			}
			//檢查碼驗證
			if (ec == "") {
				String^ s26 = gcnew String("ABCDEFGHJKLMNPQRSTUVWXYZIO");
				Char ch = idno[0];
				int chNum = 10 + s26->IndexOf(ch);
				int y = 0;
				y = chNum / 10 + 9 * (chNum % 10) + (idno[9]-48);
				int k = 8;
				for (int i = 1; i <= 8; i++) {
					y = y + k * (idno[i] - 48);
					k--;
				}
				if (y % 10 != 0) ec = "CHECK SUM ERROR";
			}
			array<String^>^ tRecord = { idno, name, sex, ec };
			dgv->Rows->Add(tRecord);
		}
		ListSortDirection direction;
		dgv->Sort(dgv->Columns[0], direction);
		dgv->AutoResizeColumns();
		dgv->CurrentCell = dgv->Rows[0]->Cells[0];
}
};
}