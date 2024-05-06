#ifndef STUDENT_H
#define STUDENT_H

typedef enum {
    MALE,
    FEMALE
} gender_t;

typedef struct {
    char id[20];
    char name[50];
    char year[5];
    gender_t gender;
    char dorm_name[50]; // assuming dorm name can be stored
} student_t;

student_t create_student(const char *id, const char *name, const char *year, gender_t gender);
void student_print_detail(const student_t *student);
void student_print_all(const student_t *students, unsigned short int size);
void student_print_all_detail(const student_t *students, unsigned short int size);

#endif /* STUDENT_H */
