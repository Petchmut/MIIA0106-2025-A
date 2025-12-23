#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void displayStudentInfo(string name, string id, double score, char grade)
{
    cout << "Student Name: " << name << "\n";
    cout << "Student ID : " << id << "\n";
    cout << "Score : " << fixed << setprecision(2) << score << "\n";
    cout << "Grade : " << grade << "\n";
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
    int size;
    const int M = 2;

    cout << "Enter number of students: ";
    cin >> size;
    cin.ignore();

    string* name = new string[size];
    string* id = new string[size];
    double** score = new double* [size];
    double* total = new double[size];
    char* grade = new char[size];

    for (int i = 0; i < size; i++)
        score[i] = new double[M];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter student " << i + 1 << " name: ";
        getline(cin, name[i]);

        cout << "Enter student " << i + 1 << " id: ";
        cin >> id[i];

        total[i] = 0;

        for (int p = 0; p < M; p++)
        {
            cout << "Enter student " << i + 1 << " score" << p + 1 << ": ";
            cin >> score[i][p];
            total[i] += score[i][p];
        }
        cin.ignore();

        calculateGrade(total[i], grade[i]);
    }

    for (int i = 0; i < size; i++)
    {
        displayStudentInfo(name[i], id[i], total[i], grade[i]);
    }

    for (int i = 0; i < size; i++)
        delete[] score[i];

    delete[] score;
    delete[] name;
    delete[] id;
    delete[] total;
    delete[] grade;

    return 0;
}   