/*Ciklu konstrukcija ļauj vairākas reizes pēc kārtas izpildīt vienas un tās pašas koda rindas.
(alternatīva - programmētājs manuāli atkārto rindu rakstīsanu*/

// while - kamēr
// do .. while - darīt kāmēr
// for - darīt līdz

// rīks kodēšanai https://www.onlinegdb.com/online_c_compiler
//		  tajā skaitā pieleitot "Beautify"


// while(izteiksme) viena_darbiiba;
 //tāpat kā bija ar if(izteiksme) viena_darbiiba;


// while(izteiksme)
// viena_darbiiba;

// while(izteiksme) {pirma_darbiiba; otra_darbiiba;}

// while(izteiksme)
// {
// pirma_darbiiba;
// otra_darbiiba;
// }

// tāpat kā iepriekš viena_darbiiba vai pirmaa_darbiiba tis utt.
// tiks (regulāri)  izpildītas, ja izteiksmes rezultāts ir "true"
// "true" - 1 rezutltāta kaut vienā bitā
// "false" - 0 visos rezultāta bitos

#include<stdio.h>

int main()
 {
 char c = 10;

 while (c>=0)
 // while(c) // c == 0
  {
  printf("c = %d\n", c);

  c--; // c--; c = c - 1; c-= 1; c+= -1; --c;

 if(c == 5)
  break;
  }

 printf("Izdruka ar printf aiz cikla.\n");
 printf("c = %d\n", c);

 return 0;
 }
