#include <stdio.h>
 2
 3 int main(void)
 4 {
 5     int number = 42;
 6     float decimal = 3.14f;
 7     double precise_decimal = 3.1415926535;
 8     char letter = 'A';
 9
10     printf("int: %d\n", number);
11     printf("float: %.2f\n", decimal);
12     printf("double: %.10f\n", precise_decimal);
13     printf("char: %c\n", letter);
14
15     return 0;
16 }
