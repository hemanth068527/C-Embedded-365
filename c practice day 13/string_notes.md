# Strings in C

## What is a String?

A string is a sequence of characters terminated by a null character ('\0').

Example:

char str[] = "Hello";

--------------------------------------------------

## Character Array

A string is stored internally as a character array.

Example:

char str[10];

--------------------------------------------------

## Null Character

Every string ends with:

'\0'

Example:

Hello

Stored as:

H e l l o \0

--------------------------------------------------

## String Declaration

char str[20];

--------------------------------------------------

## String Initialization

char str[] = "Embedded";

--------------------------------------------------

## String Input

scanf("%s",str);

or

fgets(str,sizeof(str),stdin);

--------------------------------------------------

## String Output

printf("%s",str);

--------------------------------------------------

## Difference Between Character and String

Character:

char ch = 'A';

String:

char str[] = "A";

--------------------------------------------------

## String Traversal

for(i=0; str[i] != '\0'; i++)
{
    printf("%c",str[i]);
}

--------------------------------------------------

## Common String Operations

- Find Length
- Reverse String
- Compare Strings
- Copy String
- Concatenate Strings

--------------------------------------------------

## Embedded Systems Applications

- UART Commands
- AT Commands
- GPS Data Parsing
- Debug Messages
- WiFi Commands
- Bluetooth Commands

--------------------------------------------------

## Key Points

- String is a character array
- Ends with '\0'
- Stored in contiguous memory
- Accessed using indexes