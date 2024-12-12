#include <stdio.h>
#define ST_NUM 3

struct ST {
    char id[5];
    char name[10];
    float score[3];
};

int main() {
    struct ST students[ST_NUM];
    float totalScore = 0;
    int maxIndex = 0;
    float maxAverage = 0;
	int i;
    for (i = 0; i < ST_NUM; i++) {
        scanf("%s", students[i].id);
        scanf("%s", students[i].name);
		int j;
        for (j = 0; j < 3; j++) {
            scanf("%f", &students[i].score[j]);
            totalScore += students[i].score[j];
        }
        float average = (students[i].score[0] + students[i].score[1] + students[i].score[2]) / 3.0;
        if (average > maxAverage) {
            maxAverage = average;
            maxIndex = i;
        }
    }

    float totalAverage = totalScore /(ST_NUM*3.0);

    printf("平均成绩为:%.2f\n", totalAverage);
    printf("最高学生信息为:\n");
    printf("学号:%s\n", students[maxIndex].id);
    printf("姓名:%s\n", students[maxIndex].name);
    printf("成绩:%.2f, %.2f, %.2f\n", students[maxIndex].score[0], students[maxIndex].score[1], students[maxIndex].score[2]);

    return 0;
}
