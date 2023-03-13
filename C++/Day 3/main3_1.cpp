// Write aprogram to print the area of rectangle

#include <iostream>
using namespace std;

int main() {
    int length, width;
    cout << "Enter the length of rectangle" << endl;
    cin >> length;
    cout << "Enter the width of rectangle" << endl;
    cin >> width;
    int area = length * width;
    cout << "Area of rectangle is " << area << endl;
    return 0;
}