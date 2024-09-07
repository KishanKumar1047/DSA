#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    // Example array
    std::vector<int> arr = {1, 2, 3};

    // Display the current permutation
    std::cout << "Current permutation: ";
    for (int i : arr) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    // Find the next permutation
    if (std::next_permutation(arr.begin(), arr.end())) {
        std::cout << "Next permutation: ";
        for (int i : arr) {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "No next permutation available. The array is now in the first permutation." << std::endl;
    }

    return 0;
}
