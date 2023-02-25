#include <stdio.h>
long int findSize(char file_name[])
{
    FILE* fp = fopen(file_name, "r");

      if (fp == NULL) {
        printf("File Not Found!\n");
        return -1;
    }

    fseek(fp, 0L, SEEK_END);
    long int res = ftell(fp);
    fclose(fp);

    return res;
}

int main()
{
    char file_name[] = { "file.txt" };
    long int res = findSize(file_name);
    if (res != -1)
        printf("Size of the file is %ld bytes \n", res);
    return 0;
}
