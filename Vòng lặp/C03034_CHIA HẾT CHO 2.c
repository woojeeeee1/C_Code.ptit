#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        int i=1;
        int dem = 0;
        while (i<=n/i)
        {
            if(n%i==0)
            {
                if (i%2==0) dem++;
                if (n/i%2==0) dem++;
                if (n/i==i && i%2==0) dem--;
            }
            i++;
        }
        printf ("%d\n", dem);
    }
}
