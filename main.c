#include<stdio.h>
int main(){
   char a[20] = "Names", b[20]="amount to be paid";
   char a1[20] = "Bhanu", b1[20]="Hari",c1[20]="Lucky",d1[20]="Puppy";
   int a2=200,b2=400,c2=250,d2=460;
   printf("%-15s %-15s\n", a, b);
   printf("%-15s %-15d\n", a1,a2);
   printf("%-15s %-15d\n", b1,b2);
   printf("%-15s %-15d\n", c1, c2);
   printf("%-15s %-15d\n", d1, d2);
   return 0;
}