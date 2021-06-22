#include <stdio.h>


int main()
{
float T ;
int clk_num;
int peak;
int f; //hz
float clk; //ns

printf("주파수: \n");
scanf("%d", f);

printf("클락 입력: \n");
scanf("%f", clk);



T = floor(1/f *1000 * 100) / 100;
clk_num = T / clk;
peak = clk_num / 2;

printf("peak clk값 : \n");
printf("%d", peak);



    return 0;
}