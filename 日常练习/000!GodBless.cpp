//                                                          _ooOoo_
//                                                         o8888888o
//                                                         88" . "88
//                                                         (| -_- |)
//                                                          O\ = /O
//                                                      ____/`---'\____
//                                                    .   ' \\| |// `.
//                                                     / \\||| : |||// \
//                                                   / _||||| -:- |||||- \
//                                                     | | \\\ - /// | |
//                                                   | \_| ''\---/'' | |
//                                                    \ .-\__ `-` ___/-. /
//                                                 ___`. .' /--.--\ `. . __
//                                              ."" '< `.___\_<|>_/___.' >'"".
//                                             | | : `- \`.;`\ _ /`;.`/ - ` : | |
//                                               \ \ `-. \_ __\ /__ _/ .-` / /
//                                       ======`-.____`-.___\_____/___.-`____.-'======
//                                                          `=---='
//
//                                       .............................................
//                                              佛祖保佑             永无BUG
//                                      佛曰:
//                                              写字楼里写字间，写字间里程序员；
//                                              程序人员写程序，又拿程序换酒钱。
//                                              酒醒只在网上坐，酒醉还来网下眠；
//                                              酒醉酒醒日复日，网上网下年复年。
//                                              但愿老死电脑间，不愿鞠躬老板前；
//                                              奔驰宝马贵者趣，公交自行程序员。
//                                              别人笑我忒疯癫，我笑自己命太贱；
//                                              不见满街漂亮妹，哪个归得程序员？

#include <stdio.h>
#include <string.h>
void PrintCenterAlign(char *pStr, int Len)
{
    int lSpaceNum = (Len - strlen(pStr)) / 2;

    printf("%*s\n", lSpaceNum + strlen(pStr), pStr);
}

void PrintGodBless(void)
{
    PrintCenterAlign("_ooOoo_", 150);
    PrintCenterAlign("o8888888o", 150);
    PrintCenterAlign("88\" . \"88", 150);
    PrintCenterAlign("(| -_- |)", 150);
    PrintCenterAlign("O\\ = /O", 150);
    PrintCenterAlign("____/'---'\\____", 150);
    PrintCenterAlign(".' \\\\| |// '.", 150);
    PrintCenterAlign("/ \\\\||| : |||// \\", 150);
    PrintCenterAlign("/ _||||| -:- |||||- \\", 150);
    PrintCenterAlign("| | \\\\\\ - /// | |", 150);
    PrintCenterAlign("| \\_| ''\\---/'' |_/", 150);
    PrintCenterAlign("\\ .-\\__ `-` ___/-. /", 150);
    PrintCenterAlign("___`. .' /--.--\\ `. . __", 150);
    PrintCenterAlign(".\"\" '< `.___\\_<|>_/___.' >'\"\".", 150);
    PrintCenterAlign("| | : `- \\`.;`\\ _ /`;.`/ - ` : | |", 150);
    PrintCenterAlign("\\ \\ `-. \\_ __\\ /__ _/ .-` / /", 150);
    PrintCenterAlign("======`-.____`-.___\\_____/___.-`____.-'======", 150);
    PrintCenterAlign("`=---='", 150);
    printf("\n");
    PrintCenterAlign("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^", 150);
    PrintCenterAlign("  *God Bless          Never Crash* ", 150);
}

int main(int argc, char *argv[])
{
    PrintGodBless();
}