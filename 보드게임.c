#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(void)
{
	// ĭ�� �ִ밹��
	int max_length = 61;

	// �ֻ���
	int dice;

	srand(time(0));
	rand();
	dice = rand();
	printf("%d\n", dice);
}