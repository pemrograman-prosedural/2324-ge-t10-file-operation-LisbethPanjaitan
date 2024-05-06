#include <stdio.h>
#include <string.h>
#include "student.h"

student_t create_student(const char *id, const char *name, const char *year, gender_t gender) {
    student_t new_student;
    strcpy(new_student.id, id);
    strcpy(new_student.name, name);
    strcpy(new_student.year, year);
    new_student.gender = gender;
    strcpy(new_student.dorm_name, "unassigned"); // Assuming initially unassigned
    return new_student;
}

void student_print_detail(const student_t *student) {
    printf("%s|%s|%s|%s|%s\n", student->id, student->name, student->year,
           student->gender == MALE ? "male" : "female", student->dorm_name);
}

void student_print_all(const student_t *students, unsigned short int size) {
    for (int i = 0; i < size; ++i) {
        printf("%s|%s|%s|%s\n", students[i].id, students[i].name, students[i].year,
               students[i].gender == MALE ? "male" : "female");
    }
}

void student_print_all_detail(const student_t *students, unsigned short int size) {
    for (int i = 0; i < size; ++i) {
        student_print_detail(&students[i]);
    }
}
