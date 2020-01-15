#pragma once
#include "Node.h"
#include "Heap.h"
#include "Static.h"

namespace HeapVisualisation {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	//MinHeap heap(64);
	Static::PositionArray* positionArray = new Static::PositionArray();
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
	private: System::Windows::Forms::PictureBox^ Node0;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->TestLabel = (gcnew System::Windows::Forms::Label());
			this->InsertButton = (gcnew System::Windows::Forms::Button());
			this->DeleteButton = (gcnew System::Windows::Forms::Button());
			this->InsertTextBox = (gcnew System::Windows::Forms::TextBox());
			this->DeleteTextBox = (gcnew System::Windows::Forms::TextBox());
			this->Node0 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Node0))->BeginInit();
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
			// Node0
			// 
			this->Node0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Node0.Image")));
			this->Node0->Location = System::Drawing::Point(545, 13);
			this->Node0->Name = L"Node0";
			this->Node0->Size = System::Drawing::Size(60, 71);
			this->Node0->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Node0->TabIndex = 5;
			this->Node0->TabStop = false;
			this->Node0->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(663, 413);
			this->Controls->Add(this->Node0);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Node0))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void InsertButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (InsertTextBox->Text != "" && InsertTextBox->Text != "Enter value to insert") {
			positionArray->numberOfElements++;
			String^ text = InsertTextBox->Text;
			int i = int::Parse(text);
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			Node^ node = gcnew Node(System::Drawing::Point(positionArray->positions[positionArray->numberOfElements].x,
				positionArray->positions[positionArray->numberOfElements].y), resources, i.ToString());
			//Node^ node = gcnew Node(System::Drawing::Point(545, 15), resources, i.ToString());
			this->Controls->Add(node->NodeBox);
			this->Controls->Add(node->NodeKey);
			node->NodeKey->BringToFront();
		}
	}


	private: System::Void DeleteButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (DeleteTextBox->Text != "" && DeleteTextBox->Text != "Enter value to delete") {
			String^ text = DeleteTextBox->Text;
			int i = int::Parse(text);
			this->Controls->RemoveByKey(i.ToString() + "box");
			this->Controls->RemoveByKey(i.ToString() + "key");
		}
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
