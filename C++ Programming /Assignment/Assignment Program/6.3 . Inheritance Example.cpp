#include<iostream>
#include<string>
using namespace std;

// Base class
class Person 
{
protected:
    string name;
    int age;

public:
    void setDetails(string n, int a) 
    {
        name = n;
        age = a;
    }

    void displayDetails() 
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Derived class Student
class Student : public Person 
{
private:
    string studentID;

public:
    void setStudentID(string id)
    {
        studentID = id;
    }

    void displayStudent()
    {
        displayDetails();  // Reuse base class function
        cout << "Student ID: " << studentID << endl;
    }
};

// Derived class Teacher
class Teacher : public Person 
{
private:
    string subject;

public:
    void setSubject(string sub)
    {
        subject = sub;
    }

    void displayTeacher() 
    {
        displayDetails();  // Reuse base class function
        cout << "Subject: " << subject << endl;
    }
};

int main() 
{
    // Create Student object
    Student s1;
    s1.setDetails("Alice", 20);
    s1.setStudentID("S123");
    cout << "Student Details:" << endl;
    s1.displayStudent();

    cout << endl;

    // Create Teacher object
    Teacher t1;
    t1.setDetails("Mr. Bob", 40);
    t1.setSubject("Mathematics");
    cout << "Teacher Details:" << endl;
    t1.displayTeacher();

    return 0;
}
