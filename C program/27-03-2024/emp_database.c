/*You are tasked with developing a program to manage the employee database of a medium-sized company. The HR department requires a software solution that allows them to efficiently maintain employee records, update information as needed, and generate reports when necessary.
Your task is to design and implement a program using C language that fulfills the requirements outlined below:
Employee Database Structure: Define a structure to represent employee records. Each record should include the following fields:
Employee ID (an integer value)
Name (a string of characters)
Department (a string of characters)
Designation (a string of characters)
Salary (a floating-point value)
Functionality:
Add New Employees: Implement a function to add new employees to the database. The function should prompt the user to input employee details such as ID, name, department, designation, and salary.
Display Employee Details: Implement a function to display the details of all employees stored in the database.
Update Employee Information: Implement a function to update the information of existing employees. The function should allow the user to search for an employee by ID and then update their name, department, designation, or salary.
 
User Interface: Develop a user-friendly interface that allows HR staff to interact with the program easily. The interface should provide options for adding new employees, displaying employee details, updating employee information, and deleting employees.
Error Handling: Ensure robust error handling throughout the program. Validate user input to prevent invalid data entry and provide informative error messages when necessary.
Scalability: Design the program to handle a moderate number of employees efficiently. Consider using dynamic memory allocation to accommodate a growing database size if needed.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure to represent employee records
struct Employee {
    int employeeID;
    char name[50];
    char department[50];
    char designation[50];
    float salary;
};

// Function prototypes
void addEmployee(struct Employee **database, int *numEmployees);
void displayEmployees(struct Employee *database, int numEmployees);
void updateEmployee(struct Employee *database, int numEmployees);

int main() {
    struct Employee *employeeDatabase = NULL;
    int numEmployees = 0;
    int choice;

    do {
        printf("\nEmployee Database Management System\n");
        printf("1. Add New Employee\n");
        printf("2. Display Employee Details\n");
        printf("3. Update Employee Information\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addEmployee(&employeeDatabase, &numEmployees);
                break;
            case 2:
                displayEmployees(employeeDatabase, numEmployees);
                break;
            case 3:
                updateEmployee(employeeDatabase, numEmployees);
                break;
            case 4:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 4);

    // Free dynamically allocated memory
    free(employeeDatabase);

    return 0;
}

// Function to add new employees to the database
void addEmployee(struct Employee **database, int *numEmployees) {
    // Increment number of employees
    (*numEmployees)++;

    // Reallocate memory for employee database
    *database = (struct Employee *)realloc(*database, (*numEmployees) * sizeof(struct Employee));

    if (*database == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    // Prompt user for employee details
    printf("\nEnter details for Employee %d:\n", *numEmployees);
    printf("Employee ID: ");
    scanf("%d", &(*database)[*numEmployees - 1].employeeID);
    printf("Name: ");
    scanf("%s", (*database)[*numEmployees - 1].name);
    printf("Department: ");
    scanf("%s", (*database)[*numEmployees - 1].department);
    printf("Designation: ");
    scanf("%s", (*database)[*numEmployees - 1].designation);
    printf("Salary: ");
    scanf("%f", &(*database)[*numEmployees - 1].salary);

    printf("Employee added successfully!\n");
}

// Function to display the details of all employees
void displayEmployees(struct Employee *database, int numEmployees) {
    if (numEmployees == 0) {
        printf("No employees in the database!\n");
        return;
    }

    printf("\nEmployee Details:\n");
    printf("ID\tName\tDepartment\tDesignation\tSalary\n");
    for (int i = 0; i < numEmployees; i++) {
        printf("%d\t%s\t%s\t\t%s\t\t%.2f\n", database[i].employeeID, database[i].name,
               database[i].department, database[i].designation, database[i].salary);
    }
}

// Function to update the information of existing employees
void updateEmployee(struct Employee *database, int numEmployees) {
    if (numEmployees == 0) {
        printf("No employees in the database!\n");
        return;
    }

    int id, found = 0;
    printf("Enter the Employee ID to update: ");
    scanf("%d", &id);

    for (int i = 0; i < numEmployees; i++) {
        if (database[i].employeeID == id) {
            printf("Enter new details for Employee %d:\n", id);
            printf("Name: ");
            scanf("%s", database[i].name);
            printf("Department: ");
            scanf("%s", database[i].department);
            printf("Designation: ");
            scanf("%s", database[i].designation);
            printf("Salary: ");
            scanf("%f", &database[i].salary);

            printf("Employee information updated successfully!\n");
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Employee with ID %d not found!\n", id);
    }
}
