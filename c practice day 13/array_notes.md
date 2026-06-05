# Arrays in C

## What is an Array?

An array is a collection of elements of the same data type stored in contiguous memory locations.

Example:

int arr[5];

This creates an array capable of storing 5 integers.

--------------------------------------------------

## Array Declaration

Syntax:

datatype array_name[size];

Example:

int arr[10];

--------------------------------------------------

## Array Initialization

int arr[5] = {10,20,30,40,50};

--------------------------------------------------

## Accessing Elements

Array indexing starts from 0.

arr[0] = 10
arr[1] = 20
arr[2] = 30

--------------------------------------------------

## Memory Representation

Suppose:

int arr[5];

If the base address is 1000 and int occupies 4 bytes:

arr[0] -> 1000
arr[1] -> 1004
arr[2] -> 1008
arr[3] -> 1012
arr[4] -> 1016

Arrays occupy contiguous memory locations.

--------------------------------------------------

## Array Traversal

Accessing each element one by one.

Example:

for(i=0;i<5;i++)
{
    printf("%d",arr[i]);
}

--------------------------------------------------

## Advantages of Arrays

- Stores multiple values using one variable
- Easy traversal using loops
- Efficient memory usage
- Fast access using index

--------------------------------------------------

## Embedded Systems Applications

- UART Buffers
- CAN Message Storage
- ADC Sample Storage
- Sensor Data Logging
- Communication Packets

--------------------------------------------------

## Key Points

- Same datatype elements
- Fixed size
- Contiguous memory
- Index starts from 0