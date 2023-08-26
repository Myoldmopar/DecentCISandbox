#include <iostream>

int main([[maybe_unused]] int argc, char** argv) {
    std::cout << "Hello, World!" << std::endl;
    if (*argv[1] == 'A') {
        return 0;
    } else {
        return 1;
    }
}
