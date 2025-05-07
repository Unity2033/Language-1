#include <stdio.h>
#include <math.h>
#include "audio.h"
			  
struct Object
{
	char character;
	int integer;
	float decimal;
};

struct Stat
{
	char grade;
	int health;
	float attack;
};

struct Vector3
{
	int x;
	double y;
	int z;
};

struct Point2D
{
	int x;
	int y;
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

#pragma region 바이트 패딩
	// 멤버 변수를 메모리에서 CPU로 읽을 때 한 번에
	// 읽을 수 있도록, 컴파일러가 레지스터의 블록에 
	// 맞추어 바이트를 패댕해주는 최적화 작업입니다.
    
	// struct Stat stat;
	// 
	// printf("Stat 구조체의 크기 : %d\n", sizeof(stat));
	// 
	// // 구조체의 크기는 구조체를 구성하는 멤버 중에서 크기가
	// // 가장 큰 자료형의 배수가 되도록 정렬합니다.
	// 
	// struct Vector3 vector3;
	// 
	// printf("Vector3 구조체의 크기 : %d\n", sizeof(vector3));

    // 구조체 크기의 경우 멤버 변수의 순서에 따라 메모리의 크기가
	// 다르게 설정될 수 있으며, 구조체 크기를 결정하는 형태는 기본
	// 자료형으로만 구성됩니다.
#pragma endregion

#pragma region 두 점 사이의 거리

	//	struct Point2D rogue = { 0, 0 };
	//	struct Point2D slime = { 1, 1 };
	//	
	//	double x = rogue.x - slime.x;
	//	double y = rogue.y - slime.y;
	//	
	//	double distance = sqrt(pow(x, 2) + pow(y, 2));
	//	
	//	if (distance >= 5.0f)
	//	{
	//		printf("Idle State");
	//	}
	//	else
	//	{
	//		printf("Attack State");
	//	}

#pragma endregion

	return 0;
}
