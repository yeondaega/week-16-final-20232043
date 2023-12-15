// debug2.c
// 이 프로그램의 목적은 정수를 읽고 이를 인쇄하는 것입니다. 그러나 프로그램 세그먼트 오류가 발생했습니다. 
// gdb를 사용하여 오류를 찾으십시오.
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
  int x;
  printf("Please enter an integer : ");
  if(scanf("%d", &x) != 1) {
    printf("Invalid input. Please enter an integer.\n");
    return EXIT_FAILURE;
  }
   printf("the integer entered was %d \n", x);
  return EXIT_SUCCESS;
} 


/*
질문에 답해 주세요.

1. 컴파일할 때 어떤 오류 메시지가 나타났나요?
'EXIT_SUCESS" undeclared( first use in this function.)
식별자 "EXIT_SUCCESS"가 정의되어 있지 않습니다.
incompatible implicit declaration of built-in function 'printf' [-Wbuiltin-declaration-mismatch]
incompatible implicit declaration of built-in function 'scanf' [-Wbuiltin-declaration-mismatch]

2. 프로그램에 어떤 문제가 있었나요?
정수 x의 주소가 불분명하다, 또한 printf와 scanf 를 사용을 위한 헤더 파일이 빠져있다. 또한  EXIT_SUCESS를 쓰기 위한 헤더 파일도 빠져있다.

3. 프로그램은 어떻게 수정하셨나요?
scanf 함수에서 '&x'을 사용해 정수 x의 주소를 제공하고 printf와 scanf를 사용하기 위해 <stdio.h>를 사용하고 EXIT_SUCESS 를 사용하기 위해 <stdlib.h>를 사용

*/
