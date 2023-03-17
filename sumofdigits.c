#include <stdio.h>
void sumofdigits(int n){
    int r,sum=0,temp;
    temp=n;
    while(n>0){
        r=n%10;
        sum = sum + r;
        n = n/10;
    }
    printf("%d",sum);
}
int main(){
    int n = 58;
    sumofdigits(n);
}
