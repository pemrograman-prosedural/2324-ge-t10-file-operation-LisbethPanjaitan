// 12S23041 - Lisbeth Panjaitan 
// 12S23021 - Eunike Purba

#include <stdio.h>
#include "dorm.h"
#include "student.h"
#include "repository.h"

int main() {
    dorm_t dorms[10]; // Assuming maximum 10 dorms
    student_t students[100]; // Assuming maximum 100 students

    // Load initial data from files
    load_initial_data(dorms, students);

    // Print all dorms and students
    printf("dorm-print-all-detail\n");
    dorm_print_all_detail(dorms, 10);
    student_print_all_detail(students, 100);
    printf("---\n");

    return 0;
}
