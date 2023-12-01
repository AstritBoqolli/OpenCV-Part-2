#include<iostream>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>

using namespace std;
using namespace cv;

int main()
{
    // Read the input image
    Mat image = imread("Image.png", IMREAD_COLOR);

    // Declare Mat objects to store eroded and dilated images
    Mat erodeMat, dilateMat;

    // Declare the structuring element (kernel) for erosion and dilation
    Mat elementKernel;

    // Perform erosion operation on the input image
    erode(image, erodeMat, elementKernel, Point(-1, -1), 1);

    // Perform dilation operation on the input image
    dilate(image, dilateMat, elementKernel, Point(-1, -1), 1);

    // Display the original input image
    imshow("Input", image);

    // Display the eroded image
    imshow("Eroded", erodeMat);

    // Display the dilated image
    imshow("Dilated", dilateMat);

    // Wait for a key press
    waitKey(0);

    return 0;
}
