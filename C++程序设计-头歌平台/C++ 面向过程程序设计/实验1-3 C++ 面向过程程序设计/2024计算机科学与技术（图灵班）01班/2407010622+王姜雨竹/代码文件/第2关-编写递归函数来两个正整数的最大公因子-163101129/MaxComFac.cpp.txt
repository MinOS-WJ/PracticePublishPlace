// 请在下面添加递归函数实现求最大公因子的实现代码
int Fun(int n, int m)
{
    // 请在此添加代码，补全函数Fun
    /********** Begin *********/
    if (m==0) {
        return n;
    }else{
        return Fun(m,n%m);
    }
    
    /********** End **********/
}