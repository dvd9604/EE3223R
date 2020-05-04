# Project Guide Q & A

## What does the project program do?

    - outputs a transcript for a student given
        - required courses
        - taken courses
        - In progress courses
    - ouputs a task list for a student given
        - list of assignments

## What are the inputs?

    - 4 Comma Seperated Values Files (CSV)
        - Required_Courses.csv
            - all the courses in degree plan
        - Taken_Courses.csv
            - all the courses that have been taken
        - InProgress_Courses
            - all courses currently being taken
        - InProgress_Tasks
            - Assignments for current semester

    - How CSV works
        - comma indicates end of cell
        - new line indicates end of row

## What are the outputs?

    - Menu
        - options 1. transcipt, 2. task list, 3. exit
    - Transcript
        - GPA calculation
    - Task List

## What are the classes?

    - Class Student
        - members
            - student name

    - Class Course (BASE Class)
        - members
            - courseTitle
            - courseDescription
            - courseNumber
            - courseSemester
            - courseHours

    - Class CourseTaken (Derived from Course)
        - members
            - instructor
            - grade

    - CLass CourseIP (Derived from BASE or TAKEN)
        - members
            - Assignment List

    - Class Assignment
        - members
            - CourseNumber
            - AssignmentName
            - AssignmentType
            - Date

## Approach?

    1. define all the classes
        - add getter and setter functions
        - use inheritance to inherit values from base class

    2. read the csv inputs
        - convert csv inputs into class objects

    3. produce output functions
        - transcript
        - task list

    4. loop to continue processing

### GPA Calculation

    - A = 4
    - B = 3
    - C = 2
    - D = 1
