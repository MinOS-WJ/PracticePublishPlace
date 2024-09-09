## Scanf函数

- scanf函数用于接收键盘输入的内容, 是一个阻塞式函数,程序会停在scanf函数出现的地方, 直到接收到数据才会执行后面的代码

- printf函数的调用格式为:
+ ```scanf("格式控制字符串", 地址列表);```

+ 例如: ```scanf("%d", &num);```
  <img src="https://img-blog.csdnimg.cn/img_convert/6df3856aa41baa48cfc65ead2e0294de.png" title="" alt="" width="461">

---

- 基本用法
+ 地址列表项中只能传入变量地址, 变量地址可以通过&符号+变量名称的形式获取

```c
#include <stdio.h>
int main(){
    int number;
    scanf("%d", &number); // 接收一个整数
    printf("number = %d\n", number); 
}
```

- 接收非字符和字符串类型时, 空格、Tab和回车会被忽略

```c
#include <stdio.h>
int main(){
    float num;
    // 例如:输入 Tab 空格 回车 回车 Tab 空格 3.14 , 得到的结果还是3.14
    scanf("%f", &num);
    printf("num = %f\n", num);
}
```

- 非格式字符串原样输入, 格式控制字符串会赋值给地址项列表项中的变量
+ 不推荐这种写法

```c
#include <stdio.h>
int main(){
    int number;
    // 用户必须输入number = 数字  , 否则会得到一个意外的值
    scanf("number = %d", &number);
    printf("number = %d\n", number);
}
```

- 接收多条数据
+ 格式控制字符串和地址列表项在数量和类型上必须一一对应

+ 非字符和字符串情况下如果没有指定多条数据的分隔符, 可以使用空格或者回车作为分隔符(不推荐这种写法)

+ 非字符和字符串情况下建议明确指定多条数据之间分隔符

```c
#include <stdio.h>
int main(){
    int number;
    scanf("%d", &number);
    printf("number = %d\n", number);
    int value;
    scanf("%d", &value);
    printf("value = %d\n", value);
}
```

```c
#include <stdio.h>
int main(){
    int number;
    int value;
    // 可以输入 数字 空格 数字, 或者 数字 回车 数字
    scanf("%d%d", &number, &value);
    printf("number = %d\n", number);
    printf("value = %d\n", value);
}
```

```c
#include <stdio.h>
int main(){
    int number;
    int value;
    // 输入 数字,数字 即可
    scanf("%d,%d", &number, &value);
    printf("number = %d\n", number);
    printf("value = %d\n", value);
}
```

- \n是scanf函数的结束符号, 所以格式化字符串中不能出现\n

```c
#include <stdio.h>
int main(){
    int number;
    // 输入完毕之后按下回车无法结束输入
    scanf("%d\n", &number);
    printf("number = %d\n", number);
}
```

## scanf运行原理

- 系统会将用户输入的内容先放入输入缓冲区
- scanf方式会从输入缓冲区中逐个取出内容赋值给变量
- 如果输入缓冲区的内容不为空,scanf会一直从缓冲区中获取,而不要求再次输入

```c
#include <stdio.h>
int main(){
    int num1;
    int num2;
    char ch1;
    scanf("%d%c%d", &num1, &ch1, &num2);
    printf("num1 = %d, ch1 = %c, num2 = %d\n", num1, ch1, num2);
    char ch2;
    int num3;
    scanf("%c%d",&ch2, &num3);
    printf("ch2 = %c, num3 = %d\n", ch2, num3);
}
```

<img src="https://img-blog.csdnimg.cn/img_convert/29187affda3f7e082e9067fbfb927769.png" title="" alt="" width="648">

- 利用fflush方法清空缓冲区(不是所有平台都能使用)
  + 格式: ```fflush(stdin);```
  + C和C++的标准里从来没有定义过 fflush(stdin)
  + MSDN 文档里清除的描述着"fflush on input stream is an extension to the C standard" （fflush 是在标准上扩充的函数, 不是标准函数, 所以不是所有平台都支持）
- 利用setbuf方法清空缓冲区(所有平台有效)
  + 格式: ```setbuf(stdin, NULL);```

```c
#include <stdio.h>
int main(){
    int num1;
    int num2;
    char ch1;
    scanf("%d%c%d", &num1, &ch1, &num2);
    printf("num1 = %d, ch1 = %c, num2 = %d\n", num1, ch1, num2);
    //fflush(stdin); // 清空输入缓存区
    setbuf(stdin, NULL); // 清空输入缓存区
    char ch2;
    int num3;
    scanf("%c%d",&ch2, &num3);
    printf("ch2 = %c, num3 = %d\n", ch2, num3);
}
```

---