// There are 45 total pupils in the class, 25 of whom are boys. Write a program to find how many girls received grades "A" if 17 boys made up 80% of the students that received grades "A".

#include <iostream>

int main()
{
  int total_pupils = 45;
  int total_boys = 25;
  int boys_with_grade_A = 17;
  double boys_percentage = 80; // as a percentage
  double girls_percentage = 100 - boys_percentage; // calculate the percentage of girls
  int total_with_grade_A = (boys_with_grade_A / boys_percentage) * 100; // calculate the total number of students with grade A
  int girls_with_grade_A = total_with_grade_A - boys_with_grade_A; // calculate number of girls with grade A

  std::cout << "Number of girls with grade A: " << girls_with_grade_A << std::endl;

  return 0;
}
