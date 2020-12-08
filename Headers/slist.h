#include <stdint.h>
#include "appconst.h"
#include "node.h"

#ifndef SLIST_H_
#define SLIST_H_

typedef struct _slist_ SList;

struct _slist_ {
  STUDENT     *head;
  STUDENT     *tail;
  uint32_t    length;
};

SList   *     create_list(void);
void          add_student(SList *, char *, char, PROGRAM, uint8_t);
STUDENT *     get_topper(const SList *);

#endif