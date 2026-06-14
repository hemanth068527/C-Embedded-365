# Pointers in C - Theory Notes

## What is a Pointer?

A pointer is a variable that stores the memory address of another variable.

Example:

int a = 10;
int *ptr = &a;

- a stores the value 10
- &a gives the address of a
- ptr stores the address of a

---

## Address Operator (&)

The address operator returns the memory address of a variable.

Example:

&a

Used to obtain the location of a variable in memory.

---

## Dereference Operator (*)

The dereference operator accesses the value stored at a memory address.

Example:

*ptr

Used to read or modify data through a pointer.

---

## Pointer Declaration

Syntax:

datatype *pointer_name;

Examples:

int *ptr;
char *cptr;
float *fptr;

---

## Pointer Initialization

Example:

int num = 100;
int *ptr = &num;

Always initialize pointers before using them.

---

## NULL Pointer

A NULL pointer does not point to any valid memory location.

Example:

int *ptr = NULL;

Advantages:
- Prevents accidental memory access
- Easier debugging
- Good programming practice

---

## Program Memory Layout

A C program is divided into:

### Code Segment
Stores program instructions.

### Data Segment
Stores global and static variables.

### Stack
Stores local variables and function calls.

### Heap
Stores dynamically allocated memory.

Memory Layout:

Code
Data
Heap
Stack

---

## Pointer Size

Pointer size depends on processor architecture.

32-bit System  -> 4 Bytes
64-bit System  -> 8 Bytes

Important:
Pointer size does not depend on the data type.

Example:

sizeof(int *);
sizeof(char *);
sizeof(float *);

All pointers have the same size on a given architecture.

---

## Pointer Arithmetic

Pointers can be incremented and decremented.

Example:

ptr++;
ptr--;

For an integer pointer:

ptr + 1 moves by sizeof(int)

For a character pointer:

ptr + 1 moves by sizeof(char)

Pointer arithmetic depends on the size of the data type.

---

## Arrays and Pointers

Array name represents the address of the first element.

Example:

int arr[5];

arr == &arr[0]

Pointers can be used to access array elements efficiently.

---

## Pass by Value

A copy of the variable is passed to the function.

Changes inside the function do not affect the original variable.

---

## Pass by Reference

The address of the variable is passed to the function.

Changes inside the function affect the original variable.

Pointers make pass-by-reference possible in C.

---

## Void Pointer

A void pointer can store the address of any data type.

Example:

void *ptr;

Applications:
- Generic functions
- RTOS APIs
- Device Drivers
- Dynamic Memory Allocation

---

## Const with Pointers

### Constant Data

const int *ptr;

Data cannot be modified.

### Constant Pointer

int *const ptr;

Address cannot be modified.

### Constant Data and Constant Pointer

const int *const ptr;

Neither data nor address can be modified.

---

## Volatile Pointer

Used when data can change unexpectedly.

Example:

volatile int *ptr;

Applications:
- Hardware Registers
- Interrupt Service Routines
- Shared Memory

---

## Memory-Mapped Registers

Embedded systems access hardware through fixed memory addresses.

Example:

#define GPIO_DIR (*(volatile unsigned int *)0x40020000)

Pointers allow direct communication with hardware.

---

## Function Pointer

A function pointer stores the address of a function.

Example:

void (*ptr)();

Applications:
- Callbacks
- Interrupt Handlers
- RTOS
- State Machines

---

## Why Pointers are Important in Embedded Systems

Pointers are used in:

- Device Drivers
- Memory-Mapped Registers
- Interrupt Handling
- RTOS Kernels
- DMA Operations
- Embedded Linux
- Firmware Development
- Communication Protocols

---

## Key Takeaway

Pointers are one of the most important concepts in C and the foundation of Embedded Systems programming.

Understanding pointers helps bridge the gap between software and hardware and enables direct interaction with memory and peripherals.

---

Day 16 Learning Time:
1 Hour 56 Minutes 32 Seconds

Topic:
Pointers in C (Theory)

Goal:
Build strong pointer fundamentals before moving to practical implementation.