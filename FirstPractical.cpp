#include <iostream>
#define PI 3.14159
using namespace std;

float area(float rad) { return PI * rad * rad; }

int area(int len, int bre) { return len * bre; }

int area(int side) { return side * side; }

int main() {
  float rad;
  int len, bre, side;

  cout << "Enter the radius of circle:";
  cin >> rad;
  cout << "The area of circle is " << area(rad) << endl;

  cout << "Enter the length and breadth of rectangle:";
  cin >> len >> bre;
  cout << "The area of recatngle is " << area(len, bre) << endl;

  cout << "Enter the side of square:";
  cin >> side;
  cout << "The area of square is " << area(side) << endl;
  return 0;
}
