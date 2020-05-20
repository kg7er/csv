// === bermuda.c ===
#include <stdio.h>
#include <string.h>

void strip_comma(char *s);

int main(){
   char fname[16];
   char lname[16];
   int  weight, tof=1, eof=0;

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
      if (!eof && weight>=190)
          printf("%s, %s, %d\n", fname, lname, weight); 
   } //------- end of while (!eof) loop

   return 0;
}

void strip_comma(char *s){
   strtok(s,","); 
   }

