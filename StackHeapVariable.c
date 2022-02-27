#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Stack Variable: created by variable declaration
    void stack()
    {
        int x = 2;
        printf("%p", &x);
    }

    // Heap Varaible: created by malloc
    void heap()
    {
        // 分配一個 int 大小的記憶體
        int *n = malloc(sizeof(int));
        // 寫入值 42
        *n = 42;
        // 印出 n 指向的位置
        printf("%p\n", n);
        // 釋放記憶體
        free(n);
    }
    printf("Stack: (Static declared, Address always same)\n");
    stack();
    printf("\n");
    printf("Heap: (Dynamic declared, Everytime different)\n");
    heap();
    return 0;
}