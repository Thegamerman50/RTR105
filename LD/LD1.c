#include<stdio.h>
#include<math.h>

void main(){
      double x, y, S;
      long double a = 0.L, R;

      int k = 0;
      int i = 0;
      
      printf("\n");
      printf("Lūdzu ievadiet skatli: "); 
      scanf("%lf",&x);
 
  y = cos(x/2);
  printf("cos(%lf/2) = %lf \n",x,y);
 
  S = a;
  a = 1.L;
  printf("a0 = %.5Lf\n", a);
  printf("S0 = %.5f\n", S);
  S = a;
  a = 1.L;
  k = 0;
  
  while(k<499)
  {
  k++;
  R = -pow(x, 2) / ((2*k) * (2*k-1)*4); 
  S = S + a;
  a = a * R;
  

  }
  printf("a499 = %.10Lf\n", a);
  printf("S499 = %.10f\n", S);

  k++;
  R = -pow(x, 2) / ((2*k) * (2*k-1)*4); 
  a = a * R;
  S = S + a;
  printf("a500 = %.10Lf\n", a);
  printf("S500 = %.10f\n", S);
  
 


  printf("Rekurences reizinātājs: (-x^2)/(16k^2-8k) \n ");

}