#include <stdio.h>
int main(){
int A, B, bin, difference, borrow;
printf("Enter three binary inputs (A,B, bin): ");
scanf (" %d %d %d", &A, &B, &bin);
difference = (A^B)^ bin;
borrow= ((~A) & B) | ((~(A^B)) & bin);
printf("difference = %d\n", difference);
printf("borrow= %d\n", borrow);
return 0;
}
