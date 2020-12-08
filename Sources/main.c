#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "appconst.h"
#include "adminprocess.h"
#include "slist.h"

void test_list() {
  AdminProcess a = initialize_process(), *admin;
  admin = &a;
  add_student(admin->program_list[BDA], "C", 'C', BDA, 50);
  add_student(admin->program_list[BDA], "B", 'B', BDA, 80);
  add_student(admin->program_list[BDA], "A", 'A', BDA, 100);
  add_student(admin->program_list[BDA], "C", 'C', BDA, 60);
  STUDENT *topper = get_topper(admin->program_list[BDA]);
  assert(strcmp(topper->name, "A") == 0 && topper->marks == 100);
}

int main(void) {
  test_list();
}