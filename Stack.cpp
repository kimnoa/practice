#include <iostream>
#include <string.h>
#include <vector>
#include <cstring>

using namespace std;

class Stack {
private:
	int top_id = -1;
	vector <int>stack_list;

public:

	//�迭 ����
	int* new_stack(int top_id) {
		int* stack = new int[(top_id + 1) * sizeof(int)];
		return stack;
	}

	void push(int x) {

		//�޸� �߰�
		stack_list.reserve((++top_id + 1) * sizeof(int));

		//���� �Ҵ�
		stack_list.emplace_back(x);

	}

	void pop() {
		if (top_id < 0)
			cout << -1<<endl;
		else
		{
			cout << stack_list.back() << endl;
			stack_list.pop_back(); //������ �� ����
			stack_list.shrink_to_fit(); //�� ���� ����
			top_id--;
		}
	}

	void size() {
		cout << stack_list.size() << endl;
	}

	void empty() {
		if (top_id < 0)
			cout << 1 << endl;
		else
			cout << 0 << endl;
	}

	void top() {
		if (top_id < 0)
			cout << -1 << endl;
		else
			cout << stack_list.back() << endl;
	}

};
/* *************************************************/

int main(void) {
	//class ����
	Stack S;

	//var ����
	int count = 0;
	char cmd[20] = { 0 };
	char* cp = cmd;
	int x = 0;
	int num = 0;

	//��� Ƚ�� �Է�
	cin >> count;

	for (int c = 0; c < count; c++)
	{
		//var �Է�
		cin >> cmd;

		//��� �з�
		if (strstr(cp, "push") != nullptr)
		{
			cin >> num;
			x = num;
			S.push(x);
		}
		else if (strstr(cp, "pop") != nullptr)
			S.pop();
		else if (strstr(cp, "size") != nullptr)
			S.size();
		else if (strstr(cp, "empty") != nullptr)
			S.empty();
		else if (strstr(cp, "top") != nullptr)
			S.top();
		else
			cout << "input error!" << endl;

		//cmd �ʱ�ȭ
		strcpy_s(cmd,20,"");
	}
	return 0;
}

/*push X: ���� X�� ���ÿ� �ִ� �����̴�.
pop: ���ÿ��� ���� ���� �ִ� ������ ����, �� ���� ����Ѵ�. ���� ���ÿ� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
size: ���ÿ� ����ִ� ������ ������ ����Ѵ�.
empty: ������ ��������� 1, �ƴϸ� 0�� ����Ѵ�.
top: ������ ���� ���� �ִ� ������ ����Ѵ�. ���� ���ÿ� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.*/