// Create a class Customer with attributes name customer name, product bought and paid amount. Create suitable methods to take and display the information with a clause that if amount paid is greater than 20000 then a discount of 5% given else no discount is granted.
#include <iostream>
#include <string>

using namespace std;

// Class definition
class Customer {
 private:
  string customer_name, product_bought;
  int amount_paid, discount;

 public:
  Customer();
  ~Customer();

  void GetData();
  void Display();
};

Customer::Customer() {  // default constructor
  cout << "NEW CUSTOMER:" << endl;
  cout << "=============" << endl;
}

Customer::~Customer() {}  // destructor

void Customer::GetData() {  // method to take information
  cout << "Enter the customer's name: ";
  getline(cin, customer_name);  // line input
  cout << "Enter the product bought: ";
  getline(cin, product_bought);

  cout << "Enter the amount price: ";
  cin >> amount_paid;
  // giving 5% discount if the amount exceeds 20000
  if (amount_paid > 20000) {
    discount = (0.05 * amount_paid);
  }  // else leave the final price as it is
}

void Customer::Display() {  // method to display information
  cout << endl << "CUSTOMER BILLING DETAILS:" << endl;
  cout << "=========================" << endl;
  cout << "Name: " << customer_name << endl;
  cout << "Product bought: " << product_bought << endl;
  cout << "Amount paid: " << amount_paid << endl;
  cout << "Discount: " << discount << endl;
  cout << "Final price: " << (amount_paid - discount) << endl;
}

int main() {
  Customer c1;
  c1.GetData();
  c1.Display();

  return 0;
}
