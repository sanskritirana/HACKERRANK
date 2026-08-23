/*
You will be given four digits, each from 0–9.
Your task is to combine them into a single 4-digit number in the same order and multiply it by 5 to get the final number.

Important Instructions

Do NOT write the entire logic in main().
Create a function int buildNumber(int a, int b, int c, int d) and call it from main().
Input Format

Four digits: {A} {B} {C} {D}

Constraints

0 ≤ each digit ≤ 9
Output Format

Single line printing the result as: The number is: {(ABCD)*5}

Sample Input 0

1 2 3 4
Sample Output 0

The number is: 6170
Sample Input 1

9 0 7 1
Sample Output 1

The number is: 45355
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int buildNumber(int a, int b, int c, int d){
    int joinedNum = 1000*a + 100*b + 10*c + d ;
    int fifthMul = joinedNum*5 ;
    
    return fifthMul;
}

int main() {
    int num1, num2, num3, num4, res;
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
    
    if (num1>=0 && num1<=9 &&
        num2>=0 && num2<=9 &&
        num3>=0 && num3<=9 &&
        num4>=0 && num4<=9)
    {
        res = buildNumber(num1,num2,num3,num4);
        printf("The number is: %d", res);
    }
}
