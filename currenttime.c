#include <time.h>
#include <stdio.h>
 
int main()
{
        char time_str[100]; 
        time_t current_time = time(NULL);
        struct tm *tm = localtime(&current_time);
        strftime(time_str, sizeof(time_str), "%c", tm);
        printf("Current Date and Time Sharath:\n%s\n",time_str);
        return 0;
}
