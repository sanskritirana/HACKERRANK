/*
#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    
    if(n==0)
    {
        printf("Circle");
    }
    else if(n==3)
    {      int a,b,c,A,B,C;
           scanf("%d %d %d %d %d %d",&a,&b,&c,&A,&B,&C);
     
           if(a<=0 || b<=0 || c<=0 || A<=0 || B<=0 || C<=0 && !(A+B+C==180))
           {
               printf("Invalid Figure");
           }
           
               else if(a+b>c && b+c>a && c+a>b)
              {
                    if(a==b && b==c && c==a && A==60 && B==60 && C==60)
                    { 
                      printf("Equilateral Triangle");
                    }
                    else if(a==b && b!=c && a!=c && A==B && B!=C && A!=C)
                    {
                        printf("Isosceles Triangle");
                    }
                    else if(b==c && c!=a && b!=a && B==C && C!=A && B!=A)
                    {
                        printf("Isosceles Triangle");
                    }else if(c==a && a!=b && c!=b && C==A && A!=B && C!=B)
                    {
                        printf("Isosceles Triangle");
                    }
                    else if( a!=b && b!=c && c!=a && A!=B && B!=C && C!=A)
                    {
                        printf("Scalene Triangle");
                    }
                    else
                   {
                     printf("Invalid Figure");
                   }
               }
            else
           {
           printf("Invalid Figure");
           }
           }
    
    else if(n==4)
    {
        int a,b,c,d,A,B,C,D;
        scanf("%d %d %d %d %d %d %d %d",&a,&b,&c,&d,&A,&B,&C,&D);
        
        if(a<=0 || b<=0 || c<=0 || d<=0 || A<=0 || B<=0 || C<=0 || D<=0 && !(A+B+C+D==360))
        {
           printf("Invalid Figure");
        }
        else if(a==b && b==c && c==d && d==a && A==90 && B==90 && C==90 && D==90)
        {
            printf("Square");
        }
        else if(a==c && b==d && A==90 && B==90 && C==90 && D==90)
        {
            printf("Rectangle");
        }
        else if(a==b && b==c && c==d && d==a && (A!=90 || B!=90 || C!=90) && (A==C && B==D))
        {
            printf("Rhombus");
        }
        else if(a==c && b==d && A==C && B==D)
        {
            printf("Parallelogram");
        }
        else
        {
        printf("Invalid Figure");
        }
    }
    else
    {
        printf("Invalid Figure");
    }
    return 0;
}

*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    
    for (int i=n; ; i+=n)
    {
        if (i%2==0 && i%n==0)
        {
            printf("%d", i);
            break;
        }
    }
}
