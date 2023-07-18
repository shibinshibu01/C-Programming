#include <stdio.h>
#include <time.h>
#include <string.h>

void main(){
    time_t rawtime;
    struct tm *info;
    char  buf[1024];

    time(&rawtime);
    info = localtime(&rawtime);
    sprintf(buf,"The system date and time is: %s",asctime(info));
    puts(buf);        
}

