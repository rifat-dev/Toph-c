
#include<stdio.h>
int main()
{
char a[99],b[99];

scanf("%s %s",&a,&b);
int l1,l2;
l1 = strlen(a);
l2 = strlen(b);


int s1=sum(a);
int s2= sum(b);

int a1 = test(a);
int b1 = test(b);

if(a1 == 1 && b1 == 1)
{
    int l1,l2;
    l1 = strlen(a);
    l2 = strlen(b);

    int s1=sum(a);
    int s2= sum(b);

    if(l1 == l2 && s1 == s2)
    {
        printf("yes");
    }
    else
        {
            printf("No");
        }
}
}
int sum(char a[])
{
int s =0;
for(int i=0; i<strlen(a); i++)
{
s = s+(char)a[i];
}
return s;
}
int test(char a[])
{
int x = 0;
for(int i=0; i<strlen(a); i++)
{
if((char)a[i]>=97 && (char)a[i]<=122)
{
x = 1;
}
else
{
x = 0;
break;
}
}
return x;
}

