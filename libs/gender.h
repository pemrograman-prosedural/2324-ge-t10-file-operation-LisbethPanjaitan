#ifndef GENDER_H
#define GENDER_H

typedef enum {
    GENDER_MALE,
    GENDER_FEMALE
} gender_t;

const char *gender_to_text(enum gender_t gender);

#endif /* GENDER_H */
