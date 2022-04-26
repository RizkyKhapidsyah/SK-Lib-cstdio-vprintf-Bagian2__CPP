#pragma warning(disable:4996)

#include <cstdio>
#include <cstdarg>
#include <conio.h>

/*
    Source by Programiz
    Modified For Learn by RK
    I.D.E : VS2019
*/

void write(const char* fmt, ...) {
    va_list args;
    va_start(args, fmt);
    vprintf(fmt, args);
    va_end(args);
}

int main() {
    char name[50] = "Manusia";
    char address[50] = "Biasa";
    int age = 13;

    write("My name is %s. I am %d years old and I live in %s.\n", name, age, address);

    _getch();
    return 0;
}