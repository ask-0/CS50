#include<stdio.h>
#include<cs50.h>

//Command Prompt
//cd ~/lec1/      //change directory
//mkdir ~/lec2/   //create directory

//rm hello  //to remove file
//clang -o string string.c -lcs50  //include cs50 custome functions
//make string.c
//./string


int main(void)
    {
        string answer = get_string("What's your name? \n");
        printf("hello, %s\n", answer);
    }