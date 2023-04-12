#include "Linked_list.h"



//�տ� ���ο� ��� ���� �Ǵ� ����
Node_list* insertFront(struct Node_list* head) {
	struct Node_list* newNode = new struct Node_list[sizeof(struct Node_list)];
	int Data = 0;
	cin >> Data;
	newNode->data = Data;
	newNode->front = NULL;
	newNode->back = head;
	if (head != NULL)
		(head)->front = newNode;

	head = newNode; //���� ���� ���� ��尡 head

	return head;
}

//�� ��徿 �������� �̵��ϸ� ���
void traverse(struct Node_list* head) {
	struct Node_list* current = head;
	while (current != NULL) {
		printf("%d ", current->data);
		current = current->back;
	}
}

//�� ��徿 �������� �̵��ϸ� ���
void traverse_reverse(struct Node_list* head) {
	struct Node_list* current = head;
	while (current != NULL) {
		printf("%d ", current->data);
		current = current->front;
	}
}

void switch_Node(Node_list* head, int N1, int N2) {
	struct Node_list* Node1 = head;
	while (N1--) {
		Node1 = Node1->front;
	}
	while (N2--) {
		Node1 = Node1->front;
	}
}

Node_list* find_Node(Node_list* head)
{
	int Data;

	cin >> Data;

	if (head == NULL)
		return NULL;

	Node_list* findnode = head;

	while (findnode) //null�� �ɶ�����
	{
		if (findnode->data == Data)
			return findnode;
		else
			findnode = findnode->back; //�� ã���� ���� ����
	}
	return NULL; //������ ã�� ���ϸ� NULL
}

void delete_All(Node_list* head) {
	Node_list* Now = head;
	Node_list* Delete = NULL;

	while (Now) {
		Delete = Now;
		Now = Now->back;
		free(Delete);
	}
}

