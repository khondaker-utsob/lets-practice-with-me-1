#include<stdio.h>

int main()
{
    int n,i,m;
    for(n = 1; n <= 5; n = n+1)
    {
        m=n;
        for(i = 1; i <= 10; i = i+1)
        {
            printf("%d x %d = %d\n", n, i, m);
            m=m+n;
        }
    }
    return 0;
}
