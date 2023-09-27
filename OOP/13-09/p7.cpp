#include <iostream>
using namespace std;

class Shape {
public:
    double area;

    Shape() {
        area = 0;
    }

    Shape(double a) {
        area = a;
    }
};

class Rectangle : public Shape {
public:
    Rectangle(double length, double width) {
        area = length * width;
    }
};

class Square : public Shape {
public:
    Square(double side) {
        area = side * side;
    }
};

class Trapezium : public Shape {
public:
    Trapezium(double base1, double base2, double height) {
        area = 0.5 * (base1 + base2) * height;
    }
};

int main() {
    double length, width, side, base1, base2, height;

    cout << "Enter the length and width of a rectangle: ";
    cin >> length >> width;
    Rectangle rectangle(length, width);
    cout << "Area of the rectangle: " << rectangle.area << endl;

    cout << "Enter the side length of a square: ";
    cin >> side;
    Square square(side);
    cout << "Area of the square: " << square.area << endl;

    cout << "Enter the lengths of two bases and the height of a trapezium: ";
    cin >> base1 >> base2 >> height;
    Trapezium trapezium(base1, base2, height);
    cout << "Area of the trapezium: " << trapezium.area << endl;

    return 0;
}
