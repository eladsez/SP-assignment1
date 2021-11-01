#include <stdio.h>
#include "NumClass.h"
#define TRUE 1

int main(){
  int start, end;
  scanf("%d%d", &start, &end);
  printf("The Armstrong numbers are:");
  for (int i = start; i <= end; i++) {
    if (isArmstrong(i) == TRUE)
      printf(" %d",i);
  }
  printf("\nThe Palindromes are:");
  for (int i = start; i <= end; i++) {
    if (isPalindrome(i) == TRUE)
      printf(" %d",i);
  }
  printf("\nThe Prime numbers are:");
  for (int i = start; i <= end; i++) {
    if (isPrime(i) == TRUE)
      printf(" %d",i);
  }
  printf("\nThe Strong numbers are:");
  for (int i = start; i <= end; i++) {
    if (isStrong(i) == TRUE)
      printf(" %d",i);
  }
  printf("\n");
}
