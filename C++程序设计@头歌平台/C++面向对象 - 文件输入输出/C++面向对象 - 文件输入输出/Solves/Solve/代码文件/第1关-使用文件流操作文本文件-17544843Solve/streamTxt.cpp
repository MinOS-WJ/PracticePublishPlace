#include <iostream>
#include <fstream>
using namespace std;

/*
  函数count：统计文件fin中每种服装的销售总额，并写入文件fout中
  参数fin：文件每种服装的销售情况，fout：每种服装销售总额的写入文件
  返回值：无
  说明：文件fin中，每种服装信息占一行，分别为服装编号，销售件数，每件的销售价格（整型）。
  文件fout：每种服装统计信息占一行，分别为服装编号，销售总额（整型）,中间用一个空格隔开。
*/
void count(ifstream & fin, ofstream & fout)
{
std::string id;
int num,price,sum;
while(fin>>id>>num){
sum=0;
for(int i=0;i<num;i++){
  fin>>price;
  sum+=price;
}
fout<<id<<" "<<sum<<"\n";
}
}