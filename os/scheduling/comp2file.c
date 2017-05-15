#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{
FILE* file1 = fopen(argv[1], "r");
FILE* file2 = fopen(argv[2], "r");

/* do error checking here to ensure both files are open */
if (!file1 || !file2)
{
fprintf(stderr, "Error: Could not open the specified file(s).\n");
return -1;
}

char buf1[1024] = {0};
char buf2[1024] = {0};
int same = 1; // assume files are the same until proven otherwise

while (!feof(file1) || !feof(file2))
{
int bytes1 = fread(buf1, 1, sizeof(buf1), file1);
int bytes2 = fread(buf2, 1, sizeof(buf2), file2);

if ((bytes1 != bytes2) || (memcmp(buf1, buf2, bytes1) != 0))
{
same = 0;
break;
}
}

if (same)
{
fprintf(stdout, "Files are the same.\n");
}
else
{
fprintf(stderr, "Files are NOT the same.\n");
}

return 0;
}
