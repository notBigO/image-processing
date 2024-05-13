#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

void applyBlueFilter(int& r, int& g, int& b) {
    b = std::min(b + 50, 255);
}

bool copyAndFilterImage(const std::string& inputFilePath, const std::string& outputFilePath) {
    std::ifstream inputFile(inputFilePath);
    if (!inputFile.is_open()) {
        std::cerr << "Error: Failed to open input file." << std::endl;
        return false;
    }
    std::ofstream outputFile(outputFilePath);
    if (!outputFile.is_open()) {
        std::cerr << "Error: Failed to open output file." << std::endl;
        return false;
    }

    std::string type, width, height, RGB;
    inputFile >> type >> width >> height >> RGB;
    outputFile << type << "\n" << width << " " << height << "\n" << RGB << "\n";

    int r, g, b;
    while (inputFile >> r >> g >> b) {
        applyBlueFilter(r, g, b);

        outputFile << r << " " << g << " " << b << "\n";
    }

    inputFile.close();
    outputFile.close();

    std::cout << "Image processed successfully." << std::endl;
    return true;
}

int main() {
    const std::string inputFilePath = "";   // Path to .ppm
    const std::string outputFilePath = ""; // Specify the target image path

    if (!copyAndFilterImage(inputFilePath, outputFilePath)) {
        std::cerr << "Error: Failed to process image." << std::endl;
        return 1; 
    }

    return 0;
}
