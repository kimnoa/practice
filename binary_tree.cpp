#include <iostream>

using namespace std;

//template <typename T>

int main(void) {

	int n_of_nodes = 0; //��� ����

	cin >> n_of_nodes;
	
	int* node_list = new int[n_of_nodes-1]; //2~������ ������ ����

	for (int i = 0; i < n_of_nodes - 1; i++) //��ü �迭 ����� n -1 ��
	{
		node_list[i] = 0; //�ʱ�ȭ
	}

	int node1 = 0, node2 = 0; //����� �� ���

	int index = n_of_nodes; //while�� ����

	while (index > 1) {

		cin >> node1 >> node2; //��� 2�� �Է�
		if (node_list[max(node1, node2) - 2] == 0) {

			node_list[max(node1, node2) - 2] = min(node1, node2); 
			// 2~������ ��忡 ���Ͽ� �ڽ� ����� ��ġ�� �θ� ��带 ����

		}
		else
		{
			node_list[min(node1, node2) - 2] = max(node1, node2);
		}
		

		index--;
	}
	
	for (int i=0; i < n_of_nodes-1; i++)
	{
		cout << node_list[i] << "\n";
	}

	return 0;
}