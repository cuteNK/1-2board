#include <stdio.h>
void main() {
	int s;
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &s);
	if (90 <= s) printf("A");
	else if (80 <= s) printf("B");
	else if (70 <= s) printf("C");
	else printf("D");
}