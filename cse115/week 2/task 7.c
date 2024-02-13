#include <stdio.h>

int main(){
    char c;

    printf("Enter char: ");
    scanf("%c", &c);

    if(c>=48 && c<=57)
        printf("Digit!");
    else if(c>=65 && c<=90)
        printf("Uppercase alphabet!");
    else if(c>=97 && c<=122)
        printf("Lowercase alphabet!");
        else
            printf("different");

    return 0;
}
