#include <iostream>

int main() {
    int x = 5;
    std:: cout << &x << std::endl;

    for (int i = 0; i<10; i++) {
        std::cout << i << std::endl;
    }

    char p = 'hello';
    std::cout << p[] << std::endl;

    return 0;
}