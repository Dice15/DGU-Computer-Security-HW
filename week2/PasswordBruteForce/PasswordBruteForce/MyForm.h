#pragma once

#include <bits/stdc++.h>
#include "./core/RandStringGenerator.h"
#include "./module/BruteForce.h"
using namespace std;

namespace PasswordBruteForce {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace System::Threading;
	using namespace System::Threading::Tasks;
	using namespace System::Reflection;
	//using namespace Microsoft.AspNetCore::Mvc::Filters;

	/// <summary>
	/// MyForm에 대한 요약입니다.
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: 생성자 코드를 여기에 추가합니다.
			//
		}

	protected:
		/// <summary>
		/// 사용 중인 모든 리소스를 정리합니다.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::CheckBox^ checkBox_pwType1;
	protected:

	private: System::Windows::Forms::CheckBox^ checkBox_pwType2;
	private: System::Windows::Forms::CheckBox^ checkBox_pwType3;
	protected:

	protected:

	protected:


	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button_genPw;
	private: System::Windows::Forms::Label^ label_genedPw;
	private: System::Windows::Forms::TextBox^ textBox_genedPw;
	private: System::Windows::Forms::Button^ button_startBF;
	private: System::Windows::Forms::TextBox^ textBox_processLog;
	private: System::Windows::Forms::Button^ button_stopBF;
	private: System::Windows::Forms::PictureBox^ pictureBox_loading;

	private: System::Windows::Forms::Label^ label_loading;







	private:
		/// <summary>
		/// 필수 디자이너 변수입니다.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 디자이너 지원에 필요한 메서드입니다. 
		/// 이 메서드의 내용을 코드 편집기로 수정하지 마세요.
		/// </summary>
		void InitializeComponent(void)
		{
			this->checkBox_pwType1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_pwType2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_pwType3 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label_genedPw = (gcnew System::Windows::Forms::Label());
			this->textBox_genedPw = (gcnew System::Windows::Forms::TextBox());
			this->button_genPw = (gcnew System::Windows::Forms::Button());
			this->button_startBF = (gcnew System::Windows::Forms::Button());
			this->textBox_processLog = (gcnew System::Windows::Forms::TextBox());
			this->button_stopBF = (gcnew System::Windows::Forms::Button());
			this->pictureBox_loading = (gcnew System::Windows::Forms::PictureBox());
			this->label_loading = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_loading))->BeginInit();
			this->SuspendLayout();
			// 
			// checkBox_pwType1
			// 
			this->checkBox_pwType1->AutoSize = true;
			this->checkBox_pwType1->Font = (gcnew System::Drawing::Font(L"굴림", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->checkBox_pwType1->Location = System::Drawing::Point(27, 35);
			this->checkBox_pwType1->Name = L"checkBox_pwType1";
			this->checkBox_pwType1->Size = System::Drawing::Size(58, 20);
			this->checkBox_pwType1->TabIndex = 0;
			this->checkBox_pwType1->Text = L"숫자";
			this->checkBox_pwType1->UseVisualStyleBackColor = true;
			// 
			// checkBox_pwType2
			// 
			this->checkBox_pwType2->AutoSize = true;
			this->checkBox_pwType2->Font = (gcnew System::Drawing::Font(L"굴림", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->checkBox_pwType2->Location = System::Drawing::Point(111, 35);
			this->checkBox_pwType2->Name = L"checkBox_pwType2";
			this->checkBox_pwType2->Size = System::Drawing::Size(74, 20);
			this->checkBox_pwType2->TabIndex = 1;
			this->checkBox_pwType2->Text = L"알파벳";
			this->checkBox_pwType2->UseVisualStyleBackColor = true;
			// 
			// checkBox_pwType3
			// 
			this->checkBox_pwType3->AutoSize = true;
			this->checkBox_pwType3->Font = (gcnew System::Drawing::Font(L"굴림", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->checkBox_pwType3->Location = System::Drawing::Point(211, 35);
			this->checkBox_pwType3->Name = L"checkBox_pwType3";
			this->checkBox_pwType3->Size = System::Drawing::Size(95, 20);
			this->checkBox_pwType3->TabIndex = 2;
			this->checkBox_pwType3->Text = L"특수 문자";
			this->checkBox_pwType3->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label_genedPw);
			this->groupBox1->Controls->Add(this->textBox_genedPw);
			this->groupBox1->Controls->Add(this->button_genPw);
			this->groupBox1->Controls->Add(this->checkBox_pwType1);
			this->groupBox1->Controls->Add(this->checkBox_pwType3);
			this->groupBox1->Controls->Add(this->checkBox_pwType2);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"굴림", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(510, 121);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"패스워드 설정";
			// 
			// label_genedPw
			// 
			this->label_genedPw->AutoSize = true;
			this->label_genedPw->Location = System::Drawing::Point(13, 78);
			this->label_genedPw->Name = L"label_genedPw";
			this->label_genedPw->Size = System::Drawing::Size(148, 19);
			this->label_genedPw->TabIndex = 5;
			this->label_genedPw->Text = L"생성된 패스워드";
			// 
			// textBox_genedPw
			// 
			this->textBox_genedPw->Location = System::Drawing::Point(167, 75);
			this->textBox_genedPw->Name = L"textBox_genedPw";
			this->textBox_genedPw->ReadOnly = true;
			this->textBox_genedPw->Size = System::Drawing::Size(324, 29);
			this->textBox_genedPw->TabIndex = 4;
			// 
			// button_genPw
			// 
			this->button_genPw->Font = (gcnew System::Drawing::Font(L"굴림", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button_genPw->Location = System::Drawing::Point(329, 29);
			this->button_genPw->Name = L"button_genPw";
			this->button_genPw->Size = System::Drawing::Size(162, 30);
			this->button_genPw->TabIndex = 3;
			this->button_genPw->Text = L"패스워드 생성";
			this->button_genPw->UseVisualStyleBackColor = true;
			this->button_genPw->Click += gcnew System::EventHandler(this, &MyForm::button_genPw_Click);
			// 
			// button_startBF
			// 
			this->button_startBF->Font = (gcnew System::Drawing::Font(L"굴림", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button_startBF->Location = System::Drawing::Point(528, 20);
			this->button_startBF->Name = L"button_startBF";
			this->button_startBF->Size = System::Drawing::Size(183, 51);
			this->button_startBF->TabIndex = 4;
			this->button_startBF->Text = L"Start\r\nBrute-Force";
			this->button_startBF->UseVisualStyleBackColor = true;
			this->button_startBF->Click += gcnew System::EventHandler(this, &MyForm::button_startBFClick);
			// 
			// textBox_processLog
			// 
			this->textBox_processLog->Font = (gcnew System::Drawing::Font(L"굴림", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->textBox_processLog->Location = System::Drawing::Point(12, 139);
			this->textBox_processLog->Multiline = true;
			this->textBox_processLog->Name = L"textBox_processLog";
			this->textBox_processLog->ReadOnly = true;
			this->textBox_processLog->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox_processLog->Size = System::Drawing::Size(699, 329);
			this->textBox_processLog->TabIndex = 5;
			// 
			// button_stopBF
			// 
			this->button_stopBF->Font = (gcnew System::Drawing::Font(L"굴림", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button_stopBF->Location = System::Drawing::Point(529, 77);
			this->button_stopBF->Name = L"button_stopBF";
			this->button_stopBF->Size = System::Drawing::Size(183, 56);
			this->button_stopBF->TabIndex = 6;
			this->button_stopBF->Text = L"Stop\r\nBrute-Force";
			this->button_stopBF->UseVisualStyleBackColor = true;
			this->button_stopBF->Click += gcnew System::EventHandler(this, &MyForm::button_stopBF_Click);
			// 
			// pictureBox_loading
			// 
			this->pictureBox_loading->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox_loading->Location = System::Drawing::Point(-1, 0);
			this->pictureBox_loading->Name = L"pictureBox_loading";
			this->pictureBox_loading->Size = System::Drawing::Size(727, 480);
			this->pictureBox_loading->TabIndex = 7;
			this->pictureBox_loading->TabStop = false;
			// 
			// label_loading
			// 
			this->label_loading->AutoSize = true;
			this->label_loading->BackColor = System::Drawing::Color::Black;
			this->label_loading->Font = (gcnew System::Drawing::Font(L"굴림", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label_loading->ForeColor = System::Drawing::Color::White;
			this->label_loading->Location = System::Drawing::Point(56, 355);
			this->label_loading->Name = L"label_loading";
			this->label_loading->Size = System::Drawing::Size(229, 37);
			this->label_loading->TabIndex = 8;
			this->label_loading->Text = L"Loading 0%";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(726, 480);
			this->Controls->Add(this->button_stopBF);
			this->Controls->Add(this->textBox_processLog);
			this->Controls->Add(this->button_startBF);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label_loading);
			this->Controls->Add(this->pictureBox_loading);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Shown += gcnew System::EventHandler(this, &MyForm::MyForm_Shown);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_loading))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private:
		// attribute
		RandomStringGenerator* mPwGenerator;
		BruteForce* mPwCracker;
		String^ mPassword;
		int mLowerLength = 4;
		int mUpperLength = 8;

		// thread
		Action<CancellationToken>^ mCrackingThread;
		CancellationTokenSource^ tokenSource;

		template <typename paramType>
		ref class ActionArguments
		{
		public:
			ActionArguments(Action<paramType>^ func, paramType args) : mFunction(func), mArgs(args) {};
			void operator()() { mFunction(mArgs); };

		private:
			Action<paramType>^ mFunction;
			paramType mArgs;
		};
		

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		pictureBox_loading->BringToFront();
		pictureBox_loading->BackgroundImage = gcnew Bitmap("./image/background1.jpg");

		label_loading->BringToFront();
		label_loading->Text = "";

		mPwGenerator = new RandomStringGenerator();
		mPassword = "";

		checkBox_pwType1->Checked = true;
		textBox_genedPw->Text = "";
		button_stopBF->Enabled = false;
	}


	private: static DateTime Delay(int ms) {
		DateTime ThisMoment = DateTime::Now;
		TimeSpan duration = TimeSpan(0, 0, 0, 0, ms);
		DateTime AfterWards = ThisMoment.Add(duration);
		while (AfterWards >= ThisMoment) {
			System::Windows::Forms::Application::DoEvents(); ThisMoment = DateTime::Now;
		}
		return DateTime::Now;
	}


	private: System::Void MyForm_Shown(System::Object^ sender, System::EventArgs^ e) {
		for (int i = 0; i <= 100; i++) {
			label_loading->Text = "Loading " + i.ToString() + "%";
			Delay(15);
		}
		pictureBox_loading->SendToBack();
		pictureBox_loading->Visible = false;

		label_loading->SendToBack();
		label_loading->Visible = false;
	}


	private: String^ ToGcString(string std_string) {
		return gcnew String(std_string.data());
	}


	private: string ToStdString(String^ gc_string) {
		using namespace Runtime::InteropServices;
		const char* chars = (const char*)(Marshal::StringToHGlobalAnsi(gc_string)).ToPointer();
		string std_string = chars;
		Marshal::FreeHGlobal(IntPtr((void*)chars));
		return std_string;
	}


	private: System::Void button_genPw_Click(System::Object^ sender, System::EventArgs^ e) {
		auto [useNum, useAlpha, useSpecial] = tuple(checkBox_pwType1->Checked, checkBox_pwType2->Checked, checkBox_pwType3->Checked);
		if (!useNum && !useAlpha && !useSpecial) { MessageBox::Show("적어도 하나는 체크해야합니다."); return; }
		textBox_genedPw->Text = mPassword = ToGcString(mPwGenerator->Get_RandString(mLowerLength, mUpperLength, useNum, useAlpha, useSpecial));
	}


	private: String^ GetTime() {
		return DateTime::Now.ToString("[yyyy-MM-dd, HH:mm:ss]");
	}

		
	private:void Cracking_ShowProgress(double cnt, double total) {
		String^ progress = "";
		textBox_processLog->SelectionStart = textBox_processLog->Text->Length;
		textBox_processLog->SelectionStart = textBox_processLog->GetFirstCharIndexOfCurrentLine();
		textBox_processLog->SelectionLength = textBox_processLog->Lines[textBox_processLog->Lines->Length - 1]->Length;
		textBox_processLog->SelectedText = "";
		textBox_processLog->Text += ((int)((cnt / total) * 100.0)).ToString() + "% [" + cnt.ToString() + "/" + total.ToString() + "]";

		textBox_processLog->SelectionStart = textBox_processLog->Text->Length;
		textBox_processLog->ScrollToCaret();
	}

	private: int SubCracking_Step1(CancellationToken token, int len) {
		long long repeat = 0, prevPer = -1;
		while (1) {
			if (token.IsCancellationRequested) return -1;
			auto [res, cnt, total] = mPwCracker->Check_OnlyNumber(len);
			if (prevPer < (long long)((double)cnt / (double)total * 100.0) || cnt == total) { prevPer = (long long)((double)cnt / (double)total * 100.0); Cracking_ShowProgress(cnt, total); }
			if (res != 0) return res == 1;
		}
		return 0;
	}

	private: int SubCracking_Step2(CancellationToken token, int len) {
		long long repeat = 0, prevPer = -1;
		while (1) {
			if (token.IsCancellationRequested) return -1;
			auto [res, cnt, total] = mPwCracker->Check_OnlySpecial(len);
			if (prevPer < (long long)((double)cnt / (double)total * 100.0) || cnt == total) { prevPer = (long long)((double)cnt / (double)total * 100.0); Cracking_ShowProgress(cnt, total); }
			if (res != 0) return res == 1;
		}
		return 0;
	}

	private: int SubCracking_Step3(CancellationToken token, int len) {
		long long repeat = 0, prevPer = -1;
		while (1) {
			if (token.IsCancellationRequested) return -1;
			auto [res, cnt, total] = mPwCracker->Check_OnlyAlpha(len);
			if (prevPer < (long long)((double)cnt / (double)total * 100.0) || cnt == total) { prevPer = (long long)((double)cnt / (double)total * 100.0); Cracking_ShowProgress(cnt, total); }
			if (res != 0) return res == 1;
		}
		return 0;
	}

	private: int SubCracking_Step4(CancellationToken token, int len) {
		long long repeat = 0, prevPer = -1;
		while (1) {
			if (token.IsCancellationRequested) return -1;
			auto [res, cnt, total] = mPwCracker->Check_ALL(len);
			if (prevPer < (long long)((double)cnt / (double)total * 100.0) || cnt == total) { prevPer = (long long)((double)cnt / (double)total * 100.0); Cracking_ShowProgress(cnt, total); }
			if (res != 0) return res == 1;
		}
		return 0;
	}

	private: void Cracking_Password(CancellationToken token) {
		button_startBF->Enabled = false;
		button_stopBF->Enabled = true;
		int res = 0;

		textBox_processLog->Enabled = false;
		textBox_processLog->Text = "";
		for (int len = mLowerLength; len <= mUpperLength; len++) {
			mPwCracker = new BruteForce(ToStdString(textBox_genedPw->Text));
			textBox_processLog->Text += "************ Compare to a string of " + len.ToString() + " lengths ************" + Environment::NewLine;

			textBox_processLog->Text += GetTime() + ": " + "step1: check with number set" + Environment::NewLine;
			res = SubCracking_Step1(token, len);
			textBox_processLog->Text += Environment::NewLine;
			if (res == 1) {
				String^ msg = GetTime() + ": " + "(Found password!!!: " + mPassword + ")" + Environment::NewLine;
				textBox_processLog->Text += msg;
				MessageBox::Show(msg);
				break;
			}
			else if (res == -1) { textBox_processLog->Text += GetTime() + ": " + "Program has been forced to terminate!!!" + Environment::NewLine; break; }
			else {
				textBox_processLog->Text += GetTime() + ": " + "step2: check with special char set" + Environment::NewLine;
				res = SubCracking_Step2(token, len);
				textBox_processLog->Text += Environment::NewLine;
				if (res == 1) {
					String^ msg = GetTime() + ": " + "(Found password!!!: " + mPassword + ")" + Environment::NewLine;
					textBox_processLog->Text += msg;
					MessageBox::Show(msg);
					break;
				}
				else if (res == -1) { textBox_processLog->Text += GetTime() + ": " + "Program has been forced to terminate!!!" + Environment::NewLine; break; }
				else {
					textBox_processLog->Text += GetTime() + ": " + "step3: check with alphabet set" + Environment::NewLine;
					res = SubCracking_Step3(token, len);
					textBox_processLog->Text += Environment::NewLine;
					if (res == 1) {
						String^ msg = GetTime() + ": " + "(Found password!!!: " + mPassword + ")" + Environment::NewLine;
						textBox_processLog->Text += msg;
						MessageBox::Show(msg);
						break;
					}
					else if (res == -1) { textBox_processLog->Text += GetTime() + ": " + "Program has been forced to terminate!!!" + Environment::NewLine; break; }
					else {
						textBox_processLog->Text += GetTime() + ": " + "step4: check with all set" + Environment::NewLine;
						res = SubCracking_Step4(token, len);
						textBox_processLog->Text += Environment::NewLine;
						if (res == 1) {
							String^ msg = GetTime() + ": " + "(Found password!!!: " + mPassword + ")" + Environment::NewLine;
							textBox_processLog->Text += msg;
							MessageBox::Show(msg);
							break;
						}
						else if (res == -1) { textBox_processLog->Text += GetTime() + ": " + "Program has been forced to terminate!!!" + Environment::NewLine; break; }
					}
				}
			}
			textBox_processLog->Text += Environment::NewLine;
		}
	
		textBox_processLog->Enabled = true;
		button_startBF->Enabled = true;
		button_stopBF->Enabled = false;
	}


	// 크래킹 이벤트. 멀티 스레드로 실행
	private: System::Void button_startBFClick(System::Object^ sender, System::EventArgs^ e) {
		if (textBox_genedPw->Text->Length == 0) { MessageBox::Show("패스워드 생성을 먼저 해주세요."); return; }
		
		tokenSource = gcnew CancellationTokenSource();
		Action<CancellationToken>^ action = gcnew Action<CancellationToken>(this, &MyForm::Cracking_Password);
		ActionArguments<CancellationToken>^ action_args = gcnew ActionArguments<CancellationToken>(action, tokenSource->Token);
		Task::Factory->StartNew(gcnew Action(action_args, &ActionArguments<CancellationToken>::operator()));
	}



	// 스레드 강제 종료 이벤트
	private: System::Void button_stopBF_Click(System::Object^ sender, System::EventArgs^ e) {
		tokenSource->Cancel();
		button_startBF->Enabled = true;
		button_stopBF->Enabled = false;
	}
};
}
