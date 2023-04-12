#include <string.h>

class Str
{
public:


	//leng�� ���̸� ���� ���ڿ� Ŭ���� ������
	Str(int leng) {
		char* str = new char[leng]; //str�� ������ �迭 ���� �� �޸� �Ҵ�
		len = leng; //string�� ���� ����
	}

	// �ʱ�ȭ�� neyong�� ��
	Str(char* neyong) {  
		str = neyong; //str�� neyong�� ����
	}
		
	~Str() { //�Ҹ���
		delete[] str; //������ �迭 ���� �� �޸� ��ȯ

	}

	//str�� ���� len�� ��ȯ
	int length(void)
	{
		return len; //len = str ����
	}
	//string�� ����(str)�� ��ȯ
	char* contents(void) {
		return str; //str = string�� ����
	}

	//a�� ����� strcmp
	//strcmp�� �� ������ �� ���ھ� �����Ͽ� ���Ѵ�. ������ �����ϸ� 0, 
	//���� �ٸ� ���ڰ� ������ �� ������ ���ڰ� �ռ��� ����, �� ������ ���ڰ� �ռ��� ���
	int compare(class Str& a){
		return strcmp(a, str);
	}

	//a�� ����� strcmp
	int compare(const char* a) {
		return strcmp(a, str);
	}

	//a�� string�� ���� ����
	void operator=(char* a) { // =�����ε�
		strcpy(str, a);
	}

	//Str�� ������ a�� ����
	void operator=(class Str& a) { // =�����ε�


	}

private:
	char* str; //���ڿ��� ����
	int len; //���ڿ��� ����
};

int main(void)
/*888888888888888888888888888888888888888888888888888888888888888888888888888*/
#include <iostream>
#include <cstring>

using namespace std;

class Str {
private:
	char* str; // ���ڿ��� ������ ���� �޸�
	int len; // ���ڿ��� ����

public:
	Str(const char* s = "") { // ������
		len = strlen(s); // ���ڿ��� ���� ���
		str = new char[len + 1]; // ���ڿ��� ������ ���� �޸� �Ҵ�
		strcpy(str, s); // ���ڿ� ����
	}

	Str(const Str& s) { // ���� ������
		len = s.len; // ���ڿ��� ���� ����
		str = new char[len + 1]; // ���ڿ��� ������ ���� �޸� �Ҵ�
		strcpy(str, s.str); // ���ڿ� ����
	}

	~Str() { // �Ҹ���
		delete[] str; // ���� �޸� ��ȯ
	}

	const char* contents() const { // ���ڿ� ��ȯ
		return str;
	}

	int compare(const char* s) const { // ���ڿ� ��
		return strcmp(str, s);
	}

	Str& operator=(const char* s) { // ���� ������
		if (len != strlen(s)) { // ���ڿ��� ���̰� �ٸ� ���
			delete[] str; // ���� ���� �޸� ��ȯ
			len = strlen(s); // ���ڿ��� ���� ���
			str = new char[len + 1]; // ���ڿ��� ������ ���� �޸� �Ҵ�
		}
		strcpy(str, s); // ���ڿ� ����
		return *this;
	}

	Str& operator=(const Str& s) { // ���� ������
		if (this != &s) { // �����ϴ� ��ü�� ���ԵǴ� ��ü�� �ٸ� ���
			if (len != s.len) { // ���ڿ��� ���̰� �ٸ� ���
				delete[] str; // ���� ���� �޸� ��ȯ
				len = s.len; // ���ڿ��� ���� ����
				str = new char[len + 1]; // ���ڿ��� ������ ���� �޸� �Ҵ�
			}
			strcpy(str, s.str); // ���ڿ� ����
		}
		return *this;
	}
};
