#include <stdio.h>
int main()
{
    printf("\n Keywords \n \t \n");
    printf("Keywords are reserved words in C that have special meanings \n and are used to define the structure and logic of the program.");
    return 0;
}
//TODO Remember: Here are the 32 keywords in C, along with brief descriptions of each:-
//? auto: Declares automatic (local) variables.
//? break: Exits from a loop or switch statement.
//? case: Defines a branch in a switch statement.
//? char: Declares a character type variable.
//? const: Declares variables whose value cannot be changed.
//? continue: Skips the rest of the loop iteration and starts the next iteration.
//? default: Specifies the default branch in a switch statement.
//? do: Defines the start of a do-while loop.
//? double: Declares a double precision floating-point variable.
//? else: Defines the branch of an if statement when the condition is false.
//? enum: Declares an enumeration, a set of named integer constants.
//? extern: Declares a variable or function that has external linkage.
//? float: Declares a floating-point variable.
//? for: Declares the start of a for loop.
//? goto: Transfers control to a labeled statement within the same function.
//? if: Declares the start of an if statement.
//? int: Declares an integer variable.
//? long: Declares a long integer variable.
//? register: Declares a variable with storage in a CPU register.
//? return: Exits from a function, optionally returning a value.
//? short: Declares a short integer variable.
//? signed: Declares a signed integer variable.
//? sizeof: Returns the size of a data type or variable.
//? static: Declares a static variable with permanent storage duration or a function with internal linkage.
//? struct: Declares a structure, a collection of variables under one name.
//? switch: Declares the start of a switch statement, which allows multi-way branching.
//? typedef: Creates a new name for an existing data type.
//? union: Declares a union, a data type that can store different data types in the same memory location.
//? unsigned: Declares an unsigned integer variable.
//? void: Declares that a function does not return a value or a pointer that has no type.
//? volatile: Declares that a variable may be modified in ways not known to the compiler.
//? while: Declares the start of a while loop.



//** There are another 2 keywords contains in C99 and later standards, but traditionally the core C language has 32 keywords. */
//? inline: Suggests to the compiler to insert the function's code directly at the point of call. 
//? restrict: Specifies that a pointer is the only reference to the object it points to.



//TODO Remember, Rules of using keywords in C Program:-
//! 1. Reserved Usage: Keywords are reserved words in C and cannot be used as identifiers (e.g., variable names, function names).
//! 2. Case Sensitivity: Keywords are case-sensitive, they are always used in lower case. meaning int is a keyword but Int is not.
//! 3. Syntax Rules: Keywords must be used in their correct syntactical context. For example, 'if' must be followed by a condition and a statement block.
//! 4. Cannot be Re-defined: Keywords cannot be redefined as macros or any other kind of identifiers using the #define preprocessor directive.
//! 5. Scope and Usage: Keywords must be used within their proper scope. For example, auto declares local variables within a function.
//! 6. Proper Declaration: Keywords like extern, static, register, etc., should be used appropriately to declare the storage class of variables and functions.
//! 7. Control Structures: Keywords that define control structures (e.g., if, else, while, for, switch, case, do) must be followed by appropriate expressions or blocks of code.
//! 8. Data Type Declaration: Keywords that declare data types (e.g., int, char, float, double, void, long, short, unsigned, signed) must be followed by the variable name or type definition.
//! 9. Keyword Combinations: Some keywords can be used in combination to specify more details. For example, unsigned long int is a valid combination.
//! 10. Function Modifiers: Keywords like return must be used in functions to return values. Keywords like void are used to specify that a function does not return a value.
//! 11. Consistent Usage: Keywords like const and volatile must be used consistently to modify variables and pointers.
//! 12. Switch and Case: The switch keyword must be followed by an expression, and case labels within a switch statement must be followed by a constant expression.
//! 13. No Concatenation: Two keywords cannot be concatenated without a space or any other delimiter between them. For example, intchar is not valid, whereas int char is.
//! 14. Keywords as Unit Words: Keywords are single words with no spaces within them. For example, 'int' is a keyword, but i n t is not.
