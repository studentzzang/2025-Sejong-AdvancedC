// 254p. 예제 3

#include<stdio.h>

int main(){
  int num1, num2, *p = &num1;

  *p = 3000;
  num2 = *p;
  p = &num2;
  *p = *p-1000;
  num1 = *p *2;


  printf("값: num1=%d, num2=%d, p=%p p=%d\n",num1,num2,p,*p);
  printf("주소: num1=%p, num2=%p, p=%p", &num1, &num2, &p);

  return 0;
}

// 값 출력에서 %p=p 는 주소가 출력된다. 포인터의 값 출력은 *p
// 포인터 변수의 p = &p