#include <iostream>
#include <string>
using namespace std;

class Employee{
public:
    string name;
    double basicsal;
    string des;
    static int employeeCount;

    Employee(string name, double basicsal, string des) {
        this->name = name;
        this->basicsal = basicsal;
        this->des = des;
        employeeCount++;
    }
    
    Employee operator+(double bonus) {
        Employee newEmployee(name, basicsal + bonus, des);
        return newEmployee;
    }
    void printDetails() {
        cout << "Name: " << name << endl;
        cout << "Basic Salary: " << basicsal << endl;
        cout << "Designation: " << des << endl;
    }
};

int Employee::employeeCount = 0;

int main() {
    string name;
    double basicsal, bonus;
    string des;

    cout << "Enter employee name, basic salary, and designation: ";
    cin >> name >> basicsal >> des;

    Employee employee(name, basicsal, des);

    cout << "Enter bonus amount: ";
    cin >> bonus;

    employee = employee + bonus;

    employee.printDetails();
    cout << "Total number of employees: " << Employee::employeeCount << endl;

    return 0;
}
