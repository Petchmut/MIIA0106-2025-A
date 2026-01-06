#include <iostream>
#include <string>
using namespace std;

struct Student {
    string id;
    string nickname;
    string lineID;
    string phone;
};

int main() {
    const int SIZE = 5;
    Student students[SIZE]; // Array ของ struct

    // INPUT
    for (int i = 0; i < SIZE; i++) {
        cout << "=== Input Student " << (i + 1) << " ===\n";
		cout << "ID: "; cin >> students[i].id;
        cout << "Nickname: "; cin >> students[i].nickname;
        cout << "Line ID: "; cin >> students[i].lineID;
        cout << "Phone: "; cin >> students[i].phone;
        cout << endl;
    }

    // OUTPUT
    cout << "\n===== Student List =====\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "ID: " << students[i].id << endl;
        cout << "Nickname: " << students[i].nickname << endl;
        cout << "Line ID: " << students[i].lineID << endl;
        cout << "Phone: " << students[i].phone << endl;
        cout << "----------------------\n";
    }

    return 0;
}
