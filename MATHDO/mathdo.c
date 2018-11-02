#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc,char* argv[]){
	char *arguments[5];
	for (int i=0;i<4;i++){
    int children = fork();
    if (children == 0){
    if (i==0){
    arguments[0] = "python";
    arguments[1] = "./addition.py";
    arguments[2] = argv[1];
    arguments[3] = argv[2];
    arguments[4] = NULL;
    execvp("python",arguments);
    return 0;}
		else if(i==1){
		arguments[0] = "python";
    arguments[1] = "./substruction.py";
    arguments[2] = argv[1];
    arguments[3] = argv[2];
    arguments[4] = NULL;
    execvp("python",arguments);
    return 0;}
		else if (i==2){
		arguments[0] = "python";
    arguments[1] = "./multiplication.py";
    arguments[2] = argv[1];
    arguments[3] = argv[2];
    arguments[4] = NULL;
    execvp("python",arguments);
    return 0;
		}
		else if (i==3){
		arguments[0] = "bash";
    arguments[1] = "division.sh";
    arguments[2] = argv[1];
    arguments[3] = argv[2];
    arguments[4] = NULL;
    execvp("bash",arguments);
    execvp("./division.sh",arguments);
    return 0;
		}
    exit(0);
  }
  else{
  wait(NULL);
}}
wait(NULL);
wait(NULL);
wait(NULL);
wait(NULL);
printf("parent: done\n");
}


