/*
*	������� ����� 21.05.13
*	1. ��ü ĭ�� ���� 61��
*	2. �÷��̾ ������ �־�� �� ��
*		- ��ġ����(��) : 0 ���� ����
*		- �� : 5,000,000 ���� ����
*		- ������ �κ��丮 (���߿� �����ϸ�)
*	3. �Ļ��� ����
*		- 0���� ���ڸ��� �Ļ�
*	4. �Ϸ� ����
*		- ���� 61��° ��ġ���� �־�� �Ѵ�
*/



#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(void)
{
	// ĭ�� �ִ밹��, ����� ����(����)
	const int max_length = 61;

	// �÷��̾��� ��ġ
	int position = 0;

	// �ֻ���
	int dice;

	const int MAX_LENGTH = 61;

	int money = 5000000;

	srand(time(0));
	rand();

	printf("������ġ : %d, ������ : %d\n\n", position, money);

	while (1)
	{
		getchar();	
		// �ֻ��� ���� (1���� 6����)
		dice = rand() % 6 + 1;
		position += dice;
		printf("�ֻ����� ������ %d�� ���Խ��ϴ�.\n", dice);
		printf("������ġ : %d, ���� �� : %d\n\n", position, money);

		// 7���� ���� ���� 3������ �̵�
		if (position == 7)
		{
			printf("3�� ��ġ�� �̵��մϴ�.");
			position = 3;
			printf("������ġ : %d, ���� ��: %d\n\n",position, money);
		}

		if (position == 15)
		{
			printf("�ֽ��� ������ 200������ �����˴ϴ�.\n");
			money -= 2000000;
			printf("������ġ : %d, ������ : %d\n\n", position, money);
		}

		/// ������ ������ �ó�����
		// �Ļ�ó��
		if (money <= 0)
		{
			printf("�Ļ��Ͽ����ϴ٤ФФ�\n");
			break;
		}
		switch (position)
		{
		case 7: printf("3�� ��ġ�� �̵��մϴ�.\n");��
		{
			position = 3;
			printf("������ġ : %d, ���� �� : %d\n\n", position, money);
			break;
		}

		case 20:
			printf("��ġ 20�� �־ ����� 20%�� ����մϴ�%\n");
			
			break;

		case 52:
			printf("��ġ 52 ���ε��� �������ϴ�.\n");
			for (int i = 1; i <= 3; i++)
			{
				getchar();
				printf("%d°�Դϴ�.\n",i);
			}
		}

		// 61�� �ѱ�� �������� ������
		if (position > MAX_LENGTH)
		{
			printf("61�� �Ѿ��� ������ ��ȿó�� �մϴ�.");
			// ��ȿó���� �ϱ� ���� �ڵ�
			printf("������ġ : %d, ������ : %d\n\n", position, money);
		
		}

		// 61 ��ġ���� �־�� ������ ����
		if (position == MAX_LENGTH)
		{
			printf("�����մϴ�. �������� �����Ͽ����ϴ�.\n");
		}
	} // while �� ��
	printf("������ �������ϴ�.");
}