## realloc函数

| 函数声明    | void *realloc(void *ptr, size_t size);                      |
| ------- | ----------------------------------------------------------- |
| 所在文件    | stdlib.h                                                    |
| 函数功能    | 扩容(缩小)原有内存的大小。通常用于扩容，缩小会会导致内存缩去的部分数据丢失。                     |
| 参数及返回解析 |                                                             |
| 参数      | void * ptr 表示待扩容(缩小)的指针， ptr 为之前用 malloc 或者 calloc 分配的内存地址。 |
| 参数      | size_t    size 表示扩容(缩小)后内存的大小。                              |
| 返回值     | void* 成功返回非空指针指向申请的空间 ，失败返回 NULL。                           |

- 注意点:
  + 若参数ptr==NULL，则该函数等同于 malloc
  + 返回的指针，可能与 ptr 的值相同，也有可能不同。若相同，则说明在原空间后面申请，否则，则可能后续空间不足，重新申请的新的连续空间，原数据拷贝到新空间， 原有空间自动释放

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // 1.申请4个字节存储空间
    int *p = NULL;
    p = realloc(p, sizeof(int)); // 此时等同于malloc
    // 2.使用申请好的空间
    *p = 666;
    printf("*p = %i\n",  *p);
    // 3.释放空间
    free(p);

    return 0;
}
```

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // 1.申请4个字节存储空间
    int *p = malloc(sizeof(int));
    printf("p = %p\n", p);
    // 如果能在传入存储空间地址后面扩容, 返回传入存储空间地址
    // 如果不能在传入存储空间地址后面扩容, 返回一个新的存储空间地址
    p = realloc(p, sizeof(int) * 2);
    printf("p = %p\n", p);
    // 2.使用申请好的空间
    *p = 666;
    printf("*p = %i\n",  *p);
    // 3.释放空间
    free(p);

    return 0;
}
```

# 