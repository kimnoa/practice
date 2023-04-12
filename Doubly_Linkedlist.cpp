#include "Linked_list.h"



//앞에 새로운 노드 연결 또는 생성
Node_list* insertFront(struct Node_list* head) {
	struct Node_list* newNode = new struct Node_list[sizeof(struct Node_list)];
	int Data = 0;
	cin >> Data;
	newNode->data = Data;
	newNode->front = NULL;
	newNode->back = head;
	if (head != NULL)
		(head)->front = newNode;

	head = newNode; //이제 새로 생긴 노드가 head

	return head;
}

//한 노드씩 다음으로 이동하며 출력
void traverse(struct Node_list* head) {
	struct Node_list* current = head;
	while (current != NULL) {
		printf("%d ", current->data);
		current = current->back;
	}
}

//한 노드씩 이전으로 이동하며 출력
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

	while (findnode) //null이 될때까지
	{
		if (findnode->data == Data)
			return findnode;
		else
			findnode = findnode->back; //못 찾으면 다음 노드로
	}
	return NULL; //끝까지 찾지 못하면 NULL
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

