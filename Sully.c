#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int ac,char **av)
{
	(void)ac;
	int i=5;
	int j=0;
	char *a="#include <string.h>%c#include <fcntl.h>%c#include <unistd.h>%c#include <stdio.h>%c#include <stdlib.h>%c%cint main(int ac,char **av)%c{%c	(void)ac;%c	int i=%d;%c	int j=0;%c	char *a=%c%s%c;%c	char *line=malloc(1000);%c	char *exec=malloc(1000);%c	char *file=malloc(1000);%c	if (i == 0)%c		return (0);%c	if (atoi(av[0]+(strlen(av[0])-1)) == 0)%c	{%c		sprintf(exec,%c./Sully_5%c);%c		sprintf(file,%cSully_5.c%c);%c		j=5;%c	}%c	else%c	{%c		sprintf(exec,%c./Sully_%cd%c,i-1);%c		sprintf(file,%cSully_%cd.c%c,i-1);%c		j=i-1;%c	}%c	FILE *fp=fopen(file,%cw+%c);%c	fprintf(fp,a,10,10,10,10,10,10,10,10,10,j,10,10,34,a,34,10,10,10,10,10,10,10,10,34,34,10,34,34,10,10,10,10,10,34,37,34,10,34,37,34,10,10,10,34,34,10,10,10,34,37,37,34,10,10,10);%c	fclose(fp);%c	sprintf(line,%cgcc -Wall -Wextra -Werror -o %cs %cs%c, exec, file);%c	system(line);%c	system(exec);%c}";
	char *line=malloc(1000);
	char *exec=malloc(1000);
	char *file=malloc(1000);
	if (i == 0)
		return (0);
	if (atoi(av[0]+(strlen(av[0])-1)) == 0)
	{
		sprintf(exec,"./Sully_5");
		sprintf(file,"Sully_5.c");
		j=5;
	}
	else
	{
		sprintf(exec,"./Sully_%d",i-1);
		sprintf(file,"Sully_%d.c",i-1);
		j=i-1;
	}
	FILE *fp=fopen(file,"w+");
	fprintf(fp,a,10,10,10,10,10,10,10,10,10,j,10,10,34,a,34,10,10,10,10,10,10,10,10,34,34,10,34,34,10,10,10,10,10,34,37,34,10,34,37,34,10,10,10,34,34,10,10,10,34,37,37,34,10,10,10);
	fclose(fp);
	sprintf(line,"gcc -Wall -Wextra -Werror -o %s %s", exec, file);
	system(line);
	system(exec);
}