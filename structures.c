#include <stdio.h>

//Employee structure
struct Employee {
    char name[50];
    int employeeID;
    float salary;
};

int main() {
    //array of five Employee structures

    struct Employee employees[5] = {
        //Name > IDNumber >> Salary
        {"John Lemar", 2023305521, 90900.0},
        {"Rhoydel Elan", 2023305532, 55000.0},
        {"Daven Sumagang", 2023305543, 48000.0},
        {"Gerald Llorente", 2023305554, 60000.0},
        {"Jhun Lloyd Boyles", 2023305565, 52000.0}
    };

    // Finds the employee with the highest salary
    int highestSalaryEmployee = 0;
    for (int i = 1; i < 5; ++i) {
        if (employees[i].salary > employees[highestSalaryEmployee].salary) {
            highestSalaryEmployee = i;
        }
    }

    // Displays details of the employee with the highest salary
    printf("===================================\n");
    printf("Employee with the highest salary\n");
    printf("===================================\n");
    printf("Name: %s\n", employees[highestSalaryEmployee].name);
    printf("Employee ID: %d\n", employees[highestSalaryEmployee].employeeID);
    printf("Salary: %.2f\n", employees[highestSalaryEmployee].salary);
    printf("===================================\n");

    return 0;
}
