#include <stdio.h>
void main(void)
{
	int arr[4];
	//0��° ������ �ּ�
	printf("&arr[0] : %p\n", &arr[0]);
	printf("arr	: %p\n\n", arr);	//�迭�� �̸��� �����ּҰ��� ����

	//1��° ������ �ּ� (0��° ������ �ּҿ� 4byte����)
	// 8 9 A B C
	printf("&arr[1] : %p\n", &arr[1]);
	printf("arr+1	: %p\n\n", arr+1);

	char str[4];
	//0��° ������ �ּ�
	printf("&str[0]	: %p\n", &str[0]);
	printf("str	: %p\n\n", str);

	//1��° ������ �ּ�
	printf("&str[1]	: %p\n", &str[1]);
	printf("str+1	: %p\n\n", str+1);

	// int�� ����Ű�� �����Ϳ� +1�� �ϸ� 4����Ʈ ���̰� ��
}