#include <iostream>
#include <string>
using namespace std;

struct Phone {
    string mobile;
    string home;
};
struct Parent {
    string name;
    string relationship;
	Phone contact;
};
struct Student {
    string id;
    string nickname;
    string lineid;
	Phone myContact;
	Parent myParent;
};

int main() {
    Student s;
    
	cout << "ID: " << s.id << endl;
	cin >> s.id;

	cout << "Nickname: " << s.nickname << endl;
	cin >> s.nickname;

	cout << "Line ID: " << s.lineid << endl;
	cin >> s.lineid;

	cout << "Student's Contact Info:" << endl;

	cout << "  Mobile: " << s.myContact.mobile << endl;
	cin >> s.myContact.mobile;

	cout << "  Home: " << s.myContact.home << endl;
	cin >> s.myContact.home;

	cout << "Parent's Data:" << endl;
	
	cout << "  Name: " << s.myParent.name << endl;
	cin >> s.myParent.name;

	cout << "  Relationship: " << s.myParent.relationship << endl;
	cin >> s.myParent.relationship;

	cout << "Parent's Contact Info:" << endl;

	cout << "  Mobile: " << s.myParent.contact.mobile << endl;
	cin >> s.myParent.contact.mobile;

	cout << "  Home: " << s.myParent.contact.home << endl;
	cin >> s.myParent.contact.home;

	cout << "\n===== Output =====\n";
	cout << "student ID: " << s.id << endl;
	cout << "Nickname:" << s.nickname << endl;
	cout << "Line ID: " << s.lineid << endl;
	cout << "Student's Contact Info:" << endl;
	cout << "  Mobile: " << s.myContact.mobile << endl;
	cout << "  Home: " << s.myContact.home << endl;
	cout << "Parent's Data:" << endl;
	cout << "  Name: " << s.myParent.name << endl;
	cout << "  Relationship: " << s.myParent.relationship << endl;
	cout << "Parent's Contact Info:" << endl;
	cout << "  Mobile: " << s.myParent.contact.mobile << endl;
	cout << "  Home: " << s.myParent.contact.home << endl;

    return 0;
}

