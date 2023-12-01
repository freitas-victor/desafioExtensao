#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
  float area,perimetro,pi,r;
  printf("Diga qual o raio do circulo que deseja calcular area e perimetro: \n");
  scanf("%f",&r);
  pi = 3.14;
  area = pi*(r*r);
  perimetro = 2*pi*r;
  printf("A área deste circulo é %.2f e o perimetro é %.2f",area,perimetro);
return 0;
}
