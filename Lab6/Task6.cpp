#include <iostream>
using namespace std;

class Student {
protected:
    string name;
    int numofcourses;
    string* courses;  

public:
    Student(string name, int numofcourses) : name(name), numofcourses(numofcourses) {
        courses = new string[numofcourses];  
        cout << "Enter Course names: " << endl;
        for (int i = 0; i < numofcourses; i++) {
            cin >> courses[i];
        }
    }

    virtual ~Student() { 
        delete[] courses;
    }

    void printdetails() {
        cout << name << endl;
        cout << "Courses Enrolled:" << endl;
        for (int i = 0; i < numofcourses; i++) {
            cout << courses[i] << endl;
        }
    }
};

class Marks : public Student {
protected:
    int* marks; 

public:
    Marks(string name, int numofcourses) : Student(name, numofcourses) {
        marks = new int[numofcourses];  
        cout << "Enter marks for each course:" << endl;
        for (int i = 0; i < numofcourses; i++) {
            cout << courses[i] << ": ";
            cin >> marks[i];
        }
    }

    ~Marks() { 
        delete[] marks;
    }
};

class Result : public Marks {
private:
    int total;
    float average;

public:
    Result(string name, int numofcourses) : Marks(name, numofcourses) {
        total = 0; // Initialize total
        calc();
    }

    void calc() {
        for (int i = 0; i < numofcourses; i++) {
            total += marks[i];
        }
        average = static_cast<float>(total) / numofcourses;
    }

    void printdetails() {
        cout << name << endl;
        cout << "Courses Enrolled and Marks:" << endl;
        for (int i = 0; i < numofcourses; i++) {
            cout << courses[i] << ": " << marks[i] << endl;
        }
        cout << "Total: " << total << endl;
        cout << "Average: " << average << endl;
    }
};

int main() {
    Result r1("Asad", 3);
    r1.printdetails();
    return 0;
}
