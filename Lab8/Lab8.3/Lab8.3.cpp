#include <iostream>
#include <string>
using namespace std;

struct Student {
    string id;
    string nickname;
    string lineID;
    string phone;
};

// TODO: เขียนฟังก์ชันนี้
void printStudent(Student s) {
    
    cout << "ID: " << s.id << endl;
    cout << "Nickname: "  << s.nickname << endl;
    cout << "Line ID: "  << s.lineID << endl;
    cout << "Phone: " << s.phone << endl;
}

int main() {
    Student s1;

    cout << "=== Input Student 1 ===\n";
    cout << "ID: "; cin >> s1.id;
    cout << "Nickname: "; cin >> s1.nickname;
    cout << "Line ID: "; cin >> s1.lineID;
    cout << "Phone: "; cin >> s1.phone;

    cout << "\n=== Output (from function) ===\n";
	printStudent(s1);

    return 0;
}


// TODO 1) เติม field ใน struct Student ให้ครบ: id, nickname, lineId, phone
// TODO 2) เขียนฟังก์ชัน printStudent(Student s) ให้แสดงผลครบทุก field
// TODO 3) ใน main รับข้อมูล 1 คน แล้วเรียก printStudent(s1)
