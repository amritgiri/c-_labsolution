// WAP using class and object. Use the member function to initialize the class data members.

#include <iostream>
using namespace std;

class Circle {
 private:
  float radius;

 public:
  void SetRadius(float r) {
    // initializing data member
    radius = r;
  }

  void GetArea() {
    // accessing data member
    cout << "Area: " << (3.1415 * radius * radius) << endl;
  }
};

int main() {
  Circle c1;

  c1.SetRadius(10.0);
  c1.GetArea();
  return 0;
}
