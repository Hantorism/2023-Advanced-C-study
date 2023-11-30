#include "utils.h"

void swap(Student *a, Student *b) {
    Student temp = *a;
    *a = *b;
    *b = temp;
}

void inputStudentInfo(char *name, int *id) {
    printf("학생의 이름을 입력하세요: ");
    scanf("%s", name);
    printf("학생의 학번을 입력하세요: ");
    scanf("%d", id);
}
