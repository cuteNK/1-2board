#include <stdio.h>

struct point {
	int x;
	int y;
};

void main(void) {
	//����� ���ÿ� �ʱ�ȭ
	struct point p1 = { 10,20 };
	
	//���� �� ���߿� �ʱ�ȭ
	struct point p2;	//struct �Ⱦ��� ������
	p2.x = 20;
	p2.y = 40;
}