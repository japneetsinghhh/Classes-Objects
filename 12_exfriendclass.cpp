#include<iostream>
#include<cstring>
using namespace std;

class Average;  // Forward declaration

class Student {
private:
    char name[100];
    int student_id;
    int grade[5];
public:
    Student(char* n, int sid, int* g) {
        strcpy(name, n);
        student_id = sid;
        for (int i = 0; i < 5; i++) {
            grade[i] = g[i];
        }
    } // Add a semicolon here
    void Display_info() {
        cout << "Name is " << name << endl;
        cout << "Student id is " << student_id << endl;
        for (int i = 0; i < 5; i++) {
            cout << grade[i] << " ";
        }
        cout << endl;
    }
    friend class Average;  // Declare Average as a friend
};

class Average {
public:
    double computeAvg(Student s) {
        int sum = 0;
        for (int i = 0; i < 5; i++) {
            sum += s.grade[i];
        }
        return double((sum) / 5);
    }
};

int main() {
    int g[5];
    for (int i = 0; i < 5; i++) {
        g[i] = 49;
    }
    char a[100] = "abc";
    Student s(a, 123, g);
    Average gg;
    cout << gg.computeAvg(s) << endl;
    return 0;
}
