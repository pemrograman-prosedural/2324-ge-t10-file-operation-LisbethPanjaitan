#ifndef GENDER_H
#define GENDER_H

enum gender_t 
{
    GENDER_MALE,
    GENDER_FEMALE
};

const char *gender_to_text(enum gender_t gender);
enum gender_t gender_to_value(const char *text);

#endif
