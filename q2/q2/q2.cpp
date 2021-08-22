

#include <iostream>

int main()
{
    int n = 10;
    if (1 <= n <= 9) {
        if(n==1){
            std::cout << "one";
        }

        if (n == 2) {
            std::cout << "two";
        }
        if (n == 3) {
            std::cout << "three";
        }
        if (n == 4) {
            std::cout << "four";
        }
        if (n == 5) {
            std::cout << "five";
        }

        if (n == 6) {
            std::cout << "six";
        }
        if (n == 7) {
            std::cout << "seven";
        }
        if (n == 8) {
            std::cout << "eight";
        }
        if (n == 9) {
            std::cout << "nine";
        }
    }
    else if (n > 9) {
        std::cout << "greater than 9";
    }
}
