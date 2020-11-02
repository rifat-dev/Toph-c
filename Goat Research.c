#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int N;
    for(int i=0;i<N;i++){
        char a[25];
        gets(a);
        int l=strlen(a);
        for(int j=0;j<l;j++){
            printf("%c",a[j]);
        }
    }
}
