/*Scenario:
You are developing a simple messaging system for a small organization. The system allows employees to send and receive messages to/from each other. You're tasked with implementing the functionality to store these messages in a file and retrieve them when needed.
Exercise:
File Initialization:
Create a C program that initializes a file named "messages.txt" for storing messages.
Ensure that if the file already exists, it is opened in append mode, allowing new messages to be added to the existing ones.
Sending Messages:
Implement a function that allows users to send messages.
Prompt the user to enter their name (sender) and the message content.
Append the sender's name and the message content to "messages.txt" in a structured format, such as one message per line.
Displaying Messages:
Implement a function to display all messages stored in "messages.txt".
Read the contents of the file using fgets and display each message along with the sender's name in a readable format.
Error Handling:
Handle potential errors gracefully, such as file creation failures, file reading errors, or invalid user input.
Provide informative error messages to guide the user on how to resolve the issue.*/