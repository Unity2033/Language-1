#include <stdio.h>

void main()
{
#pragma region �ּ� ������
	// ������ �ּ� ���� ��ȯ�ϴ� �������Դϴ�.

	// int data = 10;
	// 
	// printf("data������ �ּ� : %p\n", &data);

	// �������� �ּҴ� �ش� �����Ͱ� ����� �޸��� ���� �ּҸ�
	// �ǹ��ϸ�, �޸��� ������ 1 byte�� ũ��� ������ ǥ���մϴ�.
#pragma endregion

#pragma region scanf �Լ�
	// ǥ�� �Է� �Լ���, ���� ������ �����͸� �پ��� ���Ŀ�
	// ���߾� �Է����ִ� �Լ��Դϴ�.

	// int x = 0;
	// 
	// printf("x ������ ���� �Է� : ");
	// 
	// // ǥ�� �Է� �Լ��� �Է��� ������ ������ ���� �۾����� 
	// // �Ѿ �� �����ϴ�.
	// 
	// scanf_s("%d", &x); 
	// 
	// // ���۴� �����Ͱ� �̵��� �� �ӽ÷� ����Ǵ� �����̸�,
	// // ���� �����ڿ� ���� �Է��� �� �ִ� �������� ������ �����˴ϴ�.
	// 
	// printf("x ������ �� : %d\n", x);

	// ǥ�� �Է� �Լ��� �����͸� �Է��ϰ� �Ǹ� ���ۿ�
	// �����͸� �����Ͽ��ٰ� �Է��ϴ� ���� ���� ����
	// ������ ���α׷��� �����մϴ�.
#pragma endregion

#pragma region ������
	// �޸��� �ּ� ���� ������ �� �ִ� �����Դϴ�.

	// int storage = 10;
	// 
	// int position = 20;
	// 
	// int * pointer = &storage;
	// 
	// // �����Ͱ� ����Ű�� �޸� ������ �ڷ����� �� �� �����Ƿ�,
	// // �����Ͱ� ����Ű�� �޸��� �ڷ����� �������־�� �մϴ�.
	// 
	// printf("storage�� �ּ� : %p\n", &storage);
	// printf("pointer�� �� : %p\n", pointer);
	// printf("pointer�� �ּ� : %p\n\n", &pointer);
	// 
	// *pointer = 99;
	// 
	// printf("storage ������ �� : %d\n", storage);
	// printf("pointer ������ ����Ű�� �� : %d\n\n", *pointer);
	// 
	// pointer = &position;
	// 
	// *pointer = 100;
	// 
	// printf("position ������ �� : %d\n", position);
	// printf("pointer�� �� : %p\n", pointer);
	// printf("pointer ������ ����Ű�� �� : %d\n\n", *pointer);
	// 
	// // ������ ������ �ڽ��� �޸� ������ ������ ������,
	// // ������ ������ ������ �ּҸ� �����ϰ� �Ǹ� �ش� ����
	// // �� ���� �ּҸ� ����Ű�� �˴ϴ�.
	// 
	// printf("int ũ�� : %u\n", sizeof(int));
	// 
	// printf("pointer ������ ũ�� : %u\n", sizeof(pointer));

	// ������ ������ ũ��� �߾� ó�� ��ġ�� �� ���� ó���� 
	// �� �ִ� ũ��� ��������, �� ���� ó���� �� �ִ� ũ���
	// �ü���� ���� ũ�Ⱑ �����˴ϴ�.
#pragma endregion

#pragma region ���� ������
   // �ڷ����� �������� ���� ���·� ��� �ڷ�����
   // ������ �� �ִ� �������Դϴ�.

   // char rank = 'A';
   // int count = 10;
   // float angle = 3.14f;
   // 
   // void * reference = NULL;
   // 
   // reference = &rank;
   // 
   // // ���� �����ʹ� �޸� �ּҿ� �����ؼ� ����
   // // ������ �� �����ϴ�.
   // 
   // *(char *)reference = 'B';
   // 
   // printf("rank ������ �� : %c\n", rank);
   // printf("reference ������ �� : %p\n\n", reference);
   // 
   // reference = &count;
   // 
   // *(int*)reference = 50;
   // 
   // printf("count ������ �� : %d\n", count);
   // printf("reference ������ �� : %p\n\n", reference);
   // 
   // reference = &angle;
   // 
   // *(float*)reference = 45.5f;
   // 
   // printf("angle ������ �� : %f\n", angle);
   // printf("reference ������ �� : %p\n\n", reference);

   // ���� �����ͷ� ������ �޸𸮿� �����Ϸ��� ���� �����Ͱ�
   // ����Ű�� ������ �ڷ������� �� ��ȯ���־�� �մϴ�.
#pragma endregion



#pragma region ��� ���� ������
// �����Ͱ� ����Ű�� �ּҿ� ����Ǿ� �ִ� ���� ������ �� ������
// �����Ǿ� �ִ� �������Դϴ�.

// int y = 10;
// int z = 20;
// 
// const int * constPointer = &y;
// 
// // *constPointer = 99;
// 
// printf("y�� �ּ� �� : %p\n", &y);
// printf("constPointer�� �� : %p\n\n", constPointer);
// 
// constPointer = &z;
// 
// printf("z�� �ּ� �� : %p\n", &z);
// printf("constPointer�� �� : %p\n", constPointer);

#pragma endregion

#pragma region ������ ���
// ������ ������ ����Ű�� �ִ� �ּ� ���� ������ ��
// ���� �������Դϴ�.

// int protein = 10;
// int fat = 20;
// 
// int * const constReference = &protein;
// 
// *constReference = 99;
// 
// printf("constReference�� ����Ű�� �� : %d\n", *constReference);
// printf("protein ������ �� : %d\n", protein);
// 
// constReference = &fat

// ����� ������ �����ʹ� �ش� ������ ���� ������ �� ������, �ٸ� ������
// �ּҸ� ���� ������ ���� �����ϴ�. 
#pragma endregion

#pragma region ��� ������
// �̹� ������ �޸� ������ ����Ű�� �������Դϴ�.

	//	int * address = NULL;
	//	
	//	{
	//		int room = 10;
	//	
	//		address = &room;
	//	
	//		*address = 30;
	//	
	//		printf("address�� ����Ű�� �ִ� �� : %d\n", *address);
	//	}
	//	
	//	printf("address�� ����Ű�� �ִ� �� : %d\n", *address);

#pragma endregion
}
