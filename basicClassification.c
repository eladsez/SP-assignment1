#include <stdio.h>
#include "NumClass.h"
#define TRUE 1
#define FALSE 0

int isPrime(int x){
  if (x == 2 || x == 3)
    return TRUE;
  if (x % 2 == 0 || x % 3 == 0 || x <= 1)
    return FALSE;

  for (int i = 5; i * i <= x; i += 6){
    if (x % i == 0 || x % (i + 2) == 0)
      return FALSE;
  }
  return TRUE;
}

// help function for isStrong function
int factorial(int x){
  if (x == 1)
    return 1;
  else
      return (x * factorial(x-1));
}

int isStrong(int x){
  int xCopy = x;
  int sum = 0;
  int currDigit;
  while (xCopy > 0){
    currDigit = xCopy % 10;
    sum += factorial(currDigit);
    xCopy /= 10;
  }
  if (sum == x) return TRUE;
  else return FALSE;
}

// int main(){
//    int x;
//
//   printf("enter a number for prime chack:");
//   scanf("%d",&x);
//   int ans = isPrime(x);
//   if(ans == FALSE)
//     printf("false\n");
//   else
//     printf("true\n");
//
//   printf("enter a number to strong check: ");
//   scanf("%d", &x);
//   ans = isStrong(x);
//   if (ans == FALSE)
//     printf("false\n");
//   else
//     printf("true\n");
//
//
//     return 1;
// }
