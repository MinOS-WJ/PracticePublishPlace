## putchar和getchar

- putchar: 向屏幕输出一个字符

```c
#include <stdio.h>
int main(){
    char ch = 'a';
    putchar(ch); // 输出a
}
```

- getchar: 从键盘获得一个字符

```c
#include <stdio.h>
int main(){
    char ch;
    ch = getchar();// 获取一个字符
    printf("ch = %c\n", ch);
}
```
