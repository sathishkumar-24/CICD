// C program to add two numbers
#include <stdio.h>

int main()
{
  int A, B, sum = 0;
  char *foo1;
  char &foo2;
  string ^s1;
  // Ask user to enter the two numbers
  printf("Enter two numbers A and B : \n");
  // Read two numbers from the user || A = 2, B = 3
  scanf("%d%d", &A, &B);
  // Calculate the addition of A and B
  // using '+' operator
  sum = A + B; // using '+' operator
  sum = A + B;

  for (int i = 0; i <= 10; i++) {
    sum = A + B;
    sum = A + B;
  }

  // Print the sum
  printf("Sum of A and B is: %d", sum);
  return 0;
}
