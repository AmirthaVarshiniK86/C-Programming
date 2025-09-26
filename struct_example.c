#include <stdio.h>
struct student
{
    char letter;
    int roll;
}
int main()
{
    struct student s1;
    s1.letter = 'A';
    s1.roll = 13;
    printf("My number: %d\n", s1.roll);
    printf("My letter: %c\n", s1.letter);
    return 0;
}
