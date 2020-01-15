#pragma once
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

ref class Node
{
public:
	PictureBox^ NodeBox;
	Label^ NodeKey;
	Node(System::Drawing::Point position, System::ComponentModel::ComponentResourceManager^ resources, String^ Key) {
		NodeBox = gcnew PictureBox();
		NodeKey = gcnew Label();
		NodeBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Node0.Image")));
		NodeBox->Location = position;
		NodeBox->Name = Key + "box";
		NodeBox->Size = System::Drawing::Size(60, 60);
		NodeBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
		NodeBox->TabIndex = 5;
		NodeKey->Location = System::Drawing::Point(NodeBox->Left + 23, NodeBox->Top + 23);
		NodeKey->BackColor = System::Drawing::Color::Transparent;
		NodeKey->Text = Key;
		NodeKey->AutoSize = true;
		NodeKey->Name = Key + "key";
		//NodeKey->BringToFront();
	}
};

