#include <stdio.h>

int main(void)
{
    FILE *ifp, *opf;
    char a[100];

    ifp = fopen("myFile.txt", "r");
    opf = fopen("myFile.txt", "w");

    fscanf(ifp, "%s", a);

}

int sommaLun (const char * const s)
{	
static int count = 0;
int i = 0;
	while(s[i] != 0) {count++; i++;}
	return count;
}
