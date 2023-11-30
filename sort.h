#include <string.h>
#include "student.h"
#include "utils.h"

int compareByName(Student a, Student b);

int compareById(Student a, Student b);

void quickSort(Student *students, int length, int (*compare)(Student a, Student b));
