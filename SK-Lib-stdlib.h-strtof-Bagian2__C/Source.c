#include <stdio.h>
#include <stdlib.h> 

/*
    Source by GeeksForGeeks (https://www.geeksforgeeks.org)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    char array[] = "365.25 7.0";
    char* pend;
    float f1 = strtof(array, &pend);
    float f2 = strtof(pend, NULL);

    printf("%.2f\n%.2f\n", f1, f2);
    printf(" One year has %.2f weeks \n", f1 / f2);
    
    _getch();
    return 0;
}