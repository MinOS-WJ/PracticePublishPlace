## typedef关键字

- C语言不仅􏰀供了丰富的数据类型,而且还允许由用户自己定义类型说明符,也就是说允许由用户为数据类型取“别名”。

- 格式: ```typedef 原类型名 新类型名;```
+ 其中原类型名中含有定义部分,新类型名一般用大写表示,以便于区别。

+ 有时也可用宏定义来代替typedef的功能,但是宏定义是由预处理完成的,而typedef则是在编译 时完成的,后者更为灵活方便。
  ##typedef使用
- 基本数据类型

```c
typedef int INTEGER
INTEGER a; // 等价于 int a;
```

- 也可以在别名的基础上再起一个别名

```c
typedef int Integer;

typedef Integer MyInteger;
```

- 用typedef定义数组、指针、结构等类型将带来很大的方便,不仅使程序书写简单而且使意义更为 明确,因而增强了可读性。

- 数组类型

```c
typedef char NAME[20]; // 表示NAME是字符数组类型,数组长度为20。然后可用NAME 说明变量,
NAME a; // 等价于 char a[20];
```

- 结构体类型
+ 第一种形式:

```c
 struct Person{
    int age;
    char *name;
};

typedef struct Person PersonType;
```

    + 第二种形式:

```c
typedef struct Person{
    int age;
    char *name;
} PersonType;
```

    + 第三种形式:

```c
typedef struct {
    int age;
    char *name;
} PersonType;
```

- 枚举
+ 第一种形式:

```c
enum Sex{
    SexMan,
    SexWoman,
    SexOther
};
typedef enum Sex SexType;
```

    + 第二种形式:

```c
typedef enum Sex{
    SexMan,
    SexWoman,
    SexOther
} SexType;
```

    + 第三种形式:

```c
typedef enum{
    SexMan,
    SexWoman,
    SexOther
} SexType;
```

- 指针
+ typedef与指向结构体的指针

```c
 // 定义一个结构体并起别名
  typedef struct {
      float x;
      float y;
  } Point;

 // 起别名
 typedef Point *PP;
```

+ typedef与指向函数的指针

```c
// 定义一个sum函数，计算a跟b的和
  int sum(int a, int b) {
      int c = a + b;
      printf("%d + %d = %d", a, b, c);
      return c;
 }
 typedef int (*MySum)(int, int);

// 定义一个指向sum函数的指针变量p
 MySum p = sum;
```

# 