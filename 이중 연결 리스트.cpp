#include "Linked_list.h"

//������ȣ 3045�� ���� ���Ḯ��Ʈ
//��� �߰�

int main(void) {

	Node_list* head = NULL;
	Node_list* tail = NULL;
	Node_list* find = NULL;

	string cmd;
	while (1)
	{
		cin >> cmd; //��� �Է�

		if (cmd == "add")
		{
			tail = insertFront(tail);
			if (head == NULL)
				head = tail; //�� �հ� �� �ڸ� ����
		}
		else if (cmd == "find")
		{
			find = find_Node(head);
			if (find == NULL)
				cout << "NONE" << "\n";
			else
				cout << find->data << "\n";

			find = NULL;
		}
		else if (cmd == "show")
		{
			cin >> cmd; // ���� ���� �ε�
			if (cmd == "0")
			{
				traverse(tail);
				cout << "\n";
			}
			else
			{
				traverse_reverse(head);
				cout << "\n";
			}
		}
		else if (cmd == "clear")
			delete_All(tail);
		else if (cmd == "exit")
			break;
		else
			cout << "wrong command" << "\n";
		
		//cmd = "";
	}
	return 0;
}























/*
int main(void) 
{
	
	int Node = 0, Count = 0;
	char cmd = '\0';
	int node_move = 0, node_fix = 0;

	cin >> Node >> Count;

	Node_list* head = new Node_list; //��� ��� ����

	for (int i = 1; i < Node; i++)
	{
		insertFront(&head, i); //�ʿ��� ��� ���̱�
	}

	while (Count--) {
		cin >> cmd >> node_move >> node_fix;


	}
	

	return 0;
}
*/