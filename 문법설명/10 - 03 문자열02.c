#include <stdio.h>

void main(void)
{
	char str[12] = "Hello World";

	// �ι���('\0')�� �ƴҶ����� ���
	for (int i=0; str[i]!='\0'; i++)
		printf("%c", str[i]);
}