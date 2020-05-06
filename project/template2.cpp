#include <iostream>
#include <sstream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

// CSV Reader

vector<vector<string>> read_csv(string filepath)
{
    // open file
    ifstream file(filepath);
    // vector to store row matrix
    vector<vector<string>> data;
    // line placeholder
    string line = "";

    // loop while lines exist
    while (getline(file, line))
    {
        stringstream s(line);
        vector<string> row;
        string word;
        // split line on delimeter, continue as possible
        while (getline(s, word, ','))
        {
            // fill row with elements
            row.push_back(word);
        }
        // fill data with rows
        data.push_back(row);
    }
    return data;
}

//TODO: Student Class

class Course // may need setters or getters
{
public:
    // constructor
    Course(string title, string description, string cNumber, int semester, int hours)
    {
        this->courseTitle = title;
        this->courseDescription = description;
        this->courseNumber = cNumber;
        this->courseSemester = semester;
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
    //data members
    string courseTitle;
    string courseDescription;
    string courseNumber;
    int courseSemester;
    int creditHours;
};

// notice the inheritance
class CourseTaken : public Course
{
public:
    CourseTaken(string title, string description, string cNumber, int semester, int hours, string professor, char finalGrade)

        // call parent constructor
        : Course(title, description, cNumber, semester, hours)
    {
        this->instructorName = professor;
        this->grade = finalGrade;
    }

private:
    string instructorName;
    char grade;
};

//TODO Class Course IP
//TODO class Assignment

vector<Course> read_required_courses(string filepath)
{
    // row of for file
    vector<vector<string>> data = read_csv(filepath);
    // output vector
    vector<Course> classes;

    // go through matrix row by row
    for (auto row : data)
    {
        // populate classes by calling constructor of Course on row
        classes.push_back(Course(row.at(0), row.at(1), row.at(2), stoi(row.at(3)), stoi(row.at(4))));
    }
    cout << classes.size() << " Required Courses Loaded" << endl;
    return classes;
}

/*

Use read_required_function and word document
to correctly output vector of each of the following classes

vector<CourseIP> read_inprogress_courses(string filepath)
vector<CourseTaken> read_taken_courses(string filepath)
vector<Assignment> read_assignment(string filepath)
*/

//TODO read_taken_courses function
//TODO read_inprogress_courses function
//TODO read_assignment task list function

int main(int argc, char const *argv[])
{
    vector<Course> required_courses = read_required_courses("./Required_Courses.csv");

   // vector<CourseTaken> taken_courses = read_taken_courses("./Taken_Courses.csv");
   // vector<CourseIP> inprogress_courses = read_inprogress_courses("./InProgress_Courses.csv");
   // vector<Assignment> tasks = read_assignments("./InProgress_Tasks.csv");

    /*
    GPA calculation and printing out transcript
    extract a subset of courses from  required_courses and do the loop on that
    */

    // for loop that goes through each semester 1-8
    for (int i = 1; i < 9; i++)
    {
        // only those courses belonging to i semester
        vector<Course> sub;
        sub.clear();

        for (int j = 0; j < required_courses.size(); j++)
        {
            if (required_courses.at(j).getSemester() == i)
            {
                sub.push_back(required_courses.at(j))
            }
        }

        // TRANSCRIPT PRINTING HERE

        for (auto course : sub)
        {
            sub.getGrade()
        }
    }

    return 0;
}
