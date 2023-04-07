#include <iostream>
using namespace std;
int main(){
    int a  =10 ;
    int &r = a;
    cout<<a<<endl<<r<<endl;
    r++;
    cout<<"After incrementing"<<endl;
    cout<<a<<endl<<r<<endl;
    
}