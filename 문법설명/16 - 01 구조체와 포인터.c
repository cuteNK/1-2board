#include <stdio.h>

typedef struct {
	int x;
	int y;
}Point;

void main(void)
{
	// 지역변수 a는 stack영역에 할당된다.
	Point a = { 3,4 };
	printf("%d %d\n", a.x, a.y);

	Point* ptr = &a;
	printf("%d %d\n",(*ptr).x, (*ptr).y);
	printf("%d %d\n", ptr->x, ptr->y);
}

