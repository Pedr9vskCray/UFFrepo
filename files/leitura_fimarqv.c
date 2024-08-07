#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main(){    
   FILE* f = fopen("arquivo_vazio.txt", "r");
   if(f == NULL){
       printf("Erro ao ler arquivo!\n");
       exit(1);
   }

   int c = fgetc(f);
   if(c == EOF)
       printf("nao foi possivel ler com fgetc\n");

   int x, y;
   if(fscanf(f, "%d %d", &x, &y) == EOF)
       printf("nao foi possivel ler com fscanf\n");

   char s[10];
   if(fgets(s, 10, f) == NULL)
       printf("nao foi possivel ler com fgets\n");
   fclose(f);
}