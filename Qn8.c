#include <stdio.h>
int main(){

    char array[100];

    printf("Enter something to store all characters except alphabets: ");
    //it will stop taking input at first alphabet
    scanf("%[^A-Za-z]", array);
    printf("You Entered non-alphabets: %s", array);


    return 0;
}