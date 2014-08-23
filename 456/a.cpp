#include <stdio.h>
 
int main()
{
    int i,a,b,n, flag = 1;
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        scanf("%d%d", &a, &b);
        if(a != b) flag = 0;
    }
    puts(flag ? "Poor Alex" : "Happy Alex");
    return 0;
}