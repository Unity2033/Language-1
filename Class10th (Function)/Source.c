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
	printf("x의 값 : %d\n", x);
	printf("y의 값 : %d\n", y);
}

void Color(char red, int green, float blue)
{
	printf("red의 값 : %c\n", red);
	printf("green의 값 : %d\n", green);
	printf("blue의 값 : %f\n", blue);
}

void Swap(int* left, int* right)
{
	int temporary = *left;

	*left = *right;

	*right = temporary;

	printf("left의 값 : %p\n", left);
	printf("right의 값 : %p\n\n", right);
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
	// va_list : 가변 인수의 메모리 주소를 저장하는 포인터 변수입니다.
	va_list pointer;

	// va_start : 가변 인수를 가져올 수 있도록 포인터를 설정하는 함수입니다.
	va_start(pointer, count);

	int sum = 0; 

	// va_arg : 가변 인수 포인터에서 특정 자료형의 크기만큼 값을 가져오는 함수입니다.
	for (int i = 0; i < count; i++)
	{
		sum += va_arg(pointer, int);
	}

	double average = (double)sum / count;

	printf("average : %lf\n", average);

	// va_end : 가변 인수가 끝났을 때 포인터를 NULL로 초기화하는 함수입니다.
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
#pragma region 함수
	// 하나의 특별한 목적의 작업을 수행하기 위해
	// 독립적으로 설계된 코드의 집합입니다.

	// Process();

	// Process();
#pragma endregion

#pragma region 반환형
	// 함수가 실행을 끝내고 돌려주는 결과의 자료형입니다.

	// printf("Damage 함수의 값 : %d\n", Damage());
	// printf("Character 함수의 값 : %c\n", Character());

	// 함수의 경우 자료형과 반환하는 값의 형태가
	// 일치하지 않으면 원하는 값을 얻을 수 없습니다.
#pragma endregion

#pragma region 매개 변수
	// 함수의 정의에서 전달받은 인수를 함수 내부로 
	// 전달하기 위해 사용하는 변수입니다.

	// int x = 10;
	// int y = 20;
	// 
	// Position(x, y);

	// 매개 변수는 함수 내부에서만 연산이 이루어지며,
	// 함수가 종료되면 메모리에서 해제됩니다.

	// Color('A', 1, 0.5f);

	// 하나의 함수에 서로 다른 자료형의 매개 변수를 함께
	// 정의할 수 있으며, 여러 개의 매개 변수를 생성할 수 있습니다.
#pragma endregion

#pragma region 인수
	// 함수가 호출될 때 매개 변수에 실제로 전달되는 값입니다.

	// int first = 10;
	// int second = 20;
	// 
	// Swap(&first, &second);
	// 
	// printf("first의 주소 : %p\n", &first);
	// printf("second의 주소 : %p\n\n", &second);
	// 
	// printf("first의 값 : %d\n", first);
	// printf("second의 값 : %d\n", second);

	// 인수의 경우 함수에 있는 매개 변수의 수에 따라 전달할 수 
	// 있는 인수의 수가 결정되며, 값을 전달하는 인수와 값을 전달
	// 받는 매개 변수의 자료형이 서로 일치해야 합니다.
#pragma endregion

#pragma region 재귀 함수
	// 어떤 함수에서 자신을 다시 호출하여 작업을 
	// 수행하는 함수입니다.

	// Recursion(5);

	// 재귀 함수는 함수를 계속 호출하기 때문에 스택 영역에
	// 메모리가 계속 쌓이게 되므로 스택 오버플로우가 일어납니다.
#pragma endregion

#pragma region 인라인 함수
	// 함수를 호출하는 대신 함수가 호출되는 위치마다
	// 함수의 코드를 복사하여 전달하는 방식의 함수입니다.

	// Calculator();

	// 인라인 함수는 함수를 호출하는 과정이 없으므로 처리 
	// 속도가 빠르지만, 인라인 함수를 많이 사용하게 되면
	// 함수의 코드가 복사되기 때문에 실행 파일의 크기가 커지게 됩니다.

	// 인라인 함수는 컴파일 시점에 확장되며, 컴파일 시 인라인 함수로
	// 선언하더라도 상황에 따라 일반 함수로 변환되기도 합니다.
#pragma endregion+

#pragma region 가변 인수 목록
	// 고정되어 있는 매개 변수 외에 개수가 정해지지 않은
	// 인수를 추가로 받을 수 있는 인수입니다.
	
	// Average(5, 10, 20, 30, 40, 50);

#pragma endregion

#pragma region 함수 포인터
	// 함수의 주소 값을 저장하고 가리킬 수 있는
	// 포인터 변수입니다.

	void (*functionPointer)();

	functionPointer = Provide;

	printf("Add의 주소 : %p\n", Add);

	functionPointer();

	// 함수 포인터는 함수의 반환형과 매개 변수의 타입이
	// 일치해야 하며, 함수 포인터를 사용하여 동적으로
	// 메모리를 할당할 수 없습니다.

#pragma endregion


	return 0;
}
