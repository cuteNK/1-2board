#include <stdio.h>

void print(int* ptr); //�����ͷ� �ѱ�(�迭�� �����ͷ� �ѱ�)
void erase(int ptr[]);	// int* ptr�� int ptr[]�� ����.

void main(void)
{
	int arr[4] = {10,20,30,40};
	erase(arr);
	print(arr);
}

// �迭�� ��� ��Ҹ� ���
void print(int ptr[])	//(�׷��� []�� ����)
{
	// i < 4�� �迭�� ũ�Ⱑ 4�� �͸� ������(������ ����)
	for (int i = 0; i < 4; i++) {
		//printf("%d", *(ptr+i) )
		printf("%d\n",ptr[i] );
	}
}

void erase(int ptr[])
{
	for (int i = 0; i < 4; i++) {
		ptr[i] = 0;
	}
}