// debug3.c
// 프로그램의 목적은 정수 배열을 할당하고 이를 난수로 초기화하는 것입니다.
// 그러나 프로그램 세그먼트 오류가 발생했습니다.
// gdb를 사용하여 오류를 찾으십시오.

int main(int argc, char* argv[]){
  printf("%ld \n", INT_MAX);
  int n = INT_MAX;
  int A[n];
  int i = 0;
  while (i<n)
  A[i] = rand()%10;

  return EXIT_SUCCESS;
}

/*
질문에 답해 주세요.

1. 컴파일할 때 어떤 오류 메시지가 나타났나요?

2. 프로그램에 어떤 문제가 있었나요?

3. 프로그램은 어떻게 수정하셨나요?

*/
