#include "student.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// PRINT MAHASISWA 1
void print_student(struct student_t _student)
{
    const char *fm[] = {"male", "female"};

    printf("%s|%s|%s|%s|%s\n", _student.id, _student.name, _student.year, fm[_student.gender], _student.dorm->name);
    fflush(stdout);
}


void assign_student(struct student_t *_student, struct dorm_t *_dorm, char *id, char *dorm_name)
{
    if (_dorm->residents_num < _dorm->capacity)
    {
        if (_student->gender == _dorm->gender)
        {
            _student->dorm = _dorm;
            _dorm->residents_num=_dorm->residents_num+1;
        }
    }
} 

struct student_t create_student(char *_id, char *_name, char *_year,
                                enum gender_t _gender)
{
    struct student_t std;

    strcpy(std.id, _id);
    strcpy(std.name, _name);
    strcpy(std.year, _year);
    std.gender = _gender;
    
    std.dorm = (struct dorm_t*)malloc(sizeof(struct dorm_t));
    strcpy(std.dorm->name, "unassigned");

    return std;
}

void move_student(struct student_t *_student, struct dorm_t *_dorm, struct dorm_t *old_dorm, char *id, char *dorm_name)
{
    if (_dorm->residents_num < _dorm->capacity)
    {
        if (_student->gender == _dorm->gender)
        {
            _student->dorm = _dorm;
            _dorm->residents_num++;
            old_dorm->residents_num=old_dorm->residents_num-1;
        }
    }
}


void dorm_empty(struct student_t *students, struct dorm_t *dorms, int std){

    for (int i = 0; i < std; i++){
        if (students[i].dorm==NULL){
            continue;
        } else if(strcmp(students[i].dorm->name, dorms->name)==0){
            students[i].dorm = NULL;
        }
    }
    
    dorms->residents_num = 0;
}