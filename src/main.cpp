#include <iostream>

#include "opencv2/highgui.hpp"

using namespace std;
using namespace cv;

int main() {
    VideoCapture capture;
    Mat frame;
    capture.open(0);
    capture.set(CAP_PROP_FPS, 5);
    if (capture.isOpened()) {
        while (1) {
            capture >> frame;
            if (frame.empty())
                break;
            Mat frame_mat = frame.clone();
            imshow("Video Stream", frame_mat);
            char c = (char)waitKey(10);
            if (c == 'q')
                break;
        }
    } else {
        cout << "Could not Open Camera";
    }
    return 0;
}