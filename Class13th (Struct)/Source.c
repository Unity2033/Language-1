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
#pragma region ����ü
	// ���� ���� ������ �ϳ��� �������� ����ȭ�� ����
	// �ϳ��� ��ü�� �����ϴ� ���Դϴ�.

	// struct Data data = {'B', 50, 75.625};
	// 
	// printf("data�� grade : %c\n", data.grade);
	// printf("data�� health : %d\n", data.health);
	// printf("data�� experience : %lf\n\n", data.experience);
	// 
	// // ����ü�� �� ����� ����ü ���𿡼� ��Ÿ���� ������� �ʱ�ȭ�˴ϴ�.
	// // �� ������ �ʱ�ȭ ����� ������ ���ʿ������� ���������� �����˴ϴ�.
	// 
	// data.grade = 'A';
	// data.health = 100;
	// data.experience = 135.75;
	// 
	// printf("data�� grade : %c\n", data.grade);
	// printf("data�� health : %d\n", data.health);
	// printf("data�� experience : %lf\n", data.experience);

	// ����ü�� �����ϱ� ���� ����ü�� �޸� ������
	// �������� �����Ƿ�, ����ü ���ο� �ִ� �����͸�
	// �ʱ�ȭ�� �� �����ϴ�.
#pragma endregion

#pragma region �� �� ������ �Ÿ�

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

#pragma region ����Ʈ �е�
	// ��� ������ �޸𸮿��� CPU�� ���� �� �� ����
	// ���� �� �ֵ���, �����Ϸ��� ���������� ��Ͽ�
	// ���߾� ����Ʈ�� �е����ִ� ����ȭ �۾��Դϴ�.

	// struct Data packet = {'A', 10, 17.5};
	// 
	// printf("Data ����ü�� ũ�� : %u\n", sizeof(packet));
	// 
	// // ����ü�� ũ��� ����ü�� �����ϴ� ��� �߿��� ũ�Ⱑ
	// // ���� ū �ڷ����� ����� �ǵ��� �����մϴ�.
	// 
	// struct Ability ability = {'A', 13.325, 5};
	// 
	// printf("Ability ����ü�� ũ�� : %d\n", sizeof(ability));

	// ����ü ũ���� ��� ��� ������ ������ ���� �޸��� ũ�Ⱑ
	// �ٸ��� ������ �� �ֽ��ϴ�.
#pragma endregion

#pragma region �ڱ� ���� ����ü

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
