#include <stdio.h>

void main()
{
#pragma region 반복문
	// 프로그램 내에서 특정한 작업을 반복적으로
	// 수행하는 명령문입니다.

#pragma region 증감 연산자
	// 피연산자를 하나씩 증가시키거나 감소시킬 때 
	// 사용하는 연산자입니다.

	// int code = 0;
	// 
	// int packet = ++code;
	// 
	// printf("code 변수를 전위 증가한 값 : %d\n", code);
	// printf("packet 변수의 값 : %d\n", packet);
	// 
	// packet = --code;
	// 
	// printf("code 변수를 전위 감소한 값 : %d\n", code);
	// printf("packet 변수의 값 : %d\n", packet);

	// 전위 증감 연산자는 변수의 값을 증감시킨 후에 
	// 연산을 수행합니다

	// int data = 0;
	// 
	// int storage = data++;
	// 
	// printf("data 변수를 후위 증가한 값 : %d\n", data);
	// printf("storage 변수의 값 : %d\n", storage);
	// 
	// storage = data--;
	// 
	// printf("data 변수를 후위 감소한 값 : %d\n", data);
	// printf("storage 변수의 값 : %d\n", storage);

	// 후위 증감 연산자는 연산을 수행한 다음 변수의 값을 증감시킵니다.
#pragma endregion

#pragma region for문
	// 초기식을 연산하여 조건식의 결과에 따라 특정한
	// 횟수만큼 반복하는 반복문입니다.

	//	for (int i = 0; i < 5; i++)
	//	{
	//		printf("update\n");
	//	}
#pragma endregion

#pragma region while문
	// 특정 조건을 만족할 때까지 계속해서 주어진 명령문을
	// 실행하는 반복문입니다.

	//	int count = 5;
	//	
	//	while (count > 0)
	//	{
	//		printf("count : %d\n", count);
	//	
	//		count--;
	//	}

	// while문의 경우 위에서 아래로 실행되며, 아래에 있는
	// 명령문의 실행이 다 끝나면 다시 위에 있는 명령문으로
	// 돌아가서 반복하는 구조입니다.
#pragma endregion

#pragma region do-while문
	// 조건과 상관없이 한 번의 작업을 수행한 다음 조건에
	// 따라 명령문을 실행하는 반복문입니다.

	//	int life = 0;
	//	
	//	do
	//	{
	//		printf("Alive...");
	//	} while (life > 0);

#pragma endregion

#pragma region continue문
	// 해당 조건문만 실행하지 않고, 반복문은 이어서
	// 실행하는 제어문입니다.

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

#pragma region 중첩 반복문
	// 반복문 안에 새로운 반복문이 들어 있는 형태의
	// 반복문입니다.

	for (int i = 1; i < 10; i++)
	{
		printf("구구단 %d단\n\n", i);

		for (int j = 1; j < 10; j++)
		{
			printf("%d x %d = %d\n", i, j, i * j);
		}

		printf("\n");
	}

#pragma endregion

#pragma endregion
}
