/*
================================================================================
                    INTRODUCTION TO C - PRACTICE PROBLEMS
================================================================================

Topics Covered:
- Basic program structure
- printf() for output
- scanf() for input
- Simple calculations
- Format specifiers

Solve all 5 problems below. Uncomment the problem you want to work on.
================================================================================
*/

#include <stdio.h>

// ============================================================================
// PROBLEM 1: Hello World
// ============================================================================
// Task: Write a program that prints "Hello, World!" to the screen
// 
// Expected Output:
// Hello, World!
//
// Concepts: Basic program structure, printf()
// ============================================================================

/*
void problem1() {
    // Write your code here
    
}
*/

// Solution:
void problem1_solution() {
    printf("Hello, World!\n");
}


// ============================================================================
// PROBLEM 2: Personal Information
// ============================================================================
// Task: Write a program that asks for your name and age, then displays them.
//
// Sample Input:
// John
// 20
//
// Expected Output:
// Name: John
// Age: 20
//
// Concepts: scanf(), printf(), strings, integers
// ============================================================================

/*
void problem2() {
    // Hint: Use char name[50] for string and int age for integer
    // Write your code here
    
}
*/

// Solution:
void problem2_solution() {
    char name[50];
    int age;
    
    printf("Enter your name: ");
    scanf("%s", name);
    
    printf("Enter your age: ");
    scanf("%d", &age);
    
    printf("\nName: %s\n", name);
    printf("Age: %d\n", age);
}


// ============================================================================
// PROBLEM 3: Simple Calculator (Addition only)
// ============================================================================
// Task: Take two numbers from user and print their sum
//
// Sample Input:
// 10
// 20
//
// Expected Output:
// The sum of 10 and 20 is 30
//
// Concepts: scanf(), arithmetic operations, printf()
// ============================================================================

/*
void problem3() {
    // Write your code here
    
}
*/

// Solution:
void problem3_solution() {
    int num1, num2, sum;
    
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    sum = num1 + num2;
    
    printf("The sum of %d and %d is %d\n", num1, num2, sum);
}


// ============================================================================
// PROBLEM 4: Rectangle Area
// ============================================================================
// Task: Calculate and display the area of a rectangle
//       Area = length × width
//
// Sample Input:
// 5.5
// 3.2
//
// Expected Output:
// Length: 5.50
// Width: 3.20
// Area: 17.60
//
// Concepts: float data type, calculations, formatting output
// ============================================================================

/*
void problem4() {
    // Hint: Use float for decimal numbers
    // Use %.2f to print 2 decimal places
    // Write your code here
    
}
*/

// Solution:
void problem4_solution() {
    float length, width, area;
    
    printf("Enter length of rectangle: ");
    scanf("%f", &length);
    
    printf("Enter width of rectangle: ");
    scanf("%f", &width);
    
    area = length * width;
    
    printf("\nLength: %.2f\n", length);
    printf("Width: %.2f\n", width);
    printf("Area: %.2f\n", area);
}


// ============================================================================
// PROBLEM 5: Character Display
// ============================================================================
// Task: Take a character from user and display it with a message
//
// Sample Input:
// A
//
// Expected Output:
// You entered: A
// ASCII value: 65
//
// Concepts: char data type, scanf() for characters, ASCII values
// ============================================================================

/*
void problem5() {
    // Hint: Use %c for character
    // Use %d with character variable to get ASCII value
    // Write your code here
    
}
*/

// Solution:
void problem5_solution() {
    char ch;
    
    printf("Enter a character: ");
    scanf(" %c", &ch);  // Note the space before %c
    
    printf("You entered: %c\n", ch);
    printf("ASCII value: %d\n", ch);  // Print char as integer for ASCII
}


// ============================================================================
// MAIN FUNCTION - Uncomment the problem you want to test
// ============================================================================

int main() {
    printf("=== INTRODUCTION PROBLEMS ===\n\n");
    
    // Uncomment the problem you want to run:
    
    // printf("--- Problem 1: Hello World ---\n");
    // problem1_solution();
    
    // printf("--- Problem 2: Personal Information ---\n");
    // problem2_solution();
    
    // printf("--- Problem 3: Simple Calculator ---\n");
    // problem3_solution();
    
    // printf("--- Problem 4: Rectangle Area ---\n");
    // problem4_solution();
    
    // printf("--- Problem 5: Character Display ---\n");
    // problem5_solution();
    
    return 0;
}


/*
================================================================================
                            LEARNING NOTES
================================================================================

1. PRINTF - Output Function
   - Used to display output on screen
   - Syntax: printf("format", variables);
   - Format specifiers: %d (int), %f (float), %c (char), %s (string)
   - \n is used for new line

2. SCANF - Input Function
   - Used to take input from user
   - Syntax: scanf("format", &variable);
   - Always use & before variable name (except for arrays/strings)
   - For character input, use space before %c: scanf(" %c", &ch);

3. BASIC DATA TYPES
   - int: whole numbers (e.g., 5, -10, 0)
   - float: decimal numbers (e.g., 3.14, -2.5)
   - char: single character (e.g., 'A', 'z', '5')
   - char[]: string/array of characters (e.g., "Hello")

4. COMMENTS
   - Single line: // comment
   - Multi-line: /* comment */

5. BASIC ARITHMETIC
   - Addition: +
   - Subtraction: -
   - Multiplication: *
   - Division: /
   - Modulus (remainder): %

================================================================================
                            PRACTICE TIPS
================================================================================

1. Always include <stdio.h> at the top of your program
2. Every C program must have a main() function
3. Use meaningful variable names
4. Test your program with different inputs
5. Don't forget the & symbol in scanf() for non-array variables
6. Use \n to make output more readable
7. Always return 0 at the end of main()

Try solving each problem on your own first before checking the solution!
================================================================================
*/
