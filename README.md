Demos for [K & R](https://book.douban.com/subject/1236999/)
## 2 Types, Operators and Expressions
### 2.1 Variable Names
### 2.2 Data Types and Sizes
1. Data Types
    - char
        - signed char
        - unsigned char
    - int
        - int
            - signed int
            - unsigned int
        - short (int)
            - signed short (int)
            - unsigned short (int)
        - long (int)
            - signed long (int)
            - unsigned long (int)
    - float
    - double
        - long double
    
2. Sizes
    - short <= int <= long
    - float <= double <= long double
    
### 2.3 Constants
1. Constants Types

    Constants Types | Example
    :--------------: | :-------:
    int | 1234
    long | 1234L
    double | 123.4
    float | 123.4F
    long double | 123.4L
    
2. Character Constant
    - A character constant is an integer, written as one character within single quotes, such as 'x'
    - The value of a character constant is the numeric value of the character in the machine's character set
    - Character constants participate in numeric operations just as any other integers, although they are most often used in comparisons with other characters
    
3. `0`, `'0'`, `'\0'`

4. String Constant
    - A string constant is a sequence of zero or more characters surrounded by double quotes
    - The quotes are not part of the string, but serve only to delimit it
    - A string constant is an array of characters
    
5. Charcter Constant vs. String
    - Character is `an integer`
    - String is `an array`
    
### 2.4 Declarations

### 2.5 Arithmetic Operators

### 2.6 Relational and Logical Operators
    
### 2.7 Type Conversions
1. Conversions rules
    - If either operand is long double, convert the other to long double.
    - Otherwise, if either operand is double, convert the other to double.
    - Otherwise, if either operand is float, convert the other to float.
    - Otherwise, convert char and short to int.
    - Then, if either operand is long, convert the other to long.
    
2. Since an argument of a function call is an expression, type conversion also takes place when arguments are passed to functions.

### 2.8 Increment and Decrement Operators
1. C provides six operators for bit manipulation; these may only be applied to integral operands, that is, char, short, int, and long, whether signed or unsigned.
    - `&` bitwise AND
    - `|` bitwise inclusive OR
    - `^` bitwise exclusive OR
    - `<<` left shift
    - `>>` right shift
    - `~` one's complement(unary)
    
### 2.9 Bitwise Operators

### 2.10 Assignment Operators and Expressions
1. We have already seen that the assignment statement has a value and can occur in expressions; the most common example is
    ```cpp
    while ((c = getchar()) != EOF)
    ```
    In all such expressions, the type of an assignment expression is the type of its left operand, and the value is the value after the assignment.
    
### 2.11 Conditional Expressions
1. In the expression `expr1 ? expr2 : expr3`, the expression expr 1 is evaluated first. If it is non-zero (true), then the expression expr 2 is evaluated, and that is the value of the conditional expression. Otherwise expr 3 is evaluated, and that is the value. Only one of expr 2 and expr 3 is evaluated.

### 2.12 Precedence and Order of Evaluation
1. Function calls, nested assignment statements, and increment and decrement operators cause `side effects` - some variable is changed as a by-product of the evaluation of an expression.

2. The moral is that writing code that depends on order of evaluation is a bad programming practice in any language. Naturally, it is necessary to know what things to avoid, but if you don't know how they are done on various machines, you won't be tempted to take advantage of a particular implementation.

## 3 Control Flow
### 3.1 Statements and Blocks
1. An expression such as `x=0` or `i++` or `printf(...)` becomes a statement when it is followed by a semicolon, as in
    ```cpp
    x = 0;
    i++;
    printf(...);
    ```
    
2. Braces { and } are used to group declarations and statements together into a compound statement, or block, so that they are syntactically equivalent to a single statement. There is no semicolon after the right brace that ends a block.

### 3.2 If-Else

### 3.3 Else-If

### 3.4 Switch

### 3.5 Loops - While and For

### 3.6 Loops - Do-While

### 3.7 Break and Continue

### 3.8 Goto and labels

## 4 Functions and Program Structure

### 4.1 Basics of Functions
1. A program is just a set of definitions of variables and functions. Communication between the functions is by arguments and values returned by the functions, and through external variables. The functions can occur in any order in the source file, and the source program can be split into multiple files, so long as no function is split.

### 4.2 Functions Returning Non-integers

### 4.3 External Variables

### 4.4 Scope Rules

### 4.5 Header Files

### 4.6 Static Variables

### 4.7 Register Variables

### 4.8 Block Structure

### 4.9 Initialization
1. In the absence of explicit initialization, external and static variables are guaranteed to be initialized to zero; automatic and register variables have undefined (i.e., garbage) initial values.

2. For external and static variables, the initializer must be a constant expression; the initialization is done once, conceptionally before the program begins execution. For automatic and register variables, the initializer is not restricted to being a constant: it may be any expression involving previously defined values, even function calls.

### 4.10 Recursion
1. When a function calls itself recursively, each invocation gets a fresh set of all the automatic variables, independent of the previous set.

### 4.11 The C Preprocessor

## 5 Pointers and Arrays
### 5.1 Pointers and Addresses
1. A pointer is a variable that contains the address of a variable.

2. The & operator only applies to objects in memory: variables and array elements. It cannot be applied to expressions, constants, or register variables.

3. The unary operator * is the indirection or dereferencing operator; when applied to a pointer, it accesses the object the pointer points to.
