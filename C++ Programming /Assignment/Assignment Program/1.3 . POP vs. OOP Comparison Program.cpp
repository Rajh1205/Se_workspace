#include <iostream>
using namespace std;
/*
// Function to calculate area
int calculateArea(int length, int breadth) {
    return length * breadth;
}

int main() {
    int length, breadth, area;

    cout << "Enter length: ";
    cin >> length;

    cout << "Enter breadth: ";
    cin >> breadth;

    area = calculateArea(length, breadth);

    cout << "Area of Rectangle = " << area;
    return 0;
}
*/

class Rectangle {
private:
    int length, breadth;

public:
    void setValues(int l, int b) {
        length = l;
        breadth = b;
    }

    int calculateArea() {
        return length * breadth;
    }
};

int main() {
    Rectangle rect;
    int l, b;

    cout << "Enter length: ";
    cin >> l;

    cout << "Enter breadth: ";
    cin >> b;

    rect.setValues(l, b);

    cout << "Area of Rectangle = " << rect.calculateArea();
    return 0;
}