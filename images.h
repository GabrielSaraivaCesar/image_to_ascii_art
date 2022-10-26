#include <iostream>
#include <vector>


extern "C" {
    #define STB_IMAGE_IMPLEMENTATION
    #include "./libs/stb_image.h"
}

bool load_image(std::vector<unsigned char>& image, const std::string& filename, int& x, int&y)
{
    int n;
    unsigned char* data = stbi_load(filename.c_str(), &x, &y, &n, 4);
    if (data != nullptr)
    {
        image = std::vector<unsigned char>(data, data + x * y * 4);
    }
    stbi_image_free(data);
    return (data != nullptr);
}