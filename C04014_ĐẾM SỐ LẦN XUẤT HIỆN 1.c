#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int A[100];
    int i;
    for(i=0;i<n;i++)scanf("%d",&A[i]);
    int B[100] = {0};
    for(i=0;i<n;i++)B[A[i]]++;
    for(i=0;i<n;i++)
    {
        if(B[A[i]] >= 1)
        {
            printf("%d %d\n",A[i],B[A[i]]);
            B[A[i]] = 0;
        }
    }
}
