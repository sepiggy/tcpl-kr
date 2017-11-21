#include <stdio.h>

int day_of_year(int, int, int);

void month_day(int, int, int *, int *);

int is_leap_year(int);

static char daytab[2][13] = {
        {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
        {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};

int main() {
    int *pmonth, *pday;
    printf("%d\n", day_of_year(1988, 2, 29));
    month_day(1988, 60, &pmonth, &pday);
    printf("%d %d\n", pmonth, pday);
    return 0;
}

/* day_of_year: set day of year from month and day */
int day_of_year(int year, int month, int day) {
    int i, leap;
    leap = is_leap_year(year);
    for (i = 1; i < month; i++) {
        day += daytab[leap][i];
    }
    return day;
}

/* month_day: set month, day from day of year */
void month_day(int year, int yearday, int *pmonth, int *pday) {
    int i;
    int leap;

    leap = is_leap_year(year);
    for (i = 1; yearday > daytab[leap][i]; i++)
        yearday -= daytab[leap][i];

    *pmonth = i;
    *pday = yearday;
}

int is_leap_year(int year) {
    return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
}
