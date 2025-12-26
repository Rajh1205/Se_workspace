#include<iostream>
#include<string>
using namespace std;

/*
    Class Name       : Lecture
    Purpose          : Represents lecture details for a lecturer
    Coding Standard  : Proper naming conventions and encapsulation used
*/

class Lecture
{
private:
    // Data Members
    string lecturerName;
    string subjectName;
    string courseName;
    int numberOfLectures;

public:
    /*
        Constructor
        Purpose: Assign default initial values
    */
    Lecture()
    {
        lecturerName = "";
        subjectName = "";
        courseName = "";
        numberOfLectures = 0;
    }

    /*
        Function Name : assignInitialValues
        Purpose       : Assign initial values to lecture details
    */
    void assignInitialValues()
    {
        lecturerName = "Not Assigned";
        subjectName = "Not Assigned";
        courseName = "Not Assigned";
        numberOfLectures = 0;
    }

    /*
        Function Name : addLectureDetails
        Purpose       : Accept lecture details from the user
    */
    void addLectureDetails()
    {
        cout << "\nEnter Lecturer Name       : ";
        getline(cin, lecturerName);

        cout << "Enter Subject Name        : ";
        getline(cin, subjectName);

        cout << "Enter Course Name         : ";
        getline(cin, courseName);

        cout << "Enter Number of Lectures  : ";
        cin >> numberOfLectures;
        cin.ignore(); // Clear input buffer
    }

    /*
        Function Name : displayLectureDetails
        Purpose       : Display lecture details on console
    */
    void displayLectureDetails()
    {
        cout << "\n----------------------------------";
        cout << "\nLecturer Name      : " << lecturerName;
        cout << "\nSubject Name       : " << subjectName;
        cout << "\nCourse Name        : " << courseName;
        cout << "\nNumber of Lectures : " << numberOfLectures;
        cout << "\n----------------------------------\n";
    }
};

/*
    Main Function
    Purpose: Driver code for Lecture Management System
*/

int main()
{
    const int TOTAL_LECTURERS = 5;

    // Create objects of Lecture class
    Lecture lecturers[TOTAL_LECTURERS];

    cout << "=====================================\n";
    cout << "     LECTURE MANAGEMENT SYSTEM        \n";
    cout << "=====================================\n";

    // Assign default values
    for (int i = 0; i < TOTAL_LECTURERS; i++)
    {
        lecturers[i].assignInitialValues();
    }

    // Add lecture details
    for (int i = 0; i < TOTAL_LECTURERS; i++)
    {
        cout << "\nEnter Details for Lecturer " << i + 1 << endl;
        lecturers[i].addLectureDetails();
    }

    // Display lecture details
    cout << "\n\n========= LECTURE DETAILS =========\n";
    for (int i = 0; i < TOTAL_LECTURERS; i++)
    {
        cout << "\nLecturer " << i + 1 << " Details:";
        lecturers[i].displayLectureDetails();
    }

    cout << "\nProject completed successfully.\n";

    return 0;
}
