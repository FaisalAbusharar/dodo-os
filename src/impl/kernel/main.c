#include "print.h"

void kernel_main()
{
    print_clear();
    print_set_color(PRINT_COLOR_YELLOW, PRINT_COLOR_BLACK);
    print_str("Welcome to our 64-bit Dodo OS");
    print_set_color(PRINT_COLOR_BLUE, PRINT_COLOR_BLACK);
    print_str("This a boot version. i will be adding more stuff soon");
}