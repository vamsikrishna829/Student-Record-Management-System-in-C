# Student Record Management System

## Project Description
The Student Record Management System is a menu-driven application developed using C programming. It uses a Singly Linked List to store and manage student details dynamically. The application allows users to add, delete, display, modify, sort, reverse, and save student records.

## Technologies Used
- C Programming
- Singly Linked List
- Dynamic Memory Allocation
- File Handling
- Makefile
- Ubuntu Linux

## Features
1. **Add Student:** Add new student records with automatic roll number generation.
2. **Delete Student:** Delete records using roll number or student name.
3. **Display Students:** Display all student records.
4. **Modify Student:** Modify student details using roll number, name, or percentage.
5. **Save Records:** Store student details in a text file (`student.txt`).
6. **Sort Records:** Sort student records by name or percentage.
7. **Reverse List:** Reverse the order of student records.
8. **Delete All:** Delete all student records.
9. **Exit:** Save and exit or exit without saving.

## Project Structure

```text
Student_Record_Management/
│
├── header.h
├── stu_main.c
├── stu_add.c
├── stu_del.c
├── stu_delall.c
├── stu_show.c
├── stu_save.c
├── stu_modify.c
├── stu_rev.c
├── stu_sort.c
├── exit.c
├── Makefile
└── student.txt
```

## Compilation and Execution

### Step 1: Open Terminal
Navigate to the project directory.

```bash
cd Student_Record_Management
```

### Step 2: Compile the Project

```bash
make
```

### Step 3: Run the Application

```bash
./exe
```

### Step 4: Clean Object Files

```bash
make clear
```

## Sample Menu

```text
****************STUDENT RECORD MENU*********************

a/A : Add new record
d/D : Delete a record
s/S : Show the list
m/M : Modify a record
v/V : Save records
e/E : Exit
t/T : Sort the list
l/L : Delete all the records
r/R : Reverse the list

Enter your choice:
```

## Concepts Implemented
- Structures and Pointers
- Singly Linked List
- Dynamic Memory Allocation (`malloc` and `free`)
- Functions and Modular Programming
- File Handling (`fopen`, `fprintf`, `fclose`)
- String Handling
- Searching and Sorting
- Makefile and Compilation

## Conclusion
This project provides a simple and efficient way to manage student records using C programming. It demonstrates practical implementation of linked lists, pointers, dynamic memory allocation, file handling, and modular programming.
