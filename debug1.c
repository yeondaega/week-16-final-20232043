// debug1.c
// 이 잘못된 프로그램을 디버그하세요.

int factorial(int x) {
  if (x == 0) {
    return x;
  } else {
    return x * factorial(x-1);
  }
}

int main() {
  // 5의 계승값을 구하세요.
  // 5의 계승은 5 x 4 x 3 x 2 x 1이다(5!로 표시).
  
  int x = 5;
  
  printf("The factorial of %d is: %d", x, factorial(x);
  // 예측 출력: The factorial of 5 is 120.
  
  return 0;
}

/*
질문에 답해 주세요.

1. 컴파일할 때 어떤 오류 메시지가 나타났나요?

2. 프로그램에 어떤 문제가 있었나요?

3. 프로그램은 어떻게 수정하셨나요?

*/
