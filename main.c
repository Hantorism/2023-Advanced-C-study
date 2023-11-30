#include "student.h"
#include "sort.h"
#include "utils.h"

int main() {
    int length = 5;
    char *name;
    int id;
    Student *students = createStudents(length);
    
    for (int i = 0; i < length; i++) {
        inputStudentInfo(name, &id);
        appendStudent(students, i, newStudent(name, id));
    }

    printf("\n처음 입력 받았을 때\n");
    printStudents(students, length);
    printf("\n");

    printf("이름 순 정렬 후\n");
    quickSort(students, length, compareByName);
    printStudents(students, length);
    printf("\n");

    printf("학번 순 정렬 후\n");
    quickSort(students, length, compareById);
    printStudents(students, length);
    printf("\n");

    freeStudents(students, length);
    return 0;
}
