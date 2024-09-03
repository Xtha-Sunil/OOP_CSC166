// 29. Write a program showing the example of aggregation.

#include <iostream>
#include <vector>
#include <string>

class Employee {
private:
    std::string name;

public:
    Employee(const std::string &empName) : name(empName) {}

    std::string getName() const {
        return name;
    }
};

class Department {
private:
    std::string deptName;
    std::vector<Employee*> employees;  // Aggregation: Department has a collection of Employees

public:
    Department(const std::string &name) : deptName(name) {}

    void addEmployee(Employee* emp) {
        employees.push_back(emp);  // Add employee to the department
    }

    void showEmployees() const {
        std::cout << "Employees in " << deptName << " department:" << std::endl;
        for (const auto& emp : employees) {
            std::cout << "- " << emp->getName() << std::endl;
        }
    }
};

int main() {
    Employee emp1("John Doe");
    Employee emp2("Jane Smith");
    Employee emp3("Alice Johnson");

    Department dept("HR");

    dept.addEmployee(&emp1);
    dept.addEmployee(&emp2);
    dept.addEmployee(&emp3);

    dept.showEmployees();

    return 0;
}
