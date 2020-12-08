#include <stdint.h>
#include "appconst.h"

#ifndef NODE_H_
#define NODE_H_

typedef struct _student_ STUDENT;

struct _student_ {
  char    name[NAME_LEN];
  char    grade;
  PROGRAM program;
  uint8_t marks;
  STUDENT *next;
};

STUDENT *create_student(char *, char, PROGRAM, uint8_t);
void     delete_student(STUDENT *);

#endif