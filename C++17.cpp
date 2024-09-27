//Write a program in c++ to create a class which will calculate the area of a triangle circle rectangle having the name
#include <iostream>
#include <cmath>
class Shape {
private:
    std::string shapeName;

public:
    Shape(const std::string &name) : shapeName(name) {}
    void calculateTriangleArea() {
        double base, height;
        std::cout << "Enter base of the triangle: ";
        std::cin >> base;
        std::cout << "Enter height of the triangle: ";
        std::cin >> height;
        double area = 0.5 * base * height;
        std::cout << "Area of " << shapeName << " is: " << area << std::endl;
    }
    void calculateCircleArea() {
        double radius;
        std::cout << "Enter radius of the circle: ";
        std::cin >> radius;
        double area = M_PI * radius * radius;
        std::cout << "Area of " << shapeName << " is: " << area << std::endl;
    }
    void calculateRectangleArea() {
        double length, width;
        std::cout << "Enter length of the rectangle: ";
        std::cin >> length;
        std::cout << "Enter width of the rectangle: ";
        std::cin >> width;
        double area = length * width;
        std::cout << "Area of " << shapeName << " is: " << area << std::endl;
    }
    void calculateArea() {
        if (shapeName == "triangle") {
            calculateTriangleArea();
        } else if (shapeName == "circle") {
            calculateCircleArea();
        } else if (shapeName == "rectangle") {
            calculateRectangleArea();
        } else {
            std::cout << "Unknown shape!" << std::endl;
        }
    }
};
int main() {
    std::string shape;
    std::cout << "Enter the shape name (triangle/circle/rectangle): ";
    std::cin >> shape;
    Shape myShape(shape);
    myShape.calculateArea();

}