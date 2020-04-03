#include <stdio.h>

typedef unsigned char* byte_pointer;

void show_bytes(byte_pointer start, size_t len)
{
    int i;
    for (i = 0; i < len; i++)
        printf(" %02x", start[i]);
    printf("\n");
}

void show_int(int x)
{
    show_bytes((byte_pointer) &x, sizeof x);
}

void show_float(float x)
{
    show_bytes((byte_pointer) &x, sizeof x);
}

void show_pointer(void* x)
{
    show_bytes((byte_pointer) &x, sizeof x);
}

int main()
{
    int ival = 1;
    float fval = ival;
    int* pval = &ival;

    show_int(ival);
    show_float(fval);
    show_pointer(pval);
}