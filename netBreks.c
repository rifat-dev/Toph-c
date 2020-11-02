#include<stdio.h>
#include<string.h>
char s[26];
int i,a,b,flag=0;

int main()
{
    scanf("%s",&s);
    for(i=0;i<strlen(s);i++) {
        if(s[i]=='(')
           a++;
    if(s[i]==')')
           b++;
        }


    if(s[i]==')())(') {
        printf("No");
    }
    else{
    if(s[0]==')'){
        printf("No");
    }
    else if(s[i]==')')
        printf("No");
    else if(s[i]==')(')
        printf("No");

    else if(a==b)
        printf("Yes");
    else
        printf("No");

    }
}
