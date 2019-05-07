#pragma once
#include <random>
#include <iostream>

namespace My3kolory {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Timer^  timer2;
	private: System::Windows::Forms::Timer^  timer3;
	private: System::Windows::Forms::Timer^  timer4;
	private: System::Windows::Forms::Label^  label1;
	private: System::ComponentModel::IContainer^  components;
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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer4 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(75, 75);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(300, 200);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button1->Location = System::Drawing::Point(125, 331);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(199, 59);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Fight";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button2->Enabled = false;
			this->button2->Location = System::Drawing::Point(358, 353);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(35, 22);
			this->button2->TabIndex = 2;
			this->button2->Text = L"stop";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 1;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button3->Location = System::Drawing::Point(194, 402);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(61, 27);
			this->button3->TabIndex = 3;
			this->button3->Text = L"restart";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button4->Enabled = false;
			this->button4->Location = System::Drawing::Point(46, 353);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(41, 22);
			this->button4->TabIndex = 4;
			this->button4->Text = L"muza";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(50, 50);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(350, 250);
			this->pictureBox2->TabIndex = 5;
			this->pictureBox2->TabStop = false;
			// 
			// timer2
			// 
			this->timer2->Interval = 20;
			this->timer2->Tick += gcnew System::EventHandler(this, &MyForm::timer2_Tick);
			// 
			// timer3
			// 
			this->timer3->Interval = 18750;
			this->timer3->Tick += gcnew System::EventHandler(this, &MyForm::timer3_Tick);
			// 
			// timer4
			// 
			this->timer4->Interval = 470;
			this->timer4->Tick += gcnew System::EventHandler(this, &MyForm::timer4_Tick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(154, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(138, 26);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Wilczes cwel";
			this->label1->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(450, 450);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Bitmap^ bmp;
		Bitmap^ bmp2;
		array<int, 2>^ kolor = gcnew array<int, 2>(75, 50);
		SolidBrush^ blue;
		SolidBrush^ red;
		SolidBrush^ yellow;
		SolidBrush^ equa = gcnew SolidBrush(Color::LightGreen);
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
		bool muza = false;
		bool bump = false;
		bool bump2 = false;
		Color tlo = Color::WhiteSmoke;

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		pictureBox2->SendToBack();
		bmp = gcnew Bitmap(pictureBox1->Width, pictureBox1->Height);
		bmp2 = gcnew Bitmap(pictureBox2->Width, pictureBox2->Height);
		pictureBox1->DrawToBitmap(bmp, pictureBox1->ClientRectangle);
		pictureBox2->DrawToBitmap(bmp2, pictureBox2->ClientRectangle);
		std::random_device rd;
		std::mt19937 gen(rd());
		std::uniform_int_distribution<> dist(0, 10);
		int a = dist(gen);
		switch (a)
		{
		case 0:
			blue = gcnew SolidBrush(Color::Black);
			break;
		case 1:
			blue = gcnew SolidBrush(Color::Brown);
			break;
		case 3:
			blue = gcnew SolidBrush(Color::Red);
			break;
		case 4:
			blue = gcnew SolidBrush(Color::Orange);
			break;
		case 5:
			blue = gcnew SolidBrush(Color::Yellow);
			break;
		case 6:
			blue = gcnew SolidBrush(Color::Green);
			break;
		case 7:
			blue = gcnew SolidBrush(Color::Blue);
			break;
		case 8:
			blue = gcnew SolidBrush(Color::Purple);
			break;
		case 9:
			blue = gcnew SolidBrush(Color::Gray);
			break;
		default:
			blue = gcnew SolidBrush(Color::White);
			break;
		}
		int b = dist(gen);
		switch (b)
		{
		case 0:
			red = gcnew SolidBrush(Color::Black);
			if (a == b) red = gcnew SolidBrush(Color::Brown);
			break;
		case 1:
			red = gcnew SolidBrush(Color::Brown);
			if (a == b) red = gcnew SolidBrush(Color::Red);
			break;
		case 3:
			red = gcnew SolidBrush(Color::Red);
			if (a == b) red = gcnew SolidBrush(Color::Orange);
			break;
		case 4:
			red = gcnew SolidBrush(Color::Orange);
			if (a == b) red = gcnew SolidBrush(Color::Yellow);
			break;
		case 5:
			red = gcnew SolidBrush(Color::Yellow);
			if (a == b) red = gcnew SolidBrush(Color::Green);
			break;
		case 6:
			red = gcnew SolidBrush(Color::Green);
			if (a == b) red = gcnew SolidBrush(Color::Blue);
			break;
		case 7:
			red = gcnew SolidBrush(Color::Blue);
			if (a == b) red = gcnew SolidBrush(Color::Purple);
			break;
		case 8:
			red = gcnew SolidBrush(Color::Purple);
			if (a == b) red = gcnew SolidBrush(Color::Gray);
			break;
		case 9:
			red = gcnew SolidBrush(Color::Gray);
			if (a == b) red = gcnew SolidBrush(Color::White);
			break;
		default:
			red = gcnew SolidBrush(Color::White);
			if (a == b) red = gcnew SolidBrush(Color::Black);
			break;
		}
		int c = dist(gen);
		switch (c)
		{
		case 0:
			yellow = gcnew SolidBrush(Color::Black);
			if (c == a) yellow = gcnew SolidBrush(Color::Red);
			if (c == b) yellow = gcnew SolidBrush(Color::Brown);
			break;
		case 1:
			yellow = gcnew SolidBrush(Color::Brown);
			if (c == a) yellow = gcnew SolidBrush(Color::Orange);
			if (c == b) yellow = gcnew SolidBrush(Color::Red);
			break;
		case 3:
			yellow = gcnew SolidBrush(Color::Red);
			if (c == a) yellow = gcnew SolidBrush(Color::Yellow);
			if (c == b) yellow = gcnew SolidBrush(Color::Green);
			break;
		case 4:
			yellow = gcnew SolidBrush(Color::Orange);
			if (c == a) yellow = gcnew SolidBrush(Color::Green);
			if (c == b) yellow = gcnew SolidBrush(Color::Yellow);
			break;
		case 5:
			yellow = gcnew SolidBrush(Color::Yellow);
			if (c == a) yellow = gcnew SolidBrush(Color::Blue);
			if (c == b) yellow = gcnew SolidBrush(Color::Green);
			break;
		case 6:
			yellow = gcnew SolidBrush(Color::Green);
			if (c == a) yellow = gcnew SolidBrush(Color::Purple);
			if (c == b) yellow = gcnew SolidBrush(Color::Blue);
			break;
		case 7:
			yellow = gcnew SolidBrush(Color::Blue);
			if (c == a) yellow = gcnew SolidBrush(Color::Gray);
			if (c == b) yellow = gcnew SolidBrush(Color::Purple);
			break;
		case 8:
			yellow = gcnew SolidBrush(Color::Purple);
			if (c == a) yellow = gcnew SolidBrush(Color::White);
			if (c == b) yellow = gcnew SolidBrush(Color::Gray);
			break;
		case 9:
			yellow = gcnew SolidBrush(Color::Gray);
			if (c == a) yellow = gcnew SolidBrush(Color::Black);
			if (c == b) yellow = gcnew SolidBrush(Color::White);
			break;
		default:
			yellow = gcnew SolidBrush(Color::White);
			if (c == a) yellow = gcnew SolidBrush(Color::Brown);
			if (c == b) yellow = gcnew SolidBrush(Color::Black);
			break;
		}
		for (int i = 0; i < 75; i++)
		{
			for (int j = 0; j < 50; j++)
			{
				if (i < 25)
				{
					kolor[i, j] = 1;
					Graphics::FromImage(bmp)->FillRectangle(blue, 4 * i, 4 * j, 4, 4);
					pictureBox1->Image = bmp;
				}
				else if ( i >= 25 && i < 50)
				{
					kolor[i, j] = 2;
					Graphics::FromImage(bmp)->FillRectangle(red, 4 * i, 4 * j, 4, 4);
					pictureBox1->Image = bmp;
				}
				else
				{
					kolor[i, j] = 3;
					Graphics::FromImage(bmp)->FillRectangle(yellow, 4 * i, 4 * j, 4, 4);
					pictureBox1->Image = bmp;
				}
			}
		}
		player->SoundLocation = "muzyka.wav";
		player->Load();
		pictureBox1->Image = bmp;
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		timer1->Enabled = true;
		timer2->Enabled = true;
		timer3->Enabled = true;
		button2->Enabled = true;
		button1->Enabled = false;
		button4->Enabled = true;
		player->Play();
		muza = true;
		label1->Visible = false;
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		timer1->Enabled = false;
		timer2->Enabled = false;
		timer3->Enabled = false;
		timer4->Enabled = false;
		button2->Enabled = false;
		button1->Enabled = true;
		player->Stop();
		muza = false;
	}
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		std::random_device rd;
		std::mt19937 gen(rd());
		for (int m = 0; m < 50; m++)
		{
			for (int n = 0; n < 50; n++)
			{
				std::uniform_int_distribution<> dist(0, 74);
				int z = dist(gen);
				std::uniform_int_distribution<> cos(0, 49);
				int x = cos(gen);
				if (z != 0 && x != 0 && z != 74 && x != 49)
				{
					if (kolor[z, x] == 1)
					{
						std::uniform_int_distribution<> dist(1, 3);
						int a = dist(gen);
						for (int i = 0; i < a; i++)
						{
							std::uniform_int_distribution<> dist(1, 8);
							int b = dist(gen);
							switch (b)
							{
							case 1:
								kolor[z - 1, x - 1] = 1;
								Graphics::FromImage(bmp)->FillRectangle(blue, 4 * (z - 1), 4 * (x - 1), 4, 4);
								pictureBox1->Image = bmp;
								break;
							case 2:
								kolor[z - 1, x] = 1;
								Graphics::FromImage(bmp)->FillRectangle(blue, 4 * (z - 1), 4 * (x), 4, 4);
								pictureBox1->Image = bmp;
								break;
							case 3:
								kolor[z - 1, x + 1] = 1;
								Graphics::FromImage(bmp)->FillRectangle(blue, 4 * (z - 1), 4 * (x + 1), 4, 4);
								pictureBox1->Image = bmp;
								break;
							case 4:
								kolor[z, x - 1] = 1;
								Graphics::FromImage(bmp)->FillRectangle(blue, 4 * (z), 4 * (x - 1), 4, 4);
								pictureBox1->Image = bmp;
								break;
							case 5:
								kolor[z, x + 1] = 1;
								Graphics::FromImage(bmp)->FillRectangle(blue, 4 * (z), 4 * (x + 1), 4, 4);
								pictureBox1->Image = bmp;
								break;
							case 6:
								kolor[z + 1, x - 1] = 1;
								Graphics::FromImage(bmp)->FillRectangle(blue, 4 * (z + 1), 4 * (x - 1), 4, 4);
								pictureBox1->Image = bmp;
								break;
							case 7:
								kolor[z + 1, x] = 1;
								Graphics::FromImage(bmp)->FillRectangle(blue, 4 * (z + 1), 4 * (x), 4, 4);
								pictureBox1->Image = bmp;
								break;
							default:
								kolor[z + 1, x + 1] = 1;
								Graphics::FromImage(bmp)->FillRectangle(blue, 4 * (z + 1), 4 * (x + 1), 4, 4);
								pictureBox1->Image = bmp;
								break;
							}
						}
					}
					else if (kolor[z, x] == 2)
					{
						std::uniform_int_distribution<> dist(1, 3);
						int a = dist(gen);
						for (int i = 0; i < a; i++)
						{
							std::uniform_int_distribution<> dist(1, 8);
							int b = dist(gen);
							switch (b)
							{
							case 1:
								kolor[z - 1, x - 1] = 2;
								Graphics::FromImage(bmp)->FillRectangle(red, 4 * (z - 1), 4 * (x - 1), 4, 4);
								pictureBox1->Image = bmp;
								break;
							case 2:
								kolor[z - 1, x] = 2;
								Graphics::FromImage(bmp)->FillRectangle(red, 4 * (z - 1), 4 * (x), 4, 4);
								pictureBox1->Image = bmp;
								break;
							case 3:
								kolor[z - 1, x + 1] = 2;
								Graphics::FromImage(bmp)->FillRectangle(red, 4 * (z - 1), 4 * (x + 1), 4, 4);
								pictureBox1->Image = bmp;
								break;
							case 4:
								kolor[z, x - 1] = 2;
								Graphics::FromImage(bmp)->FillRectangle(red, 4 * (z), 4 * (x - 1), 4, 4);
								pictureBox1->Image = bmp;
								break;
							case 5:
								kolor[z, x + 1] = 2;
								Graphics::FromImage(bmp)->FillRectangle(red, 4 * (z), 4 * (x + 1), 4, 4);
								pictureBox1->Image = bmp;
								break;
							case 6:
								kolor[z + 1, x - 1] = 2;
								Graphics::FromImage(bmp)->FillRectangle(red, 4 * (z + 1), 4 * (x - 1), 4, 4);
								pictureBox1->Image = bmp;
								break;
							case 7:
								kolor[z + 1, x] = 2;
								Graphics::FromImage(bmp)->FillRectangle(red, 4 * (z + 1), 4 * (x), 4, 4);
								pictureBox1->Image = bmp;
								break;
							default:
								kolor[z + 1, x + 1] = 2;
								Graphics::FromImage(bmp)->FillRectangle(red, 4 * (z + 1), 4 * (x + 1), 4, 4);
								pictureBox1->Image = bmp;
								break;
							}
						}
					}
					else
					{
						std::uniform_int_distribution<> dist(1, 3);
						int a = dist(gen);
						for (int i = 0; i < a; i++)
						{
							std::uniform_int_distribution<> dist(1, 8);
							int b = dist(gen);
							switch (b)
							{
							case 1:
								kolor[z - 1, x - 1] = 3;
								Graphics::FromImage(bmp)->FillRectangle(yellow, 4 * (z - 1), 4 * (x - 1), 4, 4);
								pictureBox1->Image = bmp;
								break;
							case 2:
								kolor[z - 1, x] = 3;
								Graphics::FromImage(bmp)->FillRectangle(yellow, 4 * (z - 1), 4 * (x), 4, 4);
								pictureBox1->Image = bmp;
								break;
							case 3:
								kolor[z - 1, x + 1] = 3;
								Graphics::FromImage(bmp)->FillRectangle(yellow, 4 * (z - 1), 4 * (x + 1), 4, 4);
								pictureBox1->Image = bmp;
								break;
							case 4:
								kolor[z, x - 1] = 3;
								Graphics::FromImage(bmp)->FillRectangle(yellow, 4 * (z), 4 * (x - 1), 4, 4);
								pictureBox1->Image = bmp;
								break;
							case 5:
								kolor[z, x + 1] = 3;
								Graphics::FromImage(bmp)->FillRectangle(yellow, 4 * (z), 4 * (x + 1), 4, 4);
								pictureBox1->Image = bmp;
								break;
							case 6:
								kolor[z + 1, x - 1] = 3;
								Graphics::FromImage(bmp)->FillRectangle(yellow, 4 * (z + 1), 4 * (x - 1), 4, 4);
								pictureBox1->Image = bmp;
								break;
							case 7:
								kolor[z + 1, x] = 3;
								Graphics::FromImage(bmp)->FillRectangle(yellow, 4 * (z + 1), 4 * (x), 4, 4);
								pictureBox1->Image = bmp;
								break;
							default:
								kolor[z + 1, x + 1] = 3;
								Graphics::FromImage(bmp)->FillRectangle(yellow, 4 * (z + 1), 4 * (x + 1), 4, 4);
								pictureBox1->Image = bmp;
								break;
							}
						}
					}
				}
				else if (x != 0 && x != 49)
				{
					if (z == 0)
					{
						if (kolor[z, x] == 1)
						{
							std::uniform_int_distribution<> dist(1, 3);
							int a = dist(gen);
							for (int i = 0; i < a; i++)
							{
								std::uniform_int_distribution<> dist(1, 8);
								int b = dist(gen);
								switch (b)
								{
								case 1:
									kolor[74, x - 1] = 1;
									Graphics::FromImage(bmp)->FillRectangle(blue, 4 * 74, 4 * (x - 1), 4, 4);
									pictureBox1->Image = bmp;
									break;
								case 2:
									kolor[74, x] = 1;
									Graphics::FromImage(bmp)->FillRectangle(blue, 4 * 74, 4 * (x), 4, 4);
									pictureBox1->Image = bmp;
									break;
								case 3:
									kolor[74, x + 1] = 1;
									Graphics::FromImage(bmp)->FillRectangle(blue, 4 * 74, 4 * (x + 1), 4, 4);
									pictureBox1->Image = bmp;
									break;
								case 4:
									kolor[z, x - 1] = 1;
									Graphics::FromImage(bmp)->FillRectangle(blue, 4 * (z), 4 * (x - 1), 4, 4);
									pictureBox1->Image = bmp;
									break;
								case 5:
									kolor[z, x + 1] = 1;
									Graphics::FromImage(bmp)->FillRectangle(blue, 4 * (z), 4 * (x + 1), 4, 4);
									pictureBox1->Image = bmp;
									break;
								case 6:
									kolor[z + 1, x - 1] = 1;
									Graphics::FromImage(bmp)->FillRectangle(blue, 4 * (z + 1), 4 * (x - 1), 4, 4);
									pictureBox1->Image = bmp;
									break;
								case 7:
									kolor[z + 1, x] = 1;
									Graphics::FromImage(bmp)->FillRectangle(blue, 4 * (z + 1), 4 * (x), 4, 4);
									pictureBox1->Image = bmp;
									break;
								default:
									kolor[z + 1, x + 1] = 1;
									Graphics::FromImage(bmp)->FillRectangle(blue, 4 * (z + 1), 4 * (x + 1), 4, 4);
									pictureBox1->Image = bmp;
									break;
								}
							}
						}
						else if (kolor[z, x] == 2)
						{
							std::uniform_int_distribution<> dist(1, 3);
							int a = dist(gen);
							for (int i = 0; i < a; i++)
							{
								std::uniform_int_distribution<> dist(1, 8);
								int b = dist(gen);
								switch (b)
								{
								case 1:
									kolor[74, x - 1] = 2;
									Graphics::FromImage(bmp)->FillRectangle(red, 4 * 74, 4 * (x - 1), 4, 4);
									pictureBox1->Image = bmp;
									break;
								case 2:
									kolor[74, x] = 2;
									Graphics::FromImage(bmp)->FillRectangle(red, 4 * 74, 4 * (x), 4, 4);
									pictureBox1->Image = bmp;
									break;
								case 3:
									kolor[74, x + 1] = 2;
									Graphics::FromImage(bmp)->FillRectangle(red, 4 * 74, 4 * (x + 1), 4, 4);
									pictureBox1->Image = bmp;
									break;
								case 4:
									kolor[z, x - 1] = 2;
									Graphics::FromImage(bmp)->FillRectangle(red, 4 * (z), 4 * (x - 1), 4, 4);
									pictureBox1->Image = bmp;
									break;
								case 5:
									kolor[z, x + 1] = 2;
									Graphics::FromImage(bmp)->FillRectangle(red, 4 * (z), 4 * (x + 1), 4, 4);
									pictureBox1->Image = bmp;
									break;
								case 6:
									kolor[z + 1, x - 1] = 2;
									Graphics::FromImage(bmp)->FillRectangle(red, 4 * (z + 1), 4 * (x - 1), 4, 4);
									pictureBox1->Image = bmp;
									break;
								case 7:
									kolor[z + 1, x] = 2;
									Graphics::FromImage(bmp)->FillRectangle(red, 4 * (z + 1), 4 * (x), 4, 4);
									pictureBox1->Image = bmp;
									break;
								default:
									kolor[z + 1, x + 1] = 2;
									Graphics::FromImage(bmp)->FillRectangle(red, 4 * (z + 1), 4 * (x + 1), 4, 4);
									pictureBox1->Image = bmp;
									break;
								}
							}
						}
						else
						{
							std::uniform_int_distribution<> dist(1, 3);
							int a = dist(gen);
							for (int i = 0; i < a; i++)
							{
								std::uniform_int_distribution<> dist(1, 8);
								int b = dist(gen);
								switch (b)
								{
								case 1:
									kolor[74, x - 1] = 3;
									Graphics::FromImage(bmp)->FillRectangle(yellow, 4 * 74, 4 * (x - 1), 4, 4);
									pictureBox1->Image = bmp;
									break;
								case 2:
									kolor[74, x] = 3;
									Graphics::FromImage(bmp)->FillRectangle(yellow, 4 * 74, 4 * (x), 4, 4);
									pictureBox1->Image = bmp;
									break;
								case 3:
									kolor[74, x + 1] = 3;
									Graphics::FromImage(bmp)->FillRectangle(yellow, 4 * 74, 4 * (x + 1), 4, 4);
									pictureBox1->Image = bmp;
									break;
								case 4:
									kolor[z, x - 1] = 3;
									Graphics::FromImage(bmp)->FillRectangle(yellow, 4 * (z), 4 * (x - 1), 4, 4);
									pictureBox1->Image = bmp;
									break;
								case 5:
									kolor[z, x + 1] = 3;
									Graphics::FromImage(bmp)->FillRectangle(yellow, 4 * (z), 4 * (x + 1), 4, 4);
									pictureBox1->Image = bmp;
									break;
								case 6:
									kolor[z + 1, x - 1] = 3;
									Graphics::FromImage(bmp)->FillRectangle(yellow, 4 * (z + 1), 4 * (x - 1), 4, 4);
									pictureBox1->Image = bmp;
									break;
								case 7:
									kolor[z + 1, x] = 3;
									Graphics::FromImage(bmp)->FillRectangle(yellow, 4 * (z + 1), 4 * (x), 4, 4);
									pictureBox1->Image = bmp;
									break;
								default:
									kolor[z + 1, x + 1] = 3;
									Graphics::FromImage(bmp)->FillRectangle(yellow, 4 * (z + 1), 4 * (x + 1), 4, 4);
									pictureBox1->Image = bmp;
									break;
								}
							}
						}
					}
					else
					{
						if (kolor[z, x] == 1)
						{
							std::uniform_int_distribution<> dist(1, 3);
							int a = dist(gen);
							for (int i = 0; i < a; i++)
							{
								std::uniform_int_distribution<> dist(1, 8);
								int b = dist(gen);
								switch (b)
								{
								case 1:
									kolor[z - 1, x - 1] = 1;
									Graphics::FromImage(bmp)->FillRectangle(blue, 4 * (z - 1), 4 * (x - 1), 4, 4);
									pictureBox1->Image = bmp;
									break;
								case 2:
									kolor[z - 1, x] = 1;
									Graphics::FromImage(bmp)->FillRectangle(blue, 4 * (z - 1), 4 * (x), 4, 4);
									pictureBox1->Image = bmp;
									break;
								case 3:
									kolor[z - 1, x + 1] = 1;
									Graphics::FromImage(bmp)->FillRectangle(blue, 4 * (z - 1), 4 * (x + 1), 4, 4);
									pictureBox1->Image = bmp;
									break;
								case 4:
									kolor[z, x - 1] = 1;
									Graphics::FromImage(bmp)->FillRectangle(blue, 4 * (z), 4 * (x - 1), 4, 4);
									pictureBox1->Image = bmp;
									break;
								case 5:
									kolor[z, x + 1] = 1;
									Graphics::FromImage(bmp)->FillRectangle(blue, 4 * (z), 4 * (x + 1), 4, 4);
									pictureBox1->Image = bmp;
									break;
								case 6:
									kolor[0, x - 1] = 1;
									Graphics::FromImage(bmp)->FillRectangle(blue, 0, 4 * (x - 1), 4, 4);
									pictureBox1->Image = bmp;
									break;
								case 7:
									kolor[0, x] = 1;
									Graphics::FromImage(bmp)->FillRectangle(blue, 0, 4 * (x), 4, 4);
									pictureBox1->Image = bmp;
									break;
								default:
									kolor[0, x + 1] = 1;
									Graphics::FromImage(bmp)->FillRectangle(blue, 0, 4 * (x + 1), 4, 4);
									pictureBox1->Image = bmp;
									break;
								}
							}
						}
						else if (kolor[z, x] == 2)
						{
							std::uniform_int_distribution<> dist(1, 3);
							int a = dist(gen);
							for (int i = 0; i < a; i++)
							{
								std::uniform_int_distribution<> dist(1, 8);
								int b = dist(gen);
								switch (b)
								{
								case 1:
									kolor[z - 1, x - 1] = 2;
									Graphics::FromImage(bmp)->FillRectangle(red, 4 * (z - 1), 4 * (x - 1), 4, 4);
									pictureBox1->Image = bmp;
									break;
								case 2:
									kolor[z - 1, x] = 2;
									Graphics::FromImage(bmp)->FillRectangle(red, 4 * (z - 1), 4 * (x), 4, 4);
									pictureBox1->Image = bmp;
									break;
								case 3:
									kolor[z - 1, x + 1] = 2;
									Graphics::FromImage(bmp)->FillRectangle(red, 4 * (z - 1), 4 * (x + 1), 4, 4);
									pictureBox1->Image = bmp;
									break;
								case 4:
									kolor[z, x - 1] = 2;
									Graphics::FromImage(bmp)->FillRectangle(red, 4 * (z), 4 * (x - 1), 4, 4);
									pictureBox1->Image = bmp;
									break;
								case 5:
									kolor[z, x + 1] = 2;
									Graphics::FromImage(bmp)->FillRectangle(red, 4 * (z), 4 * (x + 1), 4, 4);
									pictureBox1->Image = bmp;
									break;
								case 6:
									kolor[0, x - 1] = 2;
									Graphics::FromImage(bmp)->FillRectangle(red, 0, 4 * (x - 1), 4, 4);
									pictureBox1->Image = bmp;
									break;
								case 7:
									kolor[0, x] = 2;
									Graphics::FromImage(bmp)->FillRectangle(red, 0, 4 * (x), 4, 4);
									pictureBox1->Image = bmp;
									break;
								default:
									kolor[0, x + 1] = 2;
									Graphics::FromImage(bmp)->FillRectangle(red, 0, 4 * (x + 1), 4, 4);
									pictureBox1->Image = bmp;
									break;
								}
							}
						}
						else
						{
							std::uniform_int_distribution<> dist(1, 3);
							int a = dist(gen);
							for (int i = 0; i < a; i++)
							{
								std::uniform_int_distribution<> dist(1, 8);
								int b = dist(gen);
								switch (b)
								{
								case 1:
									kolor[z - 1, x - 1] = 3;
									Graphics::FromImage(bmp)->FillRectangle(yellow, 4 * (z - 1), 4 * (x - 1), 4, 4);
									pictureBox1->Image = bmp;
									break;
								case 2:
									kolor[z - 1, x] = 3;
									Graphics::FromImage(bmp)->FillRectangle(yellow, 4 * (z - 1), 4 * (x), 4, 4);
									pictureBox1->Image = bmp;
									break;
								case 3:
									kolor[z - 1, x + 1] = 3;
									Graphics::FromImage(bmp)->FillRectangle(yellow, 4 * (z - 1), 4 * (x + 1), 4, 4);
									pictureBox1->Image = bmp;
									break;
								case 4:
									kolor[z, x - 1] = 3;
									Graphics::FromImage(bmp)->FillRectangle(yellow, 4 * (z), 4 * (x - 1), 4, 4);
									pictureBox1->Image = bmp;
									break;
								case 5:
									kolor[z, x + 1] = 3;
									Graphics::FromImage(bmp)->FillRectangle(yellow, 4 * (z), 4 * (x + 1), 4, 4);
									pictureBox1->Image = bmp;
									break;
								case 6:
									kolor[0, x - 1] = 3;
									Graphics::FromImage(bmp)->FillRectangle(yellow, 0, 4 * (x - 1), 4, 4);
									pictureBox1->Image = bmp;
									break;
								case 7:
									kolor[0, x] = 3;
									Graphics::FromImage(bmp)->FillRectangle(yellow, 0, 4 * (x), 4, 4);
									pictureBox1->Image = bmp;
									break;
								default:
									kolor[0, x + 1] = 3;
									Graphics::FromImage(bmp)->FillRectangle(yellow, 0, 4 * (x + 1), 4, 4);
									pictureBox1->Image = bmp;
									break;
								}
							}
						}
					}
				}
			}
		}
		bool wygrana=true;
		for (int i = 0; i < 75; i++)
		{
			for (int j = 0; j < 50; j++)
			{
				if (kolor[0, 0] != kolor[i, j]) wygrana = false;
			}
		}
		if (wygrana == true)
		{
			if (kolor[0, 0] == 1) label1->Text = "Wygra³ lewy";
			else if (kolor[0, 0] == 2) label1->Text = "Wygra³ œrodkowy";
			else label1->Text = "Wygra³ prawy";
			label1->Visible = true;
		}
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		timer1->Enabled = false;
		button1->Enabled = true;
		std::random_device rd;
		std::mt19937 gen(rd());
		std::uniform_int_distribution<> dist(0, 10);
		int a = dist(gen);
		switch (a)
		{
		case 0:
			blue = gcnew SolidBrush(Color::Black);
			break;
		case 1:
			blue = gcnew SolidBrush(Color::Brown);
			break;
		case 3:
			blue = gcnew SolidBrush(Color::Red);
			break;
		case 4:
			blue = gcnew SolidBrush(Color::Orange);
			break;
		case 5:
			blue = gcnew SolidBrush(Color::Yellow);
			break;
		case 6:
			blue = gcnew SolidBrush(Color::Green);
			break;
		case 7:
			blue = gcnew SolidBrush(Color::Blue);
			break;
		case 8:
			blue = gcnew SolidBrush(Color::Purple);
			break;
		case 9:
			blue = gcnew SolidBrush(Color::Gray);
			break;
		default:
			blue = gcnew SolidBrush(Color::White);
			break;
		}
		int b = dist(gen);
		switch (b)
		{
		case 0:
			red = gcnew SolidBrush(Color::Black);
			if (a == b) red = gcnew SolidBrush(Color::Brown);
			break;
		case 1:
			red = gcnew SolidBrush(Color::Brown);
			if (a == b) red = gcnew SolidBrush(Color::Red);
			break;
		case 3:
			red = gcnew SolidBrush(Color::Red);
			if (a == b) red = gcnew SolidBrush(Color::Orange);
			break;
		case 4:
			red = gcnew SolidBrush(Color::Orange);
			if (a == b) red = gcnew SolidBrush(Color::Yellow);
			break;
		case 5:
			red = gcnew SolidBrush(Color::Yellow);
			if (a == b) red = gcnew SolidBrush(Color::Green);
			break;
		case 6:
			red = gcnew SolidBrush(Color::Green);
			if (a == b) red = gcnew SolidBrush(Color::Blue);
			break;
		case 7:
			red = gcnew SolidBrush(Color::Blue);
			if (a == b) red = gcnew SolidBrush(Color::Purple);
			break;
		case 8:
			red = gcnew SolidBrush(Color::Purple);
			if (a == b) red = gcnew SolidBrush(Color::Gray);
			break;
		case 9:
			red = gcnew SolidBrush(Color::Gray);
			if (a == b) red = gcnew SolidBrush(Color::White);
			break;
		default:
			red = gcnew SolidBrush(Color::White);
			if (a == b) red = gcnew SolidBrush(Color::Black);
			break;
		}
		int c = dist(gen);
		switch (c)
		{
		case 0:
			yellow = gcnew SolidBrush(Color::Black);
			if (c == a) yellow = gcnew SolidBrush(Color::Red);
			if (c == b) yellow = gcnew SolidBrush(Color::Brown);
			break;
		case 1:
			yellow = gcnew SolidBrush(Color::Brown);
			if (c == a) yellow = gcnew SolidBrush(Color::Orange);
			if (c == b) yellow = gcnew SolidBrush(Color::Red);
			break;
		case 3:
			yellow = gcnew SolidBrush(Color::Red);
			if (c == a) yellow = gcnew SolidBrush(Color::Yellow);
			if (c == b) yellow = gcnew SolidBrush(Color::Green);
			break;
		case 4:
			yellow = gcnew SolidBrush(Color::Orange);
			if (c == a) yellow = gcnew SolidBrush(Color::Green);
			if (c == b) yellow = gcnew SolidBrush(Color::Yellow);
			break;
		case 5:
			yellow = gcnew SolidBrush(Color::Yellow);
			if (c == a) yellow = gcnew SolidBrush(Color::Blue);
			if (c == b) yellow = gcnew SolidBrush(Color::Green);
			break;
		case 6:
			yellow = gcnew SolidBrush(Color::Green);
			if (c == a) yellow = gcnew SolidBrush(Color::Purple);
			if (c == b) yellow = gcnew SolidBrush(Color::Blue);
			break;
		case 7:
			yellow = gcnew SolidBrush(Color::Blue);
			if (c == a) yellow = gcnew SolidBrush(Color::Gray);
			if (c == b) yellow = gcnew SolidBrush(Color::Purple);
			break;
		case 8:
			yellow = gcnew SolidBrush(Color::Purple);
			if (c == a) yellow = gcnew SolidBrush(Color::White);
			if (c == b) yellow = gcnew SolidBrush(Color::Gray);
			break;
		case 9:
			yellow = gcnew SolidBrush(Color::Gray);
			if (c == a) yellow = gcnew SolidBrush(Color::Black);
			if (c == b) yellow = gcnew SolidBrush(Color::White);
			break;
		default:
			yellow = gcnew SolidBrush(Color::White);
			if (c == a) yellow = gcnew SolidBrush(Color::Brown);
			if (c == b) yellow = gcnew SolidBrush(Color::Black);
			break;
		}
		for (int i = 0; i < 75; i++)
		{
			for (int j = 0; j < 50; j++)
			{
				if (i < 25)
				{
					kolor[i, j] = 1;
					Graphics::FromImage(bmp)->FillRectangle(blue, 4 * i, 4 * j, 4, 4);
					pictureBox1->Image = bmp;
				}
				else if (i >= 25 && i < 50)
				{
					kolor[i, j] = 2;
					Graphics::FromImage(bmp)->FillRectangle(red, 4 * i, 4 * j, 4, 4);
					pictureBox1->Image = bmp;
				}
				else
				{
					kolor[i, j] = 3;
					Graphics::FromImage(bmp)->FillRectangle(yellow, 4 * i, 4 * j, 4, 4);
					pictureBox1->Image = bmp;
				}
			}
		}
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		if (muza == true)
		{
			player->Stop();
			muza = false;
			timer2->Enabled = false;
			timer3->Enabled = false;
			timer4->Enabled = false;
		}
		else
		{
			player->Play();
			muza = true;
			timer2->Enabled = true;
			timer3->Enabled = true;
		}

	}
	private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {
		if (bump == false)
		{
			Pen^ equa = gcnew Pen(Color::LightGreen, 1.0f);
			int b;
			for (int a = 25; a < 325; a = a + 3)
			{
				std::random_device rd;
				std::mt19937 gen(rd());
				std::uniform_int_distribution<> dist(0, 25);
				b = dist(gen);
				Point point1 = Point(a, 25);
				Point point2 = Point(a, b);
				Point point3 = Point(a + 1, 25);
				Point point4 = Point(a + 1, b);
				Point point5 = Point(a + 2, 25);
				Point point6 = Point(a + 2, b);
				Graphics::FromImage(bmp2)->DrawLine(equa, point1, point2);
				Graphics::FromImage(bmp2)->DrawLine(equa, point3, point4);
				Graphics::FromImage(bmp2)->DrawLine(equa, point5, point6);
				b = dist(gen);
				if (a < 225)
				{
					point1 = Point(325, a);
					point2 = Point(325 + b, a);
					point3 = Point(325, a + 1);
					point4 = Point(325 + b, a + 1);
					point5 = Point(325, a + 2);
					point6 = Point(325 + b, a + 2);
					Graphics::FromImage(bmp2)->DrawLine(equa, point1, point2);
					Graphics::FromImage(bmp2)->DrawLine(equa, point3, point4);
					Graphics::FromImage(bmp2)->DrawLine(equa, point5, point6);
				}
				b = dist(gen);
				if (a < 225)
				{
					point1 = Point(25, a);
					point2 = Point(b, a);
					point3 = Point(25, a + 1);
					point4 = Point(b, a + 1);
					point5 = Point(25, a + 2);
					point6 = Point(b, a + 2);
					Graphics::FromImage(bmp2)->DrawLine(equa, point1, point2);
					Graphics::FromImage(bmp2)->DrawLine(equa, point3, point4);
					Graphics::FromImage(bmp2)->DrawLine(equa, point5, point6);
				}
				b = dist(gen);
				point1 = Point(a, 225);
				point2 = Point(a, 225 + b);
				point3 = Point(a + 1, 225);
				point4 = Point(a + 1, 225 + b);
				point5 = Point(a + 2, 225);
				point6 = Point(a + 2, 225 + b);
				Graphics::FromImage(bmp2)->DrawLine(equa, point1, point2);
				Graphics::FromImage(bmp2)->DrawLine(equa, point3, point4);
				Graphics::FromImage(bmp2)->DrawLine(equa, point5, point6);
				pictureBox2->Image = bmp2;
			}
			bump = true;
		}
		else
		{
			SolidBrush^ white = gcnew SolidBrush(tlo);
			Graphics::FromImage(bmp2)->FillRectangle(white, 0, 0, 350, 250);
			bump = false;
		}
	}
	private: System::Void timer3_Tick(System::Object^  sender, System::EventArgs^  e) {
		timer4->Enabled = true;
		timer3->Enabled = false;
	}
	private: System::Void timer4_Tick(System::Object^  sender, System::EventArgs^  e) {
		if (bump2 == false)
		{
			tlo = Color::Pink;
			SolidBrush^ white = gcnew SolidBrush(tlo);
			Graphics::FromImage(bmp2)->FillRectangle(white, 0, 0, 350, 250);
			this->BackColor = Color::Pink;
			bump2 = true;
		}
		else
		{
			tlo = Color::WhiteSmoke;
			SolidBrush^ white = gcnew SolidBrush(tlo);
			Graphics::FromImage(bmp2)->FillRectangle(white, 0, 0, 350, 250);
			this->BackColor = Color::WhiteSmoke;
			bump2 = false;
		}
	}
	};
}
