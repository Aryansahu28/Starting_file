#include <stdio.h>
/* Constant are the variables whose value after initializing never be changed.
Constants are of two types :-
1.Constant Keyword 
2.Preprocessor*/
int main(){
    const  int a = 5;
    printf("%d",a);
    printf("\n"); 
    int A;
    //Preprocessor
    # define A 50
    printf("%d",A);
}