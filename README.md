# BigInt_Cpp
Exploring the 3n + 1 problem known as the Collatz Conjecture

### Introduction
The Collatz conjecture is one of the most famous unsolved problems in mathematics. The conjecture asks whether
repeating two simple arithmetic operations will eventually transform every positive integer into 1. It
concerns sequences of integers in which each term is obtained from the previous term as follows:

If the previous term is even, the next term is one half of the previous term.

If the previous term is odd, the next term is 3 times the previous term plus 1.


### Program Requirements
Your program source code will be called threeN.cpp

The executable will be called threeN

You must have a recursive function in your program to calculate 3n+1.

If you run threeN with no parameters, the program will ask you for a starting number. The user will type in a
positive integer at that prompt and the program will calculate and print the 3n+1 results.

If you run threeN with integer parameters on the command line, the program will calculate and display the 3n+1
results for each number.

If the program experiences integer overflow, it will throw an exception in the recursive function. The exception
will be caught in the main function and the program will continue processing the next input number – it will not
crash

You also need to print out the steps of each starting number as well as these five 3n+1 stats as shown in the
examples below: start, steps, max, odds, evens.



The **prog6** folder contains a version of the project that uses the integer data type. 

The **prog7** folder contains a version of the project that creates and implements its own BigInt class using a vector of characters.
