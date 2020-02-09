#include <stdio.h>
int main(){
  //initilization the varibales
  int n, temp = 0,rem=0,rev=0;
  printf("Enter a number : ");
  //taking the input from user
  scanf("%d",&n);
  temp = n; //create duplicate number to compute and compare reverse of number
  //finding the reverse of the number by using while loop
  while(temp > 0){
    rem = temp%10; // it will give the last digit
    rev = rev*10+rem; // it compute the reverse of number
    temp = temp/10;   
  }
  printf("Revered number is %d\n",rev);
  //both reverse and original number is equal or not
  if(rev == n){
    printf("Both are True\n");
  }else{
    printf("Both are false\n");
  }
  return 0;
}

