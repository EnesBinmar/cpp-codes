#include <iostream>

using namespace std;

int main(){

  int sayi = 1453;
  cout << "Degisken degeri: " << sayi << endl;
  cout << "Degisken adresi: " << &sayi << endl;

  cout << endl;

  int *ptr = &sayi;
  *ptr=50;
  cout << "Pointer'in gosterdigi adres: " << ptr << endl;
  cout << "Pointer'in gosterdigi adres degeri: " << *ptr << endl;
  cout << "Pointer adresi: " << &ptr;
  cout << "Degisken degeri: " <<sayi << endl;


  return 0;
}