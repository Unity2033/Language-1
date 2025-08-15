#include <stdio.h>
#include <math.h>

struct Data
{
	char grade;
	int health;
	double experience;
};

struct Point2D
{
	int x;
	int y;
};

struct Ability
{
	char rank;
	double attack;
	int strength;
};

struct Node
{
	int data;
	struct Node* next;
};

int main()
{
#pragma region 구조체
	// 여러 개의 변수를 하나의 집합으로 구조화한 다음
	// 하나의 객체를 생성하는 것입니다.

	// struct Data data = {'B', 50, 75.625};
	// 
	// printf("data의 grade : %c\n", data.grade);
	// printf("data의 health : %d\n", data.health);
	// printf("data의 experience : %lf\n\n", data.experience);
	// 
	// // 구조체의 각 멤버는 구조체 선언에서 나타나는 순서대로 초기화됩니다.
	// // 이 순서는 초기화 목록의 값들이 왼쪽에서부터 오른쪽으로 대응됩니다.
	// 
	// data.grade = 'A';
	// data.health = 100;
	// data.experience = 135.75;
	// 
	// printf("data의 grade : %c\n", data.grade);
	// printf("data의 health : %d\n", data.health);
	// printf("data의 experience : %lf\n", data.experience);

	// 구조체를 선언하기 전에 구조체는 메모리 공간이
	// 생성되지 않으므로, 구조체 내부에 있는 데이터를
	// 초기화할 수 없습니다.
#pragma endregion

#pragma region 두 점 사이의 거리

	//	struct Point2D rogue = { 0, 0 };
	//	struct Point2D slime = { 1, 2 };
	//	
	//	double x = rogue.x - slime.x;
	//	double y = rogue.y - slime.y;
	//	
	//	double distance = sqrt(pow(x, 2) + pow(y, 2));
	//	
	//	if (distance >= 5.0)
	//	{
	//		printf("It is safe\n");
	//	}
	//	else
	//	{
	//		printf("target is in attack range\n");
	//	}

#pragma endregion

#pragma region 바이트 패딩
	// 멤버 변수를 메모리에서 CPU로 읽을 때 한 번에
	// 읽을 수 있도록, 컴파일러가 레지스터의 블록에
	// 맞추어 바이트를 패딩해주는 최적화 작업입니다.

	// struct Data packet = {'A', 10, 17.5};
	// 
	// printf("Data 구조체의 크기 : %u\n", sizeof(packet));
	// 
	// // 구조체의 크기는 구조체를 구성하는 멤버 중에서 크기가
	// // 가장 큰 자료형의 배수가 되도록 정렬합니다.
	// 
	// struct Ability ability = {'A', 13.325, 5};
	// 
	// printf("Ability 구조체의 크기 : %d\n", sizeof(ability));

	// 구조체 크기의 경우 멤버 변수의 순서에 따라 메모리의 크기가
	// 다르게 설정될 수 있습니다.
#pragma endregion

#pragma region 자기 참조 구조체

	//	struct Node node1 = { 10,NULL };
	//	struct Node node2 = { 20,NULL };
	//	struct Node node3 = { 30,NULL };
	//	
	//	node1.next = &node2;
	//	
	//	node2.next = &node3;
	//	
	//	node3.next = NULL;
	//	
	//	struct Node* currentNode = &node1;
	//	
	//	while (currentNode != NULL)
	//	{
	//		printf("%d ", currentNode->data);
	//	
	//		currentNode = currentNode->next;
	//	}

#pragma endregion


	return 0;
}
