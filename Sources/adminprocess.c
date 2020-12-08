#include <stdlib.h>
#include "adminprocess.h"

AdminProcess initialize_process() {
  AdminProcess a;
  for (uint8_t i=0; i<PROGRAM_LEN; i++) {
    a.program_list[i] = create_list();
  }
  return a;
}