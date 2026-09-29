# Structured-Programming-Assignment
This is a collection of C programming exercises covering concepts like input/output, decisions, loops, calculations and interactive programs


### 1. Exercise 2.20: Time Conversion
- **Category:** Input - Process - Output
- **Why Selected:** Chosen to demonstrate basic user input using scanf(), variable storage, arithmetic processing, and standard output using printf().
- **Program Overview:** Prompts the user to enter a total number of seconds, then uses integer division and the modulus operator % to calculate and display the equivalent time formatted in hours, minutes, and remaining seconds.



### 2. Exercise 3.17: Mortgage Calculator
- **Category:** Sentinel-Controlled Repetition & Calculations
- **Why Selected:** Selected to demonstrate how to process dynamic financial calculations repeatedly using a loop until a specific user exit command is given.
- **Program Overview:** Uses while loop controlled by a sentinel value -1 to continuously prompt for account details, mortgage amount, term, and interest rate, calculating and printing the monthly payable interest for each entry.



### 3. Exercise 4.11: Sum of Multiples
- **Category:** Basic Counter Loop & Iterative Logic
- **Why Selected:** Chosen to illustrate basic loop iteration over a fixed range combined with conditional filtering.
- **Program Overview:** Uses a for loop to iterate through integers from 1 to 100, checking each value with the modulo operator %7 == 0 to accumulate and print the total sum of all multiples of 7.



### 4. Exercise 4.13: Natural Numbers Arithmetic
- **Category:** Mathematical Processing with Iteration
- **Why Selected:** Selected to show how accumulated calculations (summations and powers) can be handled sequentially inside a loop structure.
- **Program Overview:** Accepts an integer limit n from the user and computes three distinct metrics for all natural numbers from 1 to n: the total sum, the sum of squares ($i^2$), and the sum of cubes ($i^3$).



### 5. Exercise 4.17: Calculating Credit Limits
- **Category:** Loop with Embedded Conditional Decision
- **Why Selected:** Chosen to fulfill the requirement of combining a counter-controlled loop with conditional decision statements if...else.
- **Program Overview:** Iterates through three customer accounts, taking their pre-recession credit limits and current balances. It calculates each customer's new halved credit limit and evaluates whether their current balance exceeds this new threshold.



### 6. Exercise 4.32: Modified Diamond Printing
- **Category:** Input Validation & Nested Loops
- **Why Selected:** Selected to demonstrate user input validation alongside complex pattern generation using nested repetition structures.
- **Program Overview:** Uses a do...while loop to ensure the user inputs an odd number between 1 and 19, then uses nested for loops to print a centered, symmetrical diamond pattern of asterisks based on the requested row count.



### 7. Exercise 4.35: Removing Unstructured Controls
- **Category:** Structured Programming & Logic Control
- **Why Selected:** Chosen to demonstrate how unstructured loop exit statements like break can be replaced with structured conditional flags.
- **Program Overview:** Refactors early loop termination logic by eliminating the break keyword and managing exit states cleanly through boolean condition flags directly inside the for loop header.
