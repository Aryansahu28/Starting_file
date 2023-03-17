#include <stdio.h>
//Entering the full name

int main(){
    printf("Enter your name \n");
    char a[25];
    scanf("%[^\n]s",a);
    printf("%s",a);
}