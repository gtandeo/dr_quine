#include <stdio.h>
#include <fcntl.h>
#define X
#define Y
#define FUNCTION int main(){char*a="#include <stdio.h>%c#include <fcntl.h>%c#define X%c#define Y%c#define FUNCTION int main(){char*a=%c%s%c;FILE*fp=fopen(%cGrace_kid.c%c,%cw+%c);/*je suis un commentaire*/fprintf(fp,a,10,10,10,10,34,a,34,34,34,34,34,10);fclose(fp);}%cFUNCTION";FILE*fp=fopen("Grace_kid.c","w+");/*je suis un commentaire*/fprintf(fp,a,10,10,10,10,34,a,34,34,34,34,34,10);fclose(fp);}
FUNCTION