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
#pragma region ����ü
	// ���� ���� ������ �ϳ��� �������� ����ȭ�� ����
	// �ϳ��� ��ü�� �����ϴ� ���Դϴ�.

	// struct Object object = {'B', 10, 6.25f};
	// 
	// printf("object�� character : %c\n", object.character);
	// printf("object�� integer : %d\n", object.integer);
	// printf("object�� decimal : %f\n\n", object.decimal);
	// 
    // // ����ü�� �� ����� ����ü ���𿡼� ��Ÿ���� ������� �ʱ�ȭ�˴ϴ�. 
    // // �� ������ �ʱ�ȭ ����� ������ ���ʿ��� ���������� �����Ǵ� ����Դϴ�.
	// 
	// object.character = 'A';
	// object.integer = 100;
	// object.decimal = 36.5f;
	// 
	// printf("object�� character : %c\n", object.character);
	// printf("object�� integer : %d\n", object.integer);
	// printf("object�� decimal : %f\n", object.decimal);

	// ����ü�� �����ϱ� ���� ����ü�� �޸� ������ 
	// �������� �����Ƿ�, ����ü ���ο� �ִ� �����͸�
	// �ʱ�ȭ�� �� �����ϴ�.

#pragma endregion

#pragma region ����Ʈ �е�
	// ��� ������ �޸𸮿��� CPU�� ���� �� �� ����
	// ���� �� �ֵ���, �����Ϸ��� ���������� ��Ͽ� 
	// ���߾� ����Ʈ�� �д����ִ� ����ȭ �۾��Դϴ�.
    
	// struct Stat stat;
	// 
	// printf("Stat ����ü�� ũ�� : %d\n", sizeof(stat));
	// 
	// // ����ü�� ũ��� ����ü�� �����ϴ� ��� �߿��� ũ�Ⱑ
	// // ���� ū �ڷ����� ����� �ǵ��� �����մϴ�.
	// 
	// struct Vector3 vector3;
	// 
	// printf("Vector3 ����ü�� ũ�� : %d\n", sizeof(vector3));

    // ����ü ũ���� ��� ��� ������ ������ ���� �޸��� ũ�Ⱑ
	// �ٸ��� ������ �� ������, ����ü ũ�⸦ �����ϴ� ���´� �⺻
	// �ڷ������θ� �����˴ϴ�.
#pragma endregion

#pragma region �� �� ������ �Ÿ�

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
