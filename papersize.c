#include <stdio.h>
// Program to print the A0 to A8 sizes dimension
int main(){

    int n1 = 1189;
    int n2 = 841;
    int n=8,n3;
    printf("The A size papers from A0 to A8 are :\n");
    printf("A0 has dimension of 1189 mm x 841 mm\n");
    for(int i =1;i<=n;i++){
        n3 = n1/(2*i);
    printf("A%d has dimension of %d mm x %d mm\n",i,n2,n3);
        n2 = n3;
    }

    
    return 0;
}