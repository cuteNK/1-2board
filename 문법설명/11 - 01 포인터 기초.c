#include <stdio.h>

void main(void)
{
	int num = 3;
	// ptr�̶� ������ ������ ���� num�� ����Ŵ
	int* ptr = &num;
	printf("num�ȿ� ����ִ� �� %d\n", num);
	printf("num�� �޸� �ּҰ� %p\n", &num);	// %p = 16����
	printf("ptr�ȿ� ����ִ� �� %p\n", ptr);
	printf("ptr�ȿ� �޸� �ּҰ� %p\n", &ptr);
}