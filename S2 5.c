#include <stdio.h>
int main() {
    char NUM[20];
    char PNUM[20];
    int i;
    printf("Introduceti numele: ");
    gets(NUM);
    printf("Introduceti prenumele: ");
    gets(PNUM);
    i=0;
    for(i=0;i<10;i++) {
        puts(NUM);
        puts(PNUM);
    }
    return 0;

}
