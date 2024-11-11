#include <iostream>
using namespace std;

class vehicle {
protected:
	int wheels;
	double weight;
public:
	void initialize(int whls, double wght);
	int get_wheels() { return wheels; }
	double get_weight() { return weight; }
	double wheel_loading() { return weight / wheels; }
};

class car : public vehicle {
private:
	int passenger_load;
public:
	void initialize(int whls, double wght, int people = 4);
	int passengers() { return passenger_load; }
};

class truck : public vehicle {
private:
	int passenger_load;
	double payload;
public:
	void init_truck(int number = 2, double max_load = 24000.0);
	double efficiency();
	int passengers() { return passenger_load; }
};

void vehicle::initialize(int whls, double wght) {
	this->wheels = whls;
	this->weight = wght;
}

void car::initialize(int whls, double wght, int people) {
	this->wheels = whls;
	this->weight = wght;
	this->passenger_load = people;
}

void truck::init_truck(int number, double max_load) {
	this->passenger_load = number;
	this->payload = max_load;
}

double truck::efficiency() {
	return this->payload / (this->payload + this->weight);
}