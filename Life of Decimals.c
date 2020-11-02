#include <stdio.h>
#include <math.h>

int main() {
    char str[20] ={'1', '4', '1', '5', '9', '2', '6', '5', '3', '5', '9', '0'};
	int a, i, b;
	scanf("%d", &a);
	for(i=0; i<a; i++)
    {
        scanf("%d", &b);
        printf("%c\n", str[b-1]);
    }
	return 0;
}
