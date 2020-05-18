// from 'Head First C' book
const char *FN = "=== csv2json.c ===";
#include <stdio.h>
#include <string.h>

void strip_comma(char *s);

int main(){
   char fname[16];
   char lname[16];
   int  weight, tof=1, eof=0;

   printf("{\"emp\":[");
   while (!eof){  
      strcpy(fname, ""); // must set fname to empty string!
      scanf("%15s", fname);
      if (strlen(fname)<1) // if still empty: eof!
         eof=1;
      strip_comma(fname);
      //-------------------      
      scanf("%15s", lname);
      strip_comma(lname);
      scanf("%d", &weight);
      //------------------
      if (!tof && !eof)
         printf(",\n");
      else
         tof=0;
      if (!eof)
          printf("{\"fname\": \"%s\", \"lname\": \"%s\", \"weight\": %d}", fname, lname, weight); 
   } //------- end of while loop

   printf("]}\n"); // to close the json structure
   return 0;
}

void strip_comma(char *s){
   strtok(s,","); 
   }

