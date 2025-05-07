#include <stdio.h>
#include <stdarg.h>

char Character()
{
	return 36.5f;
}

int Damage()
{
	return 10;
}

void Process()
{
	printf("Process...\n");
}

void Position(int x, int y)
{
	printf("x�� �� : %d\n", x);
	printf("y�� �� : %d\n", y);
}

void Color(char red, int green, float blue)
{
	printf("red�� �� : %c\n", red);
	printf("green�� �� : %d\n", green);
	printf("blue�� �� : %f\n", blue);
}

void Swap(int* left, int* right)
{
	int temporary = *left;

	*left = *right;

	*right = temporary;

	printf("left�� �� : %p\n", left);
	printf("right�� �� : %p\n\n", right);
}

void Recursion(int count)
{
	if (count <= 0)
	{
		return;
	}

	Recursion(count - 1);

	printf("Recursion\n");
}

inline void Calculator()
{
	printf("Calculator...\n");
}

void Average(int count, ...)
{
	// va_list : ���� �μ��� �޸� �ּҸ� �����ϴ� ������ �����Դϴ�.
	va_list pointer;

	// va_start : ���� �μ��� ������ �� �ֵ��� �����͸� �����ϴ� �Լ��Դϴ�.
	va_start(pointer, count);

	int sum = 0; 

	// va_arg : ���� �μ� �����Ϳ��� Ư�� �ڷ����� ũ�⸸ŭ ���� �������� �Լ��Դϴ�.
	for (int i = 0; i < count; i++)
	{
		sum += va_arg(pointer, int);
	}

	double average = (double)sum / count;

	printf("average : %lf\n", average);

	// va_end : ���� �μ��� ������ �� �����͸� NULL�� �ʱ�ȭ�ϴ� �Լ��Դϴ�.
	va_end(pointer);
}

int Add(int x, int y)
{
	return x + y;
}

int Subtract(int x, int y)
{
	return x - y;
}

int Multiply(int x, int y)
{
	return x * y;
}

int Divide(int x, int y)
{
	return x / y;
}

void Provide()
{
	printf("Provide\n");
}

int main()
{
#pragma region �Լ�
	// �ϳ��� Ư���� ������ �۾��� �����ϱ� ����
	// ���������� ����� �ڵ��� �����Դϴ�.

	// Process();

	// Process();
#pragma endregion

#pragma region ��ȯ��
	// �Լ��� ������ ������ �����ִ� ����� �ڷ����Դϴ�.

	// printf("Damage �Լ��� �� : %d\n", Damage());
	// printf("Character �Լ��� �� : %c\n", Character());

	// �Լ��� ��� �ڷ����� ��ȯ�ϴ� ���� ���°�
	// ��ġ���� ������ ���ϴ� ���� ���� �� �����ϴ�.
#pragma endregion

#pragma region �Ű� ����
	// �Լ��� ���ǿ��� ���޹��� �μ��� �Լ� ���η� 
	// �����ϱ� ���� ����ϴ� �����Դϴ�.

	// int x = 10;
	// int y = 20;
	// 
	// Position(x, y);

	// �Ű� ������ �Լ� ���ο����� ������ �̷������,
	// �Լ��� ����Ǹ� �޸𸮿��� �����˴ϴ�.

	// Color('A', 1, 0.5f);

	// �ϳ��� �Լ��� ���� �ٸ� �ڷ����� �Ű� ������ �Բ�
	// ������ �� ������, ���� ���� �Ű� ������ ������ �� �ֽ��ϴ�.
#pragma endregion

#pragma region �μ�
	// �Լ��� ȣ��� �� �Ű� ������ ������ ���޵Ǵ� ���Դϴ�.

	// int first = 10;
	// int second = 20;
	// 
	// Swap(&first, &second);
	// 
	// printf("first�� �ּ� : %p\n", &first);
	// printf("second�� �ּ� : %p\n\n", &second);
	// 
	// printf("first�� �� : %d\n", first);
	// printf("second�� �� : %d\n", second);

	// �μ��� ��� �Լ��� �ִ� �Ű� ������ ���� ���� ������ �� 
	// �ִ� �μ��� ���� �����Ǹ�, ���� �����ϴ� �μ��� ���� ����
	// �޴� �Ű� ������ �ڷ����� ���� ��ġ�ؾ� �մϴ�.
#pragma endregion

#pragma region ��� �Լ�
	// � �Լ����� �ڽ��� �ٽ� ȣ���Ͽ� �۾��� 
	// �����ϴ� �Լ��Դϴ�.

	// Recursion(5);

	// ��� �Լ��� �Լ��� ��� ȣ���ϱ� ������ ���� ������
	// �޸𸮰� ��� ���̰� �ǹǷ� ���� �����÷ο찡 �Ͼ�ϴ�.
#pragma endregion

#pragma region �ζ��� �Լ�
	// �Լ��� ȣ���ϴ� ��� �Լ��� ȣ��Ǵ� ��ġ����
	// �Լ��� �ڵ带 �����Ͽ� �����ϴ� ����� �Լ��Դϴ�.

	// Calculator();

	// �ζ��� �Լ��� �Լ��� ȣ���ϴ� ������ �����Ƿ� ó�� 
	// �ӵ��� ��������, �ζ��� �Լ��� ���� ����ϰ� �Ǹ�
	// �Լ��� �ڵ尡 ����Ǳ� ������ ���� ������ ũ�Ⱑ Ŀ���� �˴ϴ�.

	// �ζ��� �Լ��� ������ ������ Ȯ��Ǹ�, ������ �� �ζ��� �Լ���
	// �����ϴ��� ��Ȳ�� ���� �Ϲ� �Լ��� ��ȯ�Ǳ⵵ �մϴ�.
#pragma endregion+

#pragma region ���� �μ� ���
	// �����Ǿ� �ִ� �Ű� ���� �ܿ� ������ �������� ����
	// �μ��� �߰��� ���� �� �ִ� �μ��Դϴ�.
	
	// Average(5, 10, 20, 30, 40, 50);

#pragma endregion

#pragma region �Լ� ������
	// �Լ��� �ּ� ���� �����ϰ� ����ų �� �ִ�
	// ������ �����Դϴ�.

	void (*functionPointer)();

	functionPointer = Provide;

	printf("Add�� �ּ� : %p\n", Add);

	functionPointer();

	// �Լ� �����ʹ� �Լ��� ��ȯ���� �Ű� ������ Ÿ����
	// ��ġ�ؾ� �ϸ�, �Լ� �����͸� ����Ͽ� ��������
	// �޸𸮸� �Ҵ��� �� �����ϴ�.

#pragma endregion


	return 0;
}
