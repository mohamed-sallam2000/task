#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("triangle!\n");

    for(int i=0;i<6;i++){
        int num_spaces=5-i;
for(int c=0;c<=num_spaces;c++){printf(" ");}
for(int c=0;c<=(5-num_spaces);c++){printf("#");}
printf("\n");

    }


    return 0;
}
