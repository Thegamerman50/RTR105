#include <stdio.h>

int main (){
  unsigned long long int  a, b, result;
  printf(" Lūdzu ievadi divus skaitļus! \n" );
  scanf("%llu %llu" , &a , &b);
  
  result = a * b ;
  
  printf("Ievadīto skaitļu reizinājums = %llu \n ", result );

  return 0;
}
