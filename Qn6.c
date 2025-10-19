#include <stdio.h>
int main(){

    char word[20];
    int vowel=0, consonant=0;
    printf("Enter a word: ");
    scanf("%s", word);

    for(int i=0; i<word[i]; i++){

    if(word[i] == 97 || word[i] == 101 || word[i] == 105 || word[i] == 111 || word[i] == 117 || word[i] == 65 || word[i] == 69 || word[i] == 73 || word[i] == 79 || word[i] == 85)vowel++;
    else if((word[i] > 97 && word[i] <= 122) || (word[i] > 65 && word[i] <= 90))consonant++;
    
}
    printf("Vowels: %d\nConsonants: %d", vowel, consonant);


    return 0;
}