#include <stdio.h>
#include <stdlib.h>

void main(void) {
	int arr[4] = { 10,20,30,40 }; //������ �ð��� ����
	int count;	//�������� (stack ������ �Ҵ�)
	printf("���ϴ� int������ ������ �Է��Ͻÿ�: ");
	count = 4;

	//���α׷��� �����ϴ� �߰��� Ű���� �Է��� �ʿ���.
	//malloc���� �Ҵ�� �޸� ũ��� Ű����� �Է��� ������ ����
	//ptr�� �������� (stack�� �Ҵ�)
	int* ptr = malloc(sizeof(int) * count);
	ptr[0] = 10; ptr[1] = 20; ptr[2] = 30; ptr[3] = 40;

}