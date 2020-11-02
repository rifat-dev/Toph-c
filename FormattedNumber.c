#include<stdio.h>
int main()
{
    int A,b,c,d;
    scanf("%d",&A);
     if(0 <= A < 200000000) {
             b=A%1000;
             A=A/1000;
             c=A%1000;
             A=A/1000;
             d=A%1000;
            printf("%d,%d,%d",d,c,b);
        }
    return 0;
}
