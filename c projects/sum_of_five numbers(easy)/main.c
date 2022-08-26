#include <stdio.h>
#include <stdlib.h>

int main()
{char arr[6];
scanf("%s",arr);
int sum=0;
sum+=arr[0]-'0';

sum+=arr[1]-'0';
sum+=arr[2]-'0';
sum+=arr[3]-'0';
sum+=arr[4]-'0';
    printf(" %d\n",sum);
    return 0;
}
