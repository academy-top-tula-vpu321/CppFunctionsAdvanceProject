#include <iostream>

template <typename T>
struct Point
{
    T x;
    T y;
};

template <typename T1, typename T2>
auto Sum(T1 a, T2 b)
{
    return a + b;
}

//int Sum(int a, int b)
//{
//    return a + b;
//}
//
//float Sum(float a, float b)
//{
//    return a + b;
//}

template <typename T>
Point<T> Sum(Point<T> p1, Point<T> p2)
{
    return Point<T>{ p1.x + p2.x, p1.y + p2.y };
}

int main()
{
    double t{ 15 };
    int s{ 27 };

    std::cout << Sum(t, s) << "\n";
    std::cout << Sum(34.5, 12.67) << "\n";

    Point<int> p1 { 4, 6 };
    Point<float> p2 { 3, 5 };

    Sum(p1, p2);
}
