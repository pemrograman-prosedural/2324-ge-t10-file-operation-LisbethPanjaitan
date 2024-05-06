#include "gender.h"
#include <stdio.h>
#include <string.h>

const char *gender_to_text(enum gender_t gender) {
    switch (gender) {
        case GENDER_MALE:
            return "male";
        case GENDER_FEMALE:
            return "female";
        default:
            return "unknown";
    }
}

enum gender_t gender_to_value(const char *text) {
    if (strcmp(text, "male") == 0)
        return GENDER_MALE;
    else if (strcmp(text, "female") == 0)
        return GENDER_FEMALE;
    else
        return -1; // Invalid gender
}
