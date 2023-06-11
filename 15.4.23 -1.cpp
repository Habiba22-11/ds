#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

// A class to store student information
class Student {
  private:
    string name; // student name
    int id; // student id
    int credits; // credits completed
    double cgpa; // cumulative grade point average

  public:
    // A constructor to take input
    Student(string n, int i, int c, double g) {
      name = n;
      id = i;
      credits = c;
      cgpa = g;
    }

    // Getters for the private members
    string getName() {
      return name;
    }

    int getId() {
      return id;
    }

    int getCredits() {
      return credits;
    }

    double getCgpa() {
      return cgpa;
    }
};

// A function to display the ranked students
void display(vector<Student> &students) {
  cout << "Rank\tName\tID\tCredits\tCGPA\n";
  for (int i = 0; i < students.size(); i++) {
    cout << i + 1 << "\t" << students[i].getName() << "\t" << students[i].getId() << "\t" << students[i].getCredits() << "\t" << students[i].getCgpa() << "\n";
  }
}

int main() {
  // A vector to store the students
  vector<Student> students;

  // Taking input for five students
  for (int i = 0; i < 5; i++) {
    string name;
    int id, credits;
    double cgpa;
    cout << "Enter name of student " << i + 1 << ": ";
    cin >> name;
    cout << "Enter id of student " << i + 1 << ": ";
    cin >> id;
    cout << "Enter credits completed by student " << i + 1 << ": ";
    cin >> credits;
    cout << "Enter CGPA of student " << i + 1 << ": ";
    cin >> cgpa;

    // Creating a student object and adding it to the vector
    Student s(name, id, credits, cgpa);
    students.push_back(s);
  }

  // Sorting the students by their credits and CGPA using a lambda function
  sort(students.begin(), students.end(), [](Student &a, Student &b) {
    // If the credits are equal, compare by CGPA
    if (a.getCredits() == b.getCredits()) {
      return a.getCgpa() > b.getCgpa();
    }
    // Otherwise, compare by credits
    return a.getCredits() > b.getCredits();
  });

  // Displaying the ranked students
  display(students);
return 0;
}
