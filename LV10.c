// #include <stdio.h>
// int main ( void ) {
// int a = 2 , x = 10;
// int *p = a ;
// x += 3 * *p ;
// printf ("%d %d\n", *p , x );
// return 0;
// }


// #include <stdio.h>
// int main ( void ) {
// int a = 10 , b = 20 , * c = &a , * d = & b ;
// c = & b ;
// d = & a ;
// * c = * d + 5;
// * d = * c + 3;
// printf ("%d %d %d %d\n", a , b , *c + 1 , * d + 1);
// return 0;
//   }


// #include <stdio.h>
// int main ( void ) {
// int a = 100 , * b = & a ;
// short x = 10 , y = 20 , * z = &y ;
// * b = * z + 1;
// * z = * b + 5;
// *b = (short)y ;
// printf ("%d %d %hd %hd %hd\n", a , *b , x , y , * z );
// return 0;
// }

// ZAD-1

// #include <stdio.h>
// int main () {

//   int a = 100, *p = &a, **b = &p;
  
//   printf("%p %p %p %d",&a,&b,p,*p);
  
//  return 0; 
// }

// ZAD-2

// #include <stdio.h>

// static int ivica(int a){
//   int *p = &a;
//   printf("Unijeli ste %d\n", *p);
//   return a;
// }

// static int marica(float b){
//   float *p = &b;
//   printf("Uneijeli ste %f", *p);
//   return b; 
// }

// int main () {

//   ivica(10);
//   marica(3.412);

//   return 0;
// }

// ZAD-3

// #include <stdio.h>
// int main () {

//   int a,b,zbroj;
//   int *p = &a, *t = &b, *r = &zbroj;

//   scanf("%d %d",p,t);
//   *r = *p + *t;
//   printf("Zbroj je %d",*r);
  
  
//   return 0;
// }

// ZAD-4

// #include <stdio.h>

// int zamjena(float a, float b){
//    float drzac1,*p=&drzac1,drzac2,*d=&drzac2;

//     drzac1 = a;
//     drzac2 = b;

//     if (*p != b && *d != a){
//       a = *d;
//       b = *p;
//       printf("%.0f %.0f",a,b);
//     }
//   return 0;
// }
// int main () 
// {
//   zamjena(10,10);
// return 0;
// }

// ZAD-5

// #include <stdio.h>

// int maksimalni(int *prvi, int *drugi){

//   scanf("%d %d",prvi,drugi);
//   if (*prvi > *drugi){
//     return *prvi;
//   }else 
//   return *drugi;
// }

// int main (){
//   int a = 10, b= 4;
//   int maks = maksimalni(&a,&b);
//   printf("%d",maks);
  
//   return 0;
// }

// ZAD-6

// #include<stdio.h>
// void zbrojiiMnozi(int a, int b, int *zbroj, int *umnozak){
//   int zbroj1,umnozak2;
//   scanf("%d %d",&a,&b);
//   zbroj=&zbroj1;
//   umnozak=&umnozak2;
//   zbroj1 = a + b;
//   umnozak2 = a * b;
//   printf("%d %d",*zbroj,*umnozak);
// }
// int main (){

//   int a,b;
  
//     zbrojiiMnozi(1,2,&a,&b);
  
//   return 0;
// }



