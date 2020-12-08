#include <stdlib.h>
#include <string.h>
#include "node.h"

STUDENT * create_student(char *name, char grade, PROGRAM prog, uint8_t marks) {
  STUDENT *s = (STUDENT *) malloc(sizeof(STUDENT));
  strcpy(s->name, name);
  s->grade = grade;
  s->program = prog;
  s->marks = marks;
  s->next = NULL;
  return s;
}

void delete_student(STUDENT *s) {
  free(s);
}