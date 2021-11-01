#include <stdio.h>
#include <math.h>
#include "NumClass.h"
#define TRUE 1
#define FALSE 0

int numOfDigits(int n) {
    int count = 1;
    while (n > 9) {
        n /= 10;
        count++;
    }
    return count;
}

int rev(int x, int reverseX){
  if (x == 0)
    return reverseX;
  reverseX = reverseX * 10 + (x % 10);
  return rev(x / 10, reverseX);
}

int isPalindrome(int x){
  if (x == rev(x, 0))
    return TRUE;
  else return FALSE;
}

//help method for IsArmstrong the recursion happen here
int isArmstrongR(int x, int numOfDigits, int xSub){
  if(xSub == 0 && x == 0)
    return TRUE;
  if(xSub < 0 || x == 0)
      return FALSE;
  return isArmstrongR(x/10, numOfDigits, xSub - pow(x%10,numOfDigits));

}

int isArmstrong(int x){
  return isArmstrongR(x,numOfDigits(x),x);
}

// int main(){
//     printf("%d\n",isArmstrong(5));
//     printf("%d\n",isPalindrome(55455));
// }
