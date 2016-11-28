#pragma once

#include "stdafx.h"
#include "opencv\cv.h"
#include "opencv\cxcore.h"
#include "iostream"
#include <string>
#include "opencv\highgui.h"
#include "opencv\ml.h"
#include <msclr/marshal.h>
namespace DRDO {
	using namespace System::Runtime::InteropServices;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected: 

	protected: 

	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	public:	 IplImage* img;
	public:	 IplImage* out;
	public:	 int index;
	public:	 int option;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;

	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;

	public: 

	public: 

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(530, 443);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Execute";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"-none-", L"Canny Edge Detection ", L"Bayesian Classifier", 
				L"svm"});
			this->comboBox1->Location = System::Drawing::Point(379, 444);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox1_SelectedIndexChanged);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Location = System::Drawing::Point(12, 31);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(335, 312);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Form1::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox2->Location = System::Drawing::Point(377, 31);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(335, 312);
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::Olive;
			this->button2->Location = System::Drawing::Point(377, 370);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Load";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &Form1::openFileDialog1_FileOk);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(514, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(71, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Output Image";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click_1);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(145, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(63, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Input Image";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 370);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(86, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"*no file selected*";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::CornflowerBlue;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label4->Location = System::Drawing::Point(505, 375);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 20);
			this->label4->TabIndex = 8;
			this->label4->Click += gcnew System::EventHandler(this, &Form1::label4_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(17, 437);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(14, 421);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(122, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"enhancement sequence";
			this->label5->Click += gcnew System::EventHandler(this, &Form1::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(14, 460);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(322, 13);
			this->label6->TabIndex = 11;
			this->label6->Text = L"1-Median Filter, 2-High Pass, 3-Low Pass, 4-Histogram Equalization";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(379, 431);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(83, 13);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Select Algorithm";
			this->label7->Click += gcnew System::EventHandler(this, &Form1::label7_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(630, 443);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 13;
			this->button3->Text = L"Quit";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(377, 402);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(123, 23);
			this->button4->TabIndex = 14;
			this->button4->Text = L"Train classifier";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(724, 476);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Image Enchancement";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	cv::Mat src = cv::cvarrToMat(img);
	cv::Mat dst = src.clone();
	
cv::Mat refr = src.clone();
String^ selected = (String^)(textBox1->Text);
int a;
if(selected!="")
{ 
a= Convert::ToInt32(selected);
}
else
{a=0;}
int swithc=a;
int actual=0;
while(swithc>0)
{
actual = (actual*10)+ (swithc%10);
swithc = swithc/10;
}

int seq=actual;


while(seq>0){
	src=dst;
index=seq%10;
seq=seq/10;
if (index ==1){
	cv::medianBlur(src,dst,3);



}

      // Load an image
	if (index ==900){
      if( !src.data )
      {  }
      //create a sliding window of size 9
      int window[9];
       
        for(int y = 0; y < src.rows; y++)
            for(int x = 0; x < src.cols; x++)
                dst.at<uchar>(y,x) = 0.0;
 
        for(int y = 1; y < src.rows - 1; y++){
            for(int x = 1; x < src.cols - 1; x++){
 
                // Pick up window element
 
                window[0] = src.at<uchar>(y - 1 ,x - 1);
                window[1] = src.at<uchar>(y, x - 1);
                window[2] = src.at<uchar>(y + 1, x - 1);
                window[3] = src.at<uchar>(y - 1, x);
                window[4] = src.at<uchar>(y, x);
                window[5] = src.at<uchar>(y + 1, x);
                window[6] = src.at<uchar>(y - 1, x + 1);
                window[7] = src.at<uchar>(y, x + 1);
                window[8] = src.at<uchar>(y + 1, x + 1);
 
                // sort the window to find median
                  int temp, i , j;
				for(i = 0; i < 9; i++){
				temp = window[i];
				for(j = i-1; j >= 0 && temp < window[j]; j--){
				window[j+1] = window[j];
				}
				window[j+1] = temp;
    }
 
                // assign the median to centered element of the matrix
                dst.at<uchar>(y,x) = window[4];
            }
        }
	}




if(index == 2){
int intensity1=0;
int a = 3;
   for (int i = 0; i < src.rows-a; i++) 
   { for (int j = 0; j < src.cols-a; j++) 
     { 
    int intensity2=0;
       for (int p = 0; p<a; p++) 
       { for (int q = 0; q<a; q++) 
         { 

          intensity1 = src.at<uchar>(i+p,j+q); 
          if( (p==(a-1)/2) && (q==(a-1)/2))
            {
              intensity2 +=(a*a-1)*intensity1;
            }
          else
            {
               intensity2 +=(-1)*intensity1;
            }
          }
       }
         dst.at<uchar>(i+(a-1)/2,j+(a-1)/2)=intensity2/(a*a);
    } 
  }



  
		//dst = cv::Laplacian(dst,cv::ADAPTIVE_THRESH_GAUSSIAN_C);
	}



	 if(index==3){
		 
			 cv::GaussianBlur(src,dst,cv::Size(7,7),0.0,0.0,cv::BORDER_DEFAULT );
   }


	 if(index==4){
		 cv::equalizeHist(src,dst);
	 }
}

	 if( option==1){
		 //cv::threshold(src,dst,0,225,cv::THRESH_BINARY);
		
		 cv::Canny(src, dst, 0, 255, 3, true);
		  		 
	 }


if(option==2)
{


	cv::Mat td1 = cvLoadImage("E:\\bs\\svm\\1.jpg", 0);
	//cv::imshow("td1",td1);
	cv::Scalar mea1;
	cv::Scalar dev1;
	cv::meanStdDev(td1,mea1,dev1);

	cv::Mat td2 = cvLoadImage("E:\\bs\\svm\\2.jpg", 0);
	//cv::imshow("td2",td2);
	cv::Scalar mea2;
	cv::Scalar dev2;
	cv::meanStdDev(td2,mea2,dev2);

	cv::Mat td3 = cvLoadImage("E:\\bs\\svm\\3.jpg", 0);
	//cv::imshow("td3",td3);
	cv::Scalar mea3;
	cv::Scalar dev3;
	cv::meanStdDev(td3,mea3,dev3);

	cv::Mat td4 = cvLoadImage("E:\\bs\\svm\\4.jpg", 0);
	//cv::imshow("td4",td4);
	cv::Scalar mea4;
	cv::Scalar dev4;
	cv::meanStdDev(td4,mea4,dev4);

	cv::Mat td5 = cvLoadImage("E:\\bs\\svm\\5.jpg", 0);
	//cv::imshow("td5",td5);
	cv::Scalar mea5;
	cv::Scalar dev5;
	cv::meanStdDev(td5,mea5,dev5);

	cv::Mat td6 = cvLoadImage("E:\\bs\\svm\\6.jpg", 0);
	//cv::imshow("td6",td6);
	cv::Scalar mea6;
	cv::Scalar dev6;
	cv::meanStdDev(td6,mea6,dev6);

	cv::Mat td7 = cvLoadImage("E:\\bs\\svm\\7.jpg", 0);
	///cv::imshow("td7",td7);
	cv::Scalar mea7;
	cv::Scalar dev7;
	cv::meanStdDev(td7,mea7,dev7);

	cv::Mat td8 = cvLoadImage("E:\\bs\\svm\\8.jpg", 0);
	//cv::imshow("td8",td8);
	cv::Scalar mea8;
	cv::Scalar dev8;
	cv::meanStdDev(td8,mea8,dev8);

	cv::Mat td9 = cvLoadImage("E:\\bs\\svm\\9.jpg", 0);
	//cv::imshow("td9",td9);
	cv::Scalar mea9;
	cv::Scalar dev9;
	cv::meanStdDev(td9,mea9,dev9);

	cv::Mat td10 = cvLoadImage("E:\\bs\\svm\\10.jpg", 0);
	//cv::imshow("td10",td10);
	cv::Scalar mea10;
	cv::Scalar dev10;
	cv::meanStdDev(td10,mea10,dev10);

	cv::Mat td11 = cvLoadImage("E:\\bs\\svm\\11.jpg", 0);
	///cv::imshow("td11",td11);
	cv::Scalar mea11;
	cv::Scalar dev11;
	cv::meanStdDev(td11,mea11,dev11);

	cv::Mat td12 = cvLoadImage("E:\\bs\\svm\\12.jpg", 0);
	//cv::imshow("td12",td11);
	cv::Scalar mea12;
	cv::Scalar dev12;
	cv::meanStdDev(td12,mea12,dev12);
	
	label4->Text= (dev11.val[0])+"sdcs"+(mea11.val[0]);

	float traind[12][2]={{mea1.val[0],dev1.val[0]},{mea2.val[0],dev2.val[0]},{mea3.val[0],dev3.val[0]},{mea4.val[0],dev4.val[0]},{mea5.val[0],dev5.val[0]},{mea6.val[0],dev6.val[0]},{mea7.val[0],dev7.val[0]},{mea8.val[0],dev8.val[0]},{mea9.val[0],dev9.val[0]},{mea10.val[0],dev10.val[0]},{mea11.val[0],dev11.val[0]},{mea12.val[0],dev12.val[0]}};
cv::Mat trainingDataMat(12, 2, CV_32FC1, traind);
CvMat traincs=trainingDataMat;


cv::NormalBayesClassifier classifier;  
float labelsd[12] = {-1.0, 1.0, 1.0, 1.0, 1.0, 1.0, -1.0, 1.0, 1.0, -1.0, -1.0, -1.0};
cv::Mat labelsMat(12, 1, CV_32FC1, labelsd);
CvMat labelcs=labelsMat;

classifier.train(&traincs, &labelcs);

cv::Mat tdtest = cvLoadImage("E:\\bs\\svm\\1.jpg", 0);
	//cv::imshow("td11",td11);
	cv::Scalar meatdtest;
	cv::Scalar devtdtest;
	cv::meanStdDev(dst,meatdtest,devtdtest);
	float arr[1][2]={meatdtest.val[0],devtdtest.val[0]};
	cv::Mat sampleMat = (cv::Mat_<float>(1,2) << meatdtest.val[0],devtdtest[0]);
   
	//const cv::Mat sample = (1,2,CV_32FC1,arr);
	if(classifier.predict(sampleMat)==1)
	{
	label4->Text="Input belongs to class 1(Boy)";
	label4->BackColor=System::Drawing::Color::Lime;
	}else{
	
	label4->Text="Input belongs to class -1(Girl)";
	label4->BackColor=System::Drawing::Color::CornflowerBlue;
	}
	
	
	int width = 600, height = 600;
 cv::Mat image = cv::Mat::zeros(height, width, CV_8UC3);
 
    cv::Vec3b green(0,255,0), blue (255,0,0);
 for (int i = 0; i < image.rows; ++i)
        for (int j = 0; j < image.cols; ++j)
        {
            cv::Mat sampleMat = (cv::Mat_<float>(1,2) << j,i);
            float response = classifier.predict(sampleMat);

            if (response == 1)
                image.at<cv::Vec3b>(i,j)  = green;
            else if (response == -1)
                 image.at<cv::Vec3b>(i,j)  = blue;
        }
 int thickness = -1;
    int lineType = 8;
	for(int i=0;i<11;++i)
	{
cv::circle( image, cv::Point(traind[i][0],traind[i][1]), 5, cv::Scalar(  0,   0,   0), thickness, lineType);
   
	}
	cv::imshow("td11",image);

}





if(option==3){



	cv::Mat td1 = cvLoadImage("E:\\bs\\svm\\1.jpg", 0);
	//cv::imshow("td1",td1);
	cv::Scalar mea1;
	cv::Scalar dev1;
	cv::meanStdDev(td1,mea1,dev1);

	cv::Mat td2 = cvLoadImage("E:\\bs\\svm\\2.jpg", 0);
//	cv::imshow("td2",td2);
	cv::Scalar mea2;
	cv::Scalar dev2;
	cv::meanStdDev(td2,mea2,dev2);

	cv::Mat td3 = cvLoadImage("E:\\bs\\svm\\3.jpg", 0);
//	cv::imshow("td3",td3);
	cv::Scalar mea3;
	cv::Scalar dev3;
	cv::meanStdDev(td3,mea3,dev3);

	cv::Mat td4 = cvLoadImage("E:\\bs\\svm\\4.jpg", 0);
//	cv::imshow("td4",td4);
	cv::Scalar mea4;
	cv::Scalar dev4;
	cv::meanStdDev(td4,mea4,dev4);

	cv::Mat td5 = cvLoadImage("E:\\bs\\svm\\5.jpg", 0);
//	cv::imshow("td5",td5);
	cv::Scalar mea5;
	cv::Scalar dev5;
	cv::meanStdDev(td5,mea5,dev5);

	cv::Mat td6 = cvLoadImage("E:\\bs\\svm\\6.jpg", 0);
//	cv::imshow("td6",td6);
	cv::Scalar mea6;
	cv::Scalar dev6;
	cv::meanStdDev(td6,mea6,dev6);

	cv::Mat td7 = cvLoadImage("E:\\bs\\svm\\7.jpg", 0);
//	cv::imshow("td7",td7);
	cv::Scalar mea7;
	cv::Scalar dev7;
	cv::meanStdDev(td7,mea7,dev7);

	cv::Mat td8 = cvLoadImage("E:\\bs\\svm\\8.jpg", 0);
//	cv::imshow("td8",td8);
	cv::Scalar mea8;
	cv::Scalar dev8;
	cv::meanStdDev(td8,mea8,dev8);

	cv::Mat td9 = cvLoadImage("E:\\bs\\svm\\9.jpg", 0);
//	cv::imshow("td9",td9);
	cv::Scalar mea9;
	cv::Scalar dev9;
	cv::meanStdDev(td9,mea9,dev9);

	cv::Mat td10 = cvLoadImage("E:\\bs\\svm\\10.jpg", 0);
///	cv::imshow("td10",td10);
	cv::Scalar mea10;
	cv::Scalar dev10;
	cv::meanStdDev(td10,mea10,dev10);

	cv::Mat td11 = cvLoadImage("E:\\bs\\svm\\11.jpg", 0);
//	cv::imshow("td11",td11);
	cv::Scalar mea11;
	cv::Scalar dev11;
	cv::meanStdDev(td11,mea11,dev11);

	cv::Mat td12 = cvLoadImage("E:\\bs\\svm\\12.jpg", 0);
//	cv::imshow("td12",td11);
	cv::Scalar mea12;
	cv::Scalar dev12;
	cv::meanStdDev(td12,mea12,dev12);
	
	label4->Text= (dev11.val[0])+"sdcs"+(mea11.val[0]);

	float traind[12][2]={{mea1.val[0],dev1.val[0]},{mea2.val[0],dev2.val[0]},{mea3.val[0],dev3.val[0]},{mea4.val[0],dev4.val[0]},{mea5.val[0],dev5.val[0]},{mea6.val[0],dev6.val[0]},{mea7.val[0],dev7.val[0]},{mea8.val[0],dev8.val[0]},{mea9.val[0],dev9.val[0]},{mea10.val[0],dev10.val[0]},{mea11.val[0],dev11.val[0]},{mea12.val[0],dev12.val[0]}};
cv::Mat trainingDataMat(12, 2, CV_32FC1, traind);


    float labelsd[12] = {-1.0, 1.0, 1.0, 1.0, 1.0, 1.0, -1.0, 1.0, 1.0, -1.0, -1.0, -1.0};
    cv::Mat labelsMat(12, 1, CV_32FC1, labelsd);


 int width = 600, height = 600;
 cv::Mat image = cv::Mat::zeros(height, width, CV_8UC3);
 


    // Set up SVM's parameters
    CvSVMParams paramsa;
    paramsa.svm_type    = CvSVM::C_SVC;
	paramsa.kernel_type = CvSVM::LINEAR;
    paramsa.term_crit   = cvTermCriteria(CV_TERMCRIT_ITER, 100, 1e-6);
	
    // Train the SVM
    CvSVM SVM;
	SVM.train(trainingDataMat, labelsMat, cv::Mat::Mat(), cv::Mat::Mat(), paramsa);

cv::Mat tdtest = cvLoadImage("E:\\bs\\svm\\6.jpg", 0);
	//cv::imshow("td11",td11);
	cv::Scalar meatdtest;
	cv::Scalar devtdtest;
	cv::meanStdDev(dst,meatdtest,devtdtest);


	cv::Mat sampleMat = (cv::Mat_<float>(1,2) << meatdtest.val[0],devtdtest[0]);
            float response = SVM.predict(sampleMat);

            if (response == 1)
			{
				label4->Text= "Input belongs to class 1(Boy)";
				label4->BackColor=System::Drawing::Color::Lime ;
			}
			else if (response == -1){
				label4->Text= "Input belongs to class -1(Girl)";
				label4->BackColor=System::Drawing::Color::CornflowerBlue;
			}


    cv::Vec3b green(0,255,0), blue (255,0,0);
    // Show the decision regions given by the SVM
    for (int i = 0; i < image.rows; ++i)
        for (int j = 0; j < image.cols; ++j)
        {
            cv::Mat sampleMat = (cv::Mat_<float>(1,2) << j,i);
            float response = SVM.predict(sampleMat);

            if (response == 1)
                image.at<cv::Vec3b>(i,j)  = green;
            else if (response == -1)
                 image.at<cv::Vec3b>(i,j)  = blue;
        }

    // Show the training data
    int thickness = -1;
    int lineType = 8;
	for(int i=0;i<11;++i)
	{
cv::circle( image, cv::Point(traind[i][0],traind[i][1]), 5, cv::Scalar(  0,   0,   0), thickness, lineType);
   
	}
	//cv::circle( image, cv::Point(501,  10), 5, cv::Scalar(  0,   0,   0), thickness, lineType);
   // cv::circle( image, cv::Point(255,  10), 5, cv::Scalar(255, 255, 255), thickness, lineType);
    //cv::circle( image, cv::Point(501, 255), 5, cv::Scalar(255, 255, 255), thickness, lineType);
  //  cv::circle( image, cv::Point( 10, 501), 5, cv::Scalar(255, 255, 255), thickness, lineType);

    // Show support vectors
    thickness = 2;
    lineType  = 8;
    int c     = SVM.get_support_vector_count();

    for (int i = 0; i < c; ++i)
    {
        const float* v = SVM.get_support_vector(i);
        cv::circle( image,  cv::Point( (int) v[0], (int) v[1]),   6,  cv::Scalar(128, 128, 128), thickness, lineType);
    }


//    cv::imwrite("E:\\bs\\svmresult.jpg", image); 


    cv::imshow("SVM Simple Example", image); // show it to the user



}






cv::namedWindow("final");
cv::imshow("final", dst);
cv::namedWindow("initial");
cv::imshow("initial", src);

	System::Drawing::Graphics^ graphics = pictureBox2->CreateGraphics();
	System::IntPtr ptr(dst.ptr());


	System::Drawing::Bitmap^ b  = gcnew System::Drawing::Bitmap(dst.cols/3,dst.rows,dst.step,System::Drawing::Imaging::PixelFormat::Format24bppRgb,ptr);
	System::Drawing::RectangleF rect(0,0,pictureBox2->Width,pictureBox1->Height);
	graphics->DrawImage(b,rect);







				 



			 }
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {	
		String^ selected = (String^)(comboBox1->SelectedItem);
		option = comboBox1->FindStringExact(selected);
	  		 }

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
OpenFileDialog ^ openFileDialog1 = gcnew OpenFileDialog();
      openFileDialog1->Filter = "JPEGs (*.jpg)|*.jpg;*.jpeg";
      openFileDialog1->Title = "Select an image file you want to process";

      // Show the Dialog.
      // If the user clicked OK in the dialog and
      // a .CUR file was selected, open it.
      if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
      {





 String^ fn = openFileDialog1->FileName;
 button2->Text = "load";
 const char* str = (const char*) (Marshal::StringToHGlobalAnsi(fn)).ToPointer();
 label3->Text=fn;
 img = cvLoadImage(str, 0);
 out = img;  
	cv::Mat inpImage = cv::cvarrToMat(img);


	System::Drawing::Graphics^ graphics = pictureBox1->CreateGraphics();
	System::IntPtr ptr(inpImage.ptr());
	System::Drawing::Bitmap^ b  = gcnew System::Drawing::Bitmap(inpImage.cols/3,inpImage.rows,inpImage.step,System::Drawing::Imaging::PixelFormat::Format24bppRgb,ptr);
	System::Drawing::RectangleF rect(0,0,pictureBox1->Width,pictureBox1->Height);
	graphics->DrawImage(b,rect);

System::Drawing::Graphics^ graph = pictureBox2->CreateGraphics();
	          graph->DrawImage(b,rect);
	  
	  
	  }


		 }
private: System::Void openFileDialog1_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
		 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }

private: System::Void label1_Click_1(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {


			 exit(0);
		 }
};
}

