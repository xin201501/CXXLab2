#include "../../C++Lab3 20201213/include/CPoint.h"
#include "CLine.h"
#include <iostream>
int main() {
    CPoint p1{3, 4}, p2{5, 6};
    std::cout << p1.GetX() << '\n';
    std::cout << p1.GetY() << '\n';
    p1.ShowPoint();
    p2.ShowPoint();
    std::cout << '\n';
    CPoint *p = &p1;
    std::cout << p->GetX() << '\n';
    std::cout << p->GetY() << '\n';
    p->ShowPoint();
    std::cout << '\n';
    CPoint &q = p2;
    std::cout << q.GetX() << '\n';
    std::cout << q.GetY() << '\n';
    q.ShowPoint();
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