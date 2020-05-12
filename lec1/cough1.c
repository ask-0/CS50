#include<cs50.h>
#include<stdio.h>

//void cough(void);  //write the protype of function
void cough(int n);
int main(void)
{
    //for(int i=0;i<3;i++)
    // printf("cough\n");
    //cough();
    
    cough(8);
}

void cough(int n)
{ 
    for(int i=0;i<n;i++)
    printf("cough\n");
}