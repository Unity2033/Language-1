#include <stdio.h>
#include <stdlib.h>

int main()
{
#pragma region ���� �Ҵ�
	// ���α׷��� �����ϴ� �߿� �ʿ��� ��ŭ �޸𸮸� �Ҵ�
	// �ϴ� �۾��Դϴ�.

	int * pointer = malloc(sizeof(int));

	*pointer = 10;

	printf("pointer ������ ����Ű�� �� : %d\n", *pointer);

	// ���� �Ҵ��� ���� �ð��� ���������� �޸��� ũ�⸦ 
	// �����ų �� ������, �������� �޸��� ũ�⸦ �Ҵ��� ��
	// ����Ʈ ������ �����մϴ�.

	free(pointer);

	// �������� �Ҵ��� �޸𸮴� �� ������ �����Ǿ� �����Ƿ�,
	// ��� ������ ���� ������ ���־�� �մϴ�.

#pragma endregion


	return 0;
}
