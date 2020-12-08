#include <stdlib.h>
#include <assert.h>
#include "slist.h"

SList * create_list() {
  SList *s = (SList *) malloc(sizeof(SList));
  s->head = s->tail = NULL;
  s->length = 0;
  return s;
}

void add_student(SList *list, char *name, char grade, PROGRAM program, uint8_t marks) {
  assert(list != NULL);
  STUDENT *student = create_student(name, grade, program, marks);
  STUDENT *node;
  if (list->length == 0) {
    list->head = list->tail = student;
  } else {
    for (node = list->head; node != NULL; node = node->next) {
      if (node->marks < student->marks) {
        student->next = node;
        if (node == list->head) {
          list->head = student;
        }
        break;
      }
    }
    if (node == NULL) {
      list->tail->next = student;
      list->tail = student;
    }
  }
  list->length++;
}

STUDENT * get_topper(const SList *list) {
  assert(list != NULL);
  return list->head;
}