#include<stdio.h>
#include<time.h>

int main()
{

    time_t t;   // not a primitive datatype
    time(&t);

    printf("\n %s", ctime(&t));
    return 0;
}
