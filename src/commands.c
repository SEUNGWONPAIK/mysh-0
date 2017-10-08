#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#include "commands.h"

int do_cd(int argc, char** argv) {
  if (!validate_cd_argv(argc, argv))
    return -1;

 // TODO: Fill it!
  return 0;
}

int do_pwd(int argc, char** argv) {
  if (!validate_pwd_argv(argc, argv))
    return -1;

  // TODO: Fill it!

  return 0;
}

int validate_cd_argv(int argc, char** argv) {
  // TODO: Fill it!
  char buf[100];
  
  /*if(argc==1){
	chdir(getenv("HOME"));
        getcwd(buf,100);
        printf("%s\n",buf);
    }*/

  if(argc==2){
	if(chdir(argv[1])){
           printf("no directory\n");
	   return 0;
        }
        else{
           getcwd(buf,100);
           printf("%s\n",buf);
        }
  }else{
       return 0;
  }

  return 1;
}

int validate_pwd_argv(int argc, char** argv) {
   // TODO: Fill it!
  if(argc==1){

       if(!strcmp(argv[0],"pwd")){
  		char buf[100];
  		getcwd(buf,100);
  		printf("%s\n",buf);
       }

       else
       	 return 0;
  }

  else
    return 0;

  return 1;
}
