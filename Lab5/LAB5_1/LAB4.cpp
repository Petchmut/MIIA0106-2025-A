#include <iostream>
#include <string>
using namespace std;

double calculateCircleArea(double x)
{
    double PI = 3.14159;
    double area = PI * x * x;
    return area;
}

double calculateRectangleArea(double width, double height)
{
    return width * height;
}

int main()
{
    double radius;
    cout << "ป้อนรัศมีวงกลม: ";
    cin >> radius;

    double circleArea = calculateCircleArea(radius);
    cout << "พื้นที่ของวงกลมที่มีรัศมี " << radius << " is " << circleArea << endl;

    double width, height;
    cout << "ความกว้าง: ";
    cin >> width;
    cout << "ความยาว: ";
    cin >> height;

    double rectangleArea = calculateRectangleArea(width, height);
    cout << "พื้นที่สี่เหลี่ยม = " << rectangleArea << endl;

    return 0;
}