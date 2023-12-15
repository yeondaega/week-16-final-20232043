// debug3.c
// 프로그램의 목적은 정수 배열을 할당하고 이를 난수로 초기화하는 것입니다.
// 그러나 프로그램 세그먼트 오류가 발생했습니다.
// gdb를 사용하여 오류를 찾으십시오.
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>

int main(int argc, char* argv[]){
  printf("%ld\n", (long)INT_MAX);
 int n = 100;

  int *A = (int *)malloc(n * sizeof(int));
    if (A == NULL) {
        fprintf(stderr, "메모리 할당 실패!\n");
        return EXIT_FAILURE;
    }

  srand(time(NULL));

 for (int i = 0; i < n; i++) {
        A[i] = rand() % 10;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    free(A);

    return EXIT_SUCCESS;
}

/*
질문에 답해 주세요.

1. 컴파일할 때 어떤 오류 메시지가 나타났나요?
식별자 "INT_MAX"이(가) 정의되어 있지 않습니다.
식에 상수 값이 있어야 합니다.
식별자 "EXIT_SUCCESS"이(가) 정의되어 있지 않습니다.

2. 프로그램에 어떤 문제가 있었나요?
INT_MAX를 배열 A의 크기로 사용하고 있지만 실질적으로 너무 큰 크기이며 스택 오버플로우를 발생시킬 수 있다. 또한 while 루프에는 증가문이 없어서 무한 루프가 발생할 수 있다.

3. 프로그램은 어떻게 수정하셨나요?
INT_MAX를 배열 크기로 사용하는 대신, 정확한 값을 입력하였다, 또한 난수생성과 배열을 위해 for문을 추가하였고 더 정확한 메모리 할당을 위해  return EXIT_SUCCESS;와 함께 return EXIT_FAILURE; 도 추가하였다.
    }
*/
