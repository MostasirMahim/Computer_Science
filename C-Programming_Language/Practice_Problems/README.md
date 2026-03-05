# C Programming Practice Problems

Welcome to your C programming practice set! This collection contains **20 problems** covering fundamental C concepts, with detailed explanations and solutions.

## 📚 Contents

### 1. **C_Basics_Tutorial.md**
A comprehensive guide covering:
- How to print (`printf`)
- How to scan input (`scanf`)
- Basic program structure
- All data types
- All operators
- Conditional statements
- Quick reference examples

**👉 START HERE! Read this first before attempting problems.**

---

### 2. **Practice Problems** (5 problems each)

| File | Topic | Problems |
|------|-------|----------|
| `01_Introduction_Problems.c` | Introduction to C | 5 problems |
| `02_DataTypes_Problems.c` | Data Types | 5 problems |
| `03_Operators_Problems.c` | Operators | 5 problems |
| `04_Conditions_Problems.c` | Conditions | 5 problems |

---

## 🎯 How to Use These Files

### Step 1: Read the Tutorial
Open `C_Basics_Tutorial.md` and read through the basics.

### Step 2: Choose a Problem File
Start with `01_Introduction_Problems.c` and progress sequentially.

### Step 3: Solve Problems
Each file contains:
- **Problem description** with sample input/output
- **Hints** to guide you
- **Empty function** for you to write code
- **Solution** (commented out) for reference

### Step 4: Test Your Code

#### Method 1: Uncomment and Modify
1. Open the problem file (e.g., `01_Introduction_Problems.c`)
2. Find the problem function (e.g., `problem1()`)
3. Write your code in the empty function
4. In `main()`, uncomment the line to run your problem
5. Compile and run

#### Method 2: Use Solution for Learning
1. Uncomment the solution function call (e.g., `problem1_solution()`)
2. Run and observe the output
3. Study the solution code
4. Try to recreate it yourself

---

## 💻 How to Compile and Run

### On Windows (using GCC):
```bash
# Compile
gcc 01_Introduction_Problems.c -o intro.exe

# Run
intro.exe
```

### On Linux/Mac:
```bash
# Compile
gcc 01_Introduction_Problems.c -o intro

# Run
./intro
```

### Using VS Code:
1. Open the file
2. Press `Ctrl + Shift + B` (or `Cmd + Shift + B` on Mac)
3. Select "Build Active File"
4. Run in terminal

---

## 📝 Problem Overview

### 1️⃣ Introduction Problems (01_Introduction_Problems.c)

| # | Problem | Concepts |
|---|---------|----------|
| 1 | Hello World | Basic structure, printf |
| 2 | Personal Information | scanf, printf, strings |
| 3 | Simple Calculator | Arithmetic, input/output |
| 4 | Rectangle Area | Float calculations |
| 5 | Character Display | char type, ASCII values |

### 2️⃣ Data Types Problems (02_DataTypes_Problems.c)

| # | Problem | Concepts |
|---|---------|----------|
| 1 | Data Type Sizes | sizeof operator |
| 2 | Temperature Converter | float vs double |
| 3 | Character Operations | ASCII arithmetic |
| 4 | Type Casting | int vs float division |
| 5 | Grade Calculator | Multiple variables, calculations |

### 3️⃣ Operators Problems (03_Operators_Problems.c)

| # | Problem | Concepts |
|---|---------|----------|
| 1 | Basic Calculator | Arithmetic operators |
| 2 | Relational Test | Comparison operators |
| 3 | Logical Operators | AND, OR, NOT |
| 4 | Increment/Decrement | ++, -- operators |
| 5 | Compound Assignment | +=, -=, *=, /=, %= |
| Bonus | Ternary Operator | ? : operator |

### 4️⃣ Conditions Problems (04_Conditions_Problems.c)

| # | Problem | Concepts |
|---|---------|----------|
| 1 | Positive/Negative/Zero | if-else if-else |
| 2 | Grade Calculator | if-else ladder |
| 3 | Leap Year Checker | Nested if, logical operators |
| 4 | Calculator (Switch) | switch-case |
| 5 | Triangle Classifier | Multiple conditions |
| Bonus 1 | Day of Week | switch-case |
| Bonus 2 | Voting Eligibility | Nested if |

---

## 🎓 Learning Path

### Beginner (Week 1)
1. Read the entire tutorial
2. Solve all Introduction problems (5)
3. Solve all Data Types problems (5)

