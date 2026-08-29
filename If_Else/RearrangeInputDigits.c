/*
You are given a 4-digit integer N.

Your task is to rearrange its digits in descending order, using only if-else statements.

Note:

You must not use arrays, loops, sorting functions, built-in sort utilities, or library functions.

Instead, manually compare the digits using nested if-else conditions and determine their order from largest to smallest.

Finally, print the rearranged digits without spaces.

Input Format

A single integer: {N}

Constraints

1000 ≤ N ≤ 9999
N is always a 4-digit integer.
Only if-else statements may be used for comparisons.
No loops, no arrays, no sorting algorithms, no built-in functions like sort/max/min.
Output Format

Print the four digits of N, rearranged in descending order, without spaces.

Sample Input 0

2583
Sample Output 0

8532
Sample Input 1

2222
Sample Output 1

2222
Sample Input 2

9012
Sample Output 2

9210
*/

#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int a = N / 1000;
    int b = (N / 100) % 10;
    int c = (N / 10) % 10;
    int d = N % 10;

    int first, second, third, fourth;

    if (a >= b && a >= c && a >= d) {
        first = a;
        if (b >= c && b >= d) {
            second = b;
            if (c >= d) {
                third = c; fourth = d;
            } else {
                third = d; fourth = c;
            }
        } else if (c >= b && c >= d) {
            second = c;
            if (b >= d) {
                third = b; fourth = d;
            } else {
                third = d; fourth = b;
            }
        } else {
            second = d;
            if (b >= c) {
                third = b; fourth = c;
            } else {
                third = c; fourth = b;
            }
        }
    }

    else if (b >= a && b >= c && b >= d) {
        first = b;
        if (a >= c && a >= d) {
            second = a;
            if (c >= d) {
                third = c; fourth = d;
            } else {
                third = d; fourth = c;
            }
        } else if (c >= a && c >= d) {
            second = c;
            if (a >= d) {
                third = a; fourth = d;
            } else {
                third = d; fourth = a;
            }
        } else {
            second = d;
            if (a >= c) {
                third = a; fourth = c;
            } else {
                third = c; fourth = a;
            }
        }
    }

    else if (c >= a && c >= b && c >= d) {
        first = c;
        if (a >= b && a >= d) {
            second = a;
            if (b >= d) {
                third = b; fourth = d;
            } else {
                third = d; fourth = b;
            }
        } else if (b >= a && b >= d) {
            second = b;
            if (a >= d) {
                third = a; fourth = d;
            } else {
                third = d; fourth = a;
            }
        } else {
            second = d;
            if (a >= b) {
                third = a; fourth = b;
            } else {
                third = b; fourth = a;
            }
        }
    }

    else {
        first = d;
        if (a >= b && a >= c) {
            second = a;
            if (b >= c) {
                third = b; fourth = c;
            } else {
                third = c; fourth = b;
            }
        } else if (b >= a && b >= c) {
            second = b;
            if (a >= c) {
                third = a; fourth = c;
            } else {
                third = c; fourth = a;
            }
        } else {
            second = c;
            if (a >= b) {
                third = a; fourth = b;
            } else {
                third = b; fourth = a;
            }
        }
    }

    printf("%d%d%d%d", first, second, third, fourth);
}
