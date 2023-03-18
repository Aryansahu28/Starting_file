#include <stdio.h>
int main(){
    int n,r,rev=0;
    printf("Enter the value of the number to reverse it\n");
    scanf("%d",&n);
    printf("The number is going to be reverse is %d\n",n);
    while(n>0){
        r = n%10;
        rev = rev*10 + r;
        n=n/10;
    }
    printf("%d is the reverse of the number",rev);
    return 0;
}