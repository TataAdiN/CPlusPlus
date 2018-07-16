#include <stdio.h>
using namespace std;

float hitungLuas(float panjang, float lebar){
  float Luas=0;
  Luas = panjang * lebar;
  return Luas;
}

float hitungKeliling(float panjang, float lebar){
  float Keliling=0;
  Keliling = 2*(panjang+lebar);
  return Keliling;
}

main(){
  float panjang=0, lebar=0;
  printf("Program Persegi Panjang\nInput Panjang : ");
  scanf("%f", &panjang);
  printf("Input Lebar : ");
  scanf("%f", &lebar);
  printf("Luas : %f \nKeliling : %f", hitungLuas(panjang, lebar), hitungKeliling(panjang, lebar));
}
