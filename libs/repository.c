#include <stdio.h>
#include "repository.h"

void load_initial_data(dorm_t *dorms, student_t *students) {
    FILE *dorm_file = fopen("./storage/dorm-repository.txt", "r");
    if (dorm_file == NULL) {
        printf("Error opening dorm-repository.txt\n");
        return;
    }

    int num_dorms = 0;
    while (fscanf(dorm_file, "%[^|]|%hu|%hu\n", dorms[num_dorms].name, &dorms[num_dorms].capacity, &dorms[num_dorms].residents_num) == 3) {
        dorms[num_dorms].gender = MALE; // Assuming all dorms are for males initially
        num_dorms++;
    }
    fclose(dorm_file);

    FILE *student_file = fopen("./storage/student-repository.txt", "r");
    if (student_file == NULL) {
        printf("Error opening student-repository.txt\n");
        return;
    }

    int num_students = 0;
    while (fscanf(student_file, "%[^#]#%[^#]#%[^#]#%[^\n]\n", students[num_students].id, students[num_students].name, students[num_students].year, students[num_students].dorm) == 4) {
        // Assuming all students are initially unassigned
        students[num_students].gender = MALE; // Assuming all students are males initially
        num_students++;
    }
    fclose(student_file);
}

void save_data(const dorm_t *dorms, const student_t *students, int num_dorms, int num_students) {
    FILE *dorm_file = fopen("./storage/dorm-repository.txt", "w");
    if (dorm_file == NULL) {
        printf("Error opening dorm-repository.txt for writing\n");
        return;
    }

    for (int i = 0; i < num_dorms; i++) {
        fprintf(dorm_file, "%s|%hu|%hu\n", dorms[i].name, dorms[i].capacity, dorms[i].residents_num);
    }
    fclose(dorm_file);

    FILE *student_file = fopen("./storage/student-repository.txt", "w");
    if (student_file == NULL) {
        printf("Error opening student-repository.txt for writing\n");
        return;
    }

    for (int i = 0; i < num_students; i++) {
        fprintf(student_file, "%s#%s#%s#%s\n", students
