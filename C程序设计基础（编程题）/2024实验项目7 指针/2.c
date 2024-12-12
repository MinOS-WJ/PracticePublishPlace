#include <stdio.h>
int main() {
    const char* monthNames[] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };
    int month;
    scanf("%d", &month);
    printf("英文是：%s\n", monthNames[month - 1]);
    return 0;
}
