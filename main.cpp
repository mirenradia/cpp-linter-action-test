#include <iostream>

int main() {

    // This line should trigger a clang-tidy warning about using C arrays
    int my_c_arr[3] = {1, 2, 3};

    // This line should trigger a clang-tidy warning about not using range-based
    // for loops
    for (int i = 0; i < 3; i++) {
        std::cout << my_c_arr[i] << " " << std::endl;
    }
}