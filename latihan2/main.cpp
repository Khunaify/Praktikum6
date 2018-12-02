#include <iostream>

using namespace std;

int kali(int a,int b)
{
    a=a*b;
    return a;
}
int main (){
    int hasil,a,b;
    a=2,b=5;
    hasil=kali(a,b);
    cout << "Nilai Variabel a= "<<a<<endl;
    cout << "Setelah Perkalian nilai a= "<<hasil<<endl;
    return 0;
}

