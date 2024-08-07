#include <cassert>
#include <iostream>
#include "./color_map.h"

// Unit tests
void testGenerateColorMap() {
    auto colorMap = generateColorMap();
    assert(colorMap.size() == 25);

    // Check boundary values
    assert(colorMap[0] == std::make_pair("White", "Blue"));
    assert(colorMap[24] == std::make_pair("Violet", "Slate"));

    // Check some intermediate values
    assert(colorMap[5] == std::make_pair("White", "Orange"));
    assert(colorMap[10] == std::make_pair("Black", "Blue"));
    assert(colorMap[20] == std::make_pair("Yellow", "Green"));
}

void testFormatColorMap() {
    auto colorMap = generateColorMap();
    std::string formatted = formatColorMap(colorMap);

    // Verify start and end of the formatted string
    assert(formatted.find("0 | White | Blue\n") != std::string::npos);
    assert(formatted.find("24 | Violet | Slate\n") != std::string::npos);

    // Check some intermediate values
    assert(formatted.find("5 | White | Orange\n") != std::string::npos);
    assert(formatted.find("10 | Black | Blue\n") != std::string::npos);
    assert(formatted.find("20 | Yellow | Green\n") != std::string::npos);
}

int main() {
    testGenerateColorMap();
    testFormatColorMap();
    std::cout << "All tests passed!" << std::endl;
    return 0;
}
