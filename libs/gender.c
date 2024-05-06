#include "gender.h"
#include <stdio.h>

const char *gender_to_text(enum gender_t gender)
{
    switch (gender) {
        case GENDER_MALE:
            return "male";
        case GENDER_FEMALE:
            return "female";
        default:
            return "unknown";
    }
}
