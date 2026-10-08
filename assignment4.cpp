#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    int empId;
    string name;
    float salary;
    float bonus;

public:

    // Default constructor
    Employee()
    {
        empId = 0;
        name = "";
        salary = 0;
        bonus = 0;
    }

    // Parameterized constructor
    Employee(int id, string n, float s, float b)
    {
        empId = id;
        name = n;
        salary = s;
        bonus = b;
    }

    // Calculate total salary
    float calculate()
    {
        float totalsalary;
        totalsalary = salary + bonus;
        return totalsalary;
    }

    // Display employee details
    void display()
    {
        cout << "Employee ID is " << empId << endl;
        cout << "Employee Name is " << name << endl;
        cout << "Salary is " << salary << endl;
        cout << "Bonus is " << bonus << endl;
        cout << "Total Salary is " << calculate() << endl;
    }
};

int main()
{
    Employee e1;
    e1.display();

    cout << endl;

    Employee e2(121, "Prathamesh", 500000, 100000);
    e2.display();

    return 0;
}







