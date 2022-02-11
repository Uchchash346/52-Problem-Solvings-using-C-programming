#include<stdio.h>

int main()
{
    int x = 0;
    int y = 0;
    int square_size;
    int i,n,T; // i = total_number_of_squares

    /*for(i=0; i<=T; i++)
    {
        scanf("%d", &n);
        for(x = 0; x < square_size; ++x )
        {
            for(y = 0; y < square_size; ++y )
            {
                printf("*");
            }
            printf("\n");
        }
    }*/
    printf("Enter the size if square: ");
    scanf("%d", &square_size);

    for(x = 0; x < square_size; ++x )
    {
        for(y = 0; y < square_size; ++y )
        {
            printf("*");
        }
        printf("\n");
    }
}
