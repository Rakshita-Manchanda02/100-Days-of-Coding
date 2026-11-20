//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

/*
Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/
#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter three sides: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0 ||
        a + b <= c || a + c <= b || b + c <= a)
    {
        printf("Invalid triangle");
    }
    else if (a == b && b == c)
    {
        printf("Equilateral triangle");
    }
    else if (a == b || b == c || a == c)
    {
        printf("Isosceles triangle");
    }
    else
    {
        printf("Scalene triangle");
    }

    return 0;
}