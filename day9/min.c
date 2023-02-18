#include <stdio.h>
int main() 
{
    int num1, num2, num3, num4, num5, num6;
    int min1, min2, min3;
    printf("Enter six numbers: ");
    scanf("%d %d %d %d %d %d", &num1, &num2, &num3, &num4, &num5, &num6);
    // Finding the first minimum number 
    min1 = num1;
    if (num2 < min1) 
    { 
        min1 = num2;
    }
    if (num3 < min1) 
    {
        min1 = num3;
    }
    if (num4 < min1) 
    {
        min1 = num4;}
    if (num5 < min1) 
    {
        min1 = num5;
    }
    if (num6 < min1) 
    {
        min1 = num6;
    }
    // Finding the second minimum number 
    min2 = num1;
    if (num2 < min2 && num2 > min1) 
    {
        min2 = num2;
    }
    if (num3 < min2 && num3 > min1) 
    {
        min2 = num3;
    }
    if (num4 < min2 && num4 > min1) 
    {
        min2 = num4;
    }
    if (num5 < min2 && num5 > min1) 
    {
        min2 = num5;
    }
    if (num6 < min2 && num6 > min1) 
    {
        min2 = num6;
    }
    // Finding the third manimum number 
    min3 = num1;
    if (num2 < min3 && num2 > min2) 
    {
        min3 = num2;
    }
    if (num3 < min3 && num3 > min2) 
    {
        min3 = num3;
    }
    if (num4 < min3 && num4 > min2) 
    {
        min3 = num4;
    }
    if (num5 < min3 && num5 > min2) 
    {
        min3 = num5;
    }
    if (num6 < min3 && num6 > min2) 
    {
        min3 = num6;
    }
    // Calculating the sum of three minimum numbers 
    int sum = min1 + min2 + min3;
    printf("Sum of the three minimum numbers: %d\n", sum);
    return 0;
    }