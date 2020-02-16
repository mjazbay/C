/*
 this program repeatedly read a time in hours, computes the distance traveled in that time assuming a rate of 14 kilometeres per hour, and writes the distance to the video display. It is assumed that the time is a positive integer. The program is terminated by entering zero. The distance is computed using the formula
                                d= r * t
 where d is the distance, r is the rate, and t is the time.
*/

#include <stdio.h>
int main() {
    int time, distance, rate;
    rate = 14; //km/hour
    printf("Enter next time: ");
    scanf("%d", &time);
    while(time > 0) {
        printf("Time = %d hours\n", time);
        distance = rate * time;
        printf("Distance = %d kilometers\n\n", distance);
        printf("Enter next time: ");
        scanf("%d", &time);
    }
    printf("*** END OF PROGRAM ***\n\n");
    
}

