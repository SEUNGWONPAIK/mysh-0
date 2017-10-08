#define _CRT_SECURE_NO_WARNINGS
#include "utils.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

//mysh_parse_command
void mysh_parse_command(const char* command,
                        int *argc, char*** argv)
{	
  char *token;
  char buf[9000];
  int j=0;
  
  strcpy(buf,command);

  *argc=0;
  argv[0]=(char**)malloc(sizeof(char*)*7);
  for(int i=0; i<7; i++){  
	argv[0][i]=(char*)malloc(sizeof(char)*20);
  }

  token=strtok(buf, " \n\t");


  while(token != NULL ){
    strcpy(argv[0][j],token);
    j++;
    token=strtok(NULL, " \n\t");
  }
  *argc=j;
  if(j==0){
    *argc=1;
    strcpy(argv[0][0],"");
  }

  // TODO: Fill this!
}
