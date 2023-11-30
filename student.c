#include "student.h"

Student *createStudents(int n) {
  return (Student *)malloc(n * sizeof(Student));
}

Student newStudent(char *name, int id) {
  Student student;
  student.name = strdup(name);
  student.id = id;
  return student;
}

void appendStudent(Student *students, int index, Student student) {
  students[index] = student;
}

void printStudents(Student *students, int length) {
  for (int i = 0; i < length; i++) {
    printf("이름: %s, 학번: %d\n", students[i].name, students[i].id);
  }
}

void freeStudents(Student *students, int length) {
  for (int i = 0; i < length; i++) {
    free(students[i].name);
  }
  free(students);
}
