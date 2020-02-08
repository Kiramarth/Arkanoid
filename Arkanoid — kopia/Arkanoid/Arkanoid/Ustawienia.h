#pragma once

namespace Arkanoid {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o Ustawienia
	/// </summary>
	public ref class Ustawienia : public System::Windows::Forms::Form
	{
	public:
		Ustawienia(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~Ustawienia()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	public: System::Windows::Forms::Button^  sounds;

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Wymagana metoda obs³ugi projektanta — nie nale¿y modyfikowaæ 
		/// zawartoœæ tej metody z edytorem kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->sounds = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(29, 162);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(140, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Wróæ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Ustawienia::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(29, 120);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(140, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Difficulty Normal";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Ustawienia::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(29, 77);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(140, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"poziom 1";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Ustawienia::button3_Click);
			// 
			// button4
			// 
			this->sounds->Location = System::Drawing::Point(29, 40);
			this->sounds->Name = L"button4";
			this->sounds->Size = System::Drawing::Size(140, 23);
			this->sounds->TabIndex = 3;
			this->sounds->Text = L"sound on";
			this->sounds->UseVisualStyleBackColor = true;
			this->sounds->Click += gcnew System::EventHandler(this, &Ustawienia::button4_Click);
			// 
			// Ustawienia
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 253);
			this->Controls->Add(this->sounds);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Ustawienia";
			this->Text = L"Ustawienia - Arkanoid";
			this->Load += gcnew System::EventHandler(this, &Ustawienia::Ustawienia_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Ustawienia_Load(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		/*if (sounds->Text == L"Sound off")
		{
			sounds->Text = L"Sound on";
		}
		else
		{
			sounds->Text = L"Sound off";
		}
		*/
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		/*if (sounds->Text == L"Sound off")
		{
			sounds->Text = L"Sound on";
		}
		else
		{
			sounds->Text = L"Sound off";
		}
		*/
	}
public: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	if (sounds->Text == L"Sound off")
	{
		sounds->Text = L"Sound on";
	}
	else
	{
		sounds->Text = L"Sound off";
	}
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
};
}
