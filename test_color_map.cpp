#include <cassert>
#include "./color_map.h"

// Unit tests
void testGenerateColorMap() {
    auto colorMap = generateColorMap();
    assert(colorMap.size() == 25); 
    assert(colorMap[0] == std::make_pair("White", "Blue"));
    assert(colorMap[24] == std::make_pair("Violet", "Slate"));
}

void testFormatColorMap() {
    auto colorMap = generateColorMap();
    std::string formatted = formatColorMap(colorMap);

    assert(formatted.substr(0, 19) == "0 | White | Blue\n");
    assert(formatted.substr(formatted.length() - 20) == "24 | Violet | Slate\n");
}

int main() {
    testGenerateColorMap();
    testFormatColorMap();
    std::cout << "All tests passed!" << std::endl;
    return 0;
}


