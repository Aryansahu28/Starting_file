#include <iostream>
using namespace std;
struct Rectangle
{
    int length;
    int breadth;
};
int area(struct Rectangle r1){
    r1.length++;
    cout<<r1.length*r1.breadth;
}
int main(){
struct Rectangle r = { 4,5};
area(r);
}