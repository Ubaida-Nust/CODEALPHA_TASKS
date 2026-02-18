#include <iostream>
using namespace std;

int main() {
    int n;
    float grade, credit;
    float totalCredits = 0, totalPoints = 0;

    cout << "Enter number of courses: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "\nCourse " << i << endl;
        cout << "Enter grade points: ";
        cin >> grade;
        cout << "Enter credit hours: ";
        cin >> credit;

        totalCredits += credit;
        totalPoints += grade * credit;
    }

    float cgpa = totalPoints / totalCredits;

    cout << "\nTotal Credits = " << totalCredits << endl;
    cout << "Total Grade Points = " << totalPoints << endl;
    cout << "Final CGPA = " << cgpa << endl;

    return 0;
}
