#include <stdio.h>

void changeA(int num);	// int�� ����

void main(void)
{
	int A = 3;	// ������ �ٸ�
	printf("�ٲٱ� �� %d \n", A);
	// ���� A�� �Ѱ��ִ� ���� �ƴ� A�ȿ� ����ִ� 3�� num���� �Ѱ��ش�
	changeA(A);	// argument
	printf("�ٲٱ� �� %d \n", A);
}

void changeA(int num)
{
	num = 5;	// num�� 5 ����
}