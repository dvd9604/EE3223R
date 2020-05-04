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

//inherit from course
class CourseTaken : public Course
{
public:
    CourseTaken(string title, string description, string cNumber, int semster, int hours, string professor, char finalGrade)
        // call base constructor
        : Course(title, description, cNumber, semster, hours)
    {
        this->instructorName = professor;
        this->grade = finalGrade;
    }

private:
    string instructorName;
    char grade;
};

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

vector<Course> read_required_courses(string filepath)
{
    // row of rows for file
    vector<vector<string>> data = read_csv(filepath);

    vector<Course> classes;

    for (auto row : data)
    {
        classes.push_back(Course(row.at(0), row.at(1), row.at(2), stoi(row.at(3)), stoi(row.at(4))));
    }
}

vector<CourseIP> read_inprogress_courses(string filepath)
{
    // row of rows for file
    vector<vector<string>> data = read_csv(filepath);

    // define class CourseIP
    vector<CourseIP> classes;

    for (auto row : data)
    {
        classes.push_back(CourseIP(row.at(0), row.at(1), row.at(2), stoi(row.at(3)), stoi(row.at(4)), row.at(5)));
    }
}

vector<CourseTaken> read_taken_courses(string filepath)
{
    // row of rows for file
    vector<vector<string>> data = read_csv(filepath);

    // define class CourseTaken
    vector<CourseTaken> classes;

    for (auto row : data)
    {
        classes.push_back(CourseTaken(row.at(0), row.at(1), row.at(2), stoi(row.at(3)), stoi(row.at(4)), row.at(5), row.at(6)));
    }
}

vector<Assignment> read_assignment(string filepath)
{
    // row of rows for file
    vector<vector<string>> data = read_csv(filepath);

    // define class CourseTaken
    vector<Assignment> classes;

    for (auto row : data)
    {
        classes.push_back(Assignment(row.at(0), row.at(1), row.at(2), stoi(row.at(3))));
    }
}

int main(int argc, char const *argv[])
{

    vector<Course> required_courses = read_required_courses('./Required_Courses.csv');
    vector<CourseTaken> required_courses = read_taken_courses('./Taken_Courses.csv');
    vector<CourseIP> required_courses = read_inprogress_courses('./InProgress_Courses.csv');
    vector<Assignment> required_courses = read_assignments('./InProgress_Tasks.csv');

    return 0;
}
