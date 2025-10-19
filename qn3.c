#include <stdio.h>
int main(){

    int i, numbers[10], pass=0, fail=0, total_pass=0, total_fail=0;

    printf("Enter quiz numbers of students from 0-10: \n");
    for(i=0; i<10; i++){
        printf("Student %d marks: ", i+1);
        scanf("%d", &numbers[i]);
        if(numbers[i] < 0)break;
        else if(numbers[i] > 10)printf("Enter numbers between 0-10");
       
    }
    
    printf("PASS\n");
    for(i=0; i<10; i++){
    if(numbers[i] >= 5 && numbers[i] <= 10){
        total_pass+=numbers[i];
        pass++;
        printf("%d\n", numbers[i]);
    }
}
    printf("Average: %.2f\n", (float)total_pass/pass);

    printf("FAIL\n");
    for(i=0; i<10; i++){
    if(numbers[i] >= 0 && numbers[i] < 5){
        total_fail+=numbers[i];
        fail++;
        printf("%d\n", numbers[i]);
    }
}
    printf("Average: %.2f", (float)total_fail/fail);

   
    
       
    


    return 0;
}