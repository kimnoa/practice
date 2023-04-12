#include <string.h>

class Str
{
public:


	//leng의 길이를 가진 문자열 클래스 생성자
	Str(int leng) {
		char* str = new char[leng]; //str에 문자형 배열 생성 및 메모리 할당
		len = leng; //string의 길이 저장
	}

	// 초기화할 neyong이 들어감
	Str(char* neyong) {  
		str = neyong; //str에 neyong을 대입
	}
		
	~Str() { //소멸자
		delete[] str; //생성한 배열 삭제 및 메모리 반환

	}

	//str의 길이 len를 반환
	int length(void)
	{
		return len; //len = str 길이
	}
	//string의 내용(str)을 반환
	char* contents(void) {
		return str; //str = string의 내용
	}

	//a의 내용과 strcmp
	//strcmp는 두 문장을 한 문자씩 대응하여 비교한다. 완전히 동일하면 0, 
	//서로 다른 문자가 만나면 앞 문장의 문자가 앞서면 음수, 뒷 문장의 문자가 앞서면 양수
	int compare(class Str& a){
		return strcmp(a, str);
	}

	//a의 내용과 strcmp
	int compare(const char* a) {
		return strcmp(a, str);
	}

	//a에 string의 값을 대입
	void operator=(char* a) { // =오버로딩
		strcpy(str, a);
	}

	//Str의 내용을 a에 대입
	void operator=(class Str& a) { // =오버로딩


	}

private:
	char* str; //문자열을 저장
	int len; //문자열의 길이
};

int main(void)
/*888888888888888888888888888888888888888888888888888888888888888888888888888*/
#include <iostream>
#include <cstring>

using namespace std;

class Str {
private:
	char* str; // 문자열을 저장할 동적 메모리
	int len; // 문자열의 길이

public:
	Str(const char* s = "") { // 생성자
		len = strlen(s); // 문자열의 길이 계산
		str = new char[len + 1]; // 문자열을 저장할 동적 메모리 할당
		strcpy(str, s); // 문자열 복사
	}

	Str(const Str& s) { // 복사 생성자
		len = s.len; // 문자열의 길이 복사
		str = new char[len + 1]; // 문자열을 저장할 동적 메모리 할당
		strcpy(str, s.str); // 문자열 복사
	}

	~Str() { // 소멸자
		delete[] str; // 동적 메모리 반환
	}

	const char* contents() const { // 문자열 반환
		return str;
	}

	int compare(const char* s) const { // 문자열 비교
		return strcmp(str, s);
	}

	Str& operator=(const char* s) { // 대입 연산자
		if (len != strlen(s)) { // 문자열의 길이가 다를 경우
			delete[] str; // 기존 동적 메모리 반환
			len = strlen(s); // 문자열의 길이 계산
			str = new char[len + 1]; // 문자열을 저장할 동적 메모리 할당
		}
		strcpy(str, s); // 문자열 복사
		return *this;
	}

	Str& operator=(const Str& s) { // 대입 연산자
		if (this != &s) { // 대입하는 객체와 대입되는 객체가 다를 경우
			if (len != s.len) { // 문자열의 길이가 다를 경우
				delete[] str; // 기존 동적 메모리 반환
				len = s.len; // 문자열의 길이 복사
				str = new char[len + 1]; // 문자열을 저장할 동적 메모리 할당
			}
			strcpy(str, s.str); // 문자열 복사
		}
		return *this;
	}
};
