#ifndef ADD_NUMBERS_H
#define ADD_NUMBERS_H

int add(const char *ch);
int add_arr(int *arr, int cnt);
int check_num(const char ch);
void strtonum(const char *ch, int *num_arr, int *cnt);
int sum(const char *ch);
int check_neg(const char *ch);
int check_empty(const char* ch);
int check_neg_empty(const char *ch);
int check_string(const char *ch);

#endif // ADD_NUMBERS_H
