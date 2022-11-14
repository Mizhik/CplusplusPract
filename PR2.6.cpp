#include <iostream>

void main() {
    int c0, counter = 0;
    std::cin >> c0;
    do {
        if (c0 % 2 == 0) c0 /= 2;
        else c0 = 3 * c0 + 1;
        std::cout << c0 << std::endl;
        counter++;
    } while (c0 != 1);
    std::cout << "steps = " << counter << std::endl;
}