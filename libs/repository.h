#ifndef REPOSITORY_H
#define REPOSITORY_H

#include "dorm.h"
#include "student.h"

void load_initial_data(dorm_t *dorms, student_t *students);
void save_data(const dorm_t *dorms, const student_t *students, int num_dorms, int num_students);

#endif /* REPOSITORY_H */
