#pragma once

namespace HeapVisualisation {

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
	private: System::Windows::Forms::Label^ TestLabel;
	private: System::Windows::Forms::Button^ InsertButton;
	private: System::Windows::Forms::Button^ DeleteButton;
	private: System::Windows::Forms::TextBox^ InsertTextBox;
	private: System::Windows::Forms::TextBox^ DeleteTextBox;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->TestLabel = (gcnew System::Windows::Forms::Label());
			this->InsertButton = (gcnew System::Windows::Forms::Button());
			this->DeleteButton = (gcnew System::Windows::Forms::Button());
			this->InsertTextBox = (gcnew System::Windows::Forms::TextBox());
			this->DeleteTextBox = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// TestLabel
			// 
			this->TestLabel->AutoSize = true;
			this->TestLabel->Location = System::Drawing::Point(651, 13);
			this->TestLabel->Name = L"TestLabel";
			this->TestLabel->Size = System::Drawing::Size(0, 13);
			this->TestLabel->TabIndex = 0;
			// 
			// InsertButton
			// 
			this->InsertButton->Location = System::Drawing::Point(119, 12);
			this->InsertButton->Name = L"InsertButton";
			this->InsertButton->Size = System::Drawing::Size(75, 23);
			this->InsertButton->TabIndex = 1;
			this->InsertButton->Text = L"Insert";
			this->InsertButton->UseVisualStyleBackColor = true;
			this->InsertButton->Click += gcnew System::EventHandler(this, &MyForm::InsertButton_Click);
			// 
			// DeleteButton
			// 
			this->DeleteButton->Location = System::Drawing::Point(119, 53);
			this->DeleteButton->Name = L"DeleteButton";
			this->DeleteButton->Size = System::Drawing::Size(75, 23);
			this->DeleteButton->TabIndex = 2;
			this->DeleteButton->Text = L"Delete";
			this->DeleteButton->UseVisualStyleBackColor = true;
			this->DeleteButton->Click += gcnew System::EventHandler(this, &MyForm::DeleteButton_Click);
			// 
			// InsertTextBox
			// 
			this->InsertTextBox->Location = System::Drawing::Point(13, 13);
			this->InsertTextBox->Name = L"InsertTextBox";
			this->InsertTextBox->Size = System::Drawing::Size(100, 20);
			this->InsertTextBox->TabIndex = 3;
			this->InsertTextBox->Text = L"Enter value to insert";
			this->InsertTextBox->Click += gcnew System::EventHandler(this, &MyForm::InsertTextBox_Click);
			this->InsertTextBox->TextChanged += gcnew System::EventHandler(this, &MyForm::InsertTextBox_TextChanged);
			this->InsertTextBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::InsertTextBox_KeyPress);
			// 
			// DeleteTextBox
			// 
			this->DeleteTextBox->Location = System::Drawing::Point(13, 53);
			this->DeleteTextBox->Name = L"DeleteTextBox";
			this->DeleteTextBox->Size = System::Drawing::Size(100, 20);
			this->DeleteTextBox->TabIndex = 4;
			this->DeleteTextBox->Text = L"Enter value to delete";
			this->DeleteTextBox->Click += gcnew System::EventHandler(this, &MyForm::DeleteTextBox_Click);
			this->DeleteTextBox->TextChanged += gcnew System::EventHandler(this, &MyForm::DeleteTextBox_TextChanged);
			this->DeleteTextBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::DeleteTextBox_KeyPress);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(663, 413);
			this->Controls->Add(this->DeleteTextBox);
			this->Controls->Add(this->InsertTextBox);
			this->Controls->Add(this->DeleteButton);
			this->Controls->Add(this->InsertButton);
			this->Controls->Add(this->TestLabel);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Heap Visualisation";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void InsertButton_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ InputTest = InsertTextBox->Text;
		TestLabel->Text = "Value " + InsertTextBox->Text + " was inserted";
	}


	private: System::Void DeleteButton_Click(System::Object^ sender, System::EventArgs^ e) {
		TestLabel->Text = "Value " + DeleteTextBox->Text + " was deleted";
	}


	private: System::Void InsertTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}




private: System::Void InsertTextBox_Click(System::Object^ sender, System::EventArgs^ e) {
	InsertTextBox->Text = "";
}


private: System::Void DeleteTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}


private: System::Void DeleteTextBox_Click(System::Object^ sender, System::EventArgs^ e) {
	DeleteTextBox->Text = "";
}


private: System::Void InsertTextBox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	//Accepts only digits and the Backspace character
	if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
		e->Handled = true;
}


private: System::Void DeleteTextBox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	//Accepts only digits and the Backspace character
	if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
		e->Handled = true;
}
};
}
