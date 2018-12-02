#include <iostream>

using namespace std;


void swap (int  &a  , int &b){
a=8,b=5;
int Buf;
Buf =  a;
a = b;
b = Buf;
}
int main(){
int a = 5;
int b= 7;
swap(a,b);
cout << a;
cout << b;
}
