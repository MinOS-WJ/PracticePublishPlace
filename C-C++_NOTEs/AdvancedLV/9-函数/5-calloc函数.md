## calloc函数

| 函数声明    | void *calloc(size_t nmemb, size_t size); |
| ------- | ---------------------------------------- |
| 所在文件    | stdlib.h                                 |
| 函数功能    | 申请堆内存空间并返回，所申请的空间，自动清零                   |
| 参数及返回解析 |                                          |
| 参数      | size_t     nmemb 所需内存单元数量                |
| 参数      | size_t size    内存单元字节数量                  |
| 返回值     | void *    成功返回非空指针指向申请的空间 ，失败返回 NULL     |

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    /*
    // 1.申请3块4个字节存储空间
    int *p = (int *)malloc(sizeof(int) * 3);
    // 2.使用申请好的3块存储空间
    p[0] = 1;
    p[1] = 3;
    p[2] = 5;
    printf("p[0] = %i\n", p[0]);
    printf("p[1] = %i\n", p[1]);
    printf("p[2] = %i\n", p[2]);
    // 3.释放空间
    free(p);
    */

    // 1.申请3块4个字节存储空间
    int *p = calloc(3, sizeof(int));
    // 2.使用申请好的3块存储空间
    p[0] = 1;
    p[1] = 3;
    p[2] = 5;
    printf("p[0] = %i\n", p[0]);
    printf("p[1] = %i\n", p[1]);
    printf("p[2] = %i\n", p[2]);
    // 3.释放空间
    free(p);

    return 0;
}
```

# 