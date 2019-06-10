#include <stdio.h>
#include <stdlib.h>
#include<string.h>
struct dict{
   char word[20];
   int freq;
};

int main()
{
   char ch, data_file[25] = "data.txt";
   struct dict d[500];
   int exits = 0;
   FILE *fp_data;

   fp_data = fopen(data_file, "r"); 

   if (fp_data == NULL)
   {
      perror("No file found\n");
      exit(EXIT_FAILURE);
   }


   char datawords[1000][20];

   int idata = 0, idictinsert = 0;

   while((fscanf(fp_data, "%s", datawords[idata])) != EOF) {
      int idict = 0;

      while(idict < idictinsert) {
         if (strcmp(d[idict].word,datawords[idata]) == 0)
         {
            exits = 1;
            ++d[idict].freq;
            break;
         }
         ++idict;
      }

      if(exits == 0){
         strcpy(d[idictinsert].word, datawords[idata]);
         d[idictinsert].freq = 1;
         ++idictinsert;
      }
   	++idata;
      exits = 0;
   }

   for(int isortouter = 1; isortouter < idictinsert; isortouter++){
      for(int isort = 0; isort < idictinsert - isortouter; isort++) {

         struct dict temp;
         if(d[isort].freq < d[isort + 1].freq) {
            temp = d[isort];
            d[isort] = d[isort + 1];
            d[isort + 1] = temp;
         }
      }
   }


   printf("Frequency:\n");
   for(int j = 0; j < idictinsert; j++){
         printf("\t%d \t %s\n", d[j].freq, d[j].word);
   }

}