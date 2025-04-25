#include <stdio.h>

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

void Swap(int left, int right)
{
	int temporary = left;

	left = right;

	right = temporary;

	printf("left의 주소 : %p\n", &left);
	printf("right의 주소 : %p\n\n", &right);
}

void main()
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

	int first = 10;
	int second = 20;

	Swap(first, second);

	printf("first의 주소 : %p\n", &first);
	printf("second의 주소 : %p\n\n", &second);

	printf("first의 값 : %d\n", first);
	printf("second의 값 : %d\n", second);

	// 인수의 경우 함수에 있는 매개 변수의 수에 따라 전달할 수 
	// 있는 인수의 수가 결정되며, 값을 전달하는 인수와 값을 전달
	// 받는 매개 변수의 자료형이 서로 일치해야 합니다.
#pragma endregion



}
