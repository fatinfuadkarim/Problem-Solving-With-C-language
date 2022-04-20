#include <stdio.h>
int main() {
char month_number;
printf("Enter month number (Between 1(JANUARY) and 12(DECEMBER)): ");
scanf("%c", &month_number);

switch (month_number)
{
    case '1':
      printf("Number of days in January = 31");
      break;

     case '2':
      printf("Number of days in February = 28");
      break;

    case '3':
      printf("Number of days in March= 31");
      break;

    case '4':
      printf("Number of days in April = 30");
      break;

    case '5':
      printf("Number of days in May = 31");
      break;

    case '6':
      printf("Number of days in June = 30");
      break;

    case '7':
      printf("Number of days in July = 31");
      break;

    case '8':
      printf("Number of days in August = 31");
      break;

    case '9':
      printf("Number of days in September = 30");
      break;

    case '10':
      printf("Number of days in October = 31");
      break;

    case '11':
      printf("Number of days in November = 30");
      break;

   case '12':
      printf("Number of days in December = 31");
      break;
    // operator doesn't match any case constant
    default:
      printf("Error! NO such Month Exists");
}

return 0;
}
