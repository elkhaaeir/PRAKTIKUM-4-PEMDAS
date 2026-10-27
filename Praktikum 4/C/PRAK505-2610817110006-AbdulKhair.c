#include <stdio.h>

void biodata(int yearBorn, char name[], char origin[]) {
    int year_now = 2020;
    int age = year_now - yearBorn;

    printf("Perkenalkan Nama Saya : %s\n", name);
    printf("Umur Saya : %d\n", age);
    printf("Saya Adalah Angkatan : %d\n", year_now);
    printf("Saya Berasal dari : %s\n", origin);
}

int main() {
    int yearBorn;
    char A[20], B[15];
    scanf(" %d",&yearBorn);
    scanf(" %[^\n]%*c",&A);
    scanf(" %[^\n]%*c",&B);

    biodata(yearBorn, A, B);

    return 0;
}