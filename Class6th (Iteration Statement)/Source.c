#include <stdio.h>

void main()
{
#pragma region �ݺ���
	// ���α׷� ������ Ư���� �۾��� �ݺ�������
	// �����ϴ� ��ɹ��Դϴ�.

#pragma region ���� ������
	// �ǿ����ڸ� �ϳ��� ������Ű�ų� ���ҽ�ų �� 
	// ����ϴ� �������Դϴ�.

	// int code = 0;
	// 
	// int packet = ++code;
	// 
	// printf("code ������ ���� ������ �� : %d\n", code);
	// printf("packet ������ �� : %d\n", packet);
	// 
	// packet = --code;
	// 
	// printf("code ������ ���� ������ �� : %d\n", code);
	// printf("packet ������ �� : %d\n", packet);

	// ���� ���� �����ڴ� ������ ���� ������Ų �Ŀ� 
	// ������ �����մϴ�

	// int data = 0;
	// 
	// int storage = data++;
	// 
	// printf("data ������ ���� ������ �� : %d\n", data);
	// printf("storage ������ �� : %d\n", storage);
	// 
	// storage = data--;
	// 
	// printf("data ������ ���� ������ �� : %d\n", data);
	// printf("storage ������ �� : %d\n", storage);

	// ���� ���� �����ڴ� ������ ������ ���� ������ ���� ������ŵ�ϴ�.
#pragma endregion

#pragma region for��
	// �ʱ���� �����Ͽ� ���ǽ��� ����� ���� Ư����
	// Ƚ����ŭ �ݺ��ϴ� �ݺ����Դϴ�.

	//	for (int i = 0; i < 5; i++)
	//	{
	//		printf("update\n");
	//	}
#pragma endregion

#pragma region while��
	// Ư�� ������ ������ ������ ����ؼ� �־��� ��ɹ���
	// �����ϴ� �ݺ����Դϴ�.

	//	int count = 5;
	//	
	//	while (count > 0)
	//	{
	//		printf("count : %d\n", count);
	//	
	//		count--;
	//	}

	// while���� ��� ������ �Ʒ��� ����Ǹ�, �Ʒ��� �ִ�
	// ��ɹ��� ������ �� ������ �ٽ� ���� �ִ� ��ɹ�����
	// ���ư��� �ݺ��ϴ� �����Դϴ�.
#pragma endregion

#pragma region do-while��
	// ���ǰ� ������� �� ���� �۾��� ������ ���� ���ǿ�
	// ���� ��ɹ��� �����ϴ� �ݺ����Դϴ�.

	//	int life = 0;
	//	
	//	do
	//	{
	//		printf("Alive...");
	//	} while (life > 0);

#pragma endregion

#pragma region continue��
	// �ش� ���ǹ��� �������� �ʰ�, �ݺ����� �̾
	// �����ϴ� ����Դϴ�.

	//	for (int i = 1; i <= 5; i++)
	//	{
	//		if (i == 3) 
	//		{
	//			continue;
	//		}
	//	
	//		printf("%d ", i);
	//	}

#pragma endregion

#pragma region ��ø �ݺ���
	// �ݺ��� �ȿ� ���ο� �ݺ����� ��� �ִ� ������
	// �ݺ����Դϴ�.

	//	for (int i = 1; i < 10; i++)
	//	{
	//		printf("������ %d��\n\n", i);
	//	
	//		for (int j = 1; j < 10; j++)
	//		{
	//			printf("%d x %d = %d\n", i, j, i * j);
	//		}
	//	
	//		printf("\n");
	//	}

#pragma endregion

#pragma endregion
}
