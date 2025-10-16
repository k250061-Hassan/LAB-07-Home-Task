#include <stdio.h>
int main(){

    int num[10], random, occurence;
    printf("Enter 10 numbers: ");
    for(int i=0; i<10; i++){
        scanf("%d", &num[i]);
        
    }

    printf("Enter number to check its occurence: ");
    scanf("%d", &random);

    for(int i=0; i<10; i++){

        if(random == num[i]){
            occurence += 1;
        }
    }
            printf("%d occurs %d times",random, occurence);

    return 0;
}