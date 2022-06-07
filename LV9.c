// ZAD-1

/*
#include <stdio.h>
void prikaziVarijablu(int a)
{
  printf("%d\n", a);
}
int main(void)
{
  prikaziVarijablu(23);
};
*/

// ZAD-2

/*
#include <stdio.h>
void prikaziVarijablu(int a)
{
  if (a%2==1) {
    printf("");
  }else if (a%2==0) {
    printf("Broj je paran");
  }

}
int main (void)
{
int s;
  scanf("%d",&s);
  prikaziVarijablu(s);

};
*/

// ZAD-3

/*
#include <stdio.h>
int zbroj;
void prikaziVarijablu(int a)
{
  for (int i=0;i<a;i++)
  {
    zbroj=zbroj+i;
    ++zbroj;
  }
  printf("%d",zbroj);
}

int main(void)
{
  int s;
  scanf("%d",&s);
  prikaziVarijablu(s);
}
*/

// ZAD-4


// #include <stdio.h>

//   int najveci(int a, int b, int c) {
//   if (a > b && a > c) {
//     return a;
//   } else if (b > a && b > c) {
//     return b;
//   } else if (c > a && c > b){
//     return c;
//     }
//     }
// int main(void) {
//   int rezultat;
//   rezultat=najveci(500, 70, 300); 
//   printf("%d", rezultat);
//   return 0;
//   }

//ZAD-5

// #include <stdio.h>
// int najveciupolju(int p[], int n)
// {
//     int i;
//     int max = p[0];
//     for (i = 1; i < n; i++)
//         if (p[i] > max)
//             max = p[i];
 
//     return max;
// }
 
// int main()
// {
//     int p[] = {10, 324, 45, 90, 9808};
//     int n = sizeof(p)/sizeof(p[0]);
//     printf("%d", najveciupolju(p, n));
//     return 0;
// }

// ZAD-6

// #include <stdio.h>
// int findInArray(int array[], int n, int value);
// int main() {
//     int array[] = {0, 1, 2, 3, 4};
//     int funResult = findInArray(array, sizeof *array, 100);
//     printf("%d", funResult);
//     return 0;
// }
// int findInArray(int array[], int n, int value) {
//   for(int i = 0; i < n; i++) {
//     if(value == array[i]) {
//       return 1; 
//     }
//   }
//   return 0;
// }
