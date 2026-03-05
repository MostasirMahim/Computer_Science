/*
================================================================================
                    CONDITIONS IN C - PRACTICE PROBLEMS
================================================================================

Topics Covered:
- if statement
- if-else statement
- if-else if-else ladder
- Nested if
- switch-case statement
- Ternary operator
- Logical conditions

Solve all 5 problems below.
================================================================================
*/

#include <stdio.h>

// ============================================================================
// PROBLEM 1: Positive, Negative, or Zero
// ============================================================================
// Task: Check if a number is positive, negative, or zero
//
// Sample Input 1: 5
// Output: 5 is a positive number
//
// Sample Input 2: -3
// Output: -3 is a negative number
//
// Sample Input 3: 0
// Output: The number is zero
//
// Concepts: if-else if-else statement
// ============================================================================

/*
void problem1() {
    // Hint: Use if-else if-else
    // Check if num > 0, num < 0, or num == 0
    // Write your code here
    
}
*/

// Solution:
void problem1_solution() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num > 0) {
        printf("%d is a positive number\n", num);
    } else if (num < 0) {
        printf("%d is a negative number\n", num);
    } else {
        printf("The number is zero\n");
    }
}


// ============================================================================
// PROBLEM 2: Grade Calculator
// ============================================================================
// Task: Calculate grade based on marks
//       Marks >= 90: A+
//       Marks >= 80: A
//       Marks >= 70: B
//       Marks >= 60: C
//       Marks >= 50: D
//       Marks < 50: F (Fail)
//
// Sample Input: 85
// Expected Output:
// Marks: 85
// Grade: A
// Result: Pass
//
// Concepts: if-else if-else ladder
// ============================================================================

/*
void problem2() {
    // Write your code here
    
}
*/

// Solution:
void problem2_solution() {
    int marks;
    char grade;
    
    printf("Enter marks (0-100): ");
    scanf("%d", &marks);
    
    printf("\nMarks: %d\n", marks);
    
    if (marks >= 90) {
        printf("Grade: A+\n");
        printf("Result: Pass\n");
    } else if (marks >= 80) {
        printf("Grade: A\n");
        printf("Result: Pass\n");
    } else if (marks >= 70) {
        printf("Grade: B\n");
        printf("Result: Pass\n");
    } else if (marks >= 60) {
        printf("Grade: C\n");
        printf("Result: Pass\n");
    } else if (marks >= 50) {
        printf("Grade: D\n");
        printf("Result: Pass\n");
    } else {
        printf("Grade: F\n");
        printf("Result: Fail\n");
    }
}


// ============================================================================
// PROBLEM 3: Leap Year Checker
// ============================================================================
// Task: Check if a year is a leap year
//       Rules:
//       1. If year is divisible by 400 → Leap year
//       2. If year is divisible by 100 (but not 400) → Not leap year
//       3. If year is divisible by 4 (but not 100) → Leap year
//       4. Otherwise → Not leap year
//
// Sample Input 1: 2024
// Output: 2024 is a leap year
//
// Sample Input 2: 2023
// Output: 2023 is not a leap year
//
// Sample Input 3: 2000
// Output: 2000 is a leap year
//
// Sample Input 4: 1900
// Output: 1900 is not a leap year
//
// Concepts: Nested if, logical operators
// ============================================================================

/*
void problem3() {
    // Hint: Use nested if or logical operators
    // Check divisibility by 400, 100, and 4
    // Write your code here
    
}
*/

// Solution:
void problem3_solution() {
    int year;
    
    printf("Enter a year: ");
    scanf("%d", &year);
    
    // Method 1: Using nested if
    if (year % 400 == 0) {
        printf("%d is a leap year\n", year);
    } else if (year % 100 == 0) {
        printf("%d is not a leap year\n", year);
    } else if (year % 4 == 0) {
        printf("%d is a leap year\n", year);
    } else {
        printf("%d is not a leap year\n", year);
    }
    
    // Method 2: Using logical operators (alternative)
    /*
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        printf("%d is a leap year\n", year);
    } else {
        printf("%d is not a leap year\n", year);
    }
    */
}


// ============================================================================
// PROBLEM 4: Simple Calculator using Switch-Case
// ============================================================================
// Task: Create a calculator that performs basic operations
//       Operations: + (add), - (subtract), * (multiply), / (divide), % (modulus)
//
// Sample Input:
// 10
// +
// 5
//
// Expected Output:
// 10 + 5 = 15
//
// Concepts: switch-case statement
// ============================================================================

/*
void problem4() {
    // Hint: Use switch with operator as case
    // Cases: '+', '-', '*', '/', '%'
    // Write your code here
    
}
*/

