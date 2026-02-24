#include <stdio.h>
int main() {
int total_days, attended_days;
float percentage;
printf("Enter total working days: ");

scanf("%d", &total_days);
printf("Enter attended days: ");
scanf("%d", &attended_days);
percentage = (attended_days * 100.0) / total_days;
printf("Attendance Percentage: %.2f%%\n", percentage);
if (percentage >= 75) {
printf("Status: Eligible for Exam\n");
} else {
printf("Status: Not Eligible for Exam\n");
}
return 0;
}
