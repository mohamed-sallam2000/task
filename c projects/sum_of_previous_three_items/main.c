
#include <stdio.h>
#include <stdlib.h>
int find_nth_eliment(int n){

int arr[100];
int *ptr=nullptr;

for(int i=1;i<=n;i++){

    if (i==1){*(ptr+i)=1;}

    else if (i==2){*(ptr+i)=2;}

    else if (i==3){*(ptr+i)=3;}
    else if(i>3){*(ptr+i)=(*(ptr+(i-3)))+(*(ptr+(i-2)))+(*(ptr+(i-1)));}
}
return *(ptr+n);
}



int main()
{
    int n =0;
    while(1){
    scanf("%d",&n);

    printf("\n%d",find_nth_eliment(n));
}
    return 0;
}