// Solution:
void problem4_solution() {
    int num1, num2;
    char operator;
    
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);
    
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    printf("\n");
    
    switch (operator) {
        case '+':
            printf("%d + %d = %d\n", num1, num2, num1 + num2);
            break;
        
        case '-':
            printf("%d - %d = %d\n", num1, num2, num1 - num2);
            break;
        
        case '*':
            printf("%d * %d = %d\n", num1, num2, num1 * num2);
            break;
        
        case '/':
            if (num2 != 0) {
                printf("%d / %d = %.2f\n", num1, num2, (float)num1 / num2);
            } else {
                printf("Error: Division by zero!\n");
            }
            break;
        
        case '%':
            if (num2 != 0) {
                printf("%d %% %d = %d\n", num1, num2, num1 % num2);
            } else {
                printf("Error: Division by zero!\n");
            }
            break;
        
        default:
            printf("Error: Invalid operator!\n");
    }
}


// ============================================================================
// PROBLEM 5: Triangle Type Classifier
// ============================================================================
// Task: Check if three sides can form a triangle, and if yes, classify it
//       Triangle conditions:
//       - Sum of any two sides must be greater than third side
//       
//       Types:
//       - Equilateral: All three sides equal
//       - Isosceles: Any two sides equal
//       - Scalene: All sides different
//
// Sample Input 1: 5 5 5
// Output: Valid Triangle - Equilateral
//
// Sample Input 2: 5 5 7
// Output: Valid Triangle - Isosceles
//
// Sample Input 3: 3 4 5
// Output: Valid Triangle - Scalene
//
// Sample Input 4: 1 2 10
// Output: Not a valid triangle
//
// Concepts: Nested if, multiple conditions
// ============================================================================

/*
void problem5() {
    // Hint: First check if triangle is valid
    // Then check if all sides equal, two sides equal, or all different
    // Write your code here
    
}
*/

// Solution:
void problem5_solution() {
    int side1, side2, side3;
    
    printf("Enter three sides of triangle:\n");
    printf("Side 1: ");
    scanf("%d", &side1);
    printf("Side 2: ");
    scanf("%d", &side2);
    printf("Side 3: ");
    scanf("%d", &side3);
    
    // Check if valid triangle
    if (side1 + side2 > side3 && side2 + side3 > side1 && side1 + side3 > side2) {
        printf("\nValid Triangle - ");
        
        // Check type
        if (side1 == side2 && side2 == side3) {
            printf("Equilateral\n");
            printf("(All three sides are equal)\n");
        } else if (side1 == side2 || side2 == side3 || side1 == side3) {
            printf("Isosceles\n");
            printf("(Two sides are equal)\n");
        } else {
            printf("Scalene\n");
            printf("(All sides are different)\n");
        }
    } else {
        printf("\nNot a valid triangle\n");
        printf("(Sum of any two sides must be greater than the third side)\n");
    }
}


// ============================================================================
// BONUS PROBLEM 1: Day of Week (Switch-Case)
// ============================================================================
// Task: Display day name based on number (1-7)
//
// Concepts: switch-case statement
// ============================================================================

void bonus1_solution() {
    int day;
    
    printf("Enter day number (1-7): ");
    scanf("%d", &day);
    
    printf("Day %d is: ", day);
    
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
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid! Please enter 1-7\n");
    }
}


// ============================================================================
// BONUS PROBLEM 2: Voting Eligibility
// ============================================================================
// Task: Check if person is eligible to vote (age >= 18)
//       Also check if senior citizen (age >= 60)
//
// Concepts: Nested if
// ============================================================================

void bonus2_solution() {
    int age;
    
    printf("Enter your age: ");
    scanf("%d", &age);
    
    if (age >= 18) {
        printf("You are eligible to vote!\n");
        
        if (age >= 60) {
            printf("You are also a senior citizen (special privileges apply).\n");
        }
    } else {
        printf("You are not eligible to vote yet.\n");
        printf("You can vote in %d years.\n", 18 - age);
    }
}


// ============================================================================
// MAIN FUNCTION - Uncomment the problem you want to test
// ============================================================================

int main() {
    printf("=== CONDITIONS PROBLEMS ===\n\n");
    
    // Uncomment the problem you want to run:
    
    // printf("--- Problem 1: Positive/Negative/Zero ---\n");
    // problem1_solution();
    
    // printf("--- Problem 2: Grade Calculator ---\n");
    // problem2_solution();
    
    // printf("--- Problem 3: Leap Year Checker ---\n");
    // problem3_solution();
    
    // printf("--- Problem 4: Calculator (Switch) ---\n");
    // problem4_solution();
    
    // printf("--- Problem 5: Triangle Classifier ---\n");
    // problem5_solution();
    
    // printf("--- Bonus 1: Day of Week ---\n");
    // bonus1_solution();
    
    // printf("--- Bonus 2: Voting Eligibility ---\n");
    // bonus2_solution();
    
    return 0;
}


/*
================================================================================
                            LEARNING NOTES
================================================================================

1. IF STATEMENT
   Syntax:
   if (condition) {
       // code executes if condition is true
   }
   
   Example:
   if (age >= 18) {
       printf("Adult\n");
   }

2. IF-ELSE STATEMENT
   Syntax:
   if (condition) {
       // code if true
   } else {
       // code if false
   }
   
   Example:
   if (marks >= 50) {
       printf("Pass\n");
   } else {
       printf("Fail\n");
   }

3. IF-ELSE IF-ELSE LADDER
   Syntax:
   if (condition1) {
       // code
   } else if (condition2) {
       // code
   } else if (condition3) {
       // code
   } else {
       // default code
   }
   
   Example:
   if (marks >= 90) {
       printf("A+\n");
   } else if (marks >= 80) {
       printf("A\n");
   } else {
       printf("B\n");
   }

4. NESTED IF
   if inside another if:
   
   if (condition1) {
       if (condition2) {
           // code when both true
       }
   }
   
   Example:
   if (age >= 18) {
       if (hasLicense) {
           printf("Can drive\n");
       }
   }

5. SWITCH-CASE STATEMENT
   Syntax:
   switch (expression) {
       case value1:
           // code
           break;
       case value2:
           // code
           break;
       default:
           // code if no case matches
   }
   
   Example:
   switch (day) {
       case 1:
           printf("Monday\n");
           break;
       case 2:
           printf("Tuesday\n");
           break;
       default:
           printf("Invalid\n");
   }

6. TERNARY OPERATOR (Short form of if-else)
   Syntax: condition ? value_if_true : value_if_false
   
   Example:
   int max = (a > b) ? a : b;
   printf("%s\n", (age >= 18) ? "Adult" : "Minor");

7. LOGICAL CONDITIONS
   - AND (&&): Both conditions must be true
     Example: if (age >= 18 && age <= 60)
   
   - OR (||): At least one must be true
     Example: if (day == 0 || day == 6)
   
   - NOT (!): Reverses the condition
     Example: if (!(age < 18))

================================================================================
                            COMMON MISTAKES
================================================================================

1. Using = instead of ==
   Wrong: if (a = 5)  // Assignment, not comparison!
   Right: if (a == 5) // Comparison

2. Missing braces for multiple statements
   Wrong:
   if (x > 0)
       printf("Positive\n");
       y = x;  // Always executes!
   
   Right:
   if (x > 0) {
       printf("Positive\n");
       y = x;
   }

3. Forgetting break in switch
   Without break, execution continues to next case!
   
   switch (x) {
       case 1:
           printf("One\n");
           break;  // Don't forget this!
       case 2:
           printf("Two\n");
           break;
   }

4. Wrong comparison for floating point
   Wrong: if (f == 0.1)
   Right: if (f >= 0.09 && f <= 0.11)

5. Semicolon after if
   Wrong: if (x > 0);  // Semicolon ends the if!
          {
              printf("Positive\n");  // Always executes
          }

6. Complex conditions without parentheses
   Use parentheses for clarity:
   if ((a > 0 && b > 0) || (a < 0 && b < 0))

================================================================================
                            DECISION MAKING TIPS
================================================================================

1. WHEN TO USE IF-ELSE:
   - For range checking (age >= 18)
   - For complex conditions
   - When you need NOT, AND, OR operators

2. WHEN TO USE SWITCH:
   - For exact value matching
   - Multiple possible values
   - Cleaner than many if-else for discrete values
   - Works with int, char (not float or string)

3. WHEN TO USE TERNARY:
   - Simple if-else (one line)
   - Assignment based on condition
   - Makes code concise

4. LOGICAL OPERATORS:
   - AND (&&): Use when ALL conditions must be true
   - OR (||): Use when ANY condition can be true
   - NOT (!): Use to reverse a condition

5. SHORT-CIRCUIT EVALUATION:
   - In (a && b), if a is false, b is not evaluated
   - In (a || b), if a is true, b is not evaluated
   - Useful for: if (ptr != NULL && *ptr == 5)

================================================================================
                            PRACTICE TIPS
================================================================================

1. Draw flowcharts for complex conditions
2. Test with boundary values (0, negative, positive)
3. Check all possible paths in your code
4. Use proper indentation for readability
5. Add meaningful comments for complex logic
6. Test edge cases (like division by zero)
7. Practice nested conditions gradually
8. Master logical operators (&&, ||, !)

Try solving each problem on your own first before checking the solution!
================================================================================
*/
