#include "stdio.h"

/* 
Done

Assume that months are specified as an integer between 1 and 12 (1 for January, 2 for February, and so on)
 and that the day of the month is a number between 1 and 31. 

 If the date falls between 12/16 and 3/15, you should print "Winter".

  If the date falls between 3/16 and 6/15, you should print "Spring". 

 If the date falls between 6/16 and 9/15, you should print "Summer". 

 And if the date falls between 9/16 and 12/15, you should print "Fall".


*/



int main()
{
    int month, day;
    scanf("%d\n", &month);
    scanf("%d", &day);

    (month < 3 || (month == 3 && day <= 15)) ? printf("Winter") :
    (month < 6 || (month == 6 && day <= 15)) ? printf("Spring") :
    (month < 9 || (month == 9 && day <= 15)) ? printf("Summer") :
    (month < 12 || (month == 12 && day <= 15)) ? printf("Fall") :
    printf("Winter");

   

    return 0;
}
