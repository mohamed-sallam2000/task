#include <stdio.h>
#include <stdlib.h>

int main()
{int f;
int result=1;

 printf("enter integer to get its factorial\n");

scanf("%d",&f);
   for(int i=1;i<f;i++){

    result*=i;

   }

    printf("the factorial of %d  is %d\n",f,result);
    return 0;
}
