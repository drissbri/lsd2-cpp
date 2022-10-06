#include "../includes/bitwise.h"

void print_nth_byte(int n, int m)
{
    print_bits(m >> ((n - 1) * 8));
}
