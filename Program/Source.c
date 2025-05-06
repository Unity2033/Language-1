#include <stdio.h>
#include "audio.h"
			  
struct Object
{
	char character;
	int integer;
	float decimal;
};

int main()
{
#pragma region 구조체
	// 여러 개의 변수를 하나의 집합으로 구조화한 다음
	// 하나의 객체를 생성하는 것입니다.

	// struct Object object = {'B', 10, 6.25f};
	// 
	// printf("object의 character : %c\n", object.character);
	// printf("object의 integer : %d\n", object.integer);
	// printf("object의 decimal : %f\n\n", object.decimal);
	// 
    // // 구조체의 각 멤버는 구조체 선언에서 나타나는 순서대로 초기화됩니다. 
    // // 이 순서는 초기화 목록의 값들이 왼쪽에서 오른쪽으로 대응되는 방식입니다.
	// 
	// object.character = 'A';
	// object.integer = 100;
	// object.decimal = 36.5f;
	// 
	// printf("object의 character : %c\n", object.character);
	// printf("object의 integer : %d\n", object.integer);
	// printf("object의 decimal : %f\n", object.decimal);

	// 구조체를 선언하기 전에 구조체는 메모리 공간이 
	// 생성되지 않으므로, 구조체 내부에 있는 데이터를
	// 초기화할 수 없습니다.

#pragma endregion

	return 0;
}
