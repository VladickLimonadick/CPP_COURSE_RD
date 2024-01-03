#pragma once

#include <string>

const int NUM_SUBJECTS = 4;
const int MAX_STUDENTS = 5;

struct Student {
    std::string name;
    double marks[NUM_SUBJECTS];
};

double calculateAverage(const Student& student);
void sortStudentsByAverage(Student students[], int size);
Student* getTopStudent(Student students[], int size);
int countStudentsAboveThreshold(Student students[], int size, double threshold);
