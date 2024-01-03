#include "students.h"
#include <iostream>
#include <algorithm>

double calculateAverage(const Student& student) {
    double sum = 0.0;
    for (int i = 0; i < NUM_SUBJECTS; ++i) {
        sum += student.marks[i];
    }
    return sum / NUM_SUBJECTS;
}

void sortStudentsByAverage(Student students[], int size) {
    std::sort(students, students + size, [](const Student& a, const Student& b) {
        return calculateAverage(a) > calculateAverage(b);
        });
}

Student* getTopStudent(Student students[], int size) {
    if (size > 0) {
        return &students[0];
    }
    else {
        return nullptr;
    }
}

int countStudentsAboveThreshold(Student students[], int size, double threshold) {
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (calculateAverage(students[i]) > threshold) {
            ++count;
        }
    }
    return count;
}
