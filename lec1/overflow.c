#include<cs50.h>
#include<stdio.h>
#include<unistd.h>

int main(void) 
{
   for(int i=1; ; i *=2 )
   {
       printf("%i\n",i);    //Y2K overflow
       sleep(1);
   }
    
}