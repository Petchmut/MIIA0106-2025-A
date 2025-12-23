#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// ===== ฟังก์ชันที่ให้ (ห้ามแก้ไข) =====
void displayStudentInfo(string name, string id, double score, char grade)
{
    cout << "Student Name: " << name << "\n";
    cout << "Student ID  : " << id << "\n";
    cout << "Score       : " << fixed << setprecision(2) << score << "\n";
    cout << "Grade       : " << grade << "\n";
}

void calculateGrade(double score, char& grade)
{
    if (score >= 90) grade = 'A';
    else if (score >= 80) grade = 'B';
    else if (score >= 70) grade = 'C';
    else if (score >= 60) grade = 'D';
    else grade = 'F';
}

int main()
{
    const int N = 3; 
    const int M = 4; 

    string name[N], id[N];
    double score[N][M];
    double total[N];
    char grade[N];
    for (int i = 0; i < N; i++)
    {
        cout << "Enter student " << i + 1 << " name: ";
        getline(cin >> ws, name[i]);

        cout << "Enter student " << i + 1 << " id: ";
        cin >> id[i];

        total[i] = 0;
    }

    for (int i = 0; i < N; i++)
    {
        cout << "Enter scores for student " << i + 1 << ":\n";
        for (int j = 0; j < M; j++)
        {
            cout << "  Subject " << j + 1 << ": ";
            cin >> score[i][j];
            total[i] += score[i][j];
        }

        calculateGrade(total[i], grade[i]);
        cout << endl;
    }

    for (int i = 0; i < N; i++)
    {
        cout << "Student " << i + 1 << " Information:\n";
        displayStudentInfo(name[i], id[i], total[i], grade[i]);
        cout << endl;
    }

    return 0;
}