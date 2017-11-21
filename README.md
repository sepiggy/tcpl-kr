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

### 5.2 Pointers and Function Arguments

### 5.3 Pointers and Arrays
1. Any operation that can be achieved by array subscripting can also be done with pointers. The pointer version will in general be faster but, at least to the uninitiated, somewhat harder to understand.

2. If pa points to a particular element of an array, then by definition pa+1 points to the next element, pa+i points i elements after pa, and pa-i points i elements before.

3. If a is an array, pa points to a[0],  pa+i is the address of a[i], and *(pa+i) is the contents of a[i].

4. An array-and-index expression is equivalent to one written as a pointer and offset.

5. There is one difference between an array name and a pointer that must be kept in mind. A pointer is a variable, so pa=a and pa++ are legal. But an array name is not a variable; constructions like a=pa and a++ are illegal.

6. If one is sure that the elements exist, it is also possible to index backwards in an array; p[-1], p[-2], and so on are syntactically legal, and refer to the elements that immediately precede p[0]. Of course, it is illegal to refer to objects that are not within the array bounds.

### 5.4 Address Arithmetic
1. C guarantees that zero is never a valid address for data, so a return value of zero can be used to signal an abnormal event, in this case no space.

2. Pointers and integers are not interchangeable. Zero is the sole exception: the constant zero may be assigned to a pointer, and a pointer may be compared with the constant zero. The symbolic constant NULL is often used in place of zero, as a mnemonic to indicate more clearly that this is a special value for a pointer. NULL is defined in <stdio.h>. We will use NULL henceforth.

3. Pointers may be compared under certain circumstances. If p and q point to members of the same array, then relations like ==, !=, <, >=, etc., work properly.

4. Any pointer can be meaningfully compared for equality or inequality with zero. But the behavior is undefined for arithmetic or comparisons with pointers that do not point to members of the same array. (There is one exception: the address of the first element past the end of an array can be used in pointer arithmetic.)

5. we have already observed that a pointer and an integer may be added or subtracted. The construction `p+n` means the address of the n-th object beyond the one p currently points to. This is true regardless of the kind of object p points to; n is scaled according to the size of the objects p points to, which is determined by the declaration of p.

6. Pointer subtraction is also valid: if p and q point to elements of the same array, and p<q, then q-p+1 is the number of elements from p to q inclusive. 

7. The valid pointer operations are assignment of pointers of the same type, adding or subtracting a pointer and an integer, subtracting or comparing two pointers to members of the same array, and assigning or comparing to zero.

### 5.5 Character Pointers and Functions
1. A string constant, written as `"I am a string"` is an array of characters. In the internal representation, the array is terminated with the null character '\0' so that programs can find the end. The length in storage is thus one more than the number of characters between the double quotes.

2. A string constant is accessed by a pointer to its first element.

3. C does not provide any operators for processing an entire string of characters as a unit.

4. The pair of expressions `*p++ = val;` and `val = *--p` are the standard idiom for pushing and popping a stack.

### 5.6 Pointer Arrays; Pointers to Pointers
1. Since pointers are variables themselves, they can be stored in arrays just as other variables can.

### 5.7 Multi-dimensional Arrays
1. In C, a two-dimensional array is really a one-dimensional array, each of whose elements is an array. 

2. Elements are stored by rows, so the rightmost subscript, or column, varies fastest as elements are accessed in storage order. 

3. `f(int daytab[2][13]){...}` is equivalent to `f(int daytab[][13]){...}` and `f(int (*daytab)[13]){...}`

4. More generally, only the first dimension (subscript) of an array is free; all the others have to be specified. 

5. The difference between `int (*daytab)[13]` and `int *daytab[13]`

### 5.8 Initialization of Pointer Arrays

### 5.9 Pointers vs. Multi-dimensional Arrays

### 5.10 Command-line Arguments 

### 5.11 Pointers to Functions

## 6 Structures
