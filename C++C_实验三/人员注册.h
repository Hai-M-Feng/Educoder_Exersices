#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;

class person {
protected:
	string name;
	int birth_year;

public:
	person(string na, int year) {
		name = na;
		birth_year = year;
	}
	int cal_age(int this_year) {
		return this_year - birth_year;
	}
};

class graduate :public person {
protected:
	int grade;
	string specialty;

public:
	graduate(string na, int y, int g, string spec) :person(na, y) {
		grade = g;
		specialty = spec;
	}
	void display(int this_year) {
		cout << "           graduate    age  grade        specialty\n";
		cout << setw(20) << name << setw(6) << cal_age(this_year);
		cout << setw(7) << grade << setw(17) << specialty << endl;
	}
};

class teacher :public person {
protected:
	string title;
	string specialty;

public:
	teacher(string na, int y, string ti, string spec) :person(na, y) {
		title = ti;
		specialty = spec;
	}
	void display(int this_year) {
		cout << "           teacher    age         title        specialty\n";
		cout << setw(20) << name << setw(5) << cal_age(this_year);
		cout << setw(14) << title << setw(17) << specialty << endl;
	}
};

class in_service_graduate :public teacher, public graduate {
public:
	in_service_graduate(string na, int y, string ti, string spec1, int g, string spec2) :
		teacher(na, y, ti, spec1), graduate(na, y, g, spec2) {  }
	void display(int this_year) {
		cout << " in_service_graduate  age   title   work_specialty  grade  study_specialty\n";
		cout << setw(20) << teacher::name << setw(5) << teacher::cal_age(this_year) << setw(8) << title << setw(17) << teacher::specialty << setw(7) << grade << setw(17) << graduate::specialty << endl;
	}
};