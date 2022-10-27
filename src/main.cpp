#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/core.hpp>

/*---------------------------------------------------------------------*/
#include "ColorAberrationCorrection.h"

int main(int argc, char *argv[]) {


	cv::Mat src = cv::imread(argv[1], cv::IMREAD_COLOR);
	cv::Mat dst;

	CACorrection(src, dst);

    if (getenv("PEL_CAC_DISPLAY")) {
	    cv::imshow("original", src);
	    cv::imshow("result", dst);
	    

	    cv::imwrite("result.bmp", dst);

	    cv::waitKey(0);
	    cv::destroyAllWindows();
    }
	return 0;
}
