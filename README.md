# praktikum6

 
## latihan2.1 **Buatlah fungsi (void) menggunakan passing parameter by reference 
untuk menukar nilai dari dua buah variable.**
**Alur Algoritma**
1. Mulai program fungsi dengan menggunakan void
2. Tulis fungsi void dengan nama swap
3. buat badan/isi dari void swap
4. Masukan fungsi pemanggil 
5. run project jika tidak ada kendala atau eror
6. end


**Kode Program**
##1 
```
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
```

![sss](https://raw.githubusercontent.com/Khunaify/Praktikum6/master/latihan1/1.png)
![sss](https://raw.githubusercontent.com/Khunaify/Praktikum6/master/latihan1/11.png)
![flow](https://raw.githubusercontent.com/Khunaify/Praktikum6/master/latihan1/flow1.jpg)


##latihan2.2

**Alur Algoritma**
1. mulai program menghitung dua bilangan dengan oprator penjumlah
2. deskripsikan interger a dan b
3. gunakan fungsi pengulangan for.
4. gunakann kembali rumus fungsi untuk menjalankan program
5. build and run
6. end

**Code Program**
```
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
```
![ss2](https://raw.githubusercontent.com/Khunaify/Praktikum6/master/latihan2/2.png)
![flow](https://raw.githubusercontent.com/Khunaify/Praktikum6/master/latihan2/flow2.2.jpg)