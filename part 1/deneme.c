#include <string.h>
#include <stdio.h>

int main(int argc, char** argv)
{
    char str[] = "overlapblastr";
    printf("%s\n" , str);

    memcpy(str, str + 3, 5);

    printf("%s\n", str);
     
    return 0;
}