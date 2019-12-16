#include <stdio.h>

int get_positive_int(void);
int build_screen(int x);

int main()
{
    printf("Enter a positive integer > 0 for width\n");
    int width = get_positive_int();
    printf("You entered %d\n", width);
    build_screen(width);
}
int get_positive_int(void)
{
    int i, j;
    do
    {
       scanf("%d", &i);
    } 
    while (i < 1);
}
int build_screen(int x)
{
    int k = 1;
    for (int i = x; i > 0; i--)
    {
        int j = x;
        while (j > 1)
            {
                printf(" ");
                j--;
            }
        int m = k;
        while(m > 0)
            {
                printf("#");
                m--;
            }
        x--;
        k++;
        printf("\n");
    }
}
