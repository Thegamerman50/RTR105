// "Ievads algoritmu valodā  C", Juris Ziemelis
#include<stdio.h>

int main()
 {
 // printf("a mainīgā vērtība (kā simbols)  uzreiz pēc deklarēšanas: %c\n",a);
 // nedrīks izmantot  pirms deklarēšanas!
 char a;  // mainīgā ar identifikatoru "a" deklarēšana
	  // ar identifikatoru a viennozīmīgi tiek sasaitīts kāds
	  // atmiņas apgabals - kur(vai vieta)? un cik(vai izmērs)?
	  // uz jautājumu detalizēti kur? (adrese) atbildēsim citā nodarbībā
	  // cik? - 1 byte, jo ... char (atbilstoši datu tipam)
	  // komentārs par vārdu (vai identifikatoru) drīkst saturēt _
	  // burtus (ir starpība star lieliem un maziem burtiem - a nav A - casesensetive),
	  // ciparus, bet nedrīkst sākties ar ciparu,
	  // var būt mnemonisks, piemēram - cilindra_tilpums
 printf("a mainīgā vērtība (kā simbols)  uzreiz pēc deklarēšanas: %c\n",a);
 printf("a mainīgā vērtība (kā dec skaitlis)  uzreiz pēc deklarēšanas: %d%c",a,10);
 printf("a mainīgā vērtība (kā hex skaitlis)  uzreiz pēc deklarēšanas: %#x\n",a);
 printf("a mainīgā vērtība (kā oct skailtis)  uzreiz pēc deklarēšanas: %#o\n",a);
 //; ; ; ; ; ;// daudzi tukšie operatori

 //int a
 //nedrīkts (šādi) pārdeklarēts mainīgo!

 // NB! mainīgā būtība - mainīties

 a = 0x4c;
	 // a = 89
	 // "=" - piešķiršanas operācija
	 // pa kreisi ir - atbilstošī noformējumam (pierakstam) tā ir
	 // int tipa (4 bytes)  konstante, izmantojot dec skaitīšanas sistēmu
	 // => 89 = 64(2^6) +16(2^4) + 8(2^3) + 1(2^0)
	 // 0000 0000  0000 0000  0000 0000  0101 1001
	 // a = 89; -> mainīgā a 8 1 baitā tiek ierakstīts 0101 1001
 printf("a mainīgā vērtība (kā simbols)  pēc piešķiršans: %c\n",a);
 printf("a mainīgā vērtība (kā dec skaitlis) pēc piešķiršanas: %d\n",a);
 printf("a mainīgā vērtība (kā hex skaitlis) pēc piešķiršanas: %#x\n",a);
 printf("a mainīgā vērtība (kā oct skailtis) pēc piešķiršanas: %#o\n",a);

 a = 160;
 // char -> signed char => -128 ... 0 ... 127
 // 160(dec) -> 128(2^7) + 32(2^5)-> 0000 0000  0000 0000  0000 0000  1010 0000
 // musu (iekš a ) rīcībā ir (1)010 0000 => ir - zīme => nākamie biti par tiešo
 // uzreiz netiek pārveidoti par dec
 // (1)010 0000
 //	101 1111 - zīmes gadījumā atlikušos bitus ienverte un
 // + 	1 - pieskaita bināro 1
 // 110  0000 - un tikai tagad rēķina dec skaitli - 1*2^6  + 1*2^5
 printf("a mainīgā vērtība (kā simbols)  pēc piešķiršans: %c\n",a);
 printf("a mainīgā vērtība (kā dec skaitlis) pēc piešķiršanas: %d\n",a);
 printf("a mainīgā vērtība (kā hex skaitlis) pēc piešķiršanas: %#x\n",a);
 printf("a mainīgā vērtība (kā oct skailtis) pēc piešķiršanas: %#o\n",a);

 a = 320;
 printf("a mainīgā vērtība (kā simbols)  pēc piešķiršans: %c\n",a);
 printf("a mainīgā vērtība (kā dec skaitlis) pēc piešķiršanas: %d\n",a);
 printf("a mainīgā vērtība (kā hex skaitlis) pēc piešķiršanas: %#x\n",a);
 printf("a mainīgā vērtība (kā oct skailtis) pēc piešķiršanas: %#o\n",a);

 char b = 93 // definēšana  - deklarēšana uzreiz ar piešķirš
	     // prioritārā (izpildās pirmā) darbība šeit ir deklarēšana
	     // 
 return 0;
 }
