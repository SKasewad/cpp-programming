#include <iostream>
using namespace std;

class Employee
{
    int empId;
    string name;
    float salary;

public:
    void accept()
    {
        cout << "Enter Employee ID: ";
        cin >> empId;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Salary: ";
        cin >> salary;
    }

    void display()
    {
        cout << "\nEmployee Details\n";
        cout << "ID: " << empId << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    Employee e;
    e.accept();
    e.display();
    return 0;
}
