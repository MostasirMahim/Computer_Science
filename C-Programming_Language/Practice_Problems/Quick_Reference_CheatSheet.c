/*
================================================================================
                        C PROGRAMMING QUICK REFERENCE
                              CHEAT SHEET
================================================================================
Keep this file open while practicing for quick reference!
================================================================================
*/

/*
┌─────────────────────────────────────────────────────────────────────────┐
│                         BASIC PROGRAM STRUCTURE                         │
└─────────────────────────────────────────────────────────────────────────┘
*/

#include <stdio.h>

int main() {
    // Your code here
    return 0;
}

/*
┌─────────────────────────────────────────────────────────────────────────┐
│                          INPUT/OUTPUT (I/O)                             │
└─────────────────────────────────────────────────────────────────────────┘

PRINTF (Output)
───────────────
printf("Hello World");                // Print text
printf("%d", 25);                     // Print integer
printf("%f", 3.14);                   // Print float
printf("%c", 'A');                    // Print character
printf("Number: %d\n", 42);           // Print with variable
printf("%.2f", 3.14159);              // 2 decimal places → 3.14

SCANF (Input)
─────────────
int age;
scanf("%d", &age);                    // Read integer (note &)

float price;
scanf("%f", &price);                  // Read float

char grade;
scanf(" %c", &grade);                 // Read char (note space)

char name[50];
scanf("%s", name);                    // Read string (no & for arrays)

┌─────────────────────────────────────────────────────────────────────────┐
│                         FORMAT SPECIFIERS                               │
└─────────────────────────────────────────────────────────────────────────┘

%d or %i    →  int                    printf("%d", 25);
%f          →  float/double           printf("%f", 3.14);
%lf         →  double (scanf only)    scanf("%lf", &d);
%c          →  char                   printf("%c", 'A');
%s          →  string                 printf("%s", "Hello");
%ld         →  long int               printf("%ld", 1000000L);
%lu         →  unsigned long          printf("%lu", sizeof(int));

Special:
%.2f        →  2 decimal places       printf("%.2f", 3.14159); → 3.14
%%          →  Print % symbol         printf("100%%"); → 100%
\n          →  New line               printf("Line 1\nLine 2");
\t          →  Tab                    printf("Name:\tJohn");

┌─────────────────────────────────────────────────────────────────────────┐
│                            DATA TYPES                                   │
└─────────────────────────────────────────────────────────────────────────┘

Type        Size        Range                   Example
────────────────────────────────────────────────────────────
int         4 bytes     -2,147,483,648 to       int age = 25;
                        2,147,483,647

float       4 bytes     ~6 decimal precision    float pi = 3.14;

double      8 bytes     ~15 decimal precision   double e = 2.718281828;

char        1 byte      -128 to 127 or          char grade = 'A';
                        0 to 255

long        8 bytes     Very large numbers      long big = 1000000L;

short       2 bytes     -32,768 to 32,767       short small = 100;

┌─────────────────────────────────────────────────────────────────────────┐
│                       ARITHMETIC OPERATORS                              │
└─────────────────────────────────────────────────────────────────────────┘

+       Addition            5 + 3 = 8
-       Subtraction         5 - 3 = 2
*       Multiplication      5 * 3 = 15
/       Division            5 / 2 = 2 (integer)
                            5.0 / 2 = 2.5 (float)
%       Modulus (Remainder) 5 % 2 = 1

Examples:
─────────
int a = 10, b = 3;
int sum = a + b;           // 13
int diff = a - b;          // 7
int prod = a * b;          // 30
int quot = a / b;          // 3 (not 3.33!)
float fdiv = (float)a / b; // 3.33 (type casting)
int rem = a % b;           // 1

┌─────────────────────────────────────────────────────────────────────────┐
│                      RELATIONAL OPERATORS                               │
└─────────────────────────────────────────────────────────────────────────┘
                        Returns: 1 (true) or 0 (false)

==      Equal to                5 == 5  → 1 (true)
!=      Not equal to            5 != 3  → 1 (true)
>       Greater than            5 > 3   → 1 (true)
<       Less than               5 < 3   → 0 (false)
>=      Greater or equal        5 >= 5  → 1 (true)
<=      Less or equal           5 <= 3  → 0 (false)

┌─────────────────────────────────────────────────────────────────────────┐
│                        LOGICAL OPERATORS                                │
└─────────────────────────────────────────────────────────────────────────┘

&&      AND         Both must be true       (5>3 && 8>6) → 1
||      OR          At least one true       (5>3 || 8<6) → 1
!       NOT         Reverses result         !(5>3) → 0

Examples:
─────────
int age = 25;
(age >= 18 && age <= 60)    // true if between 18 and 60
(day == 0 || day == 6)      // true if Sunday(0) or Saturday(6)
!(age < 18)                 // true if NOT less than 18

┌─────────────────────────────────────────────────────────────────────────┐
│                      ASSIGNMENT OPERATORS                               │
└─────────────────────────────────────────────────────────────────────────┘

=       Assign              a = 5
+=      Add and assign      a += 3   →  a = a + 3
-=      Subtract assign     a -= 3   →  a = a - 3
*=      Multiply assign     a *= 3   →  a = a * 3
/=      Divide assign       a /= 3   →  a = a / 3
%=      Modulus assign      a %= 3   →  a = a % 3

┌─────────────────────────────────────────────────────────────────────────┐
│                   INCREMENT/DECREMENT OPERATORS                         │
└─────────────────────────────────────────────────────────────────────────┘

++      Increment (add 1)
--      Decrement (subtract 1)

int a = 5;
a++;        // Post-increment: use then add → a = 6
++a;        // Pre-increment: add then use → a = 7

int b = a++;  // b = 7, a = 8 (use current, then increment)
int c = ++a;  // c = 9, a = 9 (increment first, then use)

┌─────────────────────────────────────────────────────────────────────────┐
│                         IF-ELSE STATEMENTS                              │
└─────────────────────────────────────────────────────────────────────────┘

Simple if:
──────────
if (condition) {
    // code if true
}

if-else:
────────
if (condition) {
    // code if true
} else {
    // code if false
}

if-else if-else ladder:
───────────────────────
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
────────
int marks = 85;
if (marks >= 90) {
    printf("Grade A+\n");
} else if (marks >= 80) {
    printf("Grade A\n");
} else if (marks >= 70) {
    printf("Grade B\n");
} else {
    printf("Grade C\n");
}

┌─────────────────────────────────────────────────────────────────────────┐
│                         SWITCH-CASE STATEMENT                           │
└─────────────────────────────────────────────────────────────────────────┘

Syntax:
───────
switch (expression) {
    case value1:
        // code
        break;
    case value2:
        // code
        break;
    default:
        // default code
}

Example:
────────
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

Note: Don't forget break! Without it, execution continues to next case.

┌─────────────────────────────────────────────────────────────────────────┐
│                        TERNARY OPERATOR                                 │
└─────────────────────────────────────────────────────────────────────────┘

Syntax:  condition ? value_if_true : value_if_false

Examples:
─────────
int max = (a > b) ? a : b;              // max of two numbers
printf("%s", (age >= 18) ? "Adult" : "Minor");
int abs = (num < 0) ? -num : num;       // absolute value

┌─────────────────────────────────────────────────────────────────────────┐
│                        TYPE CASTING                                     │
└─────────────────────────────────────────────────────────────────────────┘

Syntax: (type)variable

Examples:
─────────
int a = 5;
float b = (float)a;          // b = 5.0

float x = 5.7;
int y = (int)x;              // y = 5 (truncated)

int result = (float)7 / 2;   // 3.5 (not 3!)

┌─────────────────────────────────────────────────────────────────────────┐
│                      COMMON MISTAKES TO AVOID                           │
└─────────────────────────────────────────────────────────────────────────┘

1. Using = instead of ==
   Wrong: if (a = 5)  // Assignment!
   Right: if (a == 5) // Comparison

2. Forgetting & in scanf (for non-arrays)
   Wrong: scanf("%d", num);
   Right: scanf("%d", &num);

3. Integer division
   5 / 2 = 2 (not 2.5!)
   Use: 5.0 / 2 or (float)5 / 2

4. Forgetting break in switch
   switch(x) {
       case 1: printf("One\n"); break;  // Don't forget!
   }

5. Semicolon after if
   Wrong: if (x > 0); { ... }
   Right: if (x > 0) { ... }

┌─────────────────────────────────────────────────────────────────────────┐
│                        OPERATOR PRECEDENCE                              │
└─────────────────────────────────────────────────────────────────────────┘
                    (Highest to Lowest)

1.  ()                      Parentheses
2.  ++ --                   Post-increment/decrement
3.  ++ -- ! (type)          Pre-increment/NOT/casting
4.  * / %                   Multiplication, Division, Modulus
5.  + -                     Addition, Subtraction
6.  < <= > >=               Relational
7.  == !=                   Equality
8.  &&                      Logical AND
9.  ||                      Logical OR
10. ? :                     Ternary
11. = += -= *= /= %=        Assignment

Example:
────────
5 + 3 * 2 = 11 (not 16!)
(5 + 3) * 2 = 16

┌─────────────────────────────────────────────────────────────────────────┐
│                         ASCII VALUES                                    │
└─────────────────────────────────────────────────────────────────────────┘

'0' to '9'   →  48 to 57
'A' to 'Z'   →  65 to 90
'a' to 'z'   →  97 to 122

Difference between uppercase and lowercase = 32

'a' - 32 = 'A'  // Convert to uppercase
'A' + 32 = 'a'  // Convert to lowercase

┌─────────────────────────────────────────────────────────────────────────┐
│                        USEFUL CODE SNIPPETS                             │
└─────────────────────────────────────────────────────────────────────────┘

Swap two numbers:
─────────────────
int temp = a;
a = b;
b = temp;

Find maximum of two numbers:
─────────────────────────────
int max = (a > b) ? a : b;

Check even/odd:
───────────────
if (num % 2 == 0)
    printf("Even\n");
else
    printf("Odd\n");

Absolute value:
───────────────
int abs = (num < 0) ? -num : num;

Check leap year:
────────────────
if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
    printf("Leap year\n");

┌─────────────────────────────────────────────────────────────────────────┐
│                         COMPILATION COMMANDS                            │
└─────────────────────────────────────────────────────────────────────────┘

Windows (GCC):
──────────────
gcc filename.c -o output.exe
output.exe

Linux/Mac:
──────────
gcc filename.c -o output
./output

With warnings:
──────────────
gcc -Wall filename.c -o output

┌─────────────────────────────────────────────────────────────────────────┐
│                           QUICK TIPS                                    │
└─────────────────────────────────────────────────────────────────────────┘

✓ Always include <stdio.h> for input/output
✓ Use meaningful variable names (age, not x)
✓ Add comments to explain complex logic
✓ Test with different inputs (positive, negative, zero)
✓ Use proper indentation for readability
✓ Initialize variables before using them
✓ Always return 0 from main()
✓ Use parentheses when unsure about precedence
✓ Check for division by zero
✓ Practice daily - consistency is key!

================================================================================
                          Keep this handy while coding!
================================================================================
*/

// Quick test program - Uncomment and modify to test concepts
/*
#include <stdio.h>

int main() {
    // Test your code here
    
    return 0;
}
*/
