#include <stdio.h>

void Swap(int a, int b);	// int�� ����

void main(void)
{
	int a = 10, b = 20;
	printf("�ٲٱ� �� a:%d b:%d \n", a, b);
	Swap(&a, &b);
	printf("�ٲٱ� �� a:%d b:%d \n", a, b);
}

void Swap(int *a, int *b)	// a�� ����Ű�� ��, b�� ����Ű�� ���� �ҷ���
{
	int temp;	// ������ �������
	temp = *a;	// ������ a�� ����Ű�� ���� ����
	*a = *b;	// a�� ����Ű�� ���� b�� ����Ű�� ���� ����
	*b = temp;	// b�� ����Ű�� ���� temp�ȿ� �ִ� ���� ����
}