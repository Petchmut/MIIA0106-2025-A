#include <iostream>
#include <string>
using namespace std;

struct Student {
	string studentID;
	string nickname;
};

int main() {
    Student s1;
    Student* p = nullptr;

    p = &s1;

	p->studentID = "6811850010";
	p->nickname = "Petch";
    
    cout << "ID: " << p->studentID << endl;
    cout << "Nickname: " << p->nickname << endl;

    return 0;
}

// TODO 1) เติม field ใน struct Student ให้ครบ: studentID, nickname
// TODO 2) ใช้ pointer p ชี้ไปที่ s1
// TODO 3) กำหนดค่าโดยใช้ p->
// TODO 4) แสดงผลโดยใช้ p->
