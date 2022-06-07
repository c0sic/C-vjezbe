                // ZAD-1

/*
#include <stdio.h>
int main(void) {
  int a;
  int uvjet;
  #define uvjet (a-234)
  printf("Molim unesite cijeli broj: ");
    scanf(" %d",&a);
  if (a>234) {
      printf("Uvjet je %d\n",uvjet);
      printf("Veci je od 234!");
    }
    else{
      printf("Uvjet je %d\n",uvjet);
      printf("Manji je od 234 !");
  }
  
  return 0;
}
*/

              // ZAD-2

/*
#include <stdio.h>
int main(void) {
    int a,b;
      printf("Molimo unesite dva cijela broja: ");
            scanf(" %d %d", &a,&b);
    if (a > b){
      printf("Prvi broj je veci od drugog broja.");
      }
        if (a == b) {
          printf("Prvi broj je jednak drugom broju.");
          }
          if (a < b) {
            printf("Prvi broj je manji od drugog broja.");
          }
return 0;
}
*/

                  // ZAD-4

/*
#include <stdio.h>
int main(void) {
  int a,b;
  printf("Unesite 2 broja: ");
  scanf(" %d %d", &a,&b);
    if (a - 100 > b){
      if (b / 2 || b < 0){
        printf("Istina je !");
      }
      else{
      }
    }
return 0;
}
*/

                // ZAD-5


/*
#include <stdio.h>
int main(void) {
  float a,b;
  scanf(" %f %f",&a,&b);
  if ((a||b >= 5) && (a||b <= 20)) {
    if (a < b) {
      printf("Istina je !");
      }
    else {
      printf("Nije istina !"); 
  }
    }
return 0;
}
*/

              // ZAD-6

/*
#include <stdio.h>
int main(void) {
  int a,b,c;
  scanf(" %d %d %d",&a,&b,&c);
  if (((a > b) && (b > c)) || ((a < b) && (b < c))) {
    printf("Brojevi su poredani i razliciti !");
    if (a == b || b == c){
      printf("Brojevi nisu poredani ili nisu razliciti !");
    }
    }
    else {
      printf("Brojevi nisu poredani ili nisu razliciti !");
    }
    
  
return 0;
}
*/

                    // ZAD-7

/*
#include <stdio.h>

int main(void) {
    float br1, br2, br3, br4, br5;

    int uvjet = 0;

    printf("Molimo unesite 5 brojeva: ");
    scanf("%f %f %f %f %f", &br1, &br2, &br3, &br4, &br5);

    if (br1 > 0) {
        uvjet++;
    }

    if (br2 > 0) {
        uvjet++;
    }

    if (br3 > 0) {
        uvjet++;
    }

    if (br4 > 0) {
        uvjet++;
    }

    if (br5 > 0) {
        uvjet++;
    }

    if (uvjet >= 3) {
        printf("Barem su 3 veca od nule <3");
    } else {
        printf("Niti tri nisu veca od nule </3");
    }

    return 0;
}

*/

                // ZAD-8


/*
#include <stdio.h>
int main(void) {
  int broj;
  float temp,fahr,cel;

  printf("Pretvorba temperature\n\nIzbornik:\n1. Fahrenheit u Celzius\n2. Celzius u Fahrenheit\n\nUpisite vas dabir: ");
  scanf("%d",&broj);

  switch (broj) {
    case 1:
      printf("Unesite vrijednost u F: ");
        scanf("%f",&temp);
            fahr = (temp - 32) * 5 / 9;
      printf("Vrijednost u Celziusima: %.1f C",fahr);  
    break;
    case 2:
      printf("Unesite vrijednost u C: ");
        scanf("%f",&temp);
      cel = (temp * 1.8) + 32;
      printf("Vrijednost u Fahrenheitima: %.0f F",cel);  
    break;
  }
return 0;
}
*/
