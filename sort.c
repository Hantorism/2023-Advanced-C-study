#include "sort.h"

int compareByName(Student a, Student b) {
  return strcmp(a.name, b.name);
}

int compareById(Student a, Student b) {
  return a.id - b.id;
}

void quickSort(Student *students, int length, int (*compare)(Student a, Student b)) {
  if (length <= 1) {
    return;
  }

  Student pivot = students[length / 2];
  int left = 0;
  int right = length - 1;

  while (left <= right) {
    while (compare(students[left], pivot) < 0) {
      left++;
    }

    while (compare(students[right], pivot) > 0) {
      right--;
    }

    if (left <= right) {
      swap(&students[left], &students[right]);
      left++;
      right--;
    }
  }

  quickSort(students, right + 1, compare);
  quickSort(students + right + 1, length - right - 1, compare);
}