### Intermediate (Week 2)
4. Solve all Operators problems (5)
5. Solve first 3 Conditions problems

### Advanced (Week 3)
6. Solve remaining Conditions problems
7. Revisit problems and optimize solutions
8. Create your own variations

---

## 💡 Tips for Success

1. **Don't Rush**: Understand each concept before moving forward
2. **Type, Don't Copy**: Type the code yourself to build muscle memory
3. **Experiment**: Modify the problems with different inputs
4. **Break When Stuck**: If stuck for 15+ minutes, check the solution
5. **Practice Daily**: Consistency is key - solve 2-3 problems daily
6. **Debug**: Learn to use printf for debugging
7. **Comment Your Code**: Write comments to explain your logic

---

## 🔍 Common Issues and Solutions

### Issue 1: scanf not working for char
**Solution**: Add space before %c
```c
scanf(" %c", &ch);  // Note the space
```

### Issue 2: Integer division giving wrong results
**Solution**: Cast to float
```c
float result = (float)5 / 2;  // 2.5, not 2
```

### Issue 3: Comparing floats doesn't work
**Solution**: Use range comparison
```c
if (f >= 0.09 && f <= 0.11)  // Instead of f == 0.1
```

### Issue 4: String input with spaces
**Solution**: Use fgets or scanf with format
```c
scanf("%[^\n]", string);  // Reads until newline
```

---

## 📖 Additional Resources

### Online Compilers (for quick testing)
- [OnlineGDB](https://www.onlinegdb.com/online_c_compiler)
- [Programiz Compiler](https://www.programiz.com/c-programming/online-compiler/)
- [Repl.it](https://replit.com/languages/c)

### Documentation
- [C Reference (cppreference)](https://en.cppreference.com/w/c)
- [C Programming Tutorial (Programiz)](https://www.programiz.com/c-programming)
- [Learn C (tutorialspoint)](https://www.tutorialspoint.com/cprogramming/index.htm)

---

## 🎯 Practice Schedule

### Daily Plan (30-45 minutes)
- **Day 1-2**: Introduction problems
- **Day 3-4**: Data Types problems
- **Day 5-6**: Operators problems
- **Day 7-9**: Conditions problems
- **Day 10**: Review and practice all

---

## ✅ Progress Tracker

Mark your progress:

### Introduction (5/5)
- [ ] Problem 1: Hello World
- [ ] Problem 2: Personal Information
- [ ] Problem 3: Simple Calculator
- [ ] Problem 4: Rectangle Area
- [ ] Problem 5: Character Display

### Data Types (5/5)
- [ ] Problem 1: Data Type Sizes
- [ ] Problem 2: Temperature Converter
- [ ] Problem 3: Character Operations
- [ ] Problem 4: Type Casting
- [ ] Problem 5: Grade Calculator

### Operators (5/5)
- [ ] Problem 1: Basic Calculator
- [ ] Problem 2: Relational Test
- [ ] Problem 3: Logical Operators
- [ ] Problem 4: Increment/Decrement
- [ ] Problem 5: Compound Assignment

### Conditions (5/5)
- [ ] Problem 1: Positive/Negative/Zero
- [ ] Problem 2: Grade Calculator
- [ ] Problem 3: Leap Year Checker
- [ ] Problem 4: Calculator (Switch)
- [ ] Problem 5: Triangle Classifier

---

## 🚀 Next Steps After Completion

Once you complete all 20 problems:

1. **Loops**: Practice for, while, do-while loops
2. **Functions**: Learn to create and use functions
3. **Arrays**: Single and multi-dimensional arrays
4. **Strings**: String manipulation and functions
5. **Pointers**: Memory addresses and pointers
6. **Structures**: Custom data types
7. **File I/O**: Reading and writing files

---

## 📞 Help and Support

If you're stuck:
1. Reread the tutorial section for that topic
2. Check the "Learning Notes" at the end of each problem file
3. Review the solution and understand each line
4. Try to recreate the solution without looking
5. Search online for additional examples

---

## 🎉 Congratulations!

You now have everything you need to master C programming basics!

**Remember**: Programming is learned by doing, not just reading. 
Code every day, make mistakes, debug, and learn!

**Happy Coding! 💻✨**

---

*Created for C programming beginners*
*All problems include detailed explanations and solutions*
*Practice makes perfect!*
