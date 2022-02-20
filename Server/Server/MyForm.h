#pragma once

#include <iostream>
#include <msclr\marshal_cppstd.h>
#include <string.h>
#include <string>



namespace Server {
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
			Control::CheckForIllegalCrossThreadCalls = false;
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

	protected:




	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ Room1;
	private: System::Windows::Forms::TextBox^ Room3;

	private: System::Windows::Forms::TextBox^ Room2;







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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->Room1 = (gcnew System::Windows::Forms::TextBox());
			this->Room3 = (gcnew System::Windows::Forms::TextBox());
			this->Room2 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(17, 139);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox1->Size = System::Drawing::Size(362, 331);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(84, 29);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Server";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(17, 47);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(362, 35);
			this->textBox2->TabIndex = 6;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(395, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(130, 29);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Zoom Chat";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 98);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(79, 29);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Status";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(313, 487);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(85, 55);
			this->button3->TabIndex = 14;
			this->button3->Text = L"Send";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(17, 487);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(290, 55);
			this->textBox3->TabIndex = 13;
			// 
			// Room1
			// 
			this->Room1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Room1->Location = System::Drawing::Point(422, 59);
			this->Room1->Multiline = true;
			this->Room1->Name = L"Room1";
			this->Room1->ReadOnly = true;
			this->Room1->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->Room1->Size = System::Drawing::Size(413, 228);
			this->Room1->TabIndex = 10;
			this->Room1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// Room3
			// 
			this->Room3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Room3->Location = System::Drawing::Point(586, 314);
			this->Room3->Multiline = true;
			this->Room3->Name = L"Room3";
			this->Room3->ReadOnly = true;
			this->Room3->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->Room3->Size = System::Drawing::Size(513, 228);
			this->Room3->TabIndex = 15;
			this->Room3->TextChanged += gcnew System::EventHandler(this, &MyForm::Room3_TextChanged);
			// 
			// Room2
			// 
			this->Room2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Room2->Location = System::Drawing::Point(874, 59);
			this->Room2->Multiline = true;
			this->Room2->Name = L"Room2";
			this->Room2->ReadOnly = true;
			this->Room2->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->Room2->Size = System::Drawing::Size(387, 228);
			this->Room2->TabIndex = 16;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1318, 565);
			this->Controls->Add(this->Room2);
			this->Controls->Add(this->Room3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->Room1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int n = 30;
		//char aa[100];
		//IPAddress^ address;
		IPEndPoint^ IP_main;
		Socket^ main_server;
		List<Socket^>^ clients;
		List<Object^>^ names = gcnew List<Object^>();
		int quantily_user = 0;
		int id_user = 0;
		List<Socket^>^ rooms = gcnew List<Socket^>();
		List<Socket^>^ room1 = gcnew List<Socket^>();
		List<Socket^>^ room2 = gcnew List<Socket^>();
		List<Socket^>^ room3 = gcnew List<Socket^>();

	//void connect_room() {
	//	// Room1
	//	IPEndPoint^ IP_room1 = gcnew IPEndPoint(IPAddress::Any, 1111);
	//	Socket^ server_room1 = gcnew Socket(AddressFamily::InterNetwork, SocketType::Stream, ProtocolType::IP);
	//	server_room1->Bind(IP_room1);
	//	//MessageBox::Show("Alo" + server_room1->LocalEndPoint);
	//	System::Threading::Thread^ listen1 = gcnew System::Threading::Thread(gcnew System::Threading::ParameterizedThreadStart(this, &MyForm::listen));
	//	listen1->Start(server_room1);
	//	listen1->IsBackground = true;
	//	
	//	// Room2
	//	IPEndPoint^ IP_room2 = gcnew IPEndPoint(IPAddress::Any, 2222);
	//	Socket^ server_room2 = gcnew Socket(AddressFamily::InterNetwork, SocketType::Stream, ProtocolType::IP);
	//	server_room2->Bind(IP_room2);
	//	//MessageBox::Show("Alo" + server_room2->LocalEndPoint);
	//	System::Threading::Thread^ listen2 = gcnew System::Threading::Thread(gcnew System::Threading::ParameterizedThreadStart(this, &MyForm::listen));
	//	listen2->Start(server_room2);
	//	listen2->IsBackground = true;

	//	// Room3
	//	IPEndPoint^ IP_room3 = gcnew IPEndPoint(IPAddress::Any, 3333);
	//	Socket^ server_room3 = gcnew Socket(AddressFamily::InterNetwork, SocketType::Stream, ProtocolType::IP);
	//	server_room3->Bind(IP_room3);
	//	//MessageBox::Show("Alo" + server_room3->LocalEndPoint);
	//	System::Threading::Thread^ listen3 = gcnew System::Threading::Thread(gcnew System::Threading::ParameterizedThreadStart(this, &MyForm::listen));
	//	listen3->Start(server_room3);
	//	listen3->IsBackground = true;
	//}

	void connect_server() {
		IP_main = gcnew IPEndPoint(IPAddress::Any, 8989);
		main_server = gcnew Socket(AddressFamily::InterNetwork, SocketType::Stream, ProtocolType::IP);
		System::Threading::Thread^ main_ser = gcnew System::Threading::Thread(gcnew System::Threading::ParameterizedThreadStart(this, &MyForm::connect));
		main_ser->Start(main_server);
		main_ser->IsBackground = true;
	}

	void connect(Object^ server_) {
		Socket^ server = dynamic_cast<Socket^>(server_);
		//IPEndPoint^ IP_ = dynamic_cast<IPEndPoint^>(IP);
		clients = gcnew List<Socket^>();
		//IP = gcnew IPEndPoint(IPAddress::Any, 8989);
		server = gcnew Socket(AddressFamily::InterNetwork, SocketType::Stream, ProtocolType::IP);
		server->Bind(IP_main);
		//MessageBox::Show("Alo" + server->LocalEndPoint);

		System::Threading::Thread^ listen = gcnew System::Threading::Thread(gcnew System::Threading::ParameterizedThreadStart(this, &MyForm::listen));
		listen->Start(server);
		listen->IsBackground = true;
		
	}
	void send_click() {
		for each (Socket^ t in clients) {
			send(t);
		}
	}

	void send(Socket^ t) {
		t->Send(obj_to_byte(textBox3->Text));
	}

	//--------------------------------------listen_client------------------------------
	void listen(Object^ ojb) {
		Socket^ server = dynamic_cast<Socket^>(ojb);
		try
		{
			while (true)
			{
				server->Listen(100);
				Socket^ client = server->Accept();	
				
				if(client) 
				{
					clients->Add(client);
					String^ a = n.ToString();
					textBox1->Text += client->RemoteEndPoint + " connected" + "\r\n";

					//for each (Socket ^ t in clients) {
					//	t->Send(obj_to_byte("Guest connected" + "\r\n"));
					//}
				}
				System::Threading::Thread^ aa = gcnew System::Threading::Thread(gcnew System::Threading::ParameterizedThreadStart(this, &MyForm::receive));
				aa->Start(client);
				aa->IsBackground = true;
			}
		}
		catch (const std::exception&)
		{
			IP_main = gcnew IPEndPoint(IPAddress::Any, 8989);
			server = gcnew Socket(AddressFamily::InterNetwork, SocketType::Stream, ProtocolType::IP);
		}
		

	}

	//--------------------------------------End_listen_client---------------------------
	// 
	//--------------------------------------receive------------------------------
	void receive(Object^ a) {
		Socket^ t = dynamic_cast<Socket^>(a);
		try
		{
			while (true)
			{
				cli::array<System::Byte>^ data = gcnew cli::array<System::Byte>(100000);
				t->Receive(data);
				Object^ mes = byte_to_ojb(data);
				System::String^ con = cli::safe_cast<System::String^>(mes);	
				if (con == "@Disconnect@") {
					int e1 = 0,e2 = 0;
					for each (Socket ^ it in clients)
					{
						e1++;
						if (it == t) {

							for each (String^ user_ in names)
							{
								e2++;
								if (e1 == e2) {
									names->Remove(user_);
									quantily_user--;
									break;
								}
							}
							break;
						}
					}
					textBox1->Text += t->RemoteEndPoint + " Disconnected" + "\r\n";
					t->Close();
					clients->Remove(t);
					String^ list = "@c@list@";
					for each (String ^ it in names) {
						list += it + "#";
					}
					Object^ mess = list;
					for each (Socket ^ it in clients) {
						it->Send(obj_to_byte(mess));
					}
					
					break;
				}
				else {

					msclr::interop::marshal_context context;
					std::string flag = context.marshal_as<std::string>(con);


					//------------------Command------
					if (flag[0] == '@' && flag[1] == 'c' && flag[2] == '@') {
						//------------------Rename-------
						if (flag.find("@rename@") != string::npos) {
							//string a;
							int e = 0;
							String^ a = "";
							for each (auto it in con)
							{
								e++;
								if (e >= 11) {
									a += it;
								}
							}
							names[clients->IndexOf(t)] = a;
							Object^ mess = "@c@end_rename@" + a;
							t->Send(obj_to_byte(mess));
							//----------
							String^ list = "@c@list@";
							for each (String ^ it in names) {
								list += it + "#";
							}
							Object^ mess_list = list;
							for each (Socket ^ it in clients) {
								it->Send(obj_to_byte(mess_list));
							}
						}
						//------------------Con_room-------

						if (flag.find("@connect_room@") != string::npos) {
							if (flag[flag.size() - 1] == '1') {
								room1->Add(t);
								Room1->Text += t->RemoteEndPoint + " Connect" + "\r\n";
								String^ list = "@c@list_room@";
								int index = 0;
								for each (Socket^ it in room1) {
									index = clients->IndexOf(it);
									list += names[index] + "#";
									
								}
								Object^ mess = list;
								for each (Socket ^ it in room1) {
									it->Send(obj_to_byte(mess));
								}

								Object^ user_connect = "@m@1@" + names[clients->IndexOf(t)] + " connected";
								for each (Socket ^ it in room1) {
									it->Send(obj_to_byte(user_connect));
								}

							}
							else if (flag[flag.size() - 1] == '2') {
								room2->Add(t);
								Room2->Text += t->RemoteEndPoint + " Connect" + "\r\n";

								String^ list = "@c@list_room@";
								int index = 0;
								for each (Socket ^ it in room2) {
									index = clients->IndexOf(it);
									list += names[index] + "#";

								}
								Object^ mess = list;
								for each (Socket ^ it in room2) {
									it->Send(obj_to_byte(mess));
								}

								Object^ user_connect = "@m@2@" + names[clients->IndexOf(t)] + " connected";
								for each (Socket ^ it in room2) {
									it->Send(obj_to_byte(user_connect));
								}
							}
							else if (flag[flag.size() - 1] == '3') {
								room3->Add(t);
								Room3->Text += t->RemoteEndPoint + " Connect" + "\r\n";

								String^ list = "@c@list_room@";
								int index = 0;
								for each (Socket ^ it in room3) {
									index = clients->IndexOf(it);
									list += names[index] + "#";

								}
								Object^ mess = list;
								for each (Socket ^ it in room3) {
									it->Send(obj_to_byte(mess));
								}

								Object^ user_connect = "@m@3@" + names[clients->IndexOf(t)] + " connected";
								for each (Socket ^ it in room3) {
									it->Send(obj_to_byte(user_connect));
								}
							}
						}

						//------------------dis_con_room-------

						if (flag.find("@dis_connect_room@") != string::npos) {
							if (flag[flag.size() - 1] == '1') {
								room1->Remove(t);
								Room1->Text += t->RemoteEndPoint + " Disconnect" + "\r\n";

								String^ list = "@c@list_room@";
								int index = 0;
								for each (Socket ^ it in room1) {
									index = clients->IndexOf(it);
									list += names[index] + "#";

								}
								Object^ mess = list;
								for each (Socket ^ it in room1) {
									it->Send(obj_to_byte(mess));
								}

								Object^ user_connect = "@m@1@" + names[clients->IndexOf(t)] + " disconnected";
								for each (Socket ^ it in room1) {
									it->Send(obj_to_byte(user_connect));
								}
							}
							else if (flag[flag.size() - 1] == '2') {
								room2->Remove(t);
								Room2->Text += t->RemoteEndPoint + " Disconnect" + "\r\n";

								String^ list = "@c@list_room@";
								int index = 0;
								for each (Socket ^ it in room2) {
									index = clients->IndexOf(it);
									list += names[index] + "#";

								}
								Object^ mess = list;
								for each (Socket ^ it in room2) {
									it->Send(obj_to_byte(mess));
								}

								Object^ user_connect = "@m@2@" + names[clients->IndexOf(t)] + " disconnected";
								for each (Socket ^ it in room1) {
									it->Send(obj_to_byte(user_connect));
								}
							}
							else if (flag[flag.size() - 1] == '3') {
								Object^ user_connect = "@m@3@" + names[clients->IndexOf(t)] + " disconnected";
								for each (Socket ^ it in room1) {
									it->Send(obj_to_byte(user_connect));
								}
								room3->Remove(t);
								Room3->Text += t->RemoteEndPoint + " Disconnect" + "\r\n";

								String^ list = "@c@list_room@";
								int index = 0;
								for each (Socket ^ it in room3) {
									index = clients->IndexOf(it);
									list += names[index] + "#";

								}
								Object^ mess = list;
								for each (Socket ^ it in room3) {
									it->Send(obj_to_byte(mess));
								}

								
							}
						}

						//------------------list_user-------

						if (flag.find("@list_user@") != string::npos) {
							String^ list = "@c@list@";
							for each (String ^ it in names) {
								list += it + "#";
							}
							Object^ mess = list;
							for each (Socket ^ it in clients) {
								it->Send(obj_to_byte(mess));
							}

						}

						//------------------new_user-------

						if (flag.find("@new_user@") != string::npos) {
							id_user++;
							String^ check_name = "Client" + id_user;
							
							for each (String ^ it in names) {
								while (check_name == it)
								{
									id_user++;
									break;
								}
							}
							names->Add("Client" + id_user);
							quantily_user++;
							Object^ mess = "@c@end_rename@" + "Client" + id_user;
							t->Send(obj_to_byte(mess));

							String^ list = "@c@list@";
							for each (String ^ it in names) {
								list += it + "#";
							}
							Object^ mess_list = list;
							for each (Socket ^ it in clients) {
								it->Send(obj_to_byte(mess_list));
							}

						}
					}

					//------------------Mess---------
					else if (flag[0] == '@' && flag[1] == 'm' && flag[2] == '@')
					{
						//------------------Chat_room------
						if (flag[3] == '1' && flag[4] == '@') {
							String^ mess_ = "";
							int e = 0;
							for each (auto it in con)
							{
								e++;
								if (e >= 6) {
									mess_ += it;
								}
							}
							Room1->Text += mess_ + "\r\n";
							for each (Socket ^ it in room1) {
								it->Send(data);
							}

						}
						else if (flag[3] == '2' && flag[4] == '@') {
							String^ mess_ = "";
							int e = 0;
							for each (auto it in con)
							{
								e++;
								if (e >= 6) {
									mess_ += it;
								}
							}
							Room2->Text += mess_ + "\r\n";
							for each (Socket ^ it in room2) {
								it->Send(data);
							}
						}
						else if (flag[3] == '3' && flag[4] == '@') {
							String^ mess_ = "";
							int e = 0;
							for each (auto it in con)
							{
								e++;
								if (e >= 6) {
									mess_ += it;
								}
							}
							Room3->Text += mess_ + "\r\n";
							for each (Socket ^ it in room3) {
								it->Send(data);
							}
						}
					}
					//------------------Private_mess---------
					else if (flag[0] == '@' && flag[1] == 'p' && flag[2] == '@') {
						String^ private_name = "";
						String^ mess_ = "";
						int e = 0,e_check = 0;
						for each (auto it in con)
						{
							if (e >= 3) {
								if (it == '@') break;
								private_name += it;
							}
							e++;
						}
						for each (auto it in con)
						{
							if (e_check > e) {
								mess_ += it;
							}
							e_check++;
						}
						Socket^ user_recieve = clients[names->IndexOf(private_name)];
						Object^ user_send = names[clients->IndexOf(t)];
						user_recieve->Send(obj_to_byte("@p@" + user_send + ": " + mess_));
						t->Send(obj_to_byte("@p@" + user_send + ": " + mess_));
					}

				}
			}

		}
		catch (const std::exception&)
		{
			clients->Remove(t);
			t->Close();
		}
		//t->Close();
	}

	//--------------------------------------End_receive---------------------------



	//--------------------------------------Add_room------------------------------
	void Add_room(Object^ mess) {
		

	}

	//--------------------------------------End_Add_room---------------------------


	//--------------------------------------Add_message------------------------------
	void Add_mess(Object^ mess) {
		Room1->Text += mess;

	}

	//--------------------------------------End_Add_message---------------------------




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
	private: System::Void tabPage2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
			//connect();
			//textBox1->Text = "Server starting...";
		connect_server();
		//connect_room();
		
		//textBox2->Text = main_server->LocalEndPoint->ToString();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		
		

	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	
	
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Room1->Text += textBox3->Text + "\r\n";
	if (textBox3->Text != "") send_click();
	textBox3->Clear();

}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Room3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
