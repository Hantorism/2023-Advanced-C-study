#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Student{
    char *name;
    int id;
} Student;

Student *createStudents(int n);

Student newStudent(char *name, int id);

void appendStudent(Student *students, int index, Student student);

void printStudents(Student *students, int length);

void freeStudents(Student *students, int length);
