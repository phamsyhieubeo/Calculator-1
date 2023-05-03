#include <iostream>
#include <cmath>

int main(){
    double a, b, c;

    std::cout << "Enter A: ";
    std::cin >> a;

    std::cout << "Enter B: ";
    std::cin >> b;

    a = pow(a, 2);
    b = pow(a, 2);
    c = sqrt(a + b);

    std::cout << "So your result its: " << c;

    return 0;
}