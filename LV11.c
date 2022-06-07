// ZAD-1

// #include <stdio.h>

//  int negativni(int *p, int n) {
//   int neg;
//   neg = 0;
//   for (int i = 0; i < n; i++) {
//     if (p[i] < 0) {
//       neg++;
//     }
//     return neg;
//   }

// }

// int main(void) {
//   int polje[5] = {4, -2, -3, 5, 7};
//   int neg;
  
//   return 0;
// }

// ZAD-2

// #include <stdio.h>

// int samoglasnici(char *tekst) {
//   int sam = 0;
//   while (*tekst != '\0') {
//     if (*tekst == 'A' || *tekst == 'E' || *tekst == 'o') {
//       sam++;

//     }


//     tekst++;
//   }
//   return sam;
// }

// int main(void) {
//   char znakovi[] = "ProBAE";
//   int sam;

//   sam = samoglasnici(znakovi);
//   printf("%d",sam);

//   return 0;
// }

// ZAD-3

// #include <ctype.h>

// int samoglasnici (char *tekst) {
//   while (*tekst != '\0') {
//     *tekst = toupper(*tekst);


//     tekst++;
//   }

// }

// int main(void) {
//   char nekitekst[] = "Ovo je Neki TeKst";

//   samoglasnici(nekitekst);

//   printf("%s",nekitekst);

//   return 0;
// }

// ZAD-4

// #include <stdio.h>
// #include <ctype.h>

// void pretvoriuUelikaSlova(char *tekst) {
//   while (*tekst != '\0') {
//     *tekst = toupper(*tekst);


//     tekst++;
//   }

// }

// int main(void) {
//   char nekitekst[] = "Ovo je Neki TeKst";

//   pretvoriuUelikaSlova(nekitekst);

//   printf("%s",nekitekst);
//   return 0;

// ZAD-5

// #include <stdio.h>

// int* maks (int *a, int *b) {
//   if (*a > *b) {
//     return *a;
//   }
//   return *b;
// }

// int main(void) {

//   int broj1 = 2;
//   int broj2 = 4;
//   int veci;

//   veci = maks(&broj1,&broj2);
//   printf("Veci je %d",veci);
  
//   return 0;
// }

// ZAD-6

// #include <stdio.h>

// char* nadiA (char *znakovi) {
//   while (*znakovi != '\0') {
//     if (*znakovi == 'A') {
//       return znakovi;
//     }
//     znakovi++;
//   }
//   return NULL;
// }

// int main(void) {
//   char znakovi[] = "Ovo je Atest";
//   char *nadenA;

//   nadenA = nadiA(znakovi);

//   if (nadenA != NULL) {
//     printf("%s",nadenA);
//   }
//   return 0;
// }

// ZAD-7

// #include <stdio.h>

// char* nadiA (char *znakovi) {
//   while (*znakovi != '\0') {
//     if (*znakovi == 'A') {
//       return znakovi;
//     }
//     znakovi++;
//   }
//   return NULL;
// }

// int main(void) {
//   char znakovi[] = "DobAr dan";
//   char *nadenA;

//   nadenA = nadiA(znakovi);

//   if (nadenA != NULL) {
//     printf("%s",nadenA);
//   }
//   return 0;
// }
