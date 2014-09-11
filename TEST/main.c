#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    while (scanf("%d", &n) > 0)
    {
        if (n == 42)
        {
            break;
        }
        printf("%d\n", n);
     }
    return 0;
}
