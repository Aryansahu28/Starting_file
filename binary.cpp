#include <iostream>
using namespace std;



class binary{
    private:
        string s;
    public:
        void read(void);
        void chk_bin(void);
        void compliment_bin(void);
        void display(void);
};

void binary :: read(void){
    cout<<"Enter the binary number"<<endl;
    cin>>s;
}

void binary :: chk_bin(void){
    for(int i = 0; i<s.length();i++){
        if((s.at(i)!='0')&&(s.at(i)!='1')){
            exit(0);
        }
    }
}

void binary :: compliment_bin(void){
    for(int i = 0; i<s.length();i++){
        if(s.at(i)=='1'){
            s.at(i) = '0';
        }
        else if (s.at(i) == '0'){
            s.at(i) = '1';
        }
    }
}

void binary :: display(void){
    cout<<"Your complimented binary number is "<<s;
}

int main(){
    binary b;
    b.read();
    b.chk_bin();
    b.compliment_bin();
    b.display();
}