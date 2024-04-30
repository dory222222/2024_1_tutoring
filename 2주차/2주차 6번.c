#include <stdio.h>

int main() {
    int num = 42;
    int* ptr;
    int** double_ptr;
    ptr = &num;
    double_ptr = &ptr;
    printf("%p\n", ptr);
    printf("%p\n", &double_ptr);
    printf("%d\n", num);
    printf("%p\n", *ptr);
    printf("%p\n", &num);
    printf("%p\n", double_ptr);
    printf("%p", *double_ptr);

    return 0;
}