/*
#include <stdio.h>
#include <math.h>

int isCategoryB(int n) {
    int primes[] = {2, 3, 5, 7, 11};

    for (int i = 0; i<5; i++) {
        for (int j = i+1; j<5; j++) {
            if (n == primes[i] * primes[j] && n > 20) {
                return 1;
            }
        }
    }
    return 0;
}

int main() {
    int N;
    scanf("%d", &N);

    if (N % 2 == 0 && N % 3 == 0 && N % 5 != 0) {
        printf("A");
    }

    else if (isCategoryB(N)) {
        printf("B");
    }

    else if (N >= 10 && N <= 99 &&
            ((N % 3 == 0) ^ (N % 7 == 0))) {
        printf("C");
    }

    else {
        int root = sqrt(N);
        if (root * root == N && N < 200) {
            printf("D");
        } 
    else {
            printf("E");
        }
    }

    return 0;
}

*/

#include <stdio.h>

int main() {
    int X, Y, Z;
    scanf("%d %d %d", &X, &Y, &Z);
    
    if (X%Y==0 && X%Z!=0)
        printf("Y triumphs over X!");
    else if (X%Z==0 && X%Y!=0)
        printf("Z outsmarts X!");
    else if (X%Y==0 && X%Z==0)
        printf("X defeats all!");
    else if (X%Y!=0 && X%Z!=0)
        printf("X remains undefeated!");
    
}
