                //ZAD-1

/*
#include <stdio.h>

int main(void) {
  int i;
  for (i=0;i<=100;i++) {
    if (i%2==0){
      printf ("%d ",i);       
    }

    }
  return 0;
}
*/

                 //ZAD-2

/*
#include <stdio.h>
int main(void){
int a,b,c;
  scanf(" %d %d",&a,&b);
  printf("Neparni brojevi od %d do %d su: ",a,b);
  for(c=a;c<=b;c+=2) {
    if (c%2==0){
      ++c;
    }else
    printf("%d ",c);
  }
  for(c=b;c<=a;c+=2) {
    if (c%2==0){
      ++c;
    }else
    printf("%d ",c);
  }
return 0;
}
*/

                  //ZAD-3

/*
#include <stdio.h>
int main(void) {
  int a;
    printf("Unesite broj: ");
    scanf("%d",&a);
  for (;a>0;a--) {
    if (a>0){
    printf("%d,",a);
  }
  }
    printf("0");
return 0;
}
*/

                  //ZAD-4

/*
#include <stdio.h>
int main(void) {
  int a,c,sum=0;
  float prosjek;
    printf("Unesi broj: ");
      scanf("%d",&a);
    for (c=1;a>=c;c++) {
      if (a>c) {
        sum = sum + c;
  }else{
        printf("Suma svih brojeva je: %d",sum);
        prosjek = sum/a;
        printf("\n\nProsjek iznosi: %.2f",prosjek);
    }
      }
return 0;
}
*/

                 //ZAD-5


/*
#include <stdio.h>
int main(void) {
   int a,c,sum=0;
        printf("Unesi broj: ");
          scanf("%d",&a);
     while (a%2==1) {
        printf("\nUnesi paran broj: ");
          scanf("%d",&a);
       } 
  if (a%2==0) {      
    for (c=1;a>=c;c++) {
         sum = sum + c;
      if (a==c) {
        printf("\nSuma parnih brojeva iznosi: %d",sum);
      }
      }
       }
return 0;
}
*/

                //ZAD-6

/*
#include <stdio.h>
int main(void) {
  int a,b,min,max;
  while (a!=0){
  scanf("%d",&a);
  if(min>a && a != 0) {
		 min=a;  
  }else if (max<a){
		 max=a;   
  }
  }
    printf("Min je %d\nMax je %d",min,max);
    
return 0;
}
*/

            //ZAD-7

/*
#include <stdio.h>
int main(void) {
    
return 0;
}
*/
