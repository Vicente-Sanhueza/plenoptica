
#include <iostream>
#include <opencv2/highgui.hpp> 	//image processing
#include <vector>
#include <cmath>				//floor()
#include <complex>				
#include <string>
using namespace std;


//Declarations
void load4D4(string folder, int width, int heigth, int view_u, int view_v, int factor, int padfactorUV, int padfactorXY);
//void;
//void;
//void;


int main(){
	cv::Mat image;
	image = cv::imread("IMG_01_01.png" , cv::IMREAD_COLOR);		// IMG_01_01.png / sample2.jpg //IMREAD_GRAYSCALE / IMREAD_COLOR

	cout << "Width : " << image.cols << endl;
	cout << "Height: " << image.rows << endl;

	if(! image.data ){
		cout <<  "Could not open or find the image" << endl ;
	}else{
		cv::namedWindow( "Ventana emergente", cv::WINDOW_AUTOSIZE );
		cv::imshow( "Ventana emergente", image );

		cv::waitKey(0);
	}

	return 0;
}

void load4D4(string folder, int width, int heigth, int view_u, int view_v, int factor, int padfactorUV, int padfactorXY){
	int w = width*factor;
	int h = heigth*factor;

	int w_pad = w*padfactorXY;
	int h_pad = h*padfactorXY;

	int u_pad = floor(view_u*padfactorUV);
	int v_pad = floor(view_v*padfactorUV);
}