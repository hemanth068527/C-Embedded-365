# Day 19 - Structures in C (Theory)

## Learning Objective

Today I focused on understanding **Structures in C**, one of the most important concepts in Embedded Systems programming. Structures help organize related data efficiently and are widely used in firmware, device drivers, communication protocols, and hardware abstraction layers.

---

## Topics Covered

### What is a Structure?
A structure is a user-defined data type that allows grouping variables of different data types under a single name.

### Why Structures are Needed
- Organize related data
- Improve code readability
- Simplify data management
- Represent real-world entities

### Structure Declaration

```c
struct Student
{
    int id;
    char name[20];
    float marks;
};
```

### Structure Initialization

```c
struct Student s1 = {1, "Hemanth", 95.5};
```

### Accessing Structure Members

```c
s1.id
s1.name
s1.marks
```

### Nested Structures
- Structure inside another structure
- Used for complex data representation

### Array of Structures

```c
struct Student s[10];
```

### Structures and Functions
- Passing structures to functions
- Returning structures from functions

### Structures vs Arrays

| Structures | Arrays |
|------------|---------|
| Different data types | Same data type |
| User-defined | Built-in |
| Represents complex data | Represents similar elements |

### Memory Allocation in Structures
- Each member occupies separate memory
- Structure size depends on member sizes and padding

---

## Applications in Embedded Systems

- Sensor Data Storage
- Communication Protocol Packets
- Device Configuration
- Hardware Register Mapping
- Peripheral Management
- Real-Time Data Processing

---

## Key Learnings

- Structures allow grouping heterogeneous data.
- Structures improve program organization.
- Structures are heavily used in Embedded C.
- Understanding structures is essential before learning:
  - Pointer to Structures
  - Unions
  - Bit Fields
  - Device Drivers
  - Register Mapping

---

## Learning Time

1hr 42min

⏱️ Theory Session Completed

---

## Day 19 Status

✅ Structures in C Theory Completed

🚀 Next Topic: Structure Programming and Pointer to Structures