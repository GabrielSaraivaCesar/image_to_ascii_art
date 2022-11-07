#include <iostream>
#include <vector>
#include <string>
#include "clearing.h"
#include "images.h"
#include <math.h> 

using namespace std;

const int fps = 1;
const float fpsMark = 1/(float)fps*1000;
const size_t RGBA = 4;

char asciiCodesByPixelIntensity[] = {
    ' ','\'','`','^','"',',',':',';','I','l','!','i','>','<','~','+','_','-','?',']','[','}','{','1',')','(','|','/','t','f','j','r','x','n','u','v','c','z','X','Y','U','J','C','L','Q','0','O','Z','m','w','q','p','d','b','k','h','a','o','*','#','M','W','&','8','%','B','@','$'
};
int asciiCodesByPixelIntensityLength = sizeof(asciiCodesByPixelIntensity)/sizeof(char);


void draw(std::vector<unsigned char> &frame, int width, int height, float currentFps) {
    struct winsize windowSize;
    ioctl(STDOUT_FILENO, TIOCGWINSZ, &windowSize);

    double xProportion = (double)width / (double)windowSize.ws_col;
    double yProportion = (double)width / (double)height * xProportion;
    
    int totalPixelsPerBlock = yProportion*xProportion;
    for (int row = 0; floor((double)row*yProportion)+yProportion < height ; row++) {
        for (int col = 0; col < windowSize.ws_col; col++) {
            double graySum = 0;
            int blockSize = 0;
            for (int relX = floor((double)col*xProportion); relX < floor((double)col*xProportion)+xProportion && relX <= width; relX++) {
                for (int relY = floor((double)row*yProportion); relY < floor((double)row*yProportion)+yProportion && relY <= height; relY++) {
                    blockSize += 1;
                    size_t index = RGBA * (relY * width + relX);
                    int r = static_cast<int>(frame[index + 0]);
                    int g = static_cast<int>(frame[index + 1]);
                    int b = static_cast<int>(frame[index + 2]);
                    int a = static_cast<int>(frame[index + 3]);
                    graySum += (r+g+b)/3*(a/255);
                }   
            }
            if (blockSize == 0) {
                break;
            }

            graySum /= (double)blockSize;
            int charIndex = graySum/255*(asciiCodesByPixelIntensityLength-1);

            char v = asciiCodesByPixelIntensity[charIndex];
            if (v == 'D') {
                cout<<asciiCodesByPixelIntensity[68]<<" ";
            } else {
                cout<<v;
            }
        }
        cout<<endl;
    }  
}

void reverse(char arr[], int num)  
{  
    for ( int i = 0, j = num - 1; i < num/2; i++, j--)  
    {     
        char temp = arr[i];  
        arr[i] = arr[j];  
        arr[j] = temp;  
    }  
}  


int main(int argc, char** argv) {
    if (argc < 2) {
        cout<<"Minimum 2 arguments required!"<<endl<<"./main [image_path] [...opions]"<<endl;
        return 1;
    }
  
    for (int i = 0; i < argc; i++) {
        if ((string)argv[i] == "--negative" or (string)argv[i] == "-n") {
            reverse(asciiCodesByPixelIntensity, asciiCodesByPixelIntensityLength);
        }
    }

    clock_t lastFrameTime = clock();
    string fileName = argv[1];
    int width, height;
    std::vector<unsigned char> image;
    bool success = load_image(image, fileName, width, height);


    const size_t RGBA = 4;
    int x = 1;
    int y = 1;
    size_t index = RGBA * (y * width + x);
    draw(image, width, height, 0);
    return 0;
}