#include <stdio.h>

void main(void)
{
	// ����, ����, 8����Ʈ �ε��Ҽ� ������
	int a;	//4
	char b;	//1
	double c;	//8
	// ����Ű�� �����͸� �����ϰ� ����Ű�ÿ�
	int *ap = &a;	//4
	char *bp = &b;	//4
	double *cp = &c;	//4

	// ������ ������ �����ͺ����� �޸𸮿��� �����ϴ� ũ�⸦ �˾ƺ��ÿ�
	printf("a: %d\n", sizeof(a));
	printf("b: %d\n", sizeof(b));
	printf("c: %d\n", sizeof(c));
	printf("ap: %d\n", sizeof(ap));
	printf("bp: %d\n", sizeof(bp));
	printf("cp: %d\n", sizeof(cp));
}