#include <stdio.h>
#include <string.h>

int main() {
    char date[20];
    
    printf("Enter date (dd/mm/yyyy): ");
    fgets(date, sizeof(date), stdin);
    date[strcspn(date, "\n")] = 0;

    char day[3], month[3], year[5];
    strncpy(day, date, 2);
    day[2] = '\0';
    strncpy(month, date + 3, 2);
    month[2] = '\0';
    strcpy(year, date + 6);

    char monthName[4];
    if (strcmp(month, "01") == 0) strcpy(monthName, "Jan");
    else if (strcmp(month, "02") == 0) strcpy(monthName, "Feb");
    else if (strcmp(month, "03") == 0) strcpy(monthName, "Mar");
    else if (strcmp(month, "04") == 0) strcpy(monthName, "Apr");
    else if (strcmp(month, "05") == 0) strcpy(monthName, "May");
    else if (strcmp(month, "06") == 0) strcpy(monthName, "Jun");
    else if (strcmp(month, "07") == 0) strcpy(monthName, "Jul");
    else if (strcmp(month, "08") == 0) strcpy(monthName, "Aug");
    else if (strcmp(month, "09") == 0) strcpy(monthName, "Sep");
    else if (strcmp(month, "10") == 0) strcpy(monthName, "Oct");
    else if (strcmp(month, "11") == 0) strcpy(monthName, "Nov");
    else if (strcmp(month, "12") == 0) strcpy(monthName, "Dec");
    else strcpy(monthName, "???");

    printf("Formatted date: %s-%s-%s\n", day, monthName, year);
    return 0;
}
