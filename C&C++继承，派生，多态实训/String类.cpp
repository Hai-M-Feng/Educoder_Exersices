#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
class String {
public:
	String(const char* str = "") {
		m_data = new char[strlen(str) + 1];
		strcpy(this->m_data, str);
	}
	String(const String& other) {
		m_data = new char[strlen(other.m_data) + 1];
		strcpy(this->m_data, other.m_data);
	}
	~String() {
		delete[] m_data;
	}
	String& operator=(const String& other) {
		if (this != &other) {
			delete[] m_data;
			m_data = new char[strlen(other.m_data) + 1];
			strcpy(m_data, other.m_data);
		}
		return *this;
	}
	void display() {
		cout << this->m_data;
	}
private:
	char* m_data;
};

int main() {
	char a[20];
	cin >> a;
	String s;
	String st = a;
	s = st;
	s.display();
	return 0;
}