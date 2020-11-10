#include "functions.h"
#include<stdio.h>

int main(int argc, char ** argv) {
  int a,b,choose;

  printf("---Welcome to Simple Calculator---\n");

  printf("enter which operation you are going to perform \n 1.add \n 2.sub \n 3.mul \n 4.div\n");
  scanf("%d",&choose);

  printf("enter value of a, b:\n");
  scanf("%d %d",&a, &b);

  if (choose==1){ 
      add(a,b);
  }else if (choose==2){
      sub(a,b);
  }else if(choose==3){
      mul(a,b);
  }else if(choose==4){
      div(a,b);
  }else{
    printf("pls select the right options[1-4]");
  }

  return 0;
}
