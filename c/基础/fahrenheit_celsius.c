/*
 * 华氏温度和摄氏温度对照表：
 * 公式：°C = (5 / 9)(°F - 32)
 * 
*/
#include<stdio.h>
/*
 * 打印 华氏-摄氏温度对照表
*/
int main()
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("华氏\t摄氏\n");
    while (fahr <= upper)
    {
        celsius = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
}