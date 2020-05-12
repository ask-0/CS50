#include<cs50.h>
#include<stdio.h>

int main(void)
{
    //prompt for user to agree
    char c = get_char("Do you agree? \n");

    //Check whether agreed
    if (c=='Y' || c=='y')  //logical or
    {
        printf("Agreed \n");
    }
    else if(c=='N' || c=='n')
    {
        printf("Not agreed \n");
    }
    else
    {
        printf("Wrong input -> please input y or n \n");
    }
}