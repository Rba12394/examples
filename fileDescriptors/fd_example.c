#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>

#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>
#include <stdlib.h>
int
main (int argc, char *argv[])
{
  int status;
  int f1=open("newfile.txt",O_WRONLY|O_CREAT);

  printf("STDIN file descriptor %d\n",STDIN_FILENO);
  printf("STDOUT file descriptor %d\n",STDOUT_FILENO);
  printf("STDERR file descriptor %d\n",STDERR_FILENO);
  printf("file descriptor %d\n",f1);
  write(f1,"text",strlen("text"));
  write(STDOUT_FILENO,"text\n",strlen("text\n"));
  close(f1);

}
