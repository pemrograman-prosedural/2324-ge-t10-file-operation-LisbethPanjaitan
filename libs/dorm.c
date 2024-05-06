#include <stdio.h>
#include "dorm.h"

void dorm_print(const dorm_t *dorm) {
    printf("%s|%hu|%s|%hu\n", dorm->name, dorm->capacity,
           dorm->gender == MALE ? "male" : "female", dorm->residents_num);
}

void dorm_print_all(const dorm_t *dorms, unsigned short int size) {
    for (int i = 0; i < size; i++) {
        dorm_print(&dorms[i]);
    }
}

void dorm_print_all_detail(const dorm_t *dorms, unsigned short int size) {
    dorm_print_all(dorms, size);
}
