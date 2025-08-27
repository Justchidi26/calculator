# **Simple Calculator in C**

## **Overview**

This is a simple command-line calculator written in C. It allows users to:

* Enter two numbers.
* Choose a mathematical operator (`+`, `-`, `*`, `/`).
* Perform the calculation and display the result.
* Handle invalid inputs (non-numeric values, invalid operators, division by zero).

This program demonstrates:

* User input validation.
* Use of `while` loops for input checking.
* Basic arithmetic operations in C.
* Error handling with `scanf()` and input buffer clearing.

---

## **Features**

* Accepts floating-point numbers as input.
* Supports four basic arithmetic operations:

  * Addition (`+`)
  * Subtraction (`-`)
  * Multiplication (`*`)
  * Division (`/`)
* Checks for:

  * Invalid numeric input.
  * Invalid operators.
  * Division by zero.
* Prints the result to **two decimal places**.

---

## **How It Works**

1. **User enters the first number.**

   * If the input is invalid (non-numeric), the program prompts again.
2. **User enters an operator (`+`, `-`, `*`, `/`).**

   * If the operator is invalid, the program asks again until a valid operator is provided.
3. **User enters the second number.**

   * Again, invalid numeric input triggers a retry prompt.
4. **The program performs the operation and displays the result.**

   * If division by zero is attempted, the program displays an error message.

---

## **Code Structure**

* **Variables Used:**

  * `a, b`: The two operands (`double`).
  * `c`: The operator (`char`).
  * `answer`: Stores the result of the operation (`double`).
  * `validInput`: Controls input validation loops (`int`).
  * `success`: Ensures division is valid before displaying a result (`int`).

* **Main Steps in `main()`:**

  1. Prompt and validate first number.
  2. Prompt and validate operator.
  3. Prompt and validate second number.
  4. Perform the operation and display the result.

---

## **Sample Run**

```
Enter a number: 10
Please enter an operator (+, -, *, /): *
Enter another number: 5
Answer is: 50.00
```

### **Invalid Input Handling**

```
Enter a number: abc
Error: Invalid input. Please enter a number.
Enter a number: 12
Please enter an operator (+, -, *, /): x
Invalid operator. Try again.
Please enter an operator (+, -, *, /): /
Enter another number: 0
Invalid. Division by 0 is not allowed.
```

---

## **How to Compile and Run**

1. Save the code to a file, e.g., `calculator.c`.
2. Open a terminal/command prompt and navigate to the file location.
3. Compile with:

   ```bash
   gcc calculator.c -o calculator
   ```
4. Run the program:

   ```bash
   ./calculator
   ```

---

