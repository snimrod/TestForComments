
/* A simple server in the internet domain using TCP
 *    The port number is passed as an argument */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h> 
#include <sys/socket.h>
#include <netinet/in.h>
#include <sys/time.h>
#include <time.h>
#include <math.h>
#include <stdbool.h>

//WHY???

//just because

void error(const char *msg)
{
    perror(msg);
    exit(1);
}

/*
int main(int argc, char *argv[])
{
	char name[100];
	int len = 100;
	int times = 0;

	memset(name, 0, len);

	for ( times = 0 ; times < 10 ; times++) {
		printf("%d) Enter your name: ", times + 1);
		fgets (name, 100, stdin);
		name[strlen(name)-1] = '\0';
		printf("The third letter is |%c|\n", name[2]);
	}


     return 0;

}*/

#define DINA_SIZE 36

int main()
{
    time_t timer;
    char buffer[DINA_SIZE];
    struct tm* tm_info;
	bool i;
	uint8_t *ip;
/*
	printf("FFF\n");
    time(&timer);
    tm_info = localtime(&timer);

    strftime(buffer, 26, "%Y-%m-%d %H:%M:%S", tm_info);
    puts(buffer);

	double a = 1.0;
	double d = floor(a);
	if (a == d)
		printf("yes\n");
	else
		printf("no\n");
*/

	printf ("SHL int size is %u, int ptr size is %u\n", sizeof(i), sizeof(ip));
	
    return 0;
}

