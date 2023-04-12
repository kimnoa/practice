#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

class Queue {
private:
	int back_id = -1;
	vector <int>que_list;

public:

	void push(int x) {
		//back�� ���� �Ҵ�
		que_list.push_back(x);
		back_id++;
	}

	void pop() {
		if (back_id < 0)
			cout << -1 << "\n";
		else
		{
			cout << que_list.front() << "\n";
			que_list.erase(que_list.begin()); //front �� ����
			//que_list.shrink_to_fit(); //�� ���� ����
			back_id--;
		}
	}

	void size() {
		cout << que_list.size() << "\n";
	}

	void empty() {
		cout << (que_list.empty() ? 1 : 0)<< "\n";
	}

	void front() {
		if (back_id < 0)
			cout << -1 << "\n";
		else
			cout << que_list.front() << "\n";
	}


	void back() {
		if (back_id < 0)
			cout << -1 << "\n";
		else
			cout << que_list.back() << "\n";
	}
/*
	void show()
	{
		if (back_id < 0)
			cout << -1 << "\n";
		else
		{
			for (int i = 0; i < (back_id + 1); i++)
				cout << que_list[i]<<"\n";
		}
	}*/
};
/* *************************************************/

int main(void) {
	//class ����
	Queue Q;

	//var ����
	int count = 0;
	char* cmd = new char[10];
	int num = 0;

	//��� Ƚ�� �Է�
	cin >> count;

	for (int c = 0; c < count; c++)
	{
		//var �Է�
		cin >> cmd;

		//��� �з�
		if (strstr(cmd,"pu") != nullptr)
		{
			cin >> num;
			Q.push(num);
			continue;
		}
		else if (strstr(cmd, "po") != nullptr)
		{
			Q.pop();
			continue;
		}
		else if (strstr(cmd, "s") != nullptr)
		{
			Q.size();
			continue;
		}
		else if (strstr(cmd, "e") != nullptr)
		{
			Q.empty();
			continue;
		}
		else if (strstr(cmd, "f") != nullptr)
		{
			Q.front();
			continue;
		}
		else if (strstr(cmd, "b") != nullptr)
		{
			Q.back();
			continue;
		}
		//	else if (cmd.find("show") == 0) {
		//		Q.show();
		//}
	//	else
		//	cout << "input error!" << "\n";
	}
	return 0;
}

/*push X: ���� X�� ť�� �ִ� �����̴�.
pop: ť���� ���� �տ� �ִ� ������ ����, �� ���� ����Ѵ�. ���� ť�� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
size: ť�� ����ִ� ������ ������ ����Ѵ�.
empty: ť�� ��������� 1, �ƴϸ� 0�� ����Ѵ�.
front: ť�� ���� �տ� �ִ� ������ ����Ѵ�. ���� ť�� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
back: ť�� ���� �ڿ� �ִ� ������ ����Ѵ�. ���� ť�� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.*/