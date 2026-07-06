

#include <iostream>
using namespace std;

class Employee
{
private:
    string name;
    float salary;
    string designation;

public:
    // Setter 
    void setName(string n)
    {
        name = n;
    }

    void setSalary(float s)
    {
        salary = s;
    }

    void setDesignation(string d)
    {
        designation = d;
    }

    // Getter 
    string getName()
    {
        return name;
    }

    float getSalary()
    {
        return salary;
    }

    string getDesignation()
    {
        return designation;
    }
};

int main()
{
    //  object
    Employee emp;

    emp.setName("Rahul");
    emp.setSalary(50000);
    emp.setDesignation("Software Engineer");

    
    cout << "Employee Details" << endl;
    cout << "Name        : " << emp.getName() << endl;
    cout << "Salary      : " << emp.getSalary() << endl;
    cout << "Designation : " << emp.getDesignation() << endl;

    return 0;
}