#include <iostream>
using namespace std;

struct Address {
    int number;
    char road[20];
    char district[20];
    char province[20];
	char postcode[6];
    // TODO: (ถ้าต้องการเพิ่ม) เช่น postcode[6]
};

struct Phone {
    char home[10];
    char mobile[10];
};

struct Student {
    char id[9];
    char name[20];
    char surname[20];
	Address addr;
	Phone tel;
};

int main() {
    Student s1;

    // TODO 3) รับค่าข้อมูลนักศึกษา 1 คน (รวมที่อยู่ + โทรศัพท์)
    cout << "Enter Student Information:\n";
    cout << "ID: "; cin >> s1.id;
    cout << "Name: "; cin >> s1.name;
    cout << "Surname: "; cin >> s1.surname;

    cout << "Address - House Number: ";
	cin >> s1.addr.number;

    cout << "Address - Road: ";
	cin >> s1.addr.road;
    // TODO 3) cin >> 

    cout << "Address - District: ";
	cin >> s1.addr.district;
    // TODO 3) cin >> 

    cout << "Address - Province: ";
    cin >> s1.addr.province;
        // TODO 3) cin >> 

        cout << "Phone - Home: ";
		cin >> s1.tel.home;
    // TODO 3) cin >> 

    cout << "Phone - Mobile: ";
	cin >> s1.tel.mobile;
    // TODO 3) cin >> 

    cout << "\n===== Output =====\n";
    cout << s1.name << " " << s1.surname << endl;
	cout << "Address: " << s1.addr.number << ", " << s1.addr.road << ", " << s1.addr.district << ", " << s1.addr.province << endl;
	cout << "Home:" << s1.tel.home << ", Mobile: " << s1.tel.mobile << endl;

    //// TODO 4): แสดงผลข้อมูลทั้งหมด (รวม address และ phone)

    return 0;
}

// TODO 1) เติม field ที่ขาดใน Address และ Phone ให้ครบ
// TODO 2) เติม field ใน Student: id, name, surname, addr, tel
// TODO 3) รับค่าข้อมูลนักศึกษา 1 คน (รวมที่อยู่ + โทรศัพท์)
// TODO 4) แสดงผลข้อมูลทั้งหมด
