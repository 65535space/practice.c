/*Display the representation range of integer types.
List7-1*/

#include <limits.h>
#include <stdio.h>

int main(void) {
    puts("Range of integer type values in this environment");

    printf("char            : %d~%d\n", CHAR_MIN, CHAR_MAX);
    printf("signed char     : %d~%d\n", SCHAR_MIN, SCHAR_MAX);
    printf("unsigned char     : %d~%d\n", 0, UCHAR_MAX);

    printf("short           :%d~%d\n", SHRT_MIN, SHRT_MAX);
    printf("int             :%d~%d\n", INT_MIN, INT_MAX);
    printf("long            :%ld~%ld\n", LONG_MIN, LONG_MAX);
    printf("long long       :%lld~%lld\n", LONG_LONG_MIN, LONG_LONG_MAX);

    printf("unsigned short  :%u~%u\n", 0, USHRT_MAX);
    printf("unsigned        :%u~%u\n", 0U, UINT_MAX);
    printf("unsigned long   :%lu~%lu\n", 0LU, ULONG_MAX);
    printf("unsigned long long   :%llu~%llu\n", 0LLU, ULLONG_MAX);

    return 0;
}