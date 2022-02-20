#pragma once

#include <iostream>
#include <msclr\marshal_cppstd.h>
#include <string.h>
#include <string>

namespace Client {

	using namespace System::Text;
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Net;
	using namespace System::Net::Sockets;
	using namespace System::IO;
	using namespace System::Threading;
	using namespace System::Collections::Generic;
	using namespace System::Runtime::Serialization::Formatters::Binary;
	using namespace System::Runtime::Serialization;


	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			connect();
			//send("@c@new_user@");
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
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ dis_con;
	protected:



	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ con;

	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ port_room;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::TabControl^ tabControl2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::ListBox^ listBox3;







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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->dis_con = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->con = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->port_room = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabControl2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(16, 124);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox1->Size = System::Drawing::Size(501, 310);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// dis_con
			// 
			this->dis_con->Location = System::Drawing::Point(879, 446);
			this->dis_con->Name = L"dis_con";
			this->dis_con->Size = System::Drawing::Size(220, 47);
			this->dis_con->TabIndex = 3;
			this->dis_con->Text = L"Disconnect";
			this->dis_con->UseVisualStyleBackColor = true;
			this->dis_con->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(440, 448);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(84, 55);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Send";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(16, 448);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(418, 55);
			this->textBox2->TabIndex = 7;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// con
			// 
			this->con->Location = System::Drawing::Point(653, 446);
			this->con->Name = L"con";
			this->con->Size = System::Drawing::Size(220, 47);
			this->con->TabIndex = 10;
			this->con->Text = L"Connect";
			this->con->UseVisualStyleBackColor = true;
			this->con->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 29;
			this->listBox1->Location = System::Drawing::Point(6, 6);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(478, 323);
			this->listBox1->TabIndex = 11;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(101, 21);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(144, 49);
			this->textBox3->TabIndex = 12;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(17, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(78, 29);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Name";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(269, 21);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(105, 49);
			this->button5->TabIndex = 14;
			this->button5->Text = L"Rename";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(11, 92);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(78, 29);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Room";
			// 
			// port_room
			// 
			this->port_room->AutoSize = true;
			this->port_room->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->port_room->Location = System::Drawing::Point(85, 92);
			this->port_room->Name = L"port_room";
			this->port_room->Size = System::Drawing::Size(116, 29);
			this->port_room->TabIndex = 16;
			this->port_room->Text = L"No Room";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabControl1->Location = System::Drawing::Point(0, -5);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1214, 560);
			this->tabControl1->TabIndex = 18;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->tabControl2);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->con);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->dis_con);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->button5);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->port_room);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Location = System::Drawing::Point(4, 34);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1206, 522);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Chatting";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &MyForm::tabPage1_Click_1);
			// 
			// tabControl2
			// 
			this->tabControl2->Controls->Add(this->tabPage3);
			this->tabControl2->Controls->Add(this->tabPage4);
			this->tabControl2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabControl2->Location = System::Drawing::Point(615, 68);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(501, 366);
			this->tabControl2->TabIndex = 17;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->listBox1);
			this->tabPage3->Location = System::Drawing::Point(4, 34);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(493, 328);
			this->tabPage3->TabIndex = 0;
			this->tabPage3->Text = L"Room";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->listBox3);
			this->tabPage4->Location = System::Drawing::Point(4, 34);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(493, 328);
			this->tabPage4->TabIndex = 1;
			this->tabPage4->Text = L"Thành viên";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// listBox3
			// 
			this->listBox3->FormattingEnabled = true;
			this->listBox3->ItemHeight = 25;
			this->listBox3->Location = System::Drawing::Point(4, 7);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(483, 304);
			this->listBox3->TabIndex = 0;
			this->listBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox3_SelectedIndexChanged);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->button3);
			this->tabPage2->Controls->Add(this->textBox5);
			this->tabPage2->Controls->Add(this->textBox4);
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Controls->Add(this->listBox2);
			this->tabPage2->Location = System::Drawing::Point(4, 34);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1206, 522);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"User";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(82, 25);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(137, 29);
			this->label4->TabIndex = 19;
			this->label4->Text = L"Private chat";
			// 
			// button3
			// 
			this->button3->Enabled = false;
			this->button3->Location = System::Drawing::Point(400, 413);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(95, 42);
			this->button3->TabIndex = 18;
			this->button3->Text = L"Send";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(85, 415);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(300, 40);
			this->textBox5->TabIndex = 17;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(85, 69);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox4->Size = System::Drawing::Size(410, 321);
			this->textBox4->TabIndex = 16;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(595, 25);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(64, 29);
			this->label3->TabIndex = 14;
			this->label3->Text = L"User";
			// 
			// listBox2
			// 
			this->listBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 29;
			this->listBox2->Location = System::Drawing::Point(600, 69);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(351, 323);
			this->listBox2->TabIndex = 0;
			this->listBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox2_SelectedIndexChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1215, 552);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"Client";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabControl2->ResumeLayout(false);
			this->tabPage3->ResumeLayout(false);
			this->tabPage4->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	System::String^ server;
	IPAddress^ address;
	IPEndPoint^ IP;
	Socket^ client;

	//--------------------------------------Connect---------------------------
	void connect() {
		System::String^ Ip = "127.0.0.1";
		address = IPAddress::Parse(Ip);
		IP = gcnew IPEndPoint(address, 8989);
		client = gcnew Socket(AddressFamily::InterNetwork, SocketType::Stream, ProtocolType::IP);
		
		try
		{
			client->Connect(IP);
		}
		catch (const std::exception&)
		{
			MessageBox::Show("Khong the ket noi");
			return;
		}
		System::Threading::Thread^ T = gcnew System::Threading::Thread(gcnew System::Threading::ParameterizedThreadStart(this, &MyForm::receive));
		T->IsBackground = true;
		T->Start();
	}

	//--------------------------------------End_connect-----------------------

	//--------------------------------------Send------------------------------
	void send(Object^ data) {

		client->Send(obj_to_byte(data));
		//textBox1->Text += data + "\r\n";


	}

	//--------------------------------------End_Send---------------------------

	//--------------------------------------receive------------------------------
	void receive(Object^ e) {
		Socket^ t = dynamic_cast<Socket^>(e);
		try
		{	
			while (true)
			{
				cli::array<System::Byte>^ data = gcnew cli::array<System::Byte>(100000);
				client->Receive(data);


				Object^ mes = byte_to_ojb(data);
				System::String^ con = cli::safe_cast<System::String^>(mes);
				msclr::interop::marshal_context context;
				std::string flag = context.marshal_as<std::string>(con);
				

				//------------------Command------
				if (flag[0] == '@' && flag[1] == 'c' && flag[2] == '@') {

					//--------------End_rename---------
					if (flag.find("@end_rename@") != string::npos) {
						textBox3->Text = "";
						int e = 0;
						for each (auto i in con)
						{
							e++;
							if (e >= 15) {
								textBox3->Text += i;
							}	
						}
					}
					//--------------List_user---------
					if (flag.find("@list@") != string::npos) {
						listBox2->Items->Clear();
						int e = 0;
						String^ a = "";
						for each (auto i in con)
						{
							e++;
							if (e >= 9) {
								if (i != '#') {
									a += i;
								}
								else
								{
									listBox2->Items->Add(a);
									a = "";
								}	
							}
						}
					}

					//--------------List_room---------
					if (flag.find("@list_room@") != string::npos) {
						listBox3->Items->Clear();
						int e = 0;
						String^ a = "";
						for each (auto i in con)
						{
							e++;
							if (e >= 14) {
								if (i != '#') {
									a += i;
								}
								else
								{
									listBox3->Items->Add(a);
									a = "";
								}
							}
						}
					}
				}
				//------------------Chatting------
				else if(con[0] == '@' && con[1] == 'm' && con[2] == '@')
				{
					int e = 0;
					String^ a = "";
					for each (auto i in con)
					{
						e++;
						if (e >= 6) {
							a += i;
						}
					}
					textBox1->Text +=  a + "\r\n";
				}

				//------------------Private_Chatting------
				else if (con[0] == '@' && con[1] == 'p' && con[2] == '@')
				{
					int e = 0;
					String^ a = "";
					for each (auto i in con)
					{
						e++;
						if (e >= 3) {
							a += i;
						}
					}
					textBox4->Text += a + "\r\n";
				}
				

			}
			
		}
		catch (const std::exception&)
		{
			client->Close();
		}
		//client->Close();
		
	}

	//--------------------------------------End_receive---------------------------

	//--------------------------------------Object_to_Byte-------------------------
	cli::array<Byte>^ obj_to_byte(Object^ e) {

		MemoryStream^ stream = gcnew MemoryStream();
		BinaryFormatter^ fora = gcnew BinaryFormatter();
		fora->Serialize(stream, e);
		return stream->ToArray();
	}

	//--------------------------------------End_Object_to_Byte---------------------

	//--------------------------------------Byte_to_Object-------------------------
	Object^ byte_to_ojb(cli::array<Byte>^ e) {


		MemoryStream^ stream = gcnew MemoryStream(e);
		BinaryFormatter^ fora = gcnew BinaryFormatter();
		return fora->Deserialize(stream);

	}

	//--------------------------------------End_Byte_to_Object---------------------

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {		
		String^ text = textBox2->Text;
		//textBox1->Text += "@m@" + port_room->Text + "@" + text;
		if (text != "") {
			text = "@m@" + port_room->Text + "@" + textBox3->Text + " :" + text;
			send(text);
		};
		textBox2->Clear();


	}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {	
	System::Threading::Thread^ new_user = gcnew System::Threading::Thread(gcnew System::Threading::ParameterizedThreadStart(this, &MyForm::send));
	new_user->IsBackground = true;
	new_user->Start("@c@new_user@");
	new_user->Join();

	System::Threading::Thread^ list_user = gcnew System::Threading::Thread(gcnew System::Threading::ParameterizedThreadStart(this, &MyForm::send));
	list_user->IsBackground = true;
	list_user->Start("@c@list_user@");
	list_user->Join();

	button2->Enabled = false;
	dis_con->Enabled = false;
	listBox1->Items->Add("1");
	listBox1->Items->Add("2");
	listBox1->Items->Add("3");
	
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	button2->Enabled = true;
	textBox1->Text = "";
	con->Enabled = true;
	dis_con->Enabled = false;
	send("@c@dis_connect_room@" + port_room->Text);
	listBox3->Items->Clear();
	port_room->Text = "No Room";

}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ text = textBox3->Text;
	if (con->Enabled == false) {
		MessageBox::Show("You need disconnected your room");
	}
	else
	{
		if (listBox2->Items->Contains(textBox3->Text)) {
			MessageBox::Show("Name already exists");
		} else {
			if (textBox3->Text != "") send("@c@rename@" + text);
			MessageBox::Show("Rename success");
		}

		
	}
	
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	button2->Enabled = true;
	String^ connect_room = listBox1->SelectedItem->ToString();
	send("@c@connect_room@" + connect_room);
	port_room->Text = connect_room;
	con->Enabled = false;
	dis_con->Enabled = true;
}

private: System::Void MyForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	//client->Close();
	send("@Disconnect@");
}
private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tabPage1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void listBox3_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void listBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ private_name = listBox2->SelectedItem->ToString();
	if (private_name != textBox3->Text) {
		button3->Enabled = true;
	}
	else {
		button3->Enabled = false;
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ private_name = listBox2->SelectedItem->ToString();
	if (textBox5->Text != "") {
		send("@p@" + private_name + "@" + textBox5->Text);
		textBox5->Text = "";
	}
}
};
}
