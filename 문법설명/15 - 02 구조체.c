#include <stdio.h>

typedef struct point {
	int x;
	int y;
}Point;

void main(void) {
	//����� ���ÿ� �ʱ�ȭ
	Point p1 = { 10,20 };
	
	//���� �� ���߿� �ʱ�ȭ
	
	p2.x = 20;
	p2.y = 40;

	printf("(%d, %d) \n", p1.x, p1.y);
	printf("(%d, %d) \n", p2.x, p2.y);
	// int���� 2���� ����־ 8����Ʈ
	printf("����ü�� ũ��� %d", sizeof(p1));
}