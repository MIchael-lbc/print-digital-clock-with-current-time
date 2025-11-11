#include<stdio.h>
#include<time.h> //Include <time.h> → “I want the real time or time calculations”
//Skip it → “I’m just counting or simulating time myself”
int main()
{
      time_t now;            // declare a variable of type time_t
    now = time(NULL);      // get current system time
    printf("Seconds since Jan 1, 1970: %ld\n", now);
    printf("Current time: %s", ctime(&now)); // human-readable format
    return 0;
    //Use it with <time.h> functions:

//time(&variable) → store current time in time_t.
//difftime(time1, time0) → difference between two time_t values in seconds.
//ctime(&variable) → convert time_t to a readable string.
//localtime(&variable) → convert to broken-down local time (struct tm).
    
}