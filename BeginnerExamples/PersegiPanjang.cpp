#include <stdio.h>
using namespace std;

main(){
  float panjang, lebar, Luas, Keliling;
  printf("Program Persegi Panjang\nInput Panjang : ");
  scanf("%f", &panjang);
  printf("Input Lebar : ");
  scanf("%f", &lebar);
  Luas = panjang * lebar;
  Keliling = 2*(panjang+lebar);
  printf("Luas : %f \nKeliling : %f", Luas, Keliling);
}
