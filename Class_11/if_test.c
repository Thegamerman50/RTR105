//nosacījuma operators if tiek izmantots koda izpildes sazarošanai 
// if(izteiksme) darbiiba_1_gab;

// if(izteiksme)
//    darbība_1_gab;

// nozīme sekojoša - darbiiba_1_gab tiks izpildīta tad, kad
//		     ziteiksmes izpildīšanas rezultāts ir "true"
//		     par "true" nozīmi skat. iepriekšējo nodarbību
// if(izteiksme) {1_darbiiba; 2_darbiiba; ...;}


// if(izteiksme)
//   {
//   1_darbiiba;
//   2_darbiiba;
//    ...;
//   }
// ar {} apzīme darbību bloku



// if(izteiksme) darbiiba_1_gab; else citadarbiiba_1_gab;

// if(izteiksme)
//    darbiiba_1_gab;
// else
//   citadarbiiba_1_gab;


// if(izteiksme) {darbiiba_1_gab; darbiiba_2_gab; ...;} else {citadarbiiba_1_gab; ...;}

// if(izteiksme)
//   {
//   darbiiba_1_gab;
//   darbiiba_2_gab;
//   ...;
//   }
// else
//   {
//   citadarbiiba_1_gab;
//   ...;
//   }

// else VIENMĒR pieder kādam if un atrodas vienas darbiibas vai darbiibu bloka attālumā no if
// un tam nav sava pārbaudāma izteiksme

// ja vajag kaut ko "elif" veidīgu

// if(izteiksme_1)
//  {
//  ; // ; - ir tukš operators, kas neko nedara bet patere laiku
// else
//  {
//  if(izteiksme_2
//    {
//    ;
//    }
//  }

#include<stdio.h>

int main()
 {
 int a, b;
 printf("Ievadi divus skaitļus");
 scanf("%d",&a);
 scanf("%d",&b);

 if(a>b)
 {
 printf("Ievadītais a(%d) ir lielāks par ievadīto b(%d)\n",a,b);
 }
 else
 {
 printf("Ievadītais a(%d) nav lielāks par b(%d)\n",a,b);
 if(a==b)
  printf("a(%d) ir vienāds ar b(%d)\n",a,b);
 else
  printf("a(%d) ir mazāks par b(%d)\d",a,b);
 }


 return 0;
 }
