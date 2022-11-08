#include <stdio.h>

int main(void)
{
    int t;
    printf("enter number of test vases");
    scanf("%d", &t);
    while (t--)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        if (((a * 10) / 100) > ((b * 20) / 100))
        {
            printf("first \n");
        }
        else if (((a * 10) / 100) > ((b * 20) / 100))
        {
            printf("second \n");
        }
        else
            printf("any \n");
    }
    return 0;
}
