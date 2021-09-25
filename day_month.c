#include<stdio.h>
#include <stdbool.h>
int days_months(int month,int year);
bool is_leap(int years);

int main()
{
	int month,year;
	scanf_s("%d,%d", &month,&year);
	printf("%dÔÂÓĞ%dÌì", month, days_months(month,year)
	);
}
int days_months(int month,int year) {
	int days;
	int months[12] = { 31,is_leap(year) ? 29:28 ,31,30,31,30,31,30,31,30,31,30 };
	days = months[month - 1];
	return days;
}
bool is_leap(int years)
{
	if (years % 4 == 0)
		return true;
	else
		return false;
}