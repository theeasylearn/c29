// write a program to findout whether letter is vowel, consonent or digit or symbol
#include <stdio.h>
void main()
{
    char letter;
    printf("Enter letter");
    scanf("%c", &letter);

    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' || letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U') 
    {
        printf("it is vowel");
    }
    printf("\n good bye");
}