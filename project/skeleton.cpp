#include <iostream>
#include <sstream>
#include <vector>
#include <fstream>

using namespace std;

// Example Base Class (incomplete)
class Course
{
public:
   
    Course(string title, string description, string cNumber, int semster, int hours)
    {
        this->courseTitle = title;
        this->courseDescription = description;
        this->courseNumber = cNumber;
        this->courseSemester = semster;
        this->creditHours = hours;
    }

    void print()
    {
        cout << "course Title " << this->courseTitle << endl
             << "course Description " << this->courseDescription << endl
             << "course Number " << this->courseNumber << endl
             << "course Semester " << this->courseSemester << endl
             << "course credit Hours " << this->creditHours << endl;
    }

private:
    string courseTitle;
    string courseDescription;
    string courseNumber;
    int courseSemester;
    int creditHours;
};


// Example read from CSV File Required Courses

int main(int argc, char const *argv[])
{
    fstream fin;

    fin.open("./classes.csv", ios::in);

    vector<string> row;
    vector<Course> classes;
    string line, word, temp;

    // to get each row
    while (getline(fin,temp))
    {
        //grab line
        getline(fin, line);

        stringstream s(line);
        // break them on the commas
        while (getline(s, word, ','))
        {
            // word is the element of the string
            row.push_back(word);
        }

        // add courses to classes vector
        classes.push_back(Course(row.at(0), row.at(1), row.at(2), stoi(row.at(3)), stoi(row.at(4))));
        //clear row
        row.clear();
    }


    // Quick printing for checks
    for (auto s : classes)
    {
        cout << "=================" << endl;
        s.print();
    }
    return 0;
}
