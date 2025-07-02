#pragma once

typedef struct SneklangVar {
  int value;
  int scope_level;
  char *name;
  char type;
  char is_constant;
} sneklang_var_t;

float get_average(int x, int y, int z);
