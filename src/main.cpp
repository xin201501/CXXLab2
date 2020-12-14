#include "../../C++Lab3 20201213/include/CPoint.h"
#include "CLine.h"
#include <iostream>
int main() {
    CPoint p1{3, 4}, p2{5, 6};
    p1.ShowPoint();
    std::cout << '\n';
    p2.ShowPoint();
    std::cout << '\n';
    CPoint p3 = p1 + p2, p4 = p1 - p2;
    p3.ShowPoint();
    std::cout << '\n';
    p4.ShowPoint();
    std::cout << '\n';
    std::cout << "please input two numbers to initialize CPoint instance:\n";
    std::cin >> p1;
    std::cout << "The property of this instance are(first x second y):" << p1;
    return 0;
}