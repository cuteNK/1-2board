#include <stdio.h>

int factorial(int num)
{
	if (num == 1) {
		return 1;
	}
	return num * factorial(num - 1);
}

void main(void)
{
	int a = factorial(1);
	printf("%d",a);
}







//�Լ��� ����ϴ� ����
//#include <stdio.h>
//
//int ���ϱ�(int a)
//{
//	int sum = 0;
//	for (int i = 1; i <= a; i++)
//		sum += i;
//
//	return sum;
//}
//
//void main(void)
//{
//	int aa ���ϱ�(3), bb = ���ϱ�(4), cc = ���ϱ�(2);
//	//printf("%d %d %d", aa, bb, cc);
//}