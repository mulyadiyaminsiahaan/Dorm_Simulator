// 12S222014 - Kezia Hutagaol
// 12S22034 - Mulyadi Siahaan 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./libs/dorm.h"
#include "./libs/student.h"

int main(int argc, char **argv) {
    char buff[300];
    char input[100];
    char *ptr;

    struct student_t std;
    struct student_t enrollment[100];

    struct dorm_t drm;
    struct dorm_t ulang[100];
    int i = 0;
    int e = 0;
    int x = 1;

    FILE *fptr;
    FILE *fstr;

    while (x == 1) { 
        fgets(input, sizeof(input), stdin); //untuk memanggil input untuk mengetahui jalannya program
        input[strcspn(input, "\r\n")] = 0; // memastikan tidak ada NULL yang terprint

        //percabangan 1
        if (strcmp(input, "dorm-print-all-detail") == 0) {
            fptr = fopen("./storage/dorm-repository.txt", "r");

            if (fptr != NULL) {
            while (fgets(buff, sizeof(buff), fptr) != NULL) {
                ptr = strtok(buff, "|");
                strcpy(drm.name, ptr);
                ptr = strtok(NULL, "|");
                drm.capacity = atoi(ptr);
                ptr = strtok(NULL, "|");
                if (strcmp(ptr, "male\n") == 0) {
                    drm.gender = 0;
                    } else if (strcmp(ptr, "female\n") == 0) {
                        drm.gender = 1;
                    }
                
                struct dorm_t new_dorm = create_dorm(drm.name, drm.capacity, drm.gender);
                ulang[e] = new_dorm;
                e++;

                } 
                
                fclose(fptr);
                for (int d = 0; d < e; d++) {
                    print_dorm(ulang[d]);
                }
            }

        // percabangan 2
        } else if (strcmp(input, "student-print-all-detail") == 0) {
            

            fstr = fopen("./storage/student-repository.txt", "r");
            
            if (fstr != NULL) {
                
            while (fgets(buff, sizeof(buff), fstr) != NULL) {
                
                ptr = strtok(buff, "|");
                strcpy(std.id, ptr);
                ptr = strtok(NULL, "|");
                strcpy(std.name, ptr);
                ptr = strtok(NULL, "|");
                strcpy(std.year, ptr);
                ptr = strtok(NULL, "|");
                if (strcmp(ptr, "male\n") == 0) {
                    std.gender = GENDER_MALE;
                } else if (strcmp(ptr, "female\n") == 0) {
                    std.gender = GENDER_FEMALE;
                }
                
                struct student_t new_student = create_student(std.id, std.name, std.year, std.gender);
                enrollment[i] = new_student;
                i++;

                }    
                fclose(fstr);
                for (int j = 0; j < i; j++) {
                    print_student(enrollment[j]);
                }
            }
        } else if (strcmp(input, "---") == 0) {
            x++;
        }
    } 
    return 0;
}