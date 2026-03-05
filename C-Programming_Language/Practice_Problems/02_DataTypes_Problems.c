/*
================================================================================
                    DATA TYPES IN C - PRACTICE PROBLEMS
================================================================================

Topics Covered:
- int, float, double, char data types
- sizeof() operator
- Type conversion (casting)
- Different number systems
- Variable declarations and assignments

Solve all 5 problems below.
================================================================================
*/

#include <stdio.h>

// ============================================================================
// PROBLEM 1: Data Type Sizes
// ============================================================================
// Task: Display the size (in bytes) of different data types
//
// Expected Output:
// Size of int: 4 bytes
// Size of float: 4 bytes
// Size of double: 8 bytes
// Size of char: 1 byte
// Size of long: 8 bytes
//
// Concepts: sizeof() operator, different data types
// ============================================================================

/*
void problem1() {
    // Hint: Use sizeof(datatype) to get size
    // Write your code here
    
}
*/

// Solution:
void problem1_solution() {
    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Size of float: %lu bytes\n", sizeof(float));
    printf("Size of double: %lu bytes\n", sizeof(double));
    printf("Size of char: %lu bytes\n", sizeof(char));
    printf("Size of long: %lu bytes\n", sizeof(long));
}


// ============================================================================
// PROBLEM 2: Temperature Converter (Float Precision)
// ============================================================================
// Task: Convert Celsius to Fahrenheit
//       Formula: F = (C × 9/5) + 32
//       Display both float and double precision results
//
// Sample Input:
// 25.5
//
// Expected Output:
// Celsius: 25.50
// Fahrenheit (float): 77.90
// Fahrenheit (double): 77.900000
//
// Concepts: float vs double, type casting, precision
// ============================================================================

/*
void problem2() {
    // Hint: Declare both float and double variables
    // Use 9.0/5.0 to avoid integer division
    // Write your code here
    
}
*/

// Solution:
void problem2_solution() {
    float celsius, fahrenheit_f;
    double fahrenheit_d;
    
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    
    fahrenheit_f = (celsius * 9.0 / 5.0) + 32;
    fahrenheit_d = (celsius * 9.0 / 5.0) + 32;
    
    printf("\nCelsius: %.2f\n", celsius);
    printf("Fahrenheit (float): %.2f\n", fahrenheit_f);
    printf("Fahrenheit (double): %.6lf\n", fahrenheit_d);
}


// ============================================================================
// PROBLEM 3: Character Operations
// ============================================================================
// Task: Take a lowercase letter and convert it to uppercase
//       Also show the ASCII values
//
// Sample Input:
// a
//
// Expected Output:
// Lowercase: a (ASCII: 97)
// Uppercase: A (ASCII: 65)
// Difference: 32
//
// Concepts: char type, ASCII values, character arithmetic
// ============================================================================

/*
void problem3() {
    // Hint: Uppercase = lowercase - 32
    // Use %c for character, %d for ASCII value
    // Write your code here
    
}
*/

// Solution:
void problem3_solution() {
    char lowercase, uppercase;
    
    printf("Enter a lowercase letter: ");
    scanf(" %c", &lowercase);
    
    uppercase = lowercase - 32;  // ASCII difference between lower and upper
    
    printf("\nLowercase: %c (ASCII: %d)\n", lowercase, lowercase);
    printf("Uppercase: %c (ASCII: %d)\n", uppercase, uppercase);
    printf("Difference: %d\n", lowercase - uppercase);
}


// ============================================================================
// PROBLEM 4: Type Casting and Division
// ============================================================================
// Task: Demonstrate integer division vs float division
//       Take two integers and show both types of division
//
// Sample Input:
// 7
// 2
//
// Expected Output:
// Integer Division: 7 / 2 = 3
// Float Division: 7 / 2 = 3.50
// Remainder: 1
//
// Concepts: Type casting, integer vs float division, modulus
// ============================================================================

/*
void problem4() {
    // Hint: Cast one number to float for float division
    // Use (float)num1 / num2
    // Write your code here
    
}
*/

// Solution:
void problem4_solution() {
    int num1, num2;
    int int_result;
    float float_result;
    int remainder;
    
    printf("Enter first integer: ");
    scanf("%d", &num1);
    
    printf("Enter second integer: ");
    scanf("%d", &num2);
    
    int_result = num1 / num2;              // Integer division
    float_result = (float)num1 / num2;     // Float division (type casting)
    remainder = num1 % num2;               // Remainder
    
    printf("\nInteger Division: %d / %d = %d\n", num1, num2, int_result);
    printf("Float Division: %d / %d = %.2f\n", num1, num2, float_result);
    printf("Remainder: %d\n", remainder);
}


// ============================================================================
// PROBLEM 5: Student Grade Calculator
// ============================================================================
// Task: Calculate student's percentage and grade point
//       Take marks in 5 subjects (each out of 100)
//       Calculate: Total, Average, Percentage
//
// Sample Input:
// 85 90 78 92 88
//
// Expected Output:
// Subject 1: 85
// Subject 2: 90
// Subject 3: 78
// Subject 4: 92
// Subject 5: 88
// ---------------------
// Total Marks: 433 / 500
// Percentage: 86.60%
// Average: 86.60
//
// Concepts: Multiple variables, calculations, float precision
// ============================================================================

/*
void problem5() {
    // Hint: Use 5 integer variables for marks
    // Calculate total, then cast to float for percentage
    // Write your code here
    
}
*/

// Solution:
void problem5_solution() {
    int sub1, sub2, sub3, sub4, sub5;
    int total;
    float percentage, average;
    
    printf("Enter marks for 5 subjects (out of 100 each):\n");
    printf("Subject 1: ");
    scanf("%d", &sub1);
    printf("Subject 2: ");
    scanf("%d", &sub2);
    printf("Subject 3: ");
    scanf("%d", &sub3);
    printf("Subject 4: ");
    scanf("%d", &sub4);
    printf("Subject 5: ");
    scanf("%d", &sub5);
    
    total = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = (float)total / 500 * 100;
    average = (float)total / 5;
    
    printf("\n----- Results -----\n");
    printf("Subject 1: %d\n", sub1);
    printf("Subject 2: %d\n", sub2);
    printf("Subject 3: %d\n", sub3);
    printf("Subject 4: %d\n", sub4);
    printf("Subject 5: %d\n", sub5);
    printf("---------------------\n");
    printf("Total Marks: %d / 500\n", total);
    printf("Percentage: %.2f%%\n", percentage);  // %% prints single %
    printf("Average: %.2f\n", average);
}


// ============================================================================
// MAIN FUNCTION - Uncomment the problem you want to test
// ============================================================================

int main() {
    printf("=== DATA TYPES PROBLEMS ===\n\n");
    
    // Uncomment the problem you want to run:
    
    // printf("--- Problem 1: Data Type Sizes ---\n");
    // problem1_solution();
    
    // printf("--- Problem 2: Temperature Converter ---\n");
    // problem2_solution();
    
    // printf("--- Problem 3: Character Operations ---\n");
    // problem3_solution();
    
    // printf("--- Problem 4: Type Casting ---\n");
    // problem4_solution();
    
    // printf("--- Problem 5: Grade Calculator ---\n");
    // problem5_solution();
    
    return 0;
}


/*
================================================================================
                            LEARNING NOTES
================================================================================

1. DATA TYPES AND SIZES
   - int: 4 bytes (stores whole numbers)
   - float: 4 bytes (stores decimal numbers, ~7 digits precision)
   - double: 8 bytes (stores decimal numbers, ~15 digits precision)
   - char: 1 byte (stores single character)
   - long: 8 bytes (stores very large integers)

2. FORMAT SPECIFIERS
   - %d or %i : int
   - %f : float (default 6 decimal places)
   - %lf : double (for scanf)
   - %c : char
   - %s : string
   - %ld : long
   - %lu : unsigned long (for sizeof)
   - %.2f : float with 2 decimal places
   - %% : prints % symbol

3. TYPE CASTING
   - Implicit: Automatic conversion (int to float)
     Example: float x = 5; // x becomes 5.0
   
   - Explicit: Manual conversion using (type)
     Example: int y = (int)5.7; // y becomes 5

4. INTEGER vs FLOAT DIVISION
   - 5 / 2 = 2 (integer division, result is 2)
   - 5.0 / 2 = 2.5 (float division, result is 2.5)
   - (float)5 / 2 = 2.5 (type casting makes it float division)

5. CHARACTER ARITHMETIC
   - Characters are stored as ASCII values
   - 'A' = 65, 'B' = 66, ..., 'Z' = 90
   - 'a' = 97, 'b' = 98, ..., 'z' = 122
   - Difference between uppercase and lowercase = 32
   - 'a' - 32 = 'A' (convert to uppercase)
   - 'A' + 32 = 'a' (convert to lowercase)

6. SIZEOF() OPERATOR
   - Returns size of data type in bytes
   - Syntax: sizeof(type) or sizeof(variable)
   - Useful for understanding memory usage

7. PRECISION IN OUTPUT
   - %.2f : 2 decimal places
   - %.6f : 6 decimal places
   - %f : default 6 decimal places

================================================================================
                            COMMON MISTAKES
================================================================================

1. Using %lf with printf (use %f for both float and double in printf)
2. Forgetting to cast in division: 5/2 gives 0 (not 2.5!)
3. Using wrong format specifier (causes garbage values)
4. Not using space before %c in scanf (reads newline character)
5. Confusing %d with %f (type mismatch)

================================================================================
                            PRACTICE TIPS
================================================================================

1. Always declare variables before using them
2. Initialize variables to avoid garbage values
3. Use appropriate data types (don't use float if int is enough)
4. For money calculations, use double for better precision
5. Practice type casting with different scenarios
6. Understand when to use int vs float division
7. Remember ASCII values for character operations

Try solving each problem on your own first before checking the solution!
================================================================================
*/
