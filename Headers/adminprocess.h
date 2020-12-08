#include "appconst.h"
#include "slist.h"

#ifndef ADMINPROCESS_H_
#define ADMINPROCESS_H_

typedef struct _admin_process_ AdminProcess;

struct _admin_process_ {
  SList * program_list[PROGRAM_LEN];
};

AdminProcess initialize_process();

#endif