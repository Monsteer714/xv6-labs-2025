#include "kernel/types.h"
#include "kernel/fcntl.h"
#include "user/user.h"
#define DATASIZE (16*4096)

char buf[DATASIZE];

int
main(int argc, char *argv[])
{
  if(argc != 1){
    printf("Usage: attack\n");
    exit(1);
  }else{
    for (int i = 0; i < DATASIZE; i++) {
      if (strcmp(buf + i, "") == 0) {
        continue;
      }
      printf("%s\n", buf + i);
      i += strlen(buf + i);
    }
    exit(0);
  };
}
