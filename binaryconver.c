#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int power(int a);

int main() {

    int N;
    int digit;
    int count = 0;
    int array[32];
    scanf("%d",&N);
    while(N!=0)
    {
        digit = N%2;
        array[count]=digit;
        count++;
        N/=2;
    }
    for(int i = count-1; i>=0; i--)
    {
        if(array[i]==0)
        {
            continue;
        }
        printf("%d ",array[i]*power(i));

    }

    return 0;
}
int power(int a)
{

    if(a==0)
        return 1;
    return 2*power(a-1);
}
