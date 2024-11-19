#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;

static int sid = 1000;

class Person {
private:
	string name;
	char gender;
	int age;

public:
	void set_info() {
		cin >> name >> gender >> age;
	}
	void print_info() const {
		cout << name << endl;
		cout << gender << endl;
		cout << age << endl;
	}
};

class Student : public Person {
private:
	string subject;
	int grade;
	int id;

public:
	void set_info() {
		Person::set_info();
		cin >> subject >> grade;
		this->id = sid++;
	}
	void print_info() const {
		Person::print_info();
		cout << id << endl;
		cout << subject << endl;
		cout << grade << endl;
	}
};

int main() {
	Student s;
	s.set_info();
	s.print_info();
	return 0;
}