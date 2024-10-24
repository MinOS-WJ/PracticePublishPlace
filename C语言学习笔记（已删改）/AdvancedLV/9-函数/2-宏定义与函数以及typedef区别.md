## 宏定义与函数以及typedef区别

- 与函数的区别
+ 从整个使用过程可以发现，带参数的宏定义，在源程序中出现的形式与函数很像。但是两者是有本质区别的：

+ 1> 宏定义不涉及存储空间的分配、参数类型匹配、参数传递、返回值问题

+ 2> 函数调用在程序运行时执行，而宏替换只在编译预处理阶段进行。所以带参数的宏比函数具有更高的执行效率
- typedef和#define的区别
+ 用宏定义表示数据类型和用typedef定义数据说明符的区别。

+ 宏定义只是简单的字符串替换,￼是在预处理完成的

+ typedef是在编译时处理的,它不是作简单的代换,而是对类型说明符￼重新命名。被命名的标识符具有类型定义说明的功能

```c
typedef char *String;
int main(int argc, const char * argv[])
{
     String str = "This is a string!";
     return 0;
}


#define String char *
int main(int argc, const char * argv[])
{
    String str = "This is a string!";
     return 0;
}
```

```c
typedef char *String1; // 给char *起了个别名String1
#define String2 char * // 定义了宏String2
int main(int argc, const char * argv[]) {
        /*
        只有str1、str2、str3才是指向char类型的指针变量
        由于String1就是char *，所以上面的两行代码等于:
        char *str1;
        char *str2;
        */
      String1 str1, str2;
        /*
        宏定义只是简单替换, 所以相当于
        char *str3, str4;
        *号只对最近的一个有效, 所以相当于
        char *str3;
        char str4;
        */
      String2 str3, str4;
      return 0;
}
```

## 