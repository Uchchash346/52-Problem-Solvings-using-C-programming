#include<stdio.h>

int main()
{
    int i;
    for (int i = 1000; i>= 1; i--)
    {
        if((i!=1000) && (i % 4 == 0))
        {
            printf("%d\n", i);
        }
        printf("%d\t", i);
    }
return 0;
}

