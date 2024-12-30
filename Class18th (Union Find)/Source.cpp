#include <iostream>

#define SIZE 7

using namespace std;

class Graph
{
private:
	int parent[SIZE];

public:
	Graph()
	{
		for (int i = 1; i < SIZE; i++)
		{
			parent[i] = i;
		}
	}

	int Find(int x)
	{
		if (x == parent[x])
		{
			return x;
		}
		else
		{
			return parent[x] = Find(parent[x]);
		}
	}

	void Union(int x, int y)
	{
		x = Find(x);
		y = Find(y);

		if (x < y)
		{
			parent[y] = x;
		}
		else
		{
			parent[x] = y;
		}
	}

	bool Same(int x, int y)
	{
		return Find(x) == Find(y);
	}

};

int main()
{
#pragma region 유니온 파인드
	// 여러 노드가 존재할 때 어떤 노드가 다른 노드와 
	// 연결되어 있는 지 확인하는 알고리즘입니다.

	// Union 연산 : 특정한 두 개의 노드를 같은 집합으로 합치는 연산입니다.

	// Find 연산	: 특정한 노드가 어느 집합에 있는 지 확인하는 연산입니다.

	Graph graph;

	graph.Union(1, 2);
	graph.Union(5, 6);
	graph.Union(2, 5);

	cout << graph.Same(1, 5) << endl;
	cout << graph.Same(1, 3) << endl;

	// 시간 복잡도 
	// O(M log n) : M은 연산의 개수, N은 노드의 개수
	// M이 N²에 가까울 때는 O(N²logN)이 됩니다.
#pragma endregion

	return 0;
}