#include <stdio.h>

void main()
{
#pragma region 배열
	// 같은 자료형의 변수들로 이루어진 유한 집합입니다.

	// int list[5];
	// 
	// // 배열의 경우 첫 번째 원소는 0부터 시작합니다.
	// 
	// list[0] = 10;
	// list[1] = 20;
	// list[2] = 30;
	// list[3] = 40;
	// list[4] = 50;
	// 
	// for (int i = 0; i < 5; i++)
	// {
	// 	list[i] = (i + 1) * 10;
	// 
	// 	printf("list[%d] : %d\n", i, list[i]);
	// }

	// 배열의 메모리 공간은 프로그램이 실행되는 동안
	// 변경할 수 없습니다.

	//	int array[ ] = { 1, 2, 3, 4, 5 };
	//	
	//	int size = sizeof(array) / sizeof(int);
	//	
	//	int * pointer = &array;
	//	
	//	for (int i = 0; i < size; i++)
	//	{
	//		printf("array[%d]의 값 : %d\n", i, array[i]);
	//	}
	//	
	//	// 배열의 크기는 생략할 수 있으며, 초기화 목록에서
	//	// 설정한 요소에 따라 배열의 크기가 결정됩니다.
	//	
	//	printf("배열의 시작 주소 : %p\n", array);
	//	
	//	pointer = pointer + 1;
	//	
	//	*pointer = 22;
	//	
	//	printf("pointer 변수의 값 : %p\n", pointer);
	//	printf("array[1]의 값 : %d\n", array[1]);

	// 배열은 연속적인 메모리 공간을 가지며, 배열의 이름은
	// 배열의 시작 주소를 가리킵니다.
#pragma endregion

#pragma region 문자열
	// 연속적인 메모리 공간에 저장된 문자 변수의
	// 집합입니다.

	// const char * character = "Game";
	// 
	// char word [ ] = { 'S', 'l', 'e','e','p', '\0'};
	// 
	// char message [ ] = "Message";
	// 
	// // character[0] = 'C';
	// 
	// printf("character가 가리키는 문자열 : %s\n", character);
	// 
	// word[0] = 'C';
	// 
	// printf("word의 값 : %s\n", word);
	// 
	// // 문자열의 경우 포인터 이용하여 문자열 상수를 가리키도록 할 
	// // 수 있으며, 문자열 상수는 데이터 영역의 읽기 전용 공간에 
	// // 저장되기 때문에 문자열의 값을 변경할 수 없습니다.
	// 
	// character = "Exercise";
	// 
	// printf("character가 가리키는 문자열 : %s\n", character);
	// 
	// // 문자열은 공백도 함께 메모리 공간에 포함하여 크기가 결정되며,
	// // 마지막에 문자열의 끝을 알려주는 제어 문자가 추가됩니다.
	// 
	// character = "Show\0er";
	// 
	// printf("character가 가리키는 문자열 : %s\n", character);

	// 문자열의 경우 서로 연속적인 메모리 공간으로 연결되어 있지만,
	// 문자 배열 사이에 무효의 문자를 넣게 되면 무효의 문자까지만 출력합니다.
#pragma endregion

#pragma region (2)차원 배열
	// 배열의 요소로 또 다른 배열을 가지는 배열입니다.

	//	int array2D[3][3] =
	//	{
	//		{1,2,3},
	//		{4,5,6},
	//		{7,8,9},
	//	};
	//	
	//	for (int i = 0; i < 3; i++)
	//	{
	//		for (int j = 0; j < 3; j++)
	//		{
	//			printf("%d ", array2D[i][j]);
	//		}
	//	
	//		printf("\n");
	//	}

	// 2차원 배열은 행과 열로 구분되며, 앞에 있는 배열은
	// 열을 의미하고, 뒤에 있는 배열은 행을 의미합니다.

#pragma endregion
}
