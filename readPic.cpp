// #include "/home/azj-ubuntu/test/ExampleOpenCV/opencv/include/opencv2/core/core.hpp"
// #include "/home/azj-ubuntu/test/ExampleOpenCV/opencv/include/opencv2/highgui/highgui.hpp"

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>

#include <iostream>
using namespace std;

int main(){
        cv::Mat image;
        image = cv::imread("1.jpeg");
        if(image.data == NULL){
                cerr<<"图片文件不存在"<<endl;
                return 0;
        }
        else{
                cout<<image<<endl;
                return 0;
        }
}
