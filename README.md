Source code for `K & R`
## Chapter 2 - Types, Operators and Expressions
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

