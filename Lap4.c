#include <stdio.h>

int main() {
    char employeeID[11];  
    int workingHours;
    float salaryPerHour, totalSalary;

    printf("Input the Employees ID(Max. 10 chars): \n");
    scanf("%s", employeeID);

    printf("Input the working hrs: \n");
    scanf("%d", &workingHours);

    printf("Salary amount/hr: \n");
    scanf("%f", &salaryPerHour);

    totalSalary = workingHours * salaryPerHour;

    printf("Expected Output:\n");
    printf("Employees ID = %s\n", employeeID);
    printf("Salary = U$ %.2f\n", totalSalary);

    return 0;
}
