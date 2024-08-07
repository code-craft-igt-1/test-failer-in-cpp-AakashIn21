#include <cassert>
#include <iostream>
#include <string>

class SizeDeterminer {
 public:
    // Function to determine size based on cms
    char determineSize(int cms) const {
        if (cms < 38) {
            return 'S';
        } else if (cms <= 42) {
            return 'M';
        } else {
            return 'L';
        }
    }

    // Function to get size description based on cms
    std::string getSizeDescription(int cms) const {
        char size = determineSize(cms);
        switch (size) {
            case 'S': return "Small";
            case 'M': return "Medium";
            case 'L': return "Large";
            default: return "Unknown";  // Safeguard for unexpected values
        }
    }
};

// Unit test function
void testSizeDeterminer() {
    SizeDeterminer sd;
    assert(sd.determineSize(37) == 'S');            // Expecting 'S'
    assert(sd.determineSize(38) == 'M');            // Expecting 'M'
    assert(sd.determineSize(43) == 'L');            // Expecting 'L'
    assert(sd.getSizeDescription(37) == "Small");   // Expecting "Small"
    assert(sd.getSizeDescription(38) == "Medium");  // Expecting "Medium"
    assert(sd.getSizeDescription(43) == "Large");   // Expecting "Large"
}

int main() {
    testSizeDeterminer();
    std::cout << "All tests passed.\n";
    return 0;
}
