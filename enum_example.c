#include <stdio.h>
enum Level
{
    low = 25,   // Use comma
    med = 50,   // Use comma
    high = 70   // No semicolon here
};
int main()
{
    enum Level a = med;
    printf("%d", a);
    return 0;
}
