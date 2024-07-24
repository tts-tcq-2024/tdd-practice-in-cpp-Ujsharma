#ifndef STRINGCALCULATOR_H
#define STRINGCALCULATOR_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function declarations
int add_arr(int *arr, int cnt);
int check_num(const char ch);
void strtonum(const char *ch, int *num_arr, int *cnt);
int sum(const char *ch);
int check_neg(const char *ch);
int check_empty(const char* ch);
int check_neg_empty(const char *ch);
int check_string(const char *ch);
int add(const char *ch);

#endif // STRINGCALCULATOR_H

