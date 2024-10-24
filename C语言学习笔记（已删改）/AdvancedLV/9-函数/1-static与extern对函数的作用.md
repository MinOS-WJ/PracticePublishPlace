## static与extern对函数的作用

- 内部函数:只能在本文件中访问的函数

- 外部函数:可以在本文件中以及其他的文件中访问的函数

- 默认情况下所有的函数都是外部函数

- **static 作用**

- 声明一个内部函数

```c
static int sum(int num1,int num2);
```

- 定义一个内部函数

```c
static int sum(int num1,int num2)
{
  return num1 + num2;
}
```

- **extern作用**
+ 声明一个外部函数

```c
extern int sum(int num1,int num2);
```

- 定义一个外部函数

```c
extern int sum(int num1,int num2)
{
  return num1 + num2;
}
```

> + 注意点: 
> + 由于默认情况下所有的函数都是外部函数, 所以extern一般会省略
> + 如果只有函数声明添加了static与extern, 而定义中没有添加static与extern, 那么无效

---