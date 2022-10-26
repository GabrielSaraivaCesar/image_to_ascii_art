#include <iostream>
#include <vector>
#include <string>
#include "clearing.h"
#include "images.h"

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
    clearConsole();
    double yProportion = height / windowSize.ws_row;
    double xProportion = width / height * yProportion;
    
    int totalPixelsPerBlock = yProportion*xProportion;

    for (int row = 0; row < windowSize.ws_row; row++) {
        for (int col = 0; col < windowSize.ws_col; col++) { 
            double graySum = 0;
            for (int relX = col*xProportion; relX < (col*xProportion)+xProportion; relX++) {
                for (int relY = row*yProportion; relY < (row*yProportion)+yProportion; relY++) {
                    size_t index = RGBA * (relY * width + relX);
                    int r = static_cast<int>(frame[index + 0]);
                    int g = static_cast<int>(frame[index + 1]);
                    int b = static_cast<int>(frame[index + 2]);
                    int a = static_cast<int>(frame[index + 3]);
                    graySum += (r+g+b)/3*(a/255);
                }   
            }
            graySum /= totalPixelsPerBlock;
            int charIndex = graySum/255*asciiCodesByPixelIntensityLength;
            cout<<asciiCodesByPixelIntensity[charIndex];
        }
        cout<<endl;
    }  
}


int main() {
    clock_t lastFrameTime = clock();
    string fileName = "./Octocat.png";
    int width, height;
    std::vector<unsigned char> image;
    bool success = load_image(image, fileName, width, height);


    const size_t RGBA = 4;
    int x = 1;
    int y = 1;
    size_t index = RGBA * (y * width + x);
    draw(image, width, height, 0);
    while(true){}
    // while(true) {
    //     clock_t currentFrameTime = clock();
    //     if (currentFrameTime - lastFrameTime >= fpsMark) {
    //         int currentFps = (fpsMark*fps)/(currentFrameTime - lastFrameTime);
    //         draw(image, width, height, currentFps);
    //         lastFrameTime = currentFrameTime;
    //     }
    // }

    return 0;
}