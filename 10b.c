#include <stdio.h>
#include <stdlib.h>

int main()
{
   
   FILE *fp1 = fopen("a.txt", "r");
   FILE *fp2 = fopen("b.txt", "r");
   FILE *fp3 = fopen("c.txt", "w");
   char c;

   if (fp1 == NULL || fp2 == NULL || fp3 == NULL)
   {
         puts("Could not open files");
         exit(0);
   }

   
   while ((c = fgetc(fp1)) != EOF)
      fputc(c, fp3);

   
   while ((c = fgetc(fp2)) != EOF)
      fputc(c, fp3);

   printf("Merged a.txt and b.txt into c.txt");

   fclose(fp1);
   fclose(fp2);
   fclose(fp3);
   return 0;
}
