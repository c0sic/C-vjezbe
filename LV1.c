// ZAD-1
/*
#include <stdio.h>

int main(void) {
  printf("Veleuciliste u Bjelovaru");
  return 0;
}
*/

// ZAD-2

/*
#include <stdio.h>

int main(void) {
  printf("\"Hello world!\" ja sam Mihael");
  return 0;
}
*/

//ZAD-3

/*
#include <stdio.h>
int main(void) {
  printf("Prvi red\nDrugi red\nTreci red");
  return 0;
}
*/

//ZAD-4/5

/*
#include <stdio.h>
  int main(void) {
    
    int a = 1;
    char b = 'a';
    float c = 12.123;
    double d = -42.24512;
    signed int e = -2;
    
    printf(" %d, %c, %f, %lf, %d",a,b,c,d,e);
  return 0;
}
*/

// ZAD-6

/*
#include <stdio.h>
  int main(void) {
    int a, b;
    float c, d;
    a = 12;
    b = 13;
    c = 2.4234;
    d = 4.123123;

    printf("Prva cjelobrojna vrijednost je: %d\nDruga cjelobrojna vrijednost je: %d\nPrva decimalna vrijednost je: %f\nDruga decimalna vrijednost je: %f",a,b,c,d);
    
  return 0;
}
*/

// ZAD-7

/*
#include <stdio.h>
  int main(void) {
    int a, b;
    float c, d;
    
    printf("Unesite prvu cjelobrojnu vrijednost: ");
      scanf(" %d",&a);
    printf("Unesite drugu cjelobrojnu vrijednost: ");
      scanf(" %d",&b);
    printf("Unesite prvu decimalnu vrijednost: ");
      scanf(" %f",&c);
    printf("Unesite drugu decimalnu vrijedost: ");
      scanf(" %f",&d);

          printf("Prva cjelobrojna: %d\nDruga cjelobrojna: %d\nPrva decimalna: %f\nDruga decimalna: %f",a,b,c,d);
        
  return 0;
  }
*/

// ZAD-8

/*
#include <stdio.h>
int main(void) {
    int a,b,zbroj,razlika,umnozak;
    float kvocijent;

  scanf(" %d", &a);
  scanf(" %d", &b);

  zbroj = a + b;
  razlika = a - b;
  umnozak = a * b;
  kvocijent = a / b;

  printf("Zbroj je: %d\nRazlika je: %d\nUmnozak je: %d\nKvocijent je: %f",zbroj,razlika,umnozak,kvocijent);
  
return 0;
}
*/

// ZAD-9

/*
#include <stdio.h>
  int main(void) {
    int sat,minuta,sekunda,rezultat;
      
        printf("Sat: ");
      scanf("%d",&sat);
        printf("Minuta: ");
      scanf("%d",&minuta);
        printf("Sekunda: ");
      scanf("%d",&sekunda);

    sat = sat * 3600;
    minuta = minuta * 60;
    rezultat = sat + minuta + sekunda;

    printf("Ukupan broj sekundi: %d", rezultat);
      
    
  return 0;
  }
*/

// ZAD-10

/*
#include <stdio.h>
int main(void)  {
  #define PI 3.13159;
    float r,P;

    printf("Unesite r: ");
  scanf(" %f",&r);

  P = r*2*PI;

  printf("Povrsina iznosi: %f", P);
    
    
return 0;
}
*/
