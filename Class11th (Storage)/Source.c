#include <stdio.h>

int stage = 1;

void Information()
{
	const char* name = "Mellow Bunny Run";

	printf("stage : %d\n", stage);

	printf("name : %s\n", name);
}

void Increase()
{
	static int score = 0;

	score = score + 1;

	printf("score ������ �� : %d\n", score);
}

int main()
{
#pragma region �޸� ����

#pragma region Code ����
	// ���α׷��� �����ϱ� ���� �ʿ��� �ڵ尡 ����Ǵ� ��������
	// �Լ��� �ּҿ� ����� ����Ǵ� �޸� �����Դϴ�.

#pragma endregion

#pragma region Data ����
	// ���α׷��� ���۰� �Բ� �޸𸮿� ����Ǹ�, ���α׷��� 
	// ����� �� �޸𸮰� �����ǰ�, �ʱ�ȭ�� �̷���� ����
	// ������ ���� ������ ����Ǵ� �޸� �����Դϴ�.
#pragma endregion

#pragma region BSS ����
	// ���α׷��� ����� �� �ʱ�ȭ�� �̷������ ���� ���� ������
	// ���� ������ ����Ǵ� �޸� �����Դϴ�.

#pragma endregion

#pragma region Stack ����
	// ���α׷��� �ڵ����� ����ϴ� �ӽ� �޸� ��������
	// �Լ� ȣ�� �� �����Ǵ� ���� ������ �Ű� ������ ����
	// �Ǵ� �޸� �����Դϴ�.
#pragma endregion

#pragma region Heap ����
	// ����ڰ� ���� �޸� ������ �Ҵ����ִ� �޸�
	// �����̸�, ������� �ʴ� ��� ����� ���� �޸𸮸�
	// �����ؾ� �Ǵ� �޸� �����Դϴ�.

#pragma endregion

#pragma endregion

#pragma region ������ ����

#pragma region ���� ����
	// �Լ� ���ο��� ����� ������ �Լ� ���ο����� ������ �� ������,
	// �Լ��� ����Ǿ��� �� �޸𸮿��� ������� Ư¡�� ������ �ִ� �����Դϴ�.

	//	int x = 10;
	//	
	//	{
	//		int x = 20;
	//	
	//		printf("x ������ �� : %d\n", x);
	//	}
	//	
	//	printf("x ������ �� : %d\n", x);

#pragma endregion

#pragma region ���� ����
	// �Լ� �ܺο��� ����� ������ ���α׷��� ����� �� 
	// �޸𸮿� �ö󰡰� �Ǹ�, ���α׷��� ����Ǹ� �޸�
	// ���� �����Ǵ� �����Դϴ�.

	// Information();
	// 
	// printf("���� ������ �ּ� : %p\n", &stage);

#pragma endregion

#pragma region ���� ����
	// ���� ������ Ư���� �����鼭 ���� ������ Ư���� ������ ������,
	// �� �� ���� �ʱ�ȭ�� �̷������ ���α׷��� ����� �� �޸𸮿��� 
	// �����ǰ�, ���α׷��� ����Ǹ� �޸𸮿��� �����Ǵ� �����Դϴ�.

	// Increase();
	// Increase();
	// Increase();

#pragma endregion

#pragma endregion

	return 0;
}
