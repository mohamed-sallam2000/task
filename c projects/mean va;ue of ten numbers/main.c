#include <stdio.h>
#include <stdlib.h>

int main()
{float a[10];
float result;
    printf("enter values!\n");
    for(int i=0;i<10;i++){
        scanf("%f",&a[i]);}
 for(int i=0;i<10;i++){
        result+=a[i];}
    printf("the mean value of this degrees is %0.2f\n",(result/10.0));
    return 0;
}
