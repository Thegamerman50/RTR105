/*Ciklu konstrukcija ļauj vairākas reizes pēc kārtas izpildīt vienas un tās pašas koda rindas.
(alternatīva - programmētājs manuāli atkārto rindu rakstīsanu*/

// while - kamēr
// do .. while - darīt kāmēr
// for - darīt līdz

// rīks kodēšanai https://www.onlinegdb.com/online_c_compiler
//		  tajā skaitā pieleitot "Beautify"


// do viena_darbiiba;  while(izteiksme); //NB! do ....while gadījuma
//						   pēc while iekavām () ir ; 

// do
// vien_darbiiba;
// while(izteiksme);

//do {pirma_darbiiba; otra_darbiiba;} while(izteiksme);

//do {pirma_darbiiba; otra_darbiiba;} while(izteiksme);





// tāpat kā iepriekš viena_darbiiba vai pirmaa_darbiiba tis utt.
// tiks (regulāri)  izpildītas, ja izteiksmes rezultāts ir "true"
// "true" - 1 rezutltāta kaut vienā bitā
// "false" - 0 visos rezultāta bitos

#include<stdio.h>

int main()
 {
 char c = 10;

 do
 {
 printf("c = %d\n", c);
 c--;
 }
 while(c>=0);

 printf("Izdruka ar printf aiz cikla.\n");
 printf("c = %d\n", c);

 return 0;
 }
