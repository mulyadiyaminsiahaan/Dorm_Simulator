// 12S22014 - Kezia Hutagaol
// 12S22034 - Mulyadi Siahaan

#include <stdio.h>
#include "./libs/dorm.h"
#include "./libs/student.h"
#include <stdlib.h>
#include <string.h>

int main(int _argc, char **_argv)
{
    char input[100];
    char *ptr;

    struct student_t std;
    struct student_t enrollment[100];

    struct dorm_t drm;
    struct dorm_t ulang[100];
    int i = 0;
    int e = 0;

    FILE *fptr;

    while (fgets(input, sizeof(input), stdin)) {
        
        input[strcspn(input, "\r\n")] = 0;

        if (strcmp(fng, "---") == 0){
            break;
        }

        else if (strcmp(fng, "dorm-print-all-detail") == 0) {
            while (fgets(buff, sizeof(buff), fptr)) {
                ptr = strtok(buff, "|");
                strcpy(drm.name, ptr);
                ptr = strtok(NULL, "|");
                drm.capacity = atoi(ptr);
                ptr = strtok(NULL, "|");
                if (strcmp(ptr, "male") == 0) {
                    drm.gender = GENDER_MALE;
                    } else if (strcmp(ptr, "female") == 0) {
                    drm.gender = GENDER_FEMALE;
                    }
                struct dorm_t new_dorm = create_dorm(drm.name, drm.capacity, drm.gender);
                ulang[e] = new_dorm;
                e++;
                        for (int d = 0; d < e; d++) {
                print_dorm(ulang[d]);
            }
            }
        }
        else if(strcmp(fng, "dorm-print-all-detail") == 0) {
            for (int d = 0; d < e; d++) {
                print_dorm(ulang[d]);
            }
        }
    }
    fclose(fptr);
    return 0;
}
