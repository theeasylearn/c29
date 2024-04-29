#include<stdio.h>
#include<stdbool.h>

bool chekcVowel(char input) {
    // if (input == 'a') 
    //     return true;
    // else if (input == 'e')
    //     return true;
    // else if (input == 'i') 
    //     return true;
    // else if (input == 'o')
    //     return true;
    // else if (input == 'u') 
    //     return true;
    // else if (input == 'A') 
    //     return true;
    // else 
    //     return false;

    if (input == 'a' || input == 'e' || input == 'i' || input == 'o' || input == 'u' || input == 'A') 
        return true;
    else 
        return false;
}

int main() {

    char ch;
    printf("Enter a character : ");
    scanf("%c", &ch);

    if (chekcVowel(ch))     
        printf("It is an vowel ");
    else 
        printf("It is an consonant ");
    return 0;
}