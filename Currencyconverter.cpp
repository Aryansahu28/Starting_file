#include <iostream>
using namespace std;

int main()
{
    string s;
    float x;
    cout<<"Firstly, Enter the amount to convert"<<endl;
    cin>>x;
    cout<<"Which currency you want to convert"<<endl;
    cout<<"Rupee to Dollar so use 'rd'"<<endl;
    cout<<"Rupee to Yen so use 'ry'"<<endl;
    cout<<"Rupee to Yuan so use 'ryu'"<<endl;
    cout<<"Enter the shortform here "<<endl;
    cin>>s;
    if(s == "rd"){
        cout<<"The amount ₹"<<x<<" in the Dollar is $"<<x*0.012<<endl;

    }
    else if(s == "ry"){
        cout<<"The amount ₹"<<x<<" in the Yen is ¥"<<x*1.62<<endl;

    }
    else if(s == "ryu"){
        cout<<"The amount ₹"<<x<<" in the Yuan is ¥"<<x*0.084<<endl;

    }
  
}