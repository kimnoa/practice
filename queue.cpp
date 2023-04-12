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
		//back에 정수 할당
		que_list.push_back(x);
		back_id++;
	}

	void pop() {
		if (back_id < 0)
			cout << -1 << "\n";
		else
		{
			cout << que_list.front() << "\n";
			que_list.erase(que_list.begin()); //front 값 제거
			//que_list.shrink_to_fit(); //빈 공간 제거
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
	//class 생성
	Queue Q;

	//var 생성
	int count = 0;
	char* cmd = new char[10];
	int num = 0;

	//명령 횟수 입력
	cin >> count;

	for (int c = 0; c < count; c++)
	{
		//var 입력
		cin >> cmd;

		//명령 분류
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

/*push X: 정수 X를 큐에 넣는 연산이다.
pop: 큐에서 가장 앞에 있는 정수를 빼고, 그 수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
size: 큐에 들어있는 정수의 개수를 출력한다.
empty: 큐가 비어있으면 1, 아니면 0을 출력한다.
front: 큐의 가장 앞에 있는 정수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
back: 큐의 가장 뒤에 있는 정수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.*/