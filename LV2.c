// ZAD-1

/*
#include <stdio.h>
int main(void) {
  int a;
  float b;

  scanf(" %d", &a);
  scanf(" %f", &b);
  if ( a&&b > -1000 && a&&b < 1000 ) {
    printf(" %d, %f",a,b);
  }
  
return 0;
}
*/

// ZAD-2

/*
#include <stdio.h>
int main(void) {
  char a,b;
  printf("Unesite prvi znak: ");
    scanf(" %c", &a);
  printf("Unesite drugi znak: ");
    scanf(" %c", &b);

  printf("ASCII vrijednosti znakova su %d i %d",a,b);
    
  
return 0;
}
*/

// ZAD-3

/*
#include <stdio.h>
int main(void) {
  int a;
  float b;
  
    printf("Unesite cijenu goriva: ");
        scanf(" %d",&a);
    printf("Unesite postotak trosarina: ");
        scanf(" %f",&b);

    printf("\nTrosarina iznosi %.6f kn\n",a/b);
  
return 0;
}
*/

// ZAD-4

/*
#include <stdio.h>
int main(void) {
  float a;
  int b;
  
    printf("Unesite cijenu goriva: ");
        scanf(" %f",&a);
    printf("Unesite postotak trosarina: ");
        scanf(" %d",&b);

    printf("\nTrosarina %d%% od %f iznosi %.6f kn\n",b,a,a/b);
    
  
return 0;
}
*/

// ZAD-5

/*
#include <stdio.h>
int main(void) {
  float a,b,c,d,rez,rez2;
      printf("Unesite T1 x1: ");
  scanf(" %f", &a);
      printf("Unesite T1 y1: ");
  scanf(" %f", &b);
      printf("Unesite T2 x2: ");
  scanf(" %f", &c);
      printf("Unesite T2 y2: ");
  scanf(" %f", &d);

  rez = ((a-b)*(a-b))+((c-d)*(c-d));
  rez2 = sqrt(rez);

    printf("Udaljenost izmedu tocaka iznosi: %f",rez2);

  return 0;
}
*/
