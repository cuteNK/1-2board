#include <stdio.h>
void main(void)
{
	int arr[4] = { 10,20,30,40 };
	char str[4] = "cut";	//null���� ���Եż� 4��� �ƴµ� 3�� ����

	//0��° ������ �ּ�
	printf("arr 0��° ������ �ּ�\n");
	printf("&arr[0]	: %p\n", &arr[0]);
	printf("arr	: %p\n\n", arr);	//�迭�� �̸��� �����ּҰ��� ����

	//0��° ������ ���(element)��
	printf("arr 0��° ������ ���(element)��\n");
	printf("arr[0]	: %d\n", arr[0]);
	printf("*arr	: %d\n\n", *arr);

	//1��° ������ �ּ� (0��° ������ �ּҿ� 4byte����)
	printf("arr 1��° ������ �ּ�\n");
	printf("&arr[1] : %p\n", &arr[1]);
	printf("arr+1	: %p\n\n", arr + 1);

	//1��° ������ ���(element)��
	printf("arr 1��° ������ ���(element)��\n");
	printf("arr[1]	: %d\n", arr[1]);
	printf("*(arr+1): %d\n\n\n", *(arr + 1));


	//0��° ������ �ּ�
	printf("str 0��° ������ �ּ�\n");
	printf("&str[0]	: %p\n", &str[0]);
	printf("str	: %p\n\n", str);

	//0��° ������ ���(element)��
	printf("str 0��° ������ ���(element)��\n");
	printf("*str	: %c\n\n", *str);

	//1��° ������ �ּ�
	printf("str 1��° ������ �ּ�\n");
	printf("&str[1]	: %p\n", &str[1]);
	printf("str+1	: %p\n\n", str + 1);

	// int�� ����Ű�� �����Ϳ� +1�� �ϸ� 4����Ʈ ���̰� ��
} 
//arr[1]�� *(arr+1)�� *&arr[1]�� ����