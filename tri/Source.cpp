#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int n, loop1, loop2, i = 1, h;
    scanf("%d", &n);
    h = n - 1;
    for (loop1 = 0; loop1 < n; loop1++)
    {
        for (loop2 = 0; loop2 < h; loop2++)
        {
            printf(" ");
        }
        for (loop2 = 0; loop2 < i; loop2++)
        {
            printf("*");
        }
        i += 2;
        h--;
        printf("\n");
    }
    return 0;
}
