#include <stdio.h>

int main() {

    char sentence[100];
    printf("Enter Sentence: ");
    scanf("%[^\n]", sentence);

    for(int i=0; sentence[i] != '\0'; i++){

        if(sentence[i] >= 'a' && sentence[i] <= 'z'){
            sentence[i]-=32;
        }
        else if (sentence[i] >= 'A' && sentence[i] <= 'Z')
        {
            sentence[i]+=32;
        }
        
    }

    printf("Converted Sentence: %s", sentence);


    
    return 0;
}