/*
================================================================================
                    OPERATORS IN C - PRACTICE PROBLEMS
================================================================================

Topics Covered:
- Arithmetic operators (+, -, *, /, %)
- Relational operators (==, !=, <, >, <=, >=)
- Logical operators (&&, ||, !)
- Assignment operators (=, +=, -=, *=, /=, %=)
- Increment/Decrement operators (++, --)
- Ternary operator (? :)

Solve all 5 problems below.
================================================================================
*/

#include <stdio.h>

// ============================================================================
// PROBLEM 1: Basic Calculator (All Arithmetic Operations)
// ============================================================================
// Task: Perform all basic arithmetic operations on two numbers
//
// Sample Input:
// 17
// 5
//
// Expected Output:
// Number 1: 17
// Number 2: 5
// --------------------
// Addition: 17 + 5 = 22
// Subtraction: 17 - 5 = 12
// Multiplication: 17 * 5 = 85
// Division: 17 / 5 = 3.40
// Modulus (Remainder): 17 % 5 = 2
//
// Concepts: All arithmetic operators (+, -, *, /, %)
// ============================================================================

/*
void problem1() {
    // Write your code here
    
}
*/

// Solution:
void problem1_solution() {
    int num1, num2;
    
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    printf("\nNumber 1: %d\n", num1);
    printf("Number 2: %d\n", num2);
    printf("--------------------\n");
    printf("Addition: %d + %d = %d\n", num1, num2, num1 + num2);
    printf("Subtraction: %d - %d = %d\n", num1, num2, num1 - num2);
    printf("Multiplication: %d * %d = %d\n", num1, num2, num1 * num2);
    printf("Division: %d / %d = %.2f\n", num1, num2, (float)num1 / num2);
    printf("Modulus (Remainder): %d %% %d = %d\n", num1, num2, num1 % num2);
}


// ============================================================================
// PROBLEM 2: Relational Operators Test
// ============================================================================
// Task: Compare two numbers using all relational operators
//       Display the result of each comparison (1 for true, 0 for false)
//
// Sample Input:
// 10
// 20
//
// Expected Output:
// Comparing 10 and 20:
// 10 == 20 : 0 (False)
// 10 != 20 : 1 (True)
// 10 > 20 : 0 (False)
// 10 < 20 : 1 (True)
// 10 >= 20 : 0 (False)
// 10 <= 20 : 1 (True)
//
// Concepts: Relational operators (==, !=, <, >, <=, >=)
// ============================================================================

/*
void problem2() {
    // Hint: Relational operators return 1 (true) or 0 (false)
    // Write your code here
    
}
*/

// Solution:
void problem2_solution() {
    int a, b;
    
    printf("Enter first number: ");
    scanf("%d", &a);
    
    printf("Enter second number: ");
    scanf("%d", &b);
    
    printf("\nComparing %d and %d:\n", a, b);
    printf("%d == %d : %d %s\n", a, b, a == b, (a == b) ? "(True)" : "(False)");
    printf("%d != %d : %d %s\n", a, b, a != b, (a != b) ? "(True)" : "(False)");
    printf("%d > %d : %d %s\n", a, b, a > b, (a > b) ? "(True)" : "(False)");
    printf("%d < %d : %d %s\n", a, b, a < b, (a < b) ? "(True)" : "(False)");
    printf("%d >= %d : %d %s\n", a, b, a >= b, (a >= b) ? "(True)" : "(False)");
    printf("%d <= %d : %d %s\n", a, b, a <= b, (a <= b) ? "(True)" : "(False)");
}


// ============================================================================
// PROBLEM 3: Logical Operators (AND, OR, NOT)
// ============================================================================
// Task: Check various conditions using logical operators
//       Check if a number is:
//       1. Between 1 and 100 (using AND)
//       2. Either less than 0 or greater than 100 (using OR)
//       3. NOT equal to 50 (using NOT)
//
// Sample Input:
// 75
//
// Expected Output:
// Number: 75
// Is between 1 and 100? Yes (1)
// Is less than 0 OR greater than 100? No (0)
// Is NOT equal to 50? Yes (1)
//
// Concepts: Logical operators (&&, ||, !)
// ============================================================================

/*
void problem3() {
    // Hint: Use && for AND, || for OR, ! for NOT
    // Write your code here
    
}
*/

// Solution:
void problem3_solution() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("\nNumber: %d\n", num);
    
    // AND operator: Both conditions must be true
    printf("Is between 1 and 100? %s (%d)\n", 
           (num >= 1 && num <= 100) ? "Yes" : "No",
           (num >= 1 && num <= 100));
    
    // OR operator: At least one condition must be true
    printf("Is less than 0 OR greater than 100? %s (%d)\n",
           (num < 0 || num > 100) ? "Yes" : "No",
           (num < 0 || num > 100));
    
    // NOT operator: Reverses the condition
    printf("Is NOT equal to 50? %s (%d)\n",
           !(num == 50) ? "Yes" : "No",
           !(num == 50));
}


// ============================================================================
// PROBLEM 4: Increment and Decrement Operations
// ============================================================================
// Task: Demonstrate pre-increment, post-increment, pre-decrement, post-decrement
//
// Sample Input:
// 10
//
// Expected Output:
// Initial value: 10
// 
// Post-increment (a++):
// Value during operation: 10
// Value after operation: 11
// 
// Pre-increment (++a):
// Value during operation: 12
// Value after operation: 12
// 
// Post-decrement (a--):
// Value during operation: 12
// Value after operation: 11
// 
// Pre-decrement (--a):
// Value during operation: 10
// Value after operation: 10
//
// Concepts: ++ and -- operators, pre vs post increment/decrement
// ============================================================================

/*
void problem4() {
    // Write your code here
    
}
*/

// Solution:
void problem4_solution() {
    int a, temp;
    
    printf("Enter a number: ");
    scanf("%d", &a);
    
    printf("\nInitial value: %d\n", a);
    
    // Post-increment: Use current value, then increment
    printf("\nPost-increment (a++):\n");
    temp = a++;
    printf("Value during operation: %d\n", temp);
    printf("Value after operation: %d\n", a);
    
    // Pre-increment: Increment first, then use
    printf("\nPre-increment (++a):\n");
    temp = ++a;
    printf("Value during operation: %d\n", temp);
    printf("Value after operation: %d\n", a);
    
    // Post-decrement: Use current value, then decrement
    printf("\nPost-decrement (a--):\n");
    temp = a--;
    printf("Value during operation: %d\n", temp);
    printf("Value after operation: %d\n", a);
    
    // Pre-decrement: Decrement first, then use
    printf("\nPre-decrement (--a):\n");
    temp = --a;
    printf("Value during operation: %d\n", temp);
    printf("Value after operation: %d\n", a);
}


// ============================================================================
// PROBLEM 5: Compound Assignment Operators
// ============================================================================
// Task: Demonstrate all compound assignment operators
//       Start with a number and perform various compound operations
//
// Sample Input:
// 20
//
// Expected Output:
// Initial value: 20
// After += 5: 25
// After -= 3: 22
// After *= 2: 44
// After /= 4: 11
// After %= 3: 2
// Final value: 2
//
// Concepts: Compound assignment operators (+=, -=, *=, /=, %=)
// ============================================================================

/*
void problem5() {
    // Hint: a += 5 is same as a = a + 5
    // Write your code here
    
}
*/

// Solution:
void problem5_solution() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("\nInitial value: %d\n", num);
    
    num += 5;  // num = num + 5
    printf("After += 5: %d\n", num);
    
    num -= 3;  // num = num - 3
    printf("After -= 3: %d\n", num);
    
    num *= 2;  // num = num * 2
    printf("After *= 2: %d\n", num);
    
    num /= 4;  // num = num / 4
    printf("After /= 4: %d\n", num);
    
    num %= 3;  // num = num % 3
    printf("After %%= 3: %d\n", num);
    
    printf("\nFinal value: %d\n", num);
}


// ============================================================================
// BONUS PROBLEM: Ternary Operator
// ============================================================================
// Task: Use ternary operator to find maximum of two numbers
//       and check if a number is even or odd
//
// Concepts: Ternary operator (? :)
// ============================================================================

void bonus_problem_solution() {
    int a, b, max;
    int num;
    
    printf("Enter two numbers to find maximum:\n");
    printf("First number: ");
    scanf("%d", &a);
    printf("Second number: ");
    scanf("%d", &b);
    
    // Ternary operator: condition ? value_if_true : value_if_false
    max = (a > b) ? a : b;
    printf("Maximum: %d\n", max);
    
    printf("\nEnter a number to check even/odd: ");
    scanf("%d", &num);
    
    printf("%d is %s\n", num, (num % 2 == 0) ? "Even" : "Odd");
}


// ============================================================================
// MAIN FUNCTION - Uncomment the problem you want to test
// ============================================================================

int main() {
    printf("=== OPERATORS PROBLEMS ===\n\n");
    
    // Uncomment the problem you want to run:
    
    // printf("--- Problem 1: Basic Calculator ---\n");
    // problem1_solution();
    
    // printf("--- Problem 2: Relational Operators ---\n");
    // problem2_solution();
    
    // printf("--- Problem 3: Logical Operators ---\n");
    // problem3_solution();
    
    // printf("--- Problem 4: Increment/Decrement ---\n");
    // problem4_solution();
    
    // printf("--- Problem 5: Compound Assignment ---\n");
    // problem5_solution();
    
    // printf("--- Bonus: Ternary Operator ---\n");
    // bonus_problem_solution();
    
    return 0;
}


/*
================================================================================
                            LEARNING NOTES
================================================================================

1. ARITHMETIC OPERATORS
   +   Addition:        5 + 3 = 8
   -   Subtraction:     5 - 3 = 2
   *   Multiplication:  5 * 3 = 15
   /   Division:        5 / 3 = 1 (int), 5.0 / 3 = 1.67 (float)
   %   Modulus:         5 % 3 = 2 (remainder)

2. RELATIONAL OPERATORS (Return 1 for true, 0 for false)
   ==  Equal to:              5 == 5 → 1
   !=  Not equal to:          5 != 3 → 1
   >   Greater than:          5 > 3 → 1
   <   Less than:             5 < 3 → 0
   >=  Greater or equal:      5 >= 5 → 1
   <=  Less or equal:         5 <= 3 → 0

3. LOGICAL OPERATORS
   &&  AND: Both must be true
       Example: (5 > 3 && 8 > 6) → 1 (true)
       
   ||  OR: At least one must be true
       Example: (5 > 3 || 8 < 6) → 1 (true)
       
   !   NOT: Reverses the result
       Example: !(5 > 3) → 0 (false)

4. ASSIGNMENT OPERATORS
   =   Assign:          a = 5
   +=  Add and assign:  a += 3  →  a = a + 3
   -=  Sub and assign:  a -= 3  →  a = a - 3
   *=  Mul and assign:  a *= 3  →  a = a * 3
   /=  Div and assign:  a /= 3  →  a = a / 3
   %=  Mod and assign:  a %= 3  →  a = a % 3

5. INCREMENT/DECREMENT OPERATORS
   ++a  Pre-increment:  Increment first, then use
        int a = 5;
        int b = ++a;  // a = 6, b = 6
   
   a++  Post-increment: Use first, then increment
        int a = 5;
        int b = a++;  // a = 6, b = 5
   
   --a  Pre-decrement:  Decrement first, then use
   a--  Post-decrement: Use first, then decrement

6. TERNARY OPERATOR (Conditional Operator)
   Syntax: condition ? value_if_true : value_if_false
   
   Example:
   int max = (a > b) ? a : b;
   // If a > b, max = a, otherwise max = b
   
   printf("%s", (age >= 18) ? "Adult" : "Minor");
   // If age >= 18, print "Adult", otherwise print "Minor"

7. OPERATOR PRECEDENCE (Highest to Lowest)
   1. ++ -- (post)
   2. ++ -- (pre), ! (NOT)
   3. * / %
   4. + -
   5. < <= > >=
   6. == !=
   7. && (AND)
   8. || (OR)
   9. ? : (ternary)
   10. = += -= *= /= %=

================================================================================
                            COMMON MISTAKES
================================================================================

1. Using = instead of == for comparison
   Wrong: if (a = 5)  // This assigns 5 to a!
   Right: if (a == 5) // This compares a with 5

2. Integer division surprise
   5 / 2 = 2 (not 2.5!)
   Use: 5.0 / 2 or (float)5 / 2 for 2.5

3. Modulus with negative/float numbers
   % only works with integers
   -5 % 3 may give unexpected results

4. Confusing pre and post increment
   int a = 5;
   int b = a++;  // b = 5, a = 6
   int c = ++a;  // c = 7, a = 7

5. Operator precedence
   5 + 3 * 2 = 11 (not 16!)
   Use parentheses: (5 + 3) * 2 = 16

6. Logical operator short-circuit
   (a > 0 && b/a > 2)  // If a is 0, b/a is not evaluated
   (a || b++)          // If a is true, b++ is not executed

================================================================================
                            PRACTICE TIPS
================================================================================

1. Always use parentheses when in doubt about precedence
2. Be careful with integer vs float division
3. Understand the difference between = and ==
4. Practice pre vs post increment/decrement
5. Use compound operators for cleaner code
6. Master the ternary operator for simple conditions
7. Remember logical operators short-circuit evaluation
8. Test edge cases (like division by zero)

Try solving each problem on your own first before checking the solution!
================================================================================
*/
