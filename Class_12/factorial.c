// 5! =  5 * 4 * 3 * 2 * 1  = 4! * 5
// 5! / 5 = 4!

// 0! = 1  // nulle ir tukša kopa [] - jautājums 0! -
// cik skaitļu kopas var uztaisīt no tukšas koaps - vienu tukšu kopu


#include<stdio.h>

int main()
 {
 int i, n, fact;
 printf("Ievaīt vienu naturālo skaitli");
 scanf("%d",&n);

 for(i = 1, fact = 1; i<=n ; i++)
  {
  fact = fact * i; //fact *= i;
  printf("%3d! = %12d\n",i,fact);
  }

 return 0;
 }

