// Write a C++ program to print the day (Monday, Tuesday...) based on the day number(1,2,3..)

#include <iostream>
using namespace std;

int main() {
    
    int day_number;
    cin>>day_number;
    
    switch (day_number) {
      case 1:
         cout << "Monday";
         break;
      case 2:
         cout << "Tuesday";
         break;
      case 3:
         cout << "Wednesday";
         break;
      case 4:
         cout << "Thursday";
         break;
      case 5:
         cout << "Friday";
         break;
      case 6:
         cout << "Saturday";
         break;
      case 7:
         cout << "Sunday";
         break;
      default:
         cout << "Invalid day";
         break;
}
    return 0;
}