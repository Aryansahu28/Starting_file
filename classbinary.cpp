#include <iostream>
using namespace std;

class binary
{
    private:
        string s;

    public:
      void chk_bin(void);
      void compliment_binary(void);
      void getData(void);
      void display(void);

};

void binary :: getData(void){
    cout<<"Enter the binary number"<<endl;
    cin>>s;
}

void binary :: chk_bin(void){
    for(int i=0;i<s.length();i++){
        if((s.at(i)!='0') && (s.at(i)!='1')){
            cout<<"It is not the binary number"<<endl;
            exit(0);
        }
    }
}

void binary :: compliment_binary(void){
    chk_bin();
    for(int i=0;i<s.length();i++){
        if(s.at(i)=='0'){
            s.at(i) == '1';
        }
        else if(s.at(i) == '1'){
            s.at(i) == '0';
        }
    }
   
}

void binary :: display(void){
    for(int i=0;i<s.length();i++){
        cout<<s.at(i);
    }
}

int main(){
    binary b;
    b.getData();
    b.chk_bin();
    b.compliment_binary();
    b.display();
}