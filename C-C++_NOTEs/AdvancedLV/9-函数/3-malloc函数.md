## malloc函数

| 函数声明      | void * malloc(size_t _Size);         |
| --------- | ------------------------------------ |
| 所在文件      | stdlib.h                             |
| 函数功能      | 申请堆内存空间并返回,所申请的空间并未初始化。              |
| 常见的初始化方法是 | memset 字节初始化。                        |
| 参数及返回解析   |                                      |
| 参数        | size_t    _size 表示要申请的字符数            |
| 返回值       | void *    成功返回非空指针指向申请的空间 ，失败返回 NULL |

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    /*
     * malloc
     * 第一个参数: 需要申请多少个字节空间
     * 返回值类型: void *
     */ 
    int *p = (int *)malloc(sizeof(int));
    printf("p = %i\n", *p); // 保存垃圾数据
    /*
     * 第一个参数: 需要初始化的内存地址
     * 第二个初始: 需要初始化的值
     * 第三个参数: 需要初始化对少个字节
     */ 
    memset(p, 0, sizeof(int)); // 对申请的内存空间进行初始化
    printf("p = %i\n", *p); // 初始化为0
    return 0;
}
```

# 