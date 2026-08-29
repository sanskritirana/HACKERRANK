/*
You are given a date represented by three integers: day, month, and year.
Your task is to calculate and print the date of the next day in DD-MM-YYYY format.

Rules and Requirements:

Use only if / else conditional logic
Do not use loops or switch statements
Correctly handle:

Month endings
Year transitions
Leap-year February
Hints:

Validate Month and Minimum Day (optional but recommended)

month must be between 1 and 12
day must be at least 1
(Upper bound for day is checked later based on the month)
Decide the Maximum Number of Days in the Month (maxDay)

February (month == 2) -> Determine whether the given year is a leap year.

A year is a leap year if:
    1. It is divisible by 400, OR
    2. It is divisible by 4 but not divisible by 100
    3. Otherwise, it is not a leap year.

Month-wise maxDay
    Months with 30 Days: 4, 6, 9, 11 | maxDay = 30
    Months with 31 Days: 1, 3, 5, 7, 8, 10, 12 | maxDay = 31
    Month 2: Leap Year: maxDay = 29 | Non-Leap Year: maxDay = 28
Input Format

A single line containing three space-separated integers: day month year

- day — day of the month
- month — month number (1–12)
- year — year (positive integer)
Constraints

1 ≤ day ≤ 31
1 ≤ month ≤ 12
1 ≤ year ≤ 10^9
Use only conditional statements (if / else)
Output Format

Print a single line containing the next date in the format: DD-MM-YYYY

Sample Input 0

1 1 2024
Sample Output 0

02-01-2024
Explanation 0

Simple next day in same month.

Sample Input 1

28 2 2021
Sample Output 1

01-03-2021
Explanation 1

2021 is not leap year → Feb has 28 days.

Sample Input 2

29 2 2024
Sample Output 2

01-03-2024
Explanation 2

Leap year, day rolls over to March 1.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {
    int day, month, year;
    int maxDays;

    scanf("%d %d %d", &day, &month, &year);

    if (month == 1 || month == 3 || month == 5 || month == 7 ||
        month == 8 || month == 10 || month == 12) {
        maxDays = 31;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11) {
        maxDays = 30;
    }
    else {  
        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
            maxDays = 29;   
        else
            maxDays = 28;   
    }

    if (day < maxDays) {
        day++;
    }
    else {
        day = 1;
        if (month < 12) {
            month++;
        }
        else {
            month = 1;
            year++;
        }
    }

    printf("%02d-%02d-%04d", day, month, year);

    return 0;
}

