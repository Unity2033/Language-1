#include <stdio.h>
#include <stdarg.h>

void initialize()
{
	printf("initialize...\n");
}

int absolute(int x)
{
	return (x < 0) ? -x : x;
}

void patrol(int x, int y)
{
	printf("Patrolling to position (%d, %d)\n", x, y);
}

void reset(char state, int level, float experience)
{
	printf("State : %c\n", state);
	printf("Level : %d\n", level);
	printf("Experience : %f\n", experience);
}

void swap(int* a, int* b)
{
	int temporary = *a;

	*a = *b;

	*b = temporary;
}

void function(int count)
{
	if (count <= 0)
	{
		return;
	}

	printf("%d ", count);

	function(count - 1);
}

inline int square(int x)
{
	return x * x;
}

double average(int count, ...)
{
	// va_list : ���� �μ��� �޸� �ּҸ� �����ϴ� ������ �����Դϴ�.
	va_list pointer;

	// va_start : ���� �μ��� ������ �� �ֵ��� �����͸� �����ϴ� �Լ��Դϴ�.
	va_start(pointer, count);

	// va_arg : ���� �μ� �����Ϳ��� Ư�� �ڷ����� ũ�⸸ŭ ���� �������� �Լ��Դϴ�.

	double sum = 0;

	for (int i = 0; i < count; i++)
	{
		sum += va_arg(pointer, int);
	}

	// va_end : ���� �μ��� ������ �� �����͸� NULL�� �ʱ�ȭ�ϴ� �Լ��Դϴ�.
	va_end(pointer);

	return sum / count;
}

void main()
{
#pragma region �Լ�
	// �ϳ��� Ư���� ������ �۾��� �����ϱ� ����
	// ���������� ����� �ڵ��� �����Դϴ�.

	// initialize();
#pragma endregion

#pragma region �Ű� ����
	// �Լ��� ���ǿ��� ���޹��� �μ��� �Լ� ���η�
	// �����ϱ� ���� ����ϴ� �����Դϴ�.

	// patrol(36, -9);

	// // �Ű� ������ �Լ� ���ο����� ������ �̷������,
	// // �Լ��� ����Ǹ� �޸𸮿��� �����˴ϴ�.

	// reset('A', 0, 0.0f);

	// �ϳ��� �Լ��� ���� �ٸ� �ڷ����� �Ű� ������ �Բ�
	// ������ �� ������, ���� ���� �Ű� ������ ������ �� �ֽ��ϴ�.
#pragma endregion

#pragma region �μ�
	// �Լ��� ȣ��� �� �Ű� ������ ������ ���޵Ǵ� ���Դϴ�.

	// int x1 = 10;
	// int x2 = 20;
	// 
	// swap(&x1, &x2);
	// 
	// printf("x1�� �� : %d\n", x1);
	// printf("x2�� �� : %d\n", x2);

	// �μ��� ��� �Լ��� �ִ� �Ű� ������ ���� ������ �� 
	// �ִ� �μ��� ���� �����Ǹ�, ���� �����ϴ� �μ��� ����
	// ���� �޴� �Ű� ������ �ڷ����� ���� ��ġ�ؾ� �մϴ�.
#pragma endregion

#pragma region ��ȯ��
// �Լ��� ������ ��ġ��, ȣ���� ������ � �ڷ����� ����
// ��ȯ���� �̸� �˷��ִ� �����Դϴ�.

// printf("Absolute value: %d\n", absolute(-7));

// �Լ��� ��� �ڷ����� ��ȯ�ϴ� ���� ���°�
// ��ġ���� ������ ���ϴ� ���� ���� �� �����ϴ�.
#pragma endregion

#pragma region ��� �Լ�
	// � �Լ����� �ڽ��� �ٽ� ȣ���Ͽ� �۾���
	// �����ϴ� �Լ��Դϴ�.

	// function(3);

	// ��� �Լ��� �Լ��� ����ϱ� ������ ���� ������
	// �޸𸮰� ��� ���̰� �ǹǷ� ���� �����÷ο찡 �߻��մϴ�.
#pragma endregion

#pragma region �ζ��� �Լ�
	// �Լ��� ȣ���Ͻ� ��� �Լ��� ȣ��Ǵ� ��ġ����
	// �Լ��� �ڵ带 �����Ͽ� �����ϴ� ����� �Լ��Դϴ�.

	// printf("%d\n", square(9));

	// �ζ��� �Լ��� �Լ��� ȣ���ϴ� ������ �����Ƿ� ó�� �ӵ���
	// ��������, �ζ��� �Լ��� ���� ����ϰ� �Ǹ� �Լ��� �ڵ尡
	// ����Ǳ� ������ ���� ������ ũ�Ⱑ Ŀ���� �˴ϴ�.
#pragma endregion

#pragma region ���� �μ� ���
	// �����Ǿ� �ִ� �Ű� ���� �ܿ� ������ �������� ����
	// �μ��� �߰��� ���� �� �ִ� �μ��Դϴ�.

	// printf("%lf\n", average(4, 80, 90, 75, 60));
#pragma endregion

}
