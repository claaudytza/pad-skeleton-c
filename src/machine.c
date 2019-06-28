#include "../include/ijvm.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "../src/ijvm.c"
#include "../src/instructions.c"


// typedef struct new_ijvm {
//   int magicnumber;
//   //magic number, constant pool and text
// } ijvm_file;

int init_ijvm(char *binary_file)
{ 
  FILE *fp;

  fp = fopen(binary_file,"rb");

  if (fp == NULL) { 
      return -1; 
  } 

  char buffer_magic_number[4];


  fread(buffer_magic_number, sizeof(char), 4, fp);

  printf(buffer_magic_number);

  // if (buffer_magic_number[4] == MAGIC_NUMBER) {

  // }

  // fseek(fp, 4L, SEEK_END); 

  // long int size = ftell(fp); 
  // char buffer[size];
  // char 
  
  // fread(buffer,sizeof(char),size,fp);

  // return 0;
  return 0;
}

void destroy_ijvm()
{
  // Reset IJVM state
}

void run()
{ 
  // while (){
  //   instruction ();
  // }
  // Step while you can
}

void set_input(FILE *fp)
{
  // TODO: implement me
}

void set_output(FILE *fp)
{
  // TODO: implement me
}

