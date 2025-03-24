#include  <stdio.h>

int main(){
    /*
    Incremento (++)
    Pré-Incremento ++a
    Pós-Incremento a++
    Decremento (--)
    Pré-Decremento --a
    Pós-Decremento a--
    */

    int numero1 = 1, resultado;

    printf("Antes incremento: %d\n", numero1);

    //numero1 = numero1 + 1;
    //numero1 += 1;   
    //pos icremento;
    //resultado = numero1;
    //numero1++;


    resultado = numero1++;    
    //printf("Apos incremento: %d\n", numero1);
    printf("Apos Pos-incremento - numero 1: %d - resultado: %d\n", numero1, resultado);    

    resultado = ++numero1;    
    printf("Apos Pre-incremento - numero 1: %d - resultado: %d\n", numero1, resultado);



  // numero1 = numero1 -1 ;
  // numero1 -= 1 ;
  // numero1--;
  //printf("Apos decremento; %d\n", numero1);

  resultado = numero1--;
  printf("Apos Pos-decremento - numero 1: %d - resultado: %d\n", numero1, resultado);

  resultado = --numero1;
  printf("Apos Pre-decremento - numero 1: %d - resultado: %d\n", numero1, resultado);

    

    
}
