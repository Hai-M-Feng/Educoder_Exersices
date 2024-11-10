#include <iostream>
#include <cstring>

using namespace std;

class Student {
private:
    string id;
    string name;
    int math;
    int physics;
    int english;
    int total;

public:
    Student() {
        cin >> this->id >> this->name >> this->math >> this->physics >> this->english;
        this->total = this->math + this->physics + this->english;
    }

    int getTotal() const {
        return this->total;
    }

    bool compID(string s) const {
        return s == id;
    }

    void show() {
        cout << "name: " << this->name << endl;
        cout << "ID: " << this->id << endl;
        cout << "math scores: " << this->math << endl;
        cout << "physics scores: " << this->physics << endl;
        cout << "english scores: " << this->english << endl;
        cout << "overall scores: " << this->total;
    }
};

int main() {
    Student students[5];

    string anID;
    cin >> anID;
    int max = students[0].getTotal();
    int record = 0;

    for (int i = 1; i < 5; i++) {
        if (students[i].getTotal() > max)
            max = students[i].getTotal();
        if (students[i].compID(anID))
            record = i;
    }
    cout << "max scores: " << max << endl;
    students[record].show();
    return 0;
}