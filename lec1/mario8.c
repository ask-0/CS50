#include<cs50.h>
#include<stdio.h>

int main(void)
{
    int n;
    //prompt user until you get answer for width
    do
    {
        n = get_int("Width: ");

    }
    while(n<1);

    for(int i =0; i<n; i++)  //printing rows
    {
       for(int j=0; j<n; j++) //printing columns
        {
            printf("#");
        }

        printf("\n");
    }

    //just print newline
   // printf("\n");
}