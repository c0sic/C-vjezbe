                      // ZAD-1

/*
#include <stdio.h>
int main(void) {
    int a;
    printf("Unesite broj: ");
      scanf(" %d",&a);
    printf("DEC: %4d\nHEX: %04X\nOCT: %04o",a,a,a);
    
  return 0;
}
*/

                          // ZAD-2

/*
#include <stdio.h>
int main(void) {
  int broj,a,a1,b,b1,c,zbroj;

  scanf("%d", &broj);
    if (broj <= 999) {
        a = broj/100;
        a1 = broj%100;
        b = a1/10;
        b1 = a1%10;
        c = b1/1;
      zbroj = a + b + c;
      printf("%d\n%d\n%d\n\n%d\n",a,b,c,zbroj);
    }
  
  
  return 0;
}
*/

                      // ZAD-3

/*
#include <stdio.h>
int main(void) {
  float a,ukupno; 
  #define porez a/100*25
  
  printf("Unesite cijenu artikla: ");
  scanf(" %f", &a);
  printf("-----------------------------\n");
  printf("Cijena: %18.2f kn\n",a);
  printf("Porez \(25\%\) %14.2f kn", porez);
  printf("\n-----------------------------\n");

  ukupno = a + porez;
  
  printf("Ukupno: %18.2f kn",ukupno);
    
  return 0;
}
*/

                      // ZAD-4

/*
#include <stdio.h>
int main(void) {
  float a,ukupno; 
  #define porez a/100*25
  #define prikazporez printf("Porez \(25\%\) %14.2f kn", porez);
  
  printf("Unesite cijenu artikla: ");
  scanf(" %f", &a);
  printf("-----------------------------\n");
  printf("Cijena: %18.2f kn\n",a);
  prikazporez;
  printf("\n-----------------------------\n");

  ukupno = a + porez;
  
  printf("Ukupno: %18.2f kn",ukupno);
    
  return 0;
}
*/

              // ZAD-5/6

/*
#include <stdio.h>
int main(void) {
#define rezultat (a*a)+(b*b);
    int a;
    int b;
    int c;
    scanf(" %d %d", &a,&b);
    c = rezultat
    printf("Rezulat je: %d",c);
  
return 0;
}
*/

                // ZAD-7

/*
#include <stdio.h>
int main(void) {
  int a,b,c,d,e,f;
  printf("Unesite broj sekundi: ");
      scanf(" %d",&a);
  printf("-----------------------------\n");
  f = (a/86400);
  b = (a -(86400*f))/3600;
  c = (a -(86400*f)-(3600*b))/60;
  d = (a -(86400*f)-(3600*b)-(60*c));

  printf("Rezultat: %dd %dh %dm %ds",f,b,c,d);
  
return 0;
}
*/
