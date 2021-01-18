![image](https://ibb.co/5KJ0sxC)

# TASK 1: Running Time Analysis
You should have completed this part already (Problem Set 4).
# TASK 2: Implementation
In this part, you will implement the algorithm above (SUM2ALGORITHM) as a function. For
simplicity, instead of returning the pairs in SUM2, return only a count of the number of
pairs in SUM2.

Implement two versions of the algorithm (two functions), one for each search method from
Problem Set 4. (Linear Search and Binary Search). The prototype of the SUM2 functions
must be as follows and is given in the starter code provided (do not change them):

int linearSearchSUM2 (int A1[], int A2[], int n1, int n2, int x)

int binarySearchSUM2 (int A1[], int A2[], int n1, int n2, int x)

where A1 and A2 are the input arrays, n1 is the size of A1, n2 is the size of A2, and x is
the target sum value.

Notice that you will need to implement linear search and binary search in order to use
them in the above functions. Implement them as separate functions that you call in the
SUM2 functions. You can implement your own or use (and adapt if needed) from the
following resources:

• Linear Search: https://www.geeksforgeeks.org/linear-search/

• Binary Search: https://www.geeksforgeeks.org/binary-search/

# TASK 3: Testing
Write a main program where you will test the linearSearchSUM2 and binarySearchSUM2
functions using the assert statement with the inputs given in Problem Set 4, exercises 1 to 4. 
For example, for the first exercise, which is given at the top of this document, you will
test that both functions return a value of 3, since there are 3 pairs in SUM2 for the given
input arrays.

If you have never used assertions in C++:

An assert is a statement in C++ which tests for a condition. If the condition is true,
the program continues normally and if the condition is false, the program is
terminated and an error message is displayed.

In order to use assert you have to include the cassert library at the top of your
program:

#include cassert

The assert statement for the first example is provided in the starter code.

Notice that because the search and SUM2 functions are not implemented, the tests will fail
and the program stops with an error when you run it. You can temporarily comment the
assert lines in the main program if you need to run your program and test other things as
you implement your functions.