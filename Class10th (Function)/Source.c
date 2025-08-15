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
	// va_list : 가변 인수의 메모리 주소를 저장하는 포인터 변수입니다.
	va_list pointer;

	// va_start : 가변 인수를 가져올 수 있도록 포인터를 설정하는 함수입니다.
	va_start(pointer, count);

	// va_arg : 가변 인수 포인터에서 특정 자료형의 크기만큼 값을 가져오는 함수입니다.

	double sum = 0;

	for (int i = 0; i < count; i++)
	{
		sum += va_arg(pointer, int);
	}

	// va_end : 가변 인수가 끝났을 때 포인터를 NULL로 초기화하는 함수입니다.
	va_end(pointer);

	return sum / count;
}

void main()
{
#pragma region 함수
	// 하나의 특별한 목적의 작업을 수행하기 위해
	// 독립적으로 설계된 코드의 집합입니다.

	// initialize();
#pragma endregion

#pragma region 매개 변수
	// 함수의 정의에서 전달받은 인수를 함수 내부로
	// 전달하기 위해 사용하는 변수입니다.

	// patrol(36, -9);

	// // 매개 변수는 함수 내부에서만 연산이 이루어지며,
	// // 함수가 종료되면 메모리에서 해제됩니다.

	// reset('A', 0, 0.0f);

	// 하나의 함수에 서로 다른 자료형의 매개 변수를 함께
	// 정의할 수 있으며, 여러 개의 매개 변수를 생성할 수 있습니다.
#pragma endregion

#pragma region 인수
	// 함수가 호출될 때 매개 변수에 실제로 전달되는 값입니다.

	// int x1 = 10;
	// int x2 = 20;
	// 
	// swap(&x1, &x2);
	// 
	// printf("x1의 값 : %d\n", x1);
	// printf("x2의 값 : %d\n", x2);

	// 인수의 경우 함수에 있는 매개 변수에 따라 전달할 수 
	// 있는 인수의 수가 결정되며, 값을 전달하는 인수와 값을
	// 전달 받는 매개 변수의 자료형이 서로 일치해야 합니다.
#pragma endregion

#pragma region 반환형
// 함수가 실행을 마치고, 호출한 쪽으로 어떤 자료형의 값을
// 반환할지 미리 알려주는 형식입니다.

// printf("Absolute value: %d\n", absolute(-7));

// 함수의 경우 자료형과 반환하는 값의 형태가
// 일치하지 않으면 원하는 값을 얻을 수 없습니다.
#pragma endregion

#pragma region 재귀 함수
	// 어떤 함수에서 자신을 다시 호출하여 작업을
	// 수행하는 함수입니다.

	// function(3);

	// 재귀 함수는 함수를 계속하기 때문에 스택 영역에
	// 메모리가 계속 쌓이게 되므로 스택 오버플로우가 발생합니다.
#pragma endregion

#pragma region 인라인 함수
	// 함수를 호출하신 대신 함수가 호출되는 위치마다
	// 함수의 코드를 복사하여 전달하는 방식의 함수입니다.

	// printf("%d\n", square(9));

	// 인라인 함수는 함수를 호출하는 과정이 없으므로 처리 속도가
	// 빠르지만, 인라인 함수를 많이 사용하게 되면 함수의 코드가
	// 복사되기 때문에 실제 파일의 크기가 커지게 됩니다.
#pragma endregion

#pragma region 가변 인수 목록
	// 고정되어 있는 매개 변수 외에 개수가 정해지지 않은
	// 인수를 추가로 받을 수 있는 인수입니다.

	// printf("%lf\n", average(4, 80, 90, 75, 60));
#pragma endregion

}
