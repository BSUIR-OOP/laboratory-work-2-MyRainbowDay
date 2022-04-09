#pragma once

namespace Paint {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Ñâîäêà äëÿ PaintForm
	/// </summary>
	public ref class PaintForm : public System::Windows::Forms::Form
	{
	public:
		PaintForm(void)
		{
			InitializeComponent();

			openFileDialog1->Filter = "Image files (*.bmp, *.jpg, *.png)|*.bmp;*.jpg;*.png";
			saveFileDialog1->Filter = "Image files (*.bmp, *.jpg, *.png)|*.bmp;*.jpg;*.png";
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ðåñóðñû.
		/// </summary>
		~PaintForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ äåéñòâèÿToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñîçäàòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñîõðàíèòüÊàêToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ ïàíåëüÝëåìåíòîâToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ îÏðîãðàììåToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âûõîäToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::GroupBox^ groupBoxToolBar;
	private: System::Windows::Forms::Button^ buttonActiveTexture;

	private: System::Windows::Forms::Button^ buttonActiveCircle;

	private: System::Windows::Forms::Button^ buttonActiveSquare;

	private: System::Windows::Forms::Button^ buttonActiveLine;

	private: System::Windows::Forms::Button^ buttonApplySize;

	private: System::Windows::Forms::Button^ buttonClear;
	private: System::Windows::Forms::Button^ buttonColor;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownSize;
	private: System::Windows::Forms::GroupBox^ groupBoxSettingsSquare;
	private: System::Windows::Forms::Button^ buttonApplySquare;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownHeightSquare;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownWidthSquare;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::GroupBox^ groupBoxSettingsCircle;
	private: System::Windows::Forms::Button^ buttonApplyCircle;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownHeightCircle;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownWidthCircle;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::GroupBox^ groupBoxSettingsTexture;

	private: System::Windows::Forms::Button^ buttonApplyTexture;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownHeightTexture;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownWidthTexture;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::GroupBox^ groupBoxCreateProject;
	private: System::Windows::Forms::Button^ buttonOpenProject;
	private: System::Windows::Forms::Button^ buttonCreateNewProject;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownHeightForm;

	private: System::Windows::Forms::NumericUpDown^ numericUpDownWidthForm;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ buttonChooseTexture;
	private: System::Windows::Forms::RadioButton^ radioButtonSetSize;

	private: System::Windows::Forms::RadioButton^ radioButtonOriginalSize;

	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::ColorDialog^ colorDialog1;

	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåðåìåííàÿ êîíñòðóêòîðà.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òðåáóåìûé ìåòîä äëÿ ïîääåðæêè êîíñòðóêòîðà — íå èçìåíÿéòå 
		/// ñîäåðæèìîå ýòîãî ìåòîäà ñ ïîìîùüþ ðåäàêòîðà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->äåéñòâèÿToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñîçäàòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñîõðàíèòüÊàêToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïàíåëüÝëåìåíòîâToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îÏðîãðàììåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûõîäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBoxToolBar = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDownSize = (gcnew System::Windows::Forms::NumericUpDown());
			this->buttonActiveTexture = (gcnew System::Windows::Forms::Button());
			this->buttonActiveCircle = (gcnew System::Windows::Forms::Button());
			this->buttonActiveSquare = (gcnew System::Windows::Forms::Button());
			this->buttonActiveLine = (gcnew System::Windows::Forms::Button());
			this->buttonApplySize = (gcnew System::Windows::Forms::Button());
			this->buttonClear = (gcnew System::Windows::Forms::Button());
			this->buttonColor = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBoxSettingsSquare = (gcnew System::Windows::Forms::GroupBox());
			this->buttonApplySquare = (gcnew System::Windows::Forms::Button());
			this->numericUpDownHeightSquare = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownWidthSquare = (gcnew System::Windows::Forms::NumericUpDown());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBoxSettingsCircle = (gcnew System::Windows::Forms::GroupBox());
			this->buttonApplyCircle = (gcnew System::Windows::Forms::Button());
			this->numericUpDownHeightCircle = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownWidthCircle = (gcnew System::Windows::Forms::NumericUpDown());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->groupBoxSettingsTexture = (gcnew System::Windows::Forms::GroupBox());
			this->buttonChooseTexture = (gcnew System::Windows::Forms::Button());
			this->buttonApplyTexture = (gcnew System::Windows::Forms::Button());
			this->numericUpDownHeightTexture = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownWidthTexture = (gcnew System::Windows::Forms::NumericUpDown());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->groupBoxCreateProject = (gcnew System::Windows::Forms::GroupBox());
			this->radioButtonSetSize = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonOriginalSize = (gcnew System::Windows::Forms::RadioButton());
			this->buttonOpenProject = (gcnew System::Windows::Forms::Button());
			this->buttonCreateNewProject = (gcnew System::Windows::Forms::Button());
			this->numericUpDownHeightForm = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownWidthForm = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBoxToolBar->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownSize))->BeginInit();
			this->groupBoxSettingsSquare->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownHeightSquare))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownWidthSquare))->BeginInit();
			this->groupBoxSettingsCircle->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownHeightCircle))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownWidthCircle))->BeginInit();
			this->groupBoxSettingsTexture->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownHeightTexture))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownWidthTexture))->BeginInit();
			this->groupBoxCreateProject->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownHeightForm))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownWidthForm))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->äåéñòâèÿToolStripMenuItem,
					this->îÏðîãðàììåToolStripMenuItem, this->âûõîäToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1272, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// äåéñòâèÿToolStripMenuItem
			// 
			this->äåéñòâèÿToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ñîçäàòüToolStripMenuItem,
					this->ñîõðàíèòüÊàêToolStripMenuItem, this->ïàíåëüÝëåìåíòîâToolStripMenuItem
			});
			this->äåéñòâèÿToolStripMenuItem->Name = L"äåéñòâèÿToolStripMenuItem";
			this->äåéñòâèÿToolStripMenuItem->Size = System::Drawing::Size(88, 24);
			this->äåéñòâèÿToolStripMenuItem->Text = L"Äåéñòâèÿ";
			// 
			// ñîçäàòüToolStripMenuItem
			// 
			this->ñîçäàòüToolStripMenuItem->Name = L"ñîçäàòüToolStripMenuItem";
			this->ñîçäàòüToolStripMenuItem->Size = System::Drawing::Size(222, 26);
			this->ñîçäàòüToolStripMenuItem->Text = L"Ñîçäàòü";
			this->ñîçäàòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &PaintForm::ñîçäàòüToolStripMenuItem_Click);
			// 
			// ñîõðàíèòüÊàêToolStripMenuItem
			// 
			this->ñîõðàíèòüÊàêToolStripMenuItem->Name = L"ñîõðàíèòüÊàêToolStripMenuItem";
			this->ñîõðàíèòüÊàêToolStripMenuItem->Size = System::Drawing::Size(222, 26);
			this->ñîõðàíèòüÊàêToolStripMenuItem->Text = L"Ñîõðàíèòü êàê";
			this->ñîõðàíèòüÊàêToolStripMenuItem->Click += gcnew System::EventHandler(this, &PaintForm::ñîõðàíèòüÊàêToolStripMenuItem_Click);
			// 
			// ïàíåëüÝëåìåíòîâToolStripMenuItem
			// 
			this->ïàíåëüÝëåìåíòîâToolStripMenuItem->Name = L"ïàíåëüÝëåìåíòîâToolStripMenuItem";
			this->ïàíåëüÝëåìåíòîâToolStripMenuItem->Size = System::Drawing::Size(222, 26);
			this->ïàíåëüÝëåìåíòîâToolStripMenuItem->Text = L"Ïàíåëü ýëåìåíòîâ";
			this->ïàíåëüÝëåìåíòîâToolStripMenuItem->Click += gcnew System::EventHandler(this, &PaintForm::ïàíåëüÝëåìåíòîâToolStripMenuItem_Click);
			// 
			// îÏðîãðàììåToolStripMenuItem
			// 
			this->îÏðîãðàììåToolStripMenuItem->Name = L"îÏðîãðàììåToolStripMenuItem";
			this->îÏðîãðàììåToolStripMenuItem->Size = System::Drawing::Size(118, 24);
			this->îÏðîãðàììåToolStripMenuItem->Text = L"Î ïðîãðàììå";
			this->îÏðîãðàììåToolStripMenuItem->Click += gcnew System::EventHandler(this, &PaintForm::îÏðîãðàììåToolStripMenuItem_Click);
			// 
			// âûõîäToolStripMenuItem
			// 
			this->âûõîäToolStripMenuItem->Name = L"âûõîäToolStripMenuItem";
			this->âûõîäToolStripMenuItem->Size = System::Drawing::Size(67, 24);
			this->âûõîäToolStripMenuItem->Text = L"Âûõîä";
			this->âûõîäToolStripMenuItem->Click += gcnew System::EventHandler(this, &PaintForm::âûõîäToolStripMenuItem_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Location = System::Drawing::Point(0, 28);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1272, 525);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->SizeChanged += gcnew System::EventHandler(this, &PaintForm::pictureBox1_SizeChanged);
			this->pictureBox1->VisibleChanged += gcnew System::EventHandler(this, &PaintForm::pictureBox1_VisibleChanged);
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &PaintForm::pictureBox1_Paint);
			this->pictureBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &PaintForm::pictureBox1_MouseDown);
			this->pictureBox1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &PaintForm::pictureBox1_MouseMove);
			this->pictureBox1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &PaintForm::pictureBox1_MouseUp);
			// 
			// groupBoxToolBar
			// 
			this->groupBoxToolBar->Controls->Add(this->numericUpDownSize);
			this->groupBoxToolBar->Controls->Add(this->buttonActiveTexture);
			this->groupBoxToolBar->Controls->Add(this->buttonActiveCircle);
			this->groupBoxToolBar->Controls->Add(this->buttonActiveSquare);
			this->groupBoxToolBar->Controls->Add(this->buttonActiveLine);
			this->groupBoxToolBar->Controls->Add(this->buttonApplySize);
			this->groupBoxToolBar->Controls->Add(this->buttonClear);
			this->groupBoxToolBar->Controls->Add(this->buttonColor);
			this->groupBoxToolBar->Controls->Add(this->label2);
			this->groupBoxToolBar->Controls->Add(this->label1);
			this->groupBoxToolBar->Location = System::Drawing::Point(12, 46);
			this->groupBoxToolBar->Name = L"groupBoxToolBar";
			this->groupBoxToolBar->Size = System::Drawing::Size(530, 177);
			this->groupBoxToolBar->TabIndex = 2;
			this->groupBoxToolBar->TabStop = false;
			this->groupBoxToolBar->Text = L"Ïàíåëü ýëåìåíòîâ";
			this->groupBoxToolBar->Visible = false;
			// 
			// numericUpDownSize
			// 
			this->numericUpDownSize->Location = System::Drawing::Point(115, 139);
			this->numericUpDownSize->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownSize->Name = L"numericUpDownSize";
			this->numericUpDownSize->Size = System::Drawing::Size(89, 22);
			this->numericUpDownSize->TabIndex = 9;
			this->numericUpDownSize->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// buttonActiveTexture
			// 
			this->buttonActiveTexture->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->buttonActiveTexture->Location = System::Drawing::Point(401, 131);
			this->buttonActiveTexture->Name = L"buttonActiveTexture";
			this->buttonActiveTexture->Size = System::Drawing::Size(113, 31);
			this->buttonActiveTexture->TabIndex = 8;
			this->buttonActiveTexture->Text = L"Òåêñòóðà";
			this->buttonActiveTexture->UseVisualStyleBackColor = true;
			this->buttonActiveTexture->Click += gcnew System::EventHandler(this, &PaintForm::buttonActiveTexture_Click);
			// 
			// buttonActiveCircle
			// 
			this->buttonActiveCircle->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->buttonActiveCircle->Location = System::Drawing::Point(280, 131);
			this->buttonActiveCircle->Name = L"buttonActiveCircle";
			this->buttonActiveCircle->Size = System::Drawing::Size(111, 31);
			this->buttonActiveCircle->TabIndex = 7;
			this->buttonActiveCircle->Text = L"Êðóã";
			this->buttonActiveCircle->UseVisualStyleBackColor = true;
			this->buttonActiveCircle->Click += gcnew System::EventHandler(this, &PaintForm::buttonActiveCircle_Click);
			// 
			// buttonActiveSquare
			// 
			this->buttonActiveSquare->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->buttonActiveSquare->Location = System::Drawing::Point(401, 75);
			this->buttonActiveSquare->Name = L"buttonActiveSquare";
			this->buttonActiveSquare->Size = System::Drawing::Size(113, 31);
			this->buttonActiveSquare->TabIndex = 6;
			this->buttonActiveSquare->Text = L"Êâàäðàò";
			this->buttonActiveSquare->UseVisualStyleBackColor = true;
			this->buttonActiveSquare->Click += gcnew System::EventHandler(this, &PaintForm::buttonActiveSquare_Click);
			// 
			// buttonActiveLine
			// 
			this->buttonActiveLine->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->buttonActiveLine->Location = System::Drawing::Point(280, 75);
			this->buttonActiveLine->Name = L"buttonActiveLine";
			this->buttonActiveLine->Size = System::Drawing::Size(113, 31);
			this->buttonActiveLine->TabIndex = 5;
			this->buttonActiveLine->Text = L"Ëèíèÿ";
			this->buttonActiveLine->UseVisualStyleBackColor = true;
			this->buttonActiveLine->Click += gcnew System::EventHandler(this, &PaintForm::buttonActiveLine_Click);
			// 
			// buttonApplySize
			// 
			this->buttonApplySize->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->buttonApplySize->Location = System::Drawing::Point(11, 131);
			this->buttonApplySize->Name = L"buttonApplySize";
			this->buttonApplySize->Size = System::Drawing::Size(85, 31);
			this->buttonApplySize->TabIndex = 4;
			this->buttonApplySize->Text = L"Ðàçìåð";
			this->buttonApplySize->UseVisualStyleBackColor = true;
			this->buttonApplySize->Click += gcnew System::EventHandler(this, &PaintForm::buttonApplySize_Click);
			// 
			// buttonClear
			// 
			this->buttonClear->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->buttonClear->Location = System::Drawing::Point(115, 75);
			this->buttonClear->Name = L"buttonClear";
			this->buttonClear->Size = System::Drawing::Size(89, 31);
			this->buttonClear->TabIndex = 3;
			this->buttonClear->Text = L"Î÷èòêà";
			this->buttonClear->UseVisualStyleBackColor = true;
			this->buttonClear->Click += gcnew System::EventHandler(this, &PaintForm::buttonClear_Click);
			// 
			// buttonColor
			// 
			this->buttonColor->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->buttonColor->Location = System::Drawing::Point(11, 75);
			this->buttonColor->Name = L"buttonColor";
			this->buttonColor->Size = System::Drawing::Size(85, 31);
			this->buttonColor->TabIndex = 2;
			this->buttonColor->Text = L"Öâåò";
			this->buttonColor->UseVisualStyleBackColor = true;
			this->buttonColor->Click += gcnew System::EventHandler(this, &PaintForm::buttonColor_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Playfair Display", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(350, 31);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(90, 28);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Ôèãóðû";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Playfair Display", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(6, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(198, 28);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ïàðàìåòðû êèñòè";
			// 
			// groupBoxSettingsSquare
			// 
			this->groupBoxSettingsSquare->Controls->Add(this->buttonApplySquare);
			this->groupBoxSettingsSquare->Controls->Add(this->numericUpDownHeightSquare);
			this->groupBoxSettingsSquare->Controls->Add(this->numericUpDownWidthSquare);
			this->groupBoxSettingsSquare->Controls->Add(this->label4);
			this->groupBoxSettingsSquare->Controls->Add(this->label3);
			this->groupBoxSettingsSquare->Location = System::Drawing::Point(12, 260);
			this->groupBoxSettingsSquare->Name = L"groupBoxSettingsSquare";
			this->groupBoxSettingsSquare->Size = System::Drawing::Size(239, 173);
			this->groupBoxSettingsSquare->TabIndex = 3;
			this->groupBoxSettingsSquare->TabStop = false;
			this->groupBoxSettingsSquare->Text = L"Íàñòðîéêè êâàäðàòà";
			this->groupBoxSettingsSquare->Visible = false;
			// 
			// buttonApplySquare
			// 
			this->buttonApplySquare->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->buttonApplySquare->Location = System::Drawing::Point(56, 123);
			this->buttonApplySquare->Name = L"buttonApplySquare";
			this->buttonApplySquare->Size = System::Drawing::Size(124, 34);
			this->buttonApplySquare->TabIndex = 4;
			this->buttonApplySquare->Text = L"Ïðèìåíèòü";
			this->buttonApplySquare->UseVisualStyleBackColor = true;
			this->buttonApplySquare->Click += gcnew System::EventHandler(this, &PaintForm::buttonApplySquare_Click);
			// 
			// numericUpDownHeightSquare
			// 
			this->numericUpDownHeightSquare->Location = System::Drawing::Point(128, 84);
			this->numericUpDownHeightSquare->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownHeightSquare->Name = L"numericUpDownHeightSquare";
			this->numericUpDownHeightSquare->Size = System::Drawing::Size(87, 22);
			this->numericUpDownHeightSquare->TabIndex = 3;
			this->numericUpDownHeightSquare->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// numericUpDownWidthSquare
			// 
			this->numericUpDownWidthSquare->Location = System::Drawing::Point(10, 84);
			this->numericUpDownWidthSquare->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownWidthSquare->Name = L"numericUpDownWidthSquare";
			this->numericUpDownWidthSquare->Size = System::Drawing::Size(90, 22);
			this->numericUpDownWidthSquare->TabIndex = 2;
			this->numericUpDownWidthSquare->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Playfair Display", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(125, 36);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(90, 28);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Âûñîòà";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Playfair Display", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(7, 36);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(93, 28);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Øèðèíà";
			// 
			// groupBoxSettingsCircle
			// 
			this->groupBoxSettingsCircle->Controls->Add(this->buttonApplyCircle);
			this->groupBoxSettingsCircle->Controls->Add(this->numericUpDownHeightCircle);
			this->groupBoxSettingsCircle->Controls->Add(this->numericUpDownWidthCircle);
			this->groupBoxSettingsCircle->Controls->Add(this->label7);
			this->groupBoxSettingsCircle->Controls->Add(this->label8);
			this->groupBoxSettingsCircle->Location = System::Drawing::Point(1002, 50);
			this->groupBoxSettingsCircle->Name = L"groupBoxSettingsCircle";
			this->groupBoxSettingsCircle->Size = System::Drawing::Size(239, 173);
			this->groupBoxSettingsCircle->TabIndex = 6;
			this->groupBoxSettingsCircle->TabStop = false;
			this->groupBoxSettingsCircle->Text = L"Íàñòðîéêè êðóãà";
			this->groupBoxSettingsCircle->Visible = false;
			// 
			// buttonApplyCircle
			// 
			this->buttonApplyCircle->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->buttonApplyCircle->Location = System::Drawing::Point(56, 123);
			this->buttonApplyCircle->Name = L"buttonApplyCircle";
			this->buttonApplyCircle->Size = System::Drawing::Size(124, 34);
			this->buttonApplyCircle->TabIndex = 4;
			this->buttonApplyCircle->Text = L"Ïðèìåíèòü";
			this->buttonApplyCircle->UseVisualStyleBackColor = true;
			this->buttonApplyCircle->Click += gcnew System::EventHandler(this, &PaintForm::buttonApplyCircle_Click);
			// 
			// numericUpDownHeightCircle
			// 
			this->numericUpDownHeightCircle->Location = System::Drawing::Point(128, 84);
			this->numericUpDownHeightCircle->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownHeightCircle->Name = L"numericUpDownHeightCircle";
			this->numericUpDownHeightCircle->Size = System::Drawing::Size(87, 22);
			this->numericUpDownHeightCircle->TabIndex = 3;
			this->numericUpDownHeightCircle->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// numericUpDownWidthCircle
			// 
			this->numericUpDownWidthCircle->Location = System::Drawing::Point(10, 84);
			this->numericUpDownWidthCircle->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownWidthCircle->Name = L"numericUpDownWidthCircle";
			this->numericUpDownWidthCircle->Size = System::Drawing::Size(90, 22);
			this->numericUpDownWidthCircle->TabIndex = 2;
			this->numericUpDownWidthCircle->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Playfair Display", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(125, 36);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(90, 28);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Âûñîòà";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Playfair Display", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(7, 36);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(93, 28);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Øèðèíà";
			// 
			// groupBoxSettingsTexture
			// 
			this->groupBoxSettingsTexture->Controls->Add(this->buttonChooseTexture);
			this->groupBoxSettingsTexture->Controls->Add(this->buttonApplyTexture);
			this->groupBoxSettingsTexture->Controls->Add(this->numericUpDownHeightTexture);
			this->groupBoxSettingsTexture->Controls->Add(this->numericUpDownWidthTexture);
			this->groupBoxSettingsTexture->Controls->Add(this->label9);
			this->groupBoxSettingsTexture->Controls->Add(this->label10);
			this->groupBoxSettingsTexture->Location = System::Drawing::Point(696, 46);
			this->groupBoxSettingsTexture->Name = L"groupBoxSettingsTexture";
			this->groupBoxSettingsTexture->Size = System::Drawing::Size(277, 173);
			this->groupBoxSettingsTexture->TabIndex = 7;
			this->groupBoxSettingsTexture->TabStop = false;
			this->groupBoxSettingsTexture->Text = L"Íàñòðîéêè òåêñòóðû";
			this->groupBoxSettingsTexture->Visible = false;
			// 
			// buttonChooseTexture
			// 
			this->buttonChooseTexture->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->buttonChooseTexture->Location = System::Drawing::Point(10, 127);
			this->buttonChooseTexture->Name = L"buttonChooseTexture";
			this->buttonChooseTexture->Size = System::Drawing::Size(120, 34);
			this->buttonChooseTexture->TabIndex = 5;
			this->buttonChooseTexture->Text = L"Âûáðàòü";
			this->buttonChooseTexture->UseVisualStyleBackColor = true;
			this->buttonChooseTexture->Click += gcnew System::EventHandler(this, &PaintForm::buttonChooseTexture_Click);
			// 
			// buttonApplyTexture
			// 
			this->buttonApplyTexture->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->buttonApplyTexture->Location = System::Drawing::Point(148, 127);
			this->buttonApplyTexture->Name = L"buttonApplyTexture";
			this->buttonApplyTexture->Size = System::Drawing::Size(120, 34);
			this->buttonApplyTexture->TabIndex = 4;
			this->buttonApplyTexture->Text = L"Ïðèìåíèòü";
			this->buttonApplyTexture->UseVisualStyleBackColor = true;
			this->buttonApplyTexture->Click += gcnew System::EventHandler(this, &PaintForm::buttonApplyTexture_Click);
			// 
			// numericUpDownHeightTexture
			// 
			this->numericUpDownHeightTexture->Location = System::Drawing::Point(148, 84);
			this->numericUpDownHeightTexture->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownHeightTexture->Name = L"numericUpDownHeightTexture";
			this->numericUpDownHeightTexture->Size = System::Drawing::Size(120, 22);
			this->numericUpDownHeightTexture->TabIndex = 3;
			this->numericUpDownHeightTexture->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// numericUpDownWidthTexture
			// 
			this->numericUpDownWidthTexture->Location = System::Drawing::Point(10, 84);
			this->numericUpDownWidthTexture->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownWidthTexture->Name = L"numericUpDownWidthTexture";
			this->numericUpDownWidthTexture->Size = System::Drawing::Size(120, 22);
			this->numericUpDownWidthTexture->TabIndex = 2;
			this->numericUpDownWidthTexture->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Playfair Display", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(125, 36);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(90, 28);
			this->label9->TabIndex = 1;
			this->label9->Text = L"Âûñîòà";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Playfair Display", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(7, 36);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(93, 28);
			this->label10->TabIndex = 0;
			this->label10->Text = L"Øèðèíà";
			// 
			// groupBoxCreateProject
			// 
			this->groupBoxCreateProject->Controls->Add(this->radioButtonSetSize);
			this->groupBoxCreateProject->Controls->Add(this->radioButtonOriginalSize);
			this->groupBoxCreateProject->Controls->Add(this->buttonOpenProject);
			this->groupBoxCreateProject->Controls->Add(this->buttonCreateNewProject);
			this->groupBoxCreateProject->Controls->Add(this->numericUpDownHeightForm);
			this->groupBoxCreateProject->Controls->Add(this->numericUpDownWidthForm);
			this->groupBoxCreateProject->Controls->Add(this->label5);
			this->groupBoxCreateProject->Controls->Add(this->label6);
			this->groupBoxCreateProject->Location = System::Drawing::Point(413, 244);
			this->groupBoxCreateProject->Name = L"groupBoxCreateProject";
			this->groupBoxCreateProject->Size = System::Drawing::Size(397, 173);
			this->groupBoxCreateProject->TabIndex = 7;
			this->groupBoxCreateProject->TabStop = false;
			this->groupBoxCreateProject->Text = L"Ñîçäàòü ïðîåêò";
			// 
			// radioButtonSetSize
			// 
			this->radioButtonSetSize->AutoSize = true;
			this->radioButtonSetSize->Location = System::Drawing::Point(292, 126);
			this->radioButtonSetSize->Name = L"radioButtonSetSize";
			this->radioButtonSetSize->Size = System::Drawing::Size(96, 21);
			this->radioButtonSetSize->TabIndex = 7;
			this->radioButtonSetSize->TabStop = true;
			this->radioButtonSetSize->Text = L"Çàäàííûé";
			this->radioButtonSetSize->UseVisualStyleBackColor = true;
			// 
			// radioButtonOriginalSize
			// 
			this->radioButtonOriginalSize->AutoSize = true;
			this->radioButtonOriginalSize->Location = System::Drawing::Point(172, 126);
			this->radioButtonOriginalSize->Name = L"radioButtonOriginalSize";
			this->radioButtonOriginalSize->Size = System::Drawing::Size(94, 21);
			this->radioButtonOriginalSize->TabIndex = 6;
			this->radioButtonOriginalSize->TabStop = true;
			this->radioButtonOriginalSize->Text = L"Èñõîäíûé";
			this->radioButtonOriginalSize->UseVisualStyleBackColor = true;
			// 
			// buttonOpenProject
			// 
			this->buttonOpenProject->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->buttonOpenProject->Location = System::Drawing::Point(6, 103);
			this->buttonOpenProject->Name = L"buttonOpenProject";
			this->buttonOpenProject->Size = System::Drawing::Size(124, 34);
			this->buttonOpenProject->TabIndex = 5;
			this->buttonOpenProject->Text = L"Îòêðûòü";
			this->buttonOpenProject->UseVisualStyleBackColor = true;
			this->buttonOpenProject->Click += gcnew System::EventHandler(this, &PaintForm::buttonOpenProject_Click);
			// 
			// buttonCreateNewProject
			// 
			this->buttonCreateNewProject->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->buttonCreateNewProject->Location = System::Drawing::Point(6, 48);
			this->buttonCreateNewProject->Name = L"buttonCreateNewProject";
			this->buttonCreateNewProject->Size = System::Drawing::Size(124, 34);
			this->buttonCreateNewProject->TabIndex = 4;
			this->buttonCreateNewProject->Text = L"Ñîçäàòü";
			this->buttonCreateNewProject->UseVisualStyleBackColor = true;
			this->buttonCreateNewProject->Click += gcnew System::EventHandler(this, &PaintForm::buttonCreateNewProject_Click);
			// 
			// numericUpDownHeightForm
			// 
			this->numericUpDownHeightForm->Location = System::Drawing::Point(292, 87);
			this->numericUpDownHeightForm->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownHeightForm->Name = L"numericUpDownHeightForm";
			this->numericUpDownHeightForm->Size = System::Drawing::Size(87, 22);
			this->numericUpDownHeightForm->TabIndex = 3;
			this->numericUpDownHeightForm->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// numericUpDownWidthForm
			// 
			this->numericUpDownWidthForm->Location = System::Drawing::Point(175, 87);
			this->numericUpDownWidthForm->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownWidthForm->Name = L"numericUpDownWidthForm";
			this->numericUpDownWidthForm->Size = System::Drawing::Size(90, 22);
			this->numericUpDownWidthForm->TabIndex = 2;
			this->numericUpDownWidthForm->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Playfair Display", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(289, 40);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(90, 28);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Âûñîòà";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Playfair Display", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(170, 40);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(93, 28);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Øèðèíà";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// PaintForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1272, 553);
			this->Controls->Add(this->groupBoxCreateProject);
			this->Controls->Add(this->groupBoxSettingsTexture);
			this->Controls->Add(this->groupBoxSettingsCircle);
			this->Controls->Add(this->groupBoxSettingsSquare);
			this->Controls->Add(this->groupBoxToolBar);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"PaintForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"PaintForm";
			this->Load += gcnew System::EventHandler(this, &PaintForm::PaintForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBoxToolBar->ResumeLayout(false);
			this->groupBoxToolBar->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownSize))->EndInit();
			this->groupBoxSettingsSquare->ResumeLayout(false);
			this->groupBoxSettingsSquare->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownHeightSquare))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownWidthSquare))->EndInit();
			this->groupBoxSettingsCircle->ResumeLayout(false);
			this->groupBoxSettingsCircle->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownHeightCircle))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownWidthCircle))->EndInit();
			this->groupBoxSettingsTexture->ResumeLayout(false);
			this->groupBoxSettingsTexture->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownHeightTexture))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownWidthTexture))->EndInit();
			this->groupBoxCreateProject->ResumeLayout(false);
			this->groupBoxCreateProject->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownHeightForm))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownWidthForm))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		private:
			Graphics^ canvas;
			List <Point>^ points;	//the points on which we draw the line
			Pen^ pen;
			bool draw;
			Bitmap^ background;
			Color color;
			Bitmap^ texture;
			float size;
			bool clearAll;
			String^ filename;
			int statePen;
			/*
				statePen = 1 - line
				statePen = 2 - square
				statePen = 3 - circle
				statePen = 4 - texture
			*/
	
		private:void DrawBackground();
		private: System::Void buttonColor_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void buttonClear_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void buttonApplySize_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void buttonActiveLine_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void buttonActiveSquare_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void buttonActiveCircle_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void buttonActiveTexture_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void buttonApplySquare_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void buttonApplyCircle_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void buttonChooseTexture_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void buttonApplyTexture_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void buttonCreateNewProject_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void buttonOpenProject_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e);
		private: System::Void pictureBox1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
		private: System::Void pictureBox1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
		private: System::Void pictureBox1_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
		private: System::Void pictureBox1_VisibleChanged(System::Object^ sender, System::EventArgs^ e);
		private: System::Void ñîçäàòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void ñîõðàíèòüÊàêToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void ïàíåëüÝëåìåíòîâToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void îÏðîãðàììåToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void âûõîäToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void PaintForm_Load(System::Object^ sender, System::EventArgs^ e);
		private: System::Void pictureBox1_SizeChanged(System::Object^ sender, System::EventArgs^ e);
};
}
