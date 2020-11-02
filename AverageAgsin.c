#include<stdio.h>
int main()
{
        float sum = 0;
        float average;
        int count = 0,i=0;
        int N;
        scanf("%d",&N);
        int a[N];
        if(N<=100000){
            for ( i = 1; i <=N; i++) {
            scanf("%d",&a[i]);
        }
        for ( i =1; i <=N; i++) {
            count++;
        sum=(sum+a[i]);
        average=sum/count;
        printf("%f\n",average);

        }
        }

        return 0;
}


