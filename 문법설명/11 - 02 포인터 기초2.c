#include <stdio.h>

void main(void)
{
	int num1 = 3;
	int a = num1;
	printf("num1�� %d, a�� %d\n", num1, a);
	a = 4;
	printf("num1�� %d, a�� %d\n", num1, a);

	int num2 = 30;
	int* ptr = &num2;	// ���� �� �� �ּҿ������ϱ�
	printf("num2�� %d, ptr�� %p\n", num2, ptr);	//num2�� ���� ptr�� ��(num2�� �ּҰ�) ���

	// ptr�� ����Ű�� ����(num2)�� ���ΰ��� 40���� �ٲ۴�.
	*ptr = 40;	// num2�� ���� �ٲ�.
	printf("num2�� %d, ptr�� %p\n", num2, ptr);	// num2�� ���� �����͸� ���� ���������� �ٲ�. ptr�� �ּҰ��� �״��

	// ���� num2�� ���ΰ��� 50���� �ٲ۴�.
	num2 = 50;
	printf("num2�� %d, ptr�� %p\n", num2, ptr);	// num2�� ���� ���������� �ٲ�. ptr�� �ּҰ��� �״��
}