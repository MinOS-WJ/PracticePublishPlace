## main函数分析

- main的含义:
+ main是函数的名称, 和我们自定义的函数名称一样, 也是一个标识符

+ 只不过main这个名称比较特殊, 程序已启动就会自动调用它
- return 0;的含义:
+ 告诉系统main函数是否正确的被执行了

+ 如果main函数的执行正常, 那么就返回0

+ 如果main函数执行不正常, 那么就返回一个非0的数
- 返回值类型:
+ 一个函数return后面写的是什么类型, 函数的返回值类型就必须是什么类型, 所以写int
- 形参列表的含义
+ int argc : 
* 系统在启动程序时调用main函数时传递给argv的值的个数
+ const char * argv[] :
* 系统在启动程序时传入的的值, 默认情况下系统只会传入一个值, 这个值就是main函数执行文件的路径

* 也可以通过命令行或项目设置传入其它参数
  ![](https://img-blog.csdnimg.cn/img_convert/0ec7f77ac94198f539e8fa2dce87ab82.png)
  ![](https://img-blog.csdnimg.cn/img_convert/5cdd2adc527c964fec76a5f55ed62d4d.png)

---

- 函数练习
+ 写一个函数从键盘输入三个整型数字,找出其最大值

+ 写一个函数求三个数的平均值