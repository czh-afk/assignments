#include <iostream>
#include <opencv2/opencv.hpp>
int main() {
    cv::Mat img=cv::imread("img.png");
    if (img.empty()) {return -1;};
    cv::imshow("img", img);
    cv::waitKey(0);

}
