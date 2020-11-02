#include<stdio.h>
int main()
{
    int N,D,a,b;
    scanf("%d %d",&N,&D);
    a=N/D;
    b=N%D;
    printf("%d %d %d",a,b,D);
}
