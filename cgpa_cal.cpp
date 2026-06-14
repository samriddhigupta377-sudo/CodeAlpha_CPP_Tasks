#include <iostream>
using namespace std;

int main()
{
    int n;
    float grade, credit;
    float totalCredits = 0, totalPoints = 0;

    cout << "Enter number of courses: ";
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        cout << "\nCourse " << i << endl;

        cout << "Enter Grade Point: ";
        cin >> grade;

        cout << "Enter Credit Hours: ";
        cin >> credit;

        totalCredits += credit;
        totalPoints += grade * credit;
    }

    float cgpa = totalPoints / totalCredits;

    cout << "\nTotal Credits = " << totalCredits;
    cout << "\nCGPA = " << cgpa << endl;

    return 0;
}