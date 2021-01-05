#include <stdio.h>
#include <string.h>
#include "txtfind.h"
 

#define WORD 30

#define LINE 256


int getLine(char s[]){
  int i=0; 
scanf("PLEASE WRITE A SENTENCE %hhd",s);
  int crt=0; 
     while (s[i] != '\n'){
     crt++;
i++;
     }
     return crt;
}
 
int getword (char w[]){
    int i=0 ; 
    char legalword[WORD];
    scanf("PLEASE WRITE A word %hhd ",legalword);
    int crt =0; 
    while((legalword[i]!='\t'|| legalword[i]==' ' ||legalword[i]!='\n')&& i<30){
       w[i]=legalword[i];
	crt ++;
        i++;
    } 
    return crt;
}


 int StrLengthh (char *str){
      int crt=0 ;
      int i;
       for( i=0;*(str+i)!='\0' ;i++)
      {
        crt++;
      }
     return crt; 
 }



int substring( char * str1, char * str2){
int i;
int j=0;
int crt ;
int str2Leng=StrLengthh (str2);

for ( i=0 ;*(str1+i)!='\0';i++){
    int kk=i;
    for( j=0; *(str2+j)!='\0';j++){
        
     if (*(str1+kk) ==*(str2+j))
     {
         crt++; 
         kk++;
     }
     else
     {
         break;
     }
      if (crt==str2Leng){
          return 1;
      }

    }
    kk=i;
}
return 0;
}




int similar(char *s, char *t, int n)
{  
    int i=0,j=0; 
    int ercount=0;
    while(*(t+j)!='\0'&& *(s+i)!='\0')
     {
       if  (*(t+j)==*(s+i))
       {
           i++;
           j++;
       }
       else{
           char ch=*(s+i);
           while(*(t+j)!=ch)
           {
               if(*(t+j)=='\0')
               {
                   return 0;
               }
               ercount++;
               j++;
           }
           i++;
       }
       if(ercount>n)
       return 0;
     }
    if(ercount!=n)
        return 0;
    else
        return 1;    
 }

void print_lines(char *str)
{   char Line[LINE];
     int num;
     scanf("line number %d ",&num);
     int i=0 ; 
     while(i<num){
     getLine(Line);
        
      if(substring(str,Line)==1)
      {
          printf("%d",i+1);
      }   
      i++;
      }
}

void print_similar_words(char * str)
{
    char word[WORD];
    int wordnum;
    scanf("enter num %d",&wordnum);
    int i=0;
    while(i<wordnum)
    {
        getword(word);
        if(similar(word,str,1)==1)
        {
            printf("the word: %s",word);
        }
        i++;
     }
}

