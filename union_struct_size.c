#include <stdio.h>
union unionjob
{
    char name[30];
    float salary;
} ujob;
struct structjob
{
    char name[30];
    float salary;
} sjob;
int main()
{
    printf("Size of Union: %zu\n", sizeof(ujob));
    printf("Size of Struct: %zu\n", sizeof(sjob));
    return 0;
}
