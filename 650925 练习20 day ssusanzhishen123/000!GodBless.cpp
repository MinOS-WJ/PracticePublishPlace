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
//                                              ���汣��             ����BUG
//                                      ��Ի:
//                                              д��¥��д�ּ䣬д�ּ������Ա��
//                                              ������Աд�������ó��򻻾�Ǯ��
//                                              ����ֻ���������������������ߣ�
//                                              ��������ո��գ����������긴�ꡣ
//                                              ��Ը�������Լ䣬��Ը�Ϲ��ϰ�ǰ��
//                                              ���۱������Ȥ���������г���Ա��
//                                              ����Ц��߯��񲣬��Ц�Լ���̫����
//                                              ��������Ư���ã��ĸ���ó���Ա��

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