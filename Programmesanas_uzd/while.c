#include <stdio.h>
#include <math.h>

 char wa = 0, dt1;
 int dt2, iz;
 long long dt3, st, sk, fa=1;
 unsigned long long tests;


 int main()
 {

 printf("Lūdzu iezvēlieties datu tipu:\n char = 1  int = 2  long long = 3\n");
 scanf("%d",&iz);

 printf("Lūdzu ievadi skaitli:    ");
 scanf("%lld",&sk);

     if(iz == 1)
     {
         dt1 = sk;
         tests = dt1;
         while(sk - fa > 1)
         {
             st = sk - fa;
             tests = tests * st;
             dt1 = dt1 * st;

            fa++;

            if(tests == dt1);
            
            else 
            {
            printf("Ir pārsniegts char limits");
                break;
            }
         }

        if (tests == dt1) printf("%lld! = %d", sk, dt1);
     }
    
    

     else if(iz == 2)
     {
         dt2 = sk;
         tests = sk;
         while(sk - fa > 1)
         {
             st = sk - fa;
             tests = tests * st;
             dt2 = dt2 * st;
            fa++;

            if(tests == dt2);
            
            else 
            {
            printf("Ir pārsniegts int limits");
                break;
            }
         }

        if (tests == dt2) printf("%lld! = %d", sk, dt2);
     }

    else 
     {
         dt3 = sk;
         tests = sk;
         while(sk - fa > 1)
         {
             st = sk - fa;
             tests = tests * st;
             dt3 = dt3 * st;
         
            fa++;
          
             if(dt3 < -1)
            
            {
                wa = 1;
            printf("Ir pārsniegts long long limits");
               break;
            }

         }

         if (wa == 0)printf("%lld! = %lld", sk, dt3);
     }

     return 0;
 }
