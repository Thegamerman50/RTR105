// NB! for( ; ; ) - cikla for () iekavas VIENMĒR ir divi - ;
// darbības pir for( ...., ...., ...., ; ; ) pirmā;
//				tiek izpildītas tikai vienu reizi
//				sīs darbības var būt vairākas - nodalītas ar - ,

// for(1.;2.5.8.11.;4.7.10.) / darbību izpildes secība
// 3.6.9 // tikmēr, kamēr izteiksmes daļa (starp ;;) nebūs false


// for( ; izteiksme ; ) viena_darbiiba;
// for( ; izteiksme ; )\
//  viena_darbiiba;

// for( ; izteiksme ; ) {pirmaa_darbiiba; otraa_darbiiba}
// for( ; izteiksme ; )
//  {
//  pirmaa_darbiiba;
//  otraa_darbiiba
//  }


// tāpat kā iepriekš viena_darbiiba vai pirmaa_darbiiba tis utt.
// tiks (regulāri)  izpildītas, ja izteiksmes rezultāts ir "true"
// "true" - 1 rezutltāta kaut vienā bitā
// "false" - 0 visos rezultāta bitos

#include<stdio.h>

int main()
 {
 char c;

 for(c=10 ; c>=0 ; c--)
  {
  printf("c = %d\n", c);
  }

 printf("Izdruka ar printf aiz cikla.\n");
 printf("c = %d\n", c);

 return 0;
 }
