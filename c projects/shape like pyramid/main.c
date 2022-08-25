#include <stdio.h>
#include <stdlib.h>

int main()
{void first_part(void);
void midel_part(void);
void last_part(void);
    printf("90 degree rotated pyramid!\n");
 first_part();
 midel_part();
 last_part();
    return 0;
}
void first_part(void){







for(int i=1;i<6;i++){for(int c=1;c<i;c++){

    printf("#");
}  printf("\n");}




}
void last_part(void){for(int i=4;i>0;i--){for(int c=i;c>0;c--){

    printf("#");
}  printf("\n");}



}
void midel_part(void){for(int i=5;i>0;i--){

    printf("#####");printf("\n");
}  }



