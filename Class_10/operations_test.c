// visas atbildes ir šeit - https://www.open-std.org/jtc1/sc22/wg14/www/docs/n2596.pdf
//
// operācijas:		 operands_1   operācija   operands_2	|operācija operands|
//			(datu tips)		(datu tips) 	|operands operācija|
//						    ||
//						    \/
//					    operācijas rezultāts
//						(datu tips)
//
//
// parasti operācijas rezultāta datu tips ir "lielākais" datu tips, kas tiek izmantots
// 4 (int datu tipa konstante) + 6.5 (double -"-) => 11.5 (double -"-)
//
// matemātiskās: +, -, *, /, %, ++, --
//		int i1 = 5, i2 = 6, ir:
//		ir = i1 + i2; // pēc šis operācijas ir bērtība būs 11
//		ir = ir + 12; // -"- ir vērtība būs 21
//		ir += 10; // tas ir tas pats ir = ir +10; tikai kompakti pierakstīts
//		ir++; // ir = ir + 1; vai ir += 1;
//		++ir; // starpība starp i++ un ++i ir sekojoša:
//			// sākumā ir izmantošana un tad ir palielināšana
//			// sākumā ir palielināšana un tad ir izmantošana
//		int i3 = ir++, i4 = ++ir;
//
// attiecību: <, <=, >=, >, ==, !=
//		// attiecību operācijas rezultāts  ir ar int  datu tipu
//
// loģiskās: &&, ||, ! (1 operands)
//
// logiskās pa bitiem: &, |, ^, ~ (1 operands)
//
// bitu: >>, <<
//
// Ko pētīt šodien: kā strādā operācija?
//                  vai operācijā drīkst izmantot jebkuru datu tipu?
//                  operāciju izpildīšanas secība? (to nosaka prioritāte;
//                                                  secības kontrolei izmanto ())
// / (int/int vai char/char), %, &, |, ^, !, &&, ||, <<, >>

#include<stdio.h>

int main()
 {
 char c1 = 'A', c2 = 0x45;
 int i1 = 2000, i2 = 01056;
 float f1 = 2.3, f2 = -770.896;
 double d1 = -5.6e4, d2 = 456.8e-3;

 printf("Matemātisko operāciju izzināšana:\n");
 printf("\n%d (%ld bytes) * %d (%ld bytes)",c1,sizeof(c1),i1,sizeof(i1));
 printf(" = %d (%ld bytes)\n\n",c1*i1,sizeof(c1*i1));

 printf("Izmēģinājums:\n");
 printf("\n%d (%ld bytes) > %d (%ld bytes)",c1,sizeof(c1),i1,sizeof(i1));
 printf(" = %d (%ld bytes)\n\n",c1>i1,sizeof(c1>i1));

// % - nedrīkt lietot reālajiem skaitļiem
// printf("\n%.1f (%ld bytes) %c %.2f (%ld bytes)",f1,sizeof(f1),'%',f2,sizeof(f2));
// printf("\n%.1f (%ld bytes) %% %2.f (%ld bytes)",f1,sizeof(f1),f2,sizeof(f2));
// printf(" = %.1f (%ld byte)\n\n",f1%f2,sizeof(f1%f2));

 // 45 / 40 -> 1, jo 45(int) / 40(int) = 1(int)
 // 56 % 26 -> 6
 // 998 % 2000 -> 998 (998 / 2000 = 0)
 // 100 % 20 -> 0
 // 5.01 % 0.25 -> (C valodā ;-) ) ....kļūda ;-)

 printf("(char)2000 = %d\n",(char)2000);
 c1 = 2000;
 c1 = (char) 2000;
 printf("c1 = %d + compiler warning\n",c1);
 //printf("%d\n",c1); //  kompakts pieraksts

 (float)2000; // pārbauda vai darbība vispār ir iespējama
	      // rezultāts nekur netiek saglabāts un attēlots
 !!2000;      // -"-

 return 0;
 }
