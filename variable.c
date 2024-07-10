#include <stdio.h>
int main()
{
    printf("\n Variables in C Programming \n\n\n ");
    printf("A variable in C is a named storage location in memory that holds a value \n which can be modified during program execution. Variables are essential for storing data \n that can be used and manipulated throughout a program.\n"); 
    return 0;
}

//TODO Remember: Types of Variables:-
//? Local Variables: Declared inside a function or a block and accessible only within that function or block.
//? Global Variables: Declared outside of all functions and accessible from any function within the program.
//? Static Variables: Retain their value between function calls and are limited in scope to the function in which they are declared.
//? Automatic Variables: Default storage class for local variables, typically declared with the auto keyword (though it's rarely used).

//TODO Declaring(Creating) Variables:-
/* Variables are used to store and manipulate data within a C program. 
When declaring a variable, you specify its data type, a name, and an optional initial value. 
Variable names must be unique within a scope (a block of code). */
// Example of variable declarations:- 

//TODO Remember: Syntex ---> datatype variableName = value;

int age; //(Declares an integer variable named age.)

float salary = 5000.50; //(Declares a floating-point variable named salary and assigns it an initial value.)

char initial = 'A'; //(Declares a character variable named initial and assigns it the character 'A'.)


//TODO Remember: Rules for Using Variables:-
/* Naming conventions and rules for variables in C are essential for writing readable and maintainable code. 
They help developers understand the purpose of variables and ensure consistency across projects.
Here are some common naming conventions and rules for variables in C:-  */

//* 1. Naming Rules: 
//? Variable names can consist of letters (both uppercase and lowercase), digits, and underscores.
//! Variable names must begin with a letter (a-z, A-Z) or an underscore (_).
//? Variable names are case-sensitive (age and Age are different variables).

// *** Naming Conventions: (Starts Here)

//* 1.1 Use Descriptive Names:
//? Choose variable names that clearly convey the purpose of the variable. For example, use 'counter' instead of 'c' for a counter variable.

//* 1.2 Camel Case:
//? For multi-word variable names, use camel case. Start with a lowercase letter, and capitalize the first letter of each subsequent word. For example, 'myVariableName'.

//* 1.3 Meaningful Names: 
//? Make sure variable names reflect the data they hold. For example, use 'studentName' instead of 'name' for a student's name.

//! 1.4 Avoid Single Letters:
//? Generally, avoid using single letters (except for loop counters) as variable names. This improves code readability.

//* 1.5 Constants:
//? If a variable is a constant (a value that does not change), use uppercase letters with underscores to separate words. For example, 'MAX_VALUE'.

//* 1.6 Prefixes and Suffixes:  
//? You can use prefixes or suffixes to indicate variable types. For example, 'strName' for a string and 'nCount' for an integer count.

//! 1.7 Avoid Ambiguity:
//? Ensure your variable names are not ambiguous. For example, if you have both 'customerName' and 'customerAddress', it's clear what they represent.

//* 1.8 Consistency:
//? Maintain a consistent naming style across your codebase. If you start with camel case, continue with camel case.

// *** Naming Conventions: (Ends Here)

//* 2. Reserved Words:
//? Variable names cannot be the same as C reserved keywords (e.g., int, if, while). Avoid using these keywords as variable names.

//* 3. No Special Characters:
//! Avoid using special characters like '@','$', or '%' in variable names. Stick to letters, numbers, and underscores.  

//* 4. Length:
//? Variable names can be as long as necessary, but it's a good practice to keep them reasonably short and descriptive.


//TODO Examples:-
// Good variable naming examples
int numberOfStudents;
char studentName[50];
const int MAX_ATTEMPTS = 3;

//! Avoid using single letters and cryptic names
int n; //! Avoid using single letters like 'n'
int x; //! Avoid cryptic variable names

// Meaningful names and clear intent
double temperatureCelsius;
char customerAddress[100];

// Consistent style and camel case
int totalSalesCount;

/*Adhering to these naming conventions and rules will improve the readability and maintainability
of your C code and make it easier for you and other developers to understand
and work with your programs.*/

//TODO EXAMPLE OF Variable Declarations and Initialization:- (3 Formats)
//! Format-01(Declaring Variable once at a time)

//* Variable Declaration
int num1;
int num2;
float num3;
double num4;
char ch;

//* Variable Initialization
int num1=10;
int num2=20;
float num3=10.2;
double num4=10.12345678;
char ch='a';

//! Format-02(Declaring Variable twice or more at a time within same keyword)

//* Variable Declaration
int num5,num6;
float num7;
double num8;
char ab;

//* Variable Initialization
int num5=12;
int num6=22;
float num7=12.2;
double num8=12.12345678;
char ab='b';

//! Format-03(Declaring and Initializing Variable once at a time)
//? Format-03 Also known as "Dynamic Initialization". 

//* Variable Declaration & Initialization
int num9=15,num10=25;
float num11=15.2;
double num12=15.12345678;
char bc='c';
