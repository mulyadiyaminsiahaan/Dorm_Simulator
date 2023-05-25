#include "dorm.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h> 


void print_dorm (struct dorm_t _dorm)
{
    const char *fm[] = {"male", "female"};
    printf("%s|%d|%s|%d\n", _dorm.name, _dorm.capacity, fm[_dorm.gender], _dorm.residents_num);
}

struct dorm_t create_dorm(char *_name, unsigned short _capacity, enum gender_t _gender)
{
    struct dorm_t drm;

    strcpy(drm.name, _name);
    drm.capacity = _capacity;
    drm.gender = _gender;
    drm.residents_num = 0; 

    return drm;
}



