#include <cstdio>

int main(void)
{
    int n; // 입력 되는 정수의 개수
    int min = 0,max = 0;
    scanf("%d", &n);
    int num[n];
    for(int i = 0; i < n; ++i)
    {
        scanf("%d", &num[i]);
        if (max < num[i] || i == 0)
            max = num[i];
        if (min > num[i] || i == 0)
            min = num[i];
    }
    printf("%d %d", min, max);
    return 0;
}