#include "stdafx.h"
#include "OpenCVFunctions.h"
#include <opencv\cv.h>
#include <opencv\highgui.h>
#include <opencv2\opencv.hpp>
#include <stdexcept>
#include<string>
#include<io.h>
#include<iostream>
#include<stdio.h>
#include<fstream>
#include<sstream>
#include <stdexcept>

using namespace std;
OpenCVFunctions::OpenCVFunctions(void)
{
}


OpenCVFunctions::~OpenCVFunctions(void)
{
}
double OpenCVFunctions::Brighten(char* InStr, char *OutStr)
{
	//implementation

	double alpha=2.0; //< Simple contrast control 
	int beta=70;  //< Simple brightness control  
	int i=0; 
	//printf("string is : %s\n",InStr); 
	using namespace cv; 
	/// Read image given by user 
	Mat image; 
	IplImage *img=cvLoadImage(InStr,1);  
	Mat ImgMat(img); 
	image=ImgMat; 
	Mat new_image = Mat::zeros( image.size(), image.type() ); 

	using namespace std; 
	/// Initialize values 
	//std::cout<<" Basic Linear Transforms "<<std::endl; 
	//std::cout<<"-------------------------"<<std::endl; 
	//std::cout<<"* Enter the alpha value [1.0-3.0]: ";std::cin>>alpha; 
	//std::cout<<"* Enter the beta value [0-100]: "; std::cin>>beta; 

	/// Do the operation new_image(i,j) = alpha*image(i,j) + beta 
	for( int y = 0; y < image.rows; y++ ) 
	{ for( int x = 0; x < image.cols; x++ ) 
	{ for( int c = 0; c < 3; c++ ) 
	{ 
		new_image.at<Vec3b>(y,x)[c] = 
			saturate_cast<uchar>( alpha*( image.at<Vec3b>(y,x)[c] ) + beta ); 
	} 
	} 
	} 


	/// Create Windows 
	//namedWindow("Original Image", 1); 
	//namedWindow("New Image", 1); 

	/// Show stuff 
	//imshow("Original Image", image); 
	//imshow("New Image", new_image); 

	//save new_image 
	IplImage* image2=cvCloneImage(&(IplImage)new_image); 
	cvSaveImage(OutStr,image2); 
	/// Wait until user press some key 
	//waitKey(); 
	//  return outputPath; 
	return 0;
}

double OpenCVFunctions::Sharpen(char* InStr, char *OutStr)
{
	//implementation
	int k=0; 
	using namespace cv; 
	Mat image; 
	Mat result; 
	using namespace std; 
	try
	{ 
		IplImage *img=cvLoadImage(InStr,1);  
		Mat ImgMat(img); 
		image=ImgMat; 

		if(!image.data) 
		{ 
			throw 1; 
		} 
	} 

	catch(int i) 
	{ 
		cout << "Unable to read image" << endl; 
	} 

	result.create(image.size(), image.type()); 

	//For all rows except first and last 
	for(int i=1;i<image.rows-1;i++) 
	{ 
		const uchar *previous = image.ptr<const uchar>(i-1); 
		const uchar *next = image.ptr<const uchar>(i+1); 
		const uchar *current = image.ptr<const uchar>(i); 

		uchar *output = result.ptr<uchar>(i); 

		//For all columns except first and last 
		for(int a=3;a<(image.cols-1)*3;a++) 
		{ 
			output[a] = cv::saturate_cast<uchar>(5*current[a]-current[a-1]-current[a+1]-previous[a]-next[a]); 
		} 

	} 

	result.row(0).setTo(cv::Scalar(0)); 
	result.row(result.rows-1).setTo(cv::Scalar(0)); 
	result.col(0).setTo(cv::Scalar(0)); 
	result.col(result.cols-1).setTo(cv::Scalar(0)); 

	//namedWindow("Original"); 
	//imshow("Original",image); 

	//namedWindow("Duplicate"); 
	//imshow("Duplicate",result); 
	IplImage* image2=cvCloneImage(&(IplImage)result); 
	cvSaveImage(OutStr,image2); 
	//waitKey(0); 
	//  return outputPath; 
	return 0;
}

double OpenCVFunctions::Erode(char* InStr, char* OutStr)
{
	//implementation
	int j=0;
	IplImage* img = cvLoadImage(InStr);
	int i=0;
	//cvNamedWindow("MyWindow");
	//cvShowImage("MyWindow", img);
	//erode and display the eroded image
	cvErode(img, img, 0, 2);
	//cvNamedWindow("Eroded");
	//cvShowImage("Eroded", img);
	cvSaveImage(OutStr,img);
	//        cvSaveImage("C:/Users/Public/Pictures/Sample Pictures/Output.jpg",img);
	cvWaitKey(0);
	return 0;
}
