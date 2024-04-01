/*Scenario:
You are developing a simple student management system for a school. The system needs to manage student records, including their names, IDs, and grades. You have decided to implement file handling using fprintf to write student records to a file and fscanf to read records from the file.
Exercise:
File Creation and Student Data Input:
Create a C program that creates a file named "student_records.txt" to store information about students.
Define a structure Student that represents a student with attributes such as name, ID, and grades.
Prompt the user to input details of multiple students and store them in the file in a structured format using fprintf.
Displaying Student Records:
Implement a function to read the contents of "student_records.txt" using fscanf and display them to the user.
Format the output to present each student's details (name, ID, grades) in a readable manner.
Calculating Average Grade:
Calculate the average grade for each student based on the grades stored in the file.
Display the average grade alongside the student's other details when showing the student records.
Adding Students:
Allow the user to add new students to the records.
Prompt the user to input details of the new student (name, ID, grades) and append this information to the "student_records.txt" file using fprintf.
Error Handling:
Handle potential errors gracefully, such as file creation failures, file reading errors, or invalid user input.
Provide informative error messages to guide the user on how to resolve the issue.*/