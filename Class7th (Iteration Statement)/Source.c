#include <stdio.h> 

void main()
{
#pragma region �ݺ���
	// ���α׷� ������ Ư���� �۾��� �ݺ�������
	// �����ϴ� ���ɹ��Դϴ�.

#pragma region ���� ������
	// �ǿ����ڸ� �ϳ��� ������Ű�ų� ���ҽ�ų ��
	// ����ϴ� �������Դϴ�.

	// int x = 0;
	// 
	// int vectorX = ++x;
	// 
	// printf("���� ������ x�� �� : %d\n", x);
	// printf("vectorX�� �� : %d\n", vectorX);
	// 
	// vectorX = --x;
	// 
	// printf("���� ������ x�� �� : %d\n", x);
	// printf("vectorX�� �� : %d\n", vectorX);

	// ���� ���� �����ڴ� ������ ���� ������Ų �Ŀ�
	// ������ �����մϴ�.

	// int y = 0;
	// 
	// int vectorY = y++;
	// 
	// printf("���� ������ y�� �� : %d\n", y);
	// printf("vectorY�� �� : %d\n", vectorY);
	// 
	// vectorY = y--;
	// 
	// printf("���� ������ y�� �� : %d\n", y);
	// printf("vectorY�� �� : %d\n", vectorY);

	// ���� ���� �����ڴ� ������ ������ ���� ������
	// ���� ������ŵ�ϴ�.
#pragma endregion

#pragma region for��
	// �ʱ���� �����Ͽ� ���ǽ��� ����� ���� Ư����
	// Ƚ����ŭ �ݺ��ϴ� �ݺ����Դϴ�.

	// for (int i = 0; i < 5; i++)
	// {
	// 		printf("Execute...\n");
	// }

	// for���� ��� ������ ������ ���¿� �ݴ�� �ʱ����
	// �����ϰ� �Ǹ� ������ ��ġ���� �ʾ� ��� �ݺ�������
	// ����Ǵ� ������ �߻��մϴ�.
#pragma endregion

#pragma region while��
	// Ư�� ������ ������ ������ ����ؼ� �־���
	// ���ɹ��� �����ϴ� �ݺ����Դϴ�.

	//	int count = 1;
	//	
	//	while (count <= 5)
	//	{
	//		printf("%d ", count);
	//	
	//		count++;
	//	}

	// while���� ��� ������ �Ʒ��� ����Ǹ�,
	// �Ʒ��� �ִ� ���ɹ��� ������ �� ������ 
	// �ٽ� ���� �ִ� ���ɹ����� ���ư��� �����մϴ�.
#pragma endregion

#pragma region do while��
	// ���ǰ� ������� �� ���� �۾��� ������ ����
	// ���ǿ� ���� ���ɹ��� �����ϴ� �ݺ����Դϴ�.

	//	int connection = 0;
	//	
	//	do
	//	{
	//		printf("Connection...");
	//	} 
	//	while (connection > 0);

#pragma endregion

#pragma region continue��
	// �ش� ���ǹ��� �������� �ʰ�, �ݺ����� �̾
	// �����ϴ� ����Դϴ�.

	// for (int i = 1; i <= 10; i++)
	// {
	// 	if (i % 3 == 0)
	// 	{
	// 		continue;
	// 	}
	// 
	// 	printf("%d\n", i);
	// }

#pragma endregion

#pragma region ���� �� ���
	// ����� �����ϴ� ���߿� ����� �̹� Ȯ���� ���,
	// ������ ����ϴ� ������ �����ϴ� ���Դϴ�.

	// int x = 0;
	// int y = 0;
	// int z = 0;
	// 
	// if (x == 0 && y++)
	// {
	// 	printf("Short Circuit\n");
	// }
	// 
	// if (z != 0 || y++)
	// {
	// 	printf("OR Operator");
	// }
	// 
	// printf("y�� �� : %d\n", y);

#pragma endregion

#pragma region (2)�� for��

//	for (int i = 0; i < 3; i++)
//	{
//		printf("i�� �� : %d\n", i);
//	
//		for (int j = 0; j < 3; j++)
//		{
//			printf("j�� �� : %d\n", j);
//		}
//	
//		printf("\n");
//	}

#pragma endregion

#pragma endregion
}