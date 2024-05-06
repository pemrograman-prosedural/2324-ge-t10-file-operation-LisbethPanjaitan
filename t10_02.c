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

    // Perform operations

    // Save data back to files
    save_data(dorms, students, 10, 100);

    return 0;
}
