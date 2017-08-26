#include <stdio.h>

char magic[1024 * 1024 * 1024] = { '\n' };

int main()
{
    printf("hello, world");
    printf(magic);
    return 0;
}
