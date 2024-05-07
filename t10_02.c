// 12S23041 - Lisbeth Panjaitan
// 12S23021 - Eunike Purba

#include <stdio.h>
#include "libs/repository.h"

int main() {
    FILE *dorm_file = fopen("./storage/dorm-repository.txt", "r");
    FILE *student_file = fopen("./storage/student-repository.txt", "r");

    struct dorm_t dorms[MAX_DORMS];
    struct student_t students[MAX_STUDENTS];
    unsigned short int size_dorm = 0, size_student = 0, prt_dorm = 0, prt_student = 0;

    int num_gender; // Tidak diperlukan di sini

    parse_file_drm(dorm_file, dorms, &size_dorm, &prt_dorm);
    parse_file_std(student_file, students, &size_student, &prt_student);

    fclose(dorm_file);
    fclose(student_file);

    printf("Initial Dorm Data:\n");
    print_all_dorm(dorms, size_dorm);
    printf("\nInitial Student Data:\n");
    student_print_detail(students, size_student);

    // Implementasi tugas tambahan di sini

    return 0;
}
