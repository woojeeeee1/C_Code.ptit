#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long n,S,test;
    scanf("%lld",&test);
    while(test--){
    scanf("%lld",&n);
    S=0;
    while(n>0){
        S=S+n%10;
        n=n/10;
    }
    printf("%lld\n",S);
   }
}
