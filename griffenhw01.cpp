#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
  string firstname;
  string lastname;

  cout << "Input your fist name: ";
  cin >> firstname;
  cout <<"Input your last name: ";
  cin >> lastname;
  cout << firstname << " " << lastname << endl;
  cout << firstname << "\t" << lastname << endl;
  cout << firstname << "\n" << lastname << endl;


  cout << endl;
  cout << endl;
  cout << endl;

  cout << "Shopping Cart \n--------------------------------------" << endl;
//  cout << "-------------------------------"
  cout << left << setw(4) << "#" << left << setw(24) << "Item" << right << setw(6) << "Cost" << endl;
  cout << endl;
  cout << left << setw(4) << "1" << left << setw(25) <<"Chalupa" << right << setw(6) << "$1.50" << endl;
  cout << left << setw(4) << "2" << left << setw(25) <<"Soft Taco Supreme" << right << setw(6) << "$1.00" << endl;
  cout << left << setw(4) << "1" << left << setw(25) <<"Meximelt" << right << setw(6) << "$2.50" << endl;
  cout << endl;
  cout << endl;
  cout << left << setw(4) << "" << left << setw(25) << "Subtotal:" << right << setw(6) << "$5.00" << endl;


  return 0;
}
