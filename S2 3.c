#include<stdio.h>
int main() {
    char NUM[20];
    char PNUM[20];
    printf("Introduceti numele si prenumele");
    scanf("%s", &NUM);
    scanf("%s", &PNUM);
    printf("%s\n %s", NUM,PNUM);
    return 0;
}
