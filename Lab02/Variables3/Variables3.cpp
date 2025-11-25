#include <iostream>
#include <string>
using namespace std;

int main() {
    string itemName;
    float price;
    int qty;
    float total;

    // รับชื่อสินค้า
    cout << "Enter item name: ";
    getline(cin, itemName);

    // รับราคา
    cout << "Enter price: ";
    cin >> price; // รับค่า price

    // รับจำนวน
    cout << "Enter quantity: ";
    cin >> qty; // รับค่า quantity

    // คำนวณราคารวม
    total = price * qty;

    // แสดงใบเสร็จ
    cout << endl;
    cout << "------- Receipt -------" << endl;
    cout << "Item: " << itemName << endl;
    cout << "Price: " << price << " Baht" << endl;
    cout << "Quantity: " << qty << endl;
    cout << "Total: " << total << " Baht" << endl;
    cout << "------------------------" << endl;

    return 0;
}
