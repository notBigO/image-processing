#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>

const int IMAGE_WIDTH = 250;
const int IMAGE_HEIGHT = 250;
const int MAX_COLOR_VALUE = 255;

int main() {
    std::ofstream image("image.ppm");

    if (!image.is_open()) {
        std::cerr << "Error: Failed to open file for writing." << std::endl;
        return 1;
    }

    // Write header information
    image << "P3\n";
    image << IMAGE_WIDTH << " " << IMAGE_HEIGHT << "\n";
    image << MAX_COLOR_VALUE << "\n";

    // Seed random number generator
    std::srand(std::time(nullptr));

    // Write pixel data
    for (int y = 0; y < IMAGE_HEIGHT; y++) {
        for (int x = 0; x < IMAGE_WIDTH; x++) {
            image << std::rand() % (MAX_COLOR_VALUE + 1) << " "; // Red
            image << std::rand() % (MAX_COLOR_VALUE + 1) << " "; // Green
            image << std::rand() % (MAX_COLOR_VALUE + 1) << "\n"; // Blue
        }
    }

    image.close();

    std::cout << "Image generated successfully." << std::endl;

    return 0;
}
