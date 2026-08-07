#include <iostream>
using namespace std;

class Employee {
int employeeId;
string name;
float salary;

public:
void acceptDetails() {
cout << "Enter Employee ID: ";
cin >> employeeId;

cout << " Enter name: ";
cin >> name;

cout << "Enter salary:" ;
cin >> salary;

}
void displayDetails() {
cout << "\nEmployee Details" << endl;
cout << "Employee ID: " << employeeId << endl;
cout << "Name: " << name << endl;
cout << "Salary: " << salary << endl;
}
};
 int main() {
 Employee emp;
 
 emp.acceptDetails();
 emp.displayDetails();
 return 0;
 }
