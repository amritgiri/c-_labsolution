//WAP to add three integer variables using function and illustrating the concept of default arguments. 

#include <iostream>

using namespace std;

int add(int a, int b = 0, int c = 3) {
  return (a + b + c);
}

int main() {
  int a = 1, b = 2, c = 10;
  cout << "Sum = " << add(a) << endl;        // expected: 4 (1 + 0 + 3)
  cout << "Sum = " << add(a, b) << endl;     // 1 + 2 + 3
  cout << "Sum = " << add(a, b, c) << endl;  // 1 + 2 + 10
  cout << "Sum = " << add(1) << endl;        // gives error when no args given
  return 0;
}
