# Dangling Pointers in C

This repository demonstrates the danger of dangling pointers in C programming.  Dangling pointers arise when a pointer variable refers to a memory location that has been freed or is no longer valid. Accessing a dangling pointer can lead to unpredictable program behavior, crashes, or security vulnerabilities.

The `bug.c` file contains code that exhibits this problem. The `bugSolution.c` file demonstrates how to avoid dangling pointer errors and write safer code.

## How to Run

1. Clone this repository.
2. Compile the code using a C compiler (like GCC):
   ```bash
   gcc bug.c -o bug
   gcc bugSolution.c -o bugSolution
   ```
3. Run the executables:
   ```bash
   ./bug
   ./bugSolution
   ```

## Learning Points

* **Understanding Pointer Management:**  Learn how to allocate and deallocate memory safely using functions like `malloc` and `free`. Avoid creating dangling pointers by ensuring that pointers always point to valid memory locations.
* **Memory Leaks:**  Improper memory management can also lead to memory leaks.  Ensure that allocated memory is always freed when it is no longer needed. 
* **Secure Coding Practices:**  Avoiding dangling pointers and memory leaks is a crucial part of writing secure and robust C applications.
