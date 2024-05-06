#ifndef DORM_H
#define DORM_H

typedef struct {
    char name[50];
    unsigned short capacity;
    enum { MALE, FEMALE } gender;
    unsigned short residents_num;
} dorm_t;

void dorm_print(const dorm_t *dorm);
void dorm_print_all(const dorm_t *dorms, unsigned short int size);
void dorm_print_all_detail(const dorm_t *dorms, unsigned short int size);

#endif /* DORM_H */
