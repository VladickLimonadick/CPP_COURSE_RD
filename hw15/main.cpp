#include "students.h"
#include <iostream>

int main() {
    Student students[MAX_STUDENTS];

    for (int i = 0; i < MAX_STUDENTS; ++i) {
        std::cout << "Enter the name of student " << i + 1 << ": ";
        std::cin >> students[i].name;

        std::cout << "Enter marks for " << students[i].name << " (4 subjects).\n";
        for (int j = 0; j < NUM_SUBJECTS; ++j) {
            do {
                std::cout << "Enter mark for subject " << j + 1 << " (between 0 and 100): ";
                std::cin >> students[i].marks[j];

                if (students[i].marks[j] < 0 || students[i].marks[j] > 100) {
                    std::cout << "Invalid input. Marks should be between 0 and 100. Try again.\n";
                }
            } while (students[i].marks[j] < 0 || students[i].marks[j] > 100);
        }
    }

    sortStudentsByAverage(students, MAX_STUDENTS);

    std::cout << "\nSorted Students:\n";
    for (int i = 0; i < MAX_STUDENTS; ++i) {
        std::cout << students[i].name << ": " << calculateAverage(students[i]) << "\n";
    }

    Student* topStudent = getTopStudent(students, MAX_STUDENTS);
    if (topStudent != nullptr) {
        std::cout << "\nTop Student: " << topStudent->name << "\n";
    }

    double threshold = 75.0;
    int countAboveThreshold = countStudentsAboveThreshold(students, MAX_STUDENTS, threshold);
    std::cout << "Number of students with average above " << threshold << ": " << countAboveThreshold << "\n";

    return 0;
}
