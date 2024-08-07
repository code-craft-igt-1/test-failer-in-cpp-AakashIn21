#ifndef COLOR_MAP_H
#define COLOR_MAP_H

#include <vector>
#include <string>
#include <utility> // For std::pair

// Function to generate the color map
std::vector<std::pair<std::string, std::string>> generateColorMap();

// Function to format the color map into a string
std::string formatColorMap(const std::vector<std::pair<std::string, std::string>>& colorMap);

#endif // COLOR_MAP_H
