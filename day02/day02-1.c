#include <stdio.h>

int main()
{
	int operation;
	printf("���� Ÿ��: ");
	scanf_s("%d", &operation);

	double num1, num2;
	printf("ù��° ����: ");
	scanf_s("%lf", &num1);
	printf("�ι�° ����: ");
	scanf_s("%lf", &num2);

	double result = 0.0;
	if (operation == 1) {
		result = num1 + num2;
	}
	else if (operation == 2) {
		result = num1 - num2;
	}
	else {
		printf("�߸� �Է��ϼ̽��ϴ�.\n");
	}

	printf("result = %lf\n", result);

	return 0;
}