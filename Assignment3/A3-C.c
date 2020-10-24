#include "stdio.h"

/*
DONE

 Body temp in C is: 37.0 
 
 */


double ftoc(double tempf, double tempc) {
    return (tempf - 32.0) * (5.0 / 9.0);
}

int main() {

double tempf = 98.6;
double tempc = 0.0;
double final = ftoc(tempf, tempc);
printf("Body temp in C is: %.1f", final);

return 0;
}

