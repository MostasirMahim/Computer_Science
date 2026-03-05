# C Programming - Complete Basics Tutorial

## Table of Contents
1. [Introduction to C](#introduction)
2. [Data Types](#datatypes)
3. [Operators](#operators)
4. [Conditions](#conditions)

---

## 1. Introduction to C {#introduction}

### What is C?
C is a general-purpose programming language that's widely used for system programming, embedded systems, and applications.

### Basic Structure of a C Program
```c
#include <stdio.h>  // Include standard input/output library

int main() {
    // Your code goes here
    return 0;  // Return 0 means program executed successfully
}
```

### How to Print Output - `printf()`
```c
printf("Hello World");           // Print text
printf("%d", 10);                // Print integer
printf("%f", 3.14);              // Print float
printf("%c", 'A');               // Print character
printf("%s", "Hello");           // Print string

// Format specifiers:
// %d - integer
// %f - float/double
// %c - character
// %s - string
// %lf - double (for scanf)
// \n - new line
```

**Examples:**
```c
printf("Number: %d\n", 25);           // Output: Number: 25
printf("Pi: %.2f\n", 3.14159);        // Output: Pi: 3.14 (2 decimal places)
printf("Grade: %c\n", 'A');           // Output: Grade: A
printf("Name: %s\n", "John");         // Output: Name: John
```

### How to Take Input - `scanf()`
```c
int age;
scanf("%d", &age);  // Read integer (note the & symbol)

float price;
scanf("%f", &price);  // Read float

char grade;
scanf(" %c", &grade);  // Read character (note the space before %c)

char name[50];
scanf("%s", name);  // Read string (no & for arrays)
```

**Important:** Always use `&` (address-of operator) before variable name in scanf, except for arrays!

**Example Program:**
```c
#include <stdio.h>

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("You are %d years old\n", age);
    return 0;
}
```

---

## 2. Data Types {#datatypes}

### Basic Data Types in C

| Data Type | Size | Format Specifier | Range |
|-----------|------|------------------|-------|
| `int` | 4 bytes | %d | -2,147,483,648 to 2,147,483,647 |
| `float` | 4 bytes | %f | 6 decimal places |
| `double` | 8 bytes | %lf | 15 decimal places |
| `char` | 1 byte | %c | -128 to 127 or 0 to 255 |
| `long` | 8 bytes | %ld | Very large integers |
| `short` | 2 bytes | %hd | -32,768 to 32,767 |

### Examples:
```c
int age = 25;                    // Integer
float height = 5.9;              // Float (decimal number)
double pi = 3.14159265359;       // Double (more precision)
char grade = 'A';                // Character (single quotes)
char name[50] = "John";          // String (array of characters)
```

### Type Conversion
```c
// Implicit conversion (automatic)
int a = 5;
float b = a;  // b becomes 5.0

// Explicit conversion (casting)
float x = 5.7;
int y = (int)x;  // y becomes 5
```

---

## 3. Operators {#operators}

### Arithmetic Operators
```c
+  // Addition:       5 + 3 = 8
-  // Subtraction:    5 - 3 = 2
*  // Multiplication: 5 * 3 = 15
/  // Division:       5 / 3 = 1 (integer division)
%  // Modulus:        5 % 3 = 2 (remainder)
```

**Important:** When both operands are integers, division gives integer result!
```c
int result1 = 5 / 2;      // result1 = 2 (not 2.5!)
float result2 = 5.0 / 2;  // result2 = 2.5
```

### Relational Operators (Comparison)
```c
==  // Equal to:              5 == 5 is true (1)
!=  // Not equal to:          5 != 3 is true (1)
>   // Greater than:          5 > 3 is true (1)
<   // Less than:             5 < 3 is false (0)
>=  // Greater than or equal: 5 >= 5 is true (1)
<=  // Less than or equal:    5 <= 3 is false (0)
```

### Logical Operators
```c
&&  // AND: Both conditions must be true
||  // OR:  At least one condition must be true
!   // NOT: Reverses the condition

// Examples:
(5 > 3 && 8 > 6)  // true (both are true)
(5 > 3 || 8 < 6)  // true (at least one is true)
!(5 > 3)          // false (reverses true to false)
```

### Assignment Operators
```c
=   // Assign:    a = 5
+=  // Add and assign:    a += 3  (same as a = a + 3)
-=  // Subtract and assign: a -= 3
*=  // Multiply and assign: a *= 3
/=  // Divide and assign:   a /= 3
%=  // Modulus and assign:  a %= 3
```

### Increment/Decrement Operators
```c
++  // Increment (add 1)
--  // Decrement (subtract 1)

int a = 5;
a++;    // a becomes 6 (post-increment)
++a;    // a becomes 7 (pre-increment)
a--;    // a becomes 6 (post-decrement)
--a;    // a becomes 5 (pre-decrement)
```

---

## 4. Conditions (Control Flow) {#conditions}

### if Statement
```c
if (condition) {
    // Code executes if condition is true
}
```

**Example:**
```c
int age = 18;
if (age >= 18) {
    printf("You are an adult\n");
}
```

### if-else Statement
```c
if (condition) {
    // Code if condition is true
} else {
    // Code if condition is false
}
```

**Example:**
```c
int marks = 65;
if (marks >= 50) {
    printf("Pass\n");
} else {
    printf("Fail\n");
}
```

### if-else if-else Statement
```c
if (condition1) {
    // Code if condition1 is true
} else if (condition2) {
    // Code if condition2 is true
} else {
    // Code if all conditions are false
}
```

**Example:**
```c
int marks = 85;
if (marks >= 90) {
    printf("Grade: A+\n");
} else if (marks >= 80) {
    printf("Grade: A\n");
} else if (marks >= 70) {
    printf("Grade: B\n");
} else {
    printf("Grade: C\n");
}
```

### Nested if
```c
if (condition1) {
    if (condition2) {
        // Code if both conditions are true
    }
}
```

### switch Statement
```c
switch (expression) {
    case value1:
        // Code
        break;
    case value2:
        // Code
        break;
    default:
        // Code if no case matches
}
```

**Example:**
```c
int day = 3;
switch (day) {
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
    default:
        printf("Invalid day\n");
}
```

### Ternary Operator (Conditional Operator)
```c
result = (condition) ? value_if_true : value_if_false;
```

**Example:**
```c
int age = 20;
char* status = (age >= 18) ? "Adult" : "Minor";
printf("%s\n", status);  // Output: Adult
```

---

## Quick Reference

### Complete Example Program
```c
#include <stdio.h>

int main() {
    // Variables
    int num1, num2;
    float result;
    
    // Input
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    // Operations
    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    float division = (float)num1 / num2;
    
    // Output
    printf("\nResults:\n");
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Division: %.2f\n", division);
    
    // Condition
    if (num1 > num2) {
        printf("%d is greater than %d\n", num1, num2);
    } else if (num1 < num2) {
        printf("%d is less than %d\n", num1, num2);
    } else {
        printf("Both numbers are equal\n");
    }
    
    return 0;
}
```

### Compilation and Execution
```bash
# Compile
gcc filename.c -o output

# Run
./output  (on Linux/Mac)
output.exe (on Windows)
```

---

**Good Luck with Your Practice! 🚀**
