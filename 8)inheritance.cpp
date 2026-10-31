#include <iostream>
#include <string>
using namespace std;

class BasicInfo {
protected:
    string name;
    int empId;
    string gender;

public:
    void getBasicInfo() {
        cout << "Enter Employee ID: ";
        cin >> empId;
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Gender: ";
        getline(cin, gender);
    }

    void displayBasicInfo() const {
        cout << "Employee ID : " << empId << endl;
        cout << "Name        : " << name << endl;
        cout << "Gender      : " << gender << endl;
    }
};

class DepartmentInfo {
protected:
    string deptName;
    string designation;
    double salary;

public:
    void getDeptInfo() {
        cout << "Enter Department Name: ";
        getline(cin, deptName);
        cout << "Enter Designation: ";
        getline(cin, designation);
        cout << "Enter Basic Salary: ";
        cin >> salary;
    }

    void displayDeptInfo() const {
        cout << "Department  : " << deptName << endl;
        cout << "Designation : " << designation << endl;
        cout << "Salary      : $" << salary << endl;
    }
};

class Employee : public BasicInfo, public DepartmentInfo {
public:
    void getEmployeeDetails() {
        cout << "--- Enter Employee Details ---" << endl;
        getBasicInfo();
        getDeptInfo();
    }

    void displayEmployeeDetails() const {
       
        cout << "      EMPLOYEE DETAILS" << endl;
       
        displayBasicInfo();
        displayDeptInfo();
      
    }
};

int main() {
    Employee emp;
    emp.getEmployeeDetails();
    emp.displayEmployeeDetails();

    return 0;
}
