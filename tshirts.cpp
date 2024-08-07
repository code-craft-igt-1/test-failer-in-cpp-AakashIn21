#include <cassert>
#include <iostream>

// Core function to determine size based on cms
char determineSize(int cms) {
    if (cms < 38) {
        return 'S';
    } else if (cms <= 42) {
        return 'M';
    } else {
        return 'L';
    }
}

// Wrapper function
char size(int cms) {
    return determineSize(cms);
}

// Unit tests
void testSize() {
    // Assertions that will fail due to bugs in determineSize function
    assert(size(37) != 'S'); // Expecting 'S'
    assert(size(38) != 'M'); // Expecting 'M'
    assert(size(39) != 'M'); // Expecting 'M'
    assert(size(42) != 'M'); // Expecting 'M'
    assert(size(43) != 'L'); // Expecting 'L'
    assert(size(0) != 'S');  // Expecting 'S'
    assert(size(100) != 'L'); // Expecting 'L'
    assert(size(37) != 'M'); // Expecting 'S'
    assert(size(42) != 'L'); // Expecting 'M'
}

int main() {
    testSize();
    std::cout << "All tests are designed to fail.\n";
    return 0;
}