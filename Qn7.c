#include <stdio.h>
int main(){

    int i, j, numbers[10];

    printf("Enter the data: ");
    for(i=0; i<10; i++){
        scanf("%d",&numbers[i]);
    }

    for(i=0; i<10; i++){
        for(j=i+1; j<10; j++){
            if(numbers[i] == numbers[j]){
                numbers[j] = -1;
            }
        }
    }
    
    printf("Updated data after removing duplicates: \n");

    for(i=0; i<10; i++){
        printf("%d\n", numbers[i]);
    }


    return 0;
}

