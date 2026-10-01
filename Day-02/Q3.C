//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/
#include<stdio.h>
int main()
{
  int length, breadth, area, perimeter;
  printf("Enter lenghth of the rectangle: \n");
  scanf("%d",&length);

  print("Enter breadth of the reactangle: \n");
  scanf("%d",&breadth);

  area = lenghth*breadth;
  printf("The area of the Rectangle is: %d",area);

  perimeter = 2*(lenght+breadth);
  printf("The perimeter of the rectangle is: %d", perimeter);

  return0 ;

}