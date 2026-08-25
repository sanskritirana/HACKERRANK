/*
Write a program to determine the largest number among three integer numbers.

Input Format

The input consists of three integers a, b, and c, separated by spaces.
Constraints

−10^3 ≤ a, b, c ≤10^3

Output Format

Print the largest number among the three integers along with the given message.
Sample Input 0

5 10 15
Sample Output 0

The largest number is : 15
Sample Input 1

88 76 76
Sample Output 1

The largest number is : 88
*/

#include <stdio.h>

int largestNum (int a, int b, int c){
    int largest;
    if (a>=b){
        if (a>=c){
            largest = a;
        }
        else if (a<c){
            largest = c;
        }
    }
    else if (b>a){
        if (b>=c){
            largest = b;
        }
        else if (b<c){
            largest = c;
        }
    }
    
    return largest;
}

int main() {
    int num1, num2, num3, largest;
    scanf("%d %d %d", &num1, &num2, &num3);
    
    largest = largestNum (num1,num2,num3);
    
    printf("The largest number is : %d", largest); 
}
