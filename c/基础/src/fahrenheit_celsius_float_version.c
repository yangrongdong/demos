/*
 * 华氏温度和摄氏温度对照表：
 * 公式：°C = (5 / 9)(°F - 32)
 * 
*/
#include<stdio.h>
/*
 * 打印 华氏-摄氏温度对照表-浮点数版本
*/
int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("华氏\t摄氏\n");
    while (fahr <= upper)
    {
        celsius = 5.0 * (fahr - 32.0) / 9.0;
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}