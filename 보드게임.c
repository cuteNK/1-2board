#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(void)
{
	// ĭ�� �ִ밹��
	int max_length = 61;

	// �÷��̾��� ��ġ
	int position = 0;

	// �ֻ���
	int dice;

	srand(time(0));
	rand();

	printf("������ġ : %d\n\n", position);
	getchar();

	while (1)
	{
		// �ֻ��� ���� (1���� 6����)
		dice = rand() % 6 + 1;
		position += dice;
		printf("������ġ : %d\n\n", position);
		getchar();
	}
}