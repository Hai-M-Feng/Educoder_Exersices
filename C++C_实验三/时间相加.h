#include <iostream>
using namespace std;

class Time {
private:
	int hours, minutes, seconds;
public:
	/*在这里实现初始化*/
	Time() {
		this->hours = 0;
		this->minutes = 0;
		this->seconds = 0;
		cout << "时间已经被初始化" << endl;
	}

	void set_time() {
		cin >> hours >> minutes >> seconds;
	}
	void display_time() {
		cout << hours << ':' << minutes << ':' << seconds << endl;
	}
	void add_time(Time& t1, Time& t2) {
		this->seconds = t1.seconds + t2.seconds;
		this->minutes = t1.minutes + t2.minutes;
		this->hours = t1.hours + t2.hours;

		this->minutes += this->seconds / 60;
		this->seconds %= 60;
		this->hours += this->minutes / 60;
		this->minutes %= 60;
	}
};
