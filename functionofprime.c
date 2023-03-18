#include <stdio.h>
int checkingprime(int n){
    for(int i = 2; i<=n;i++){
        if((n%i==0)&&(n!=i)){
            printf("1");
            break;
        }
        else if((n%i==0)&&(n=i)){
            printf("0");
            break;
        }
    }

}
int main(){
    int n;
    n = 4;
    checkingprime(n);
}