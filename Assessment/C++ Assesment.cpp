#include<iostream>
#include<string>
using namespace std;

class Lecture
{
private:
    string lecturerName;
    string subjectName;
    string courseName;
    int numberOfLectures;

public:
    Lecture() { }

    void assignLectureDetails()
   {
        cout << "Enter Lecturer Name: ";
        cin >> lecturerName;
        cout << "Enter Subject Name: ";
        cin >> subjectName;
        cout << "Enter Course Name: ";
        cin >> courseName;
        cout << "Enter Number of Lectures: ";
        cin >> numberOfLectures;
    }

    void displayLectureDetails() 
   {
        cout << "\nLecturer Name: " << lecturerName;
        cout << "\nSubject Name: " << subjectName;
        cout << "\nCourse Name: " << courseName;
        cout << "\nNumber of Lectures: " << numberOfLectures << "\n";
    }

    string getSubjectName() 
    {
        return subjectName;
    }
};

int main() 
{
    int n;

    cout << "Enter the number of lecturers: ";
    cin >> n;

    Lecture lecturers[n]; // C++ supports variable-length array in most compilers

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter Details for Lecturer " << i + 1 << ":\n";
        lecturers[i].assignLectureDetails();
    }

    while (true)
    {
        string searchSubject;
        int found = 0;
        int choice;

        cout << "\nPress 1 to Search by Subject or 0 to Exit: ";
        cin >> choice;

        if (choice == 0)
            break;

        cout << "Enter Subject Name: ";
        cin >> searchSubject;

        for (int i = 0; i < n; i++)
            {
            if (lecturers[i].getSubjectName() == searchSubject) {
                lecturers[i].displayLectureDetails();
                found = 1;
            }
        }

        if (!found)
            cout << "\nNo lecturer found for this subject.\n";
    }

    return 0;
}

