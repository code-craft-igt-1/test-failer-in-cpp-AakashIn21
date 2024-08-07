#include "./color_map.h"
#include <iostream>
#include <vector>
#include <string>
#include <utility>   // For std::pair

// Function to generate the color map
std::vector<std::pair<std::string, std::string>> generateColorMap() {
    constexpr const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    constexpr const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    std::vector<std::pair<std::string, std::string>> colorMap;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            colorMap.emplace_back(majorColor[i], minorColor[j]);
        }
    }
    return colorMap;
}

// Function to format the color map into a string
std::string formatColorMap(const std::vector<std::pair<std::string, std::string>>& colorMap) {
    std::string result;
    int index = 0;
    for (const auto& pair : colorMap) {
        result += std::to_string(index++) + " | " + pair.first + " | " + pair.second + "\n";
    }
    return result;
}

// Function to print the color map (for demonstration purposes)
void printColorMap() {
    auto colorMap = generateColorMap();
    std::cout << formatColorMap(colorMap);
}

int main() {
    printColorMap();
    return 0;
}
