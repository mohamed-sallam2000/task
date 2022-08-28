#include <stdio.h>
#include <stdlib.h>

void max(int n,int k){
int m_or=0;
int m_and=0;
int m_xor=0;
for(int a =1;a<=n;a++){


    for(int b=2;b<=n;b++){
        if(a!=b&&(a&b)<k&&m_and<(a&b)){m_and=a&b;}
           if(a!=b&&(a|b)<k&&m_or<(a|b)){m_or=a|b;}
           if(a!=b&&(a^b)<k&&m_xor<(a^b)){m_xor=a^b;}
    }


                        }

printf("%d\n%d\n%d",m_and,m_or,m_xor);
}


int main()
{int n,k;
    scanf("%d %d",&n,&k);
    max(n,k);
    return 0;
}
