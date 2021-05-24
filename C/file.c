#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void removeEmtptyLines(FILE* fp) {
   char line[1000];
   int idx = 0;
   int scnt = 0;
   int ch;
   while((ch = fgetc(fp)) != EOF) {
      if (ch == ' ') {
         scnt++;
      }

      if (ch != '\n') {
         line[idx++] = ch;
      } else {
         line[idx] = '\0';
         if (idx > 0 && scnt != idx) {
            printf("%s\n", line);
         }
         idx = 0;
         scnt = 0;
      }
   }
   
   line[idx] = '\0';
   printf("%s\n", line);

}

void printContent(FILE* fp) {
   char ch;
   while((ch = fgetc(fp)) != EOF)
      printf("%c", ch);
}

int main()
{
   char file_name[250];
   FILE *fp;
   //FILE *fp1;
   printf("Enter the file name:\n");
   gets(file_name);
   fp = fopen(file_name, "r"); 


   if (fp == NULL)
   {
      perror("Error while opening the file.\n");
      exit(EXIT_FAILURE);
   }  
   else
   {
      printf("Contents of file \"%s\" are:\n", file_name);
      printContent(fp);
      printf("======================= %ld ===============\n", ftell(fp));
      //rewind(fp);
      fseek(fp, 0, SEEK_SET);
      printf("======================= %ld ===============\n", ftell(fp));

      printf("\nContents of file \"%s\" after removing empty lines:\n", file_name);
      removeEmtptyLines(fp);
   } 
}
/*{
   int num = 0;
   char c = '#';
   //scanf("%d",&num);
   do{
      for (int i=0;i<num;i++){
        printf("%c",c);
      }
      printf("\n");
   }
   whilefgfgfgfdgafdgfdgfdgra (scanf("%d", &num) == 1);

}*/