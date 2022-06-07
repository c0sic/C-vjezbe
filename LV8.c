                  // ZAD-1

/*
#include <stdio.h>

int main(void) {
  char str[20];
  printf("Unesite svoje ime: ");
  scanf("%s",str);
  printf("Vase ime je: %s",str);
  return 0;
}
*/

                // ZAD-2

/*
#include <stdio.h>  
#include <string.h>  
   
int main()  
{  
    char str[20];  
    int count = 0;  
    scanf("%s",str); 
  for(int i = 0; i < strlen(str); i++) {  
      
      if(str[i] != ' ')  
            count++;  
    }   
    printf("Broj znakova iznosi: %d", count);  
    printf("\nBroj znakova iznosi: %zu", strlen(str));
    return 0;  
}  
*/

                // ZAD-3

// #include <stdio.h>
// #include <string.h>

// char rijec[20];

// int main() {

//   printf("Unesie Vase ime: ");
//   scanf("%s",rijec);

//   for (int i = 0 ; i<strlen(rijec) ; i++) {

//       if (rijec[i] != ' ') {
//         printf("%c ",rijec[i]);
        
//       }
  
// }
// return 0;
//   }


                // ZAD-4

// #include <stdio.h>  
// #include <string.h>  
// int main()  
// {  
// char str[50], temp;  
// int i = 0, j =0;  
// scanf( "%s", str);  
// j = strlen(str) - 1;  
// while (i < j)   
// {  

// temp = str[j];  
// str[j] = str[i];  
// str[i] = temp;  
// i++;  
// j--;  
// }  
// printf ("%s", str);  
// return 0;  
// }  

                // ZAD-5

/*
#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[]) {
   char string1[100];
   char string2[100];
  printf("Unesi prvo ime: %s",string1);
  scanf("%s",string1);
  printf("Unesi drugo ime: %s",string2);
  scanf("%s",string2);
  if (strcmp(string1, string2) == 0)
      printf("Imena su ista\n");
   else
      printf("Nisu ista imena\n" );
      return 0;
}
  */

                // ZAD-6


// #include <stdio.h>
// int main(void) {
//   char tekst[100];
//   int i = 0;
//   int zbroj = 0;
//   int j = 0;
//   int ch;


//   printf("Unesite tekst: ");
//   gets(tekst);
//   for (i = 0; tekst[i] != 0; i++) {
//     if (tekst[i] == ' ')
//       zbroj++;
// }
// printf("Broj rijeci: %d\n",zbroj + 1);

// printf("Uneseni tekst s velikim slovima:\n");

// while(tekst[j])
// {
// ch = tekst[j];
// putchar(toupper(ch));
// j++;
// }


//   return 0;
// }


                // ZAD-7


// #include <stdio.h>
// #include <string.h>

// int main(){
//     char palindrom[20];
//     int i, duz;
//     int j = 0;
    
//     scanf("%s", palindrom);
    
//     duz = strlen(palindrom);
    
//     for(i=0;i < duz ;i++){
//         if(palindrom[i] != palindrom[duz-i-1]){
//             j = 1;
//             break;
//            }
//         }
    
//     if (j) {
//         printf("%s nije palindrom", palindrom);
//     }    
//     else {
//         printf("%s je palindrom", palindrom);
//     }
//     return 0;
// }
