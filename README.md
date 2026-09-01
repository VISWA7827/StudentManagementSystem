# Student Management System - C Project

A console-based application to manage student records in C programming with proper file handling and input validations.

## Features
- Add Student (with Gender & Marks validation)
- Delete Student by Adhaar Number
- Display All Students
- Sort by Adhaar Number
- Save to File and Load from File

## Validations Implemented
- **Gender:** Only `male` or `female` is accepted
- **Marks / Rating:** Only `1 to 10` is accepted
- **Adhaar:** Must be unique and 12 digits

## Tech Stack
- Language: C
- Compiler: GCC
- Concepts: Structure, Dynamic Memory Allocation, File Handling

## How to Run
```bash
gcc src/*.c -Iinclude -o output/student.exe
./output/student.exe