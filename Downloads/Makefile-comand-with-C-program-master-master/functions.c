#include <stdio.h>

void add(int a,int b)
{
  int sum=a+b;
  printf("sum is %d",sum);
}
void sub(int a,int b)
{
  int sub=a-b;
  printf("subtraction is %d",sub);
}
void mul(int a,int b)
{
  int mul=a*b;
  printf("multiplication is %d",mul);
}
void div(int a,int b)
{
  if(b!=0){
    int div=a/b;
  printf("division is %d",div);
  }else{
    printf("can not divided by Zero");
  }
}


