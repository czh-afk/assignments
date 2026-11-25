#include <iostream>
#include <opencv2/opencv.hpp>
int main() {
    cv::Mat img=cv::imread("img.png");
    if (img.empty()) {
        std::cout << "Could not open or find the image" << std::endl;
        return -1;
    }
    std::cout << "Reading image..." << std::endl;
    cv::Mat hsv;
    cv::cvtColor(img,hsv,cv::COLOR_BGR2HSV);
    cv::imshow("img",img);
    cv::imshow("hsv",hsv);
    cv::waitKey(0);
    return 0;
}
