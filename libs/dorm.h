#ifndef DORM_H 
#define DORM_H

#include "gender.h"

#define MAX_DORMS 100

struct dorm_t {
    char name[50];
    int capacity;
    enum gender_t gender;
    int residents_num;
};

struct dorm_t create_dorm(char *_name, unsigned short _capacity, enum gender_t _gender);
void print_all_dorm(struct dorm_t *dorms, unsigned short int size_dorm);
void print_name_dorm(struct dorm_t *dorms, unsigned short int size_dorm);

#endif
