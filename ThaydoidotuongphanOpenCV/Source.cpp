//Code demo Group 05

//Bao g?m th? vi?n
#include<opencv2/opencv.hpp>
#include<iostream>
//Namespace v� hi?u h�a vi?c s? d?ng cv::function();
using namespace std;
using namespace cv;
int main() {

	//??c h�nh ?nh
	Mat image = imread("C:\\Users\\84395\\Music\\MEmu Music\\ThaydoidotuongphanOpenCV\\ptit.jpg", 1);

	Mat imageA;
	image.convertTo(imageA, -1, 2, 0);
	imshow("Ptit", image);
	waitKey();
	imshow("Ptit.h", imageA);

	waitKey(0);

	//ph� h?y t?t c? c�c c?a s? ???c t?o ra
	destroyAllWindows();
	return 0;
}