#include <stdio.h>
#include <math.h>
#include "NumClass.h"
#define TRUE 1
#define FALSE 0

int isPalindrome(int x){
  int xCopy = x;
  int digit;
  int reverseX = 0;
  while(xCopy > 0){
    digit = xCopy % 10;
    reverseX = reverseX * 10 + digit;
    xCopy /= 10;
  }
  if (x == reverseX)
    return TRUE;
  else return FALSE;
}

// private help method
int numOfDigits(int n) {
    int count = 0;
    while (n > 0) {
        n /= 10;
        count++;
    }
    return count;
}

int isArmstrong(int x){
  int xCopy = x;
  int digitsNum = numOfDigits(x);
  int sumOfPow = 0;
  while (xCopy > 0){
    sumOfPow += pow(xCopy % 10, digitsNum);
    xCopy /= 10;
  }
  if (x == sumOfPow)
    return TRUE;
  else
    return FALSE;
}


// int main(){
//   printf("%d\n",isArmstrong(10));
//   printf("%d\n",isPalindrome(554));
// }
