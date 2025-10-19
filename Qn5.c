#include <stdio.h>
int main(){

    int i, number[10];

    printf("Enter 10 numbers: ");   
    for(i=0; i<10; i++){
        scanf("%d", &number[i]);
    }

    int max = number[0];
    int min = number[0];

    for(i=1; i<10; i++){
        if(number[i] < min)min = number[i];
        if(number[i] > max)max = number[i];
    }

    printf("Max= %d\nMin= %d\nMax-Min = %d", max, min, max-min);
    

    return 0;
}