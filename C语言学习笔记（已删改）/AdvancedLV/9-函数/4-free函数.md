## free函数

- 注意: 通过malloc申请的存储空间一定要释放, 所以malloc和free函数总是成对出现

| 函数声明    | void free(void *p);  |
| ------- | -------------------- |
| 所在文件    | stdlib.h             |
| 函数功能    | 释放申请的堆内存             |
| 参数及返回解析 |                      |
| 参数      | void*    p 指向手动申请的空间 |
| 返回值     | void    无返回          |

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // 1.申请4个字节存储空间
    int *p = (int *)malloc(sizeof(int));
    // 2.初始化4个字节存储空间为0
    memset(p, 0, sizeof(int));
    // 3.释放申请的存储空间
    free(p);
    return 0;
}
```

# 