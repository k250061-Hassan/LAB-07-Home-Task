#include <stdio.h>
int main(){

    int num[5], temp[5];

    printf("enter numbers: \n");
    scanf("%d %d %d %d %d", &num[0], &num[1], &num[2], &num[3], &num[4]);

for(int i=0; i<5; i++){

    if(i == 4)temp[0] = num[4];
    else{
        temp[i+1] = num[i];
    }
}

    for(int i=0; i<5; i++){
        printf("%d ", temp[i]);
    }


   
    return 0;
}