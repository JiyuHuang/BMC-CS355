/*
 Author: Ruochun(Rachel) Wang
 Usage:
 #12 initialize and round up to 1 page
 */

#include "mem.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define FAILURE -1
int main(){
  printf("-------------- Initializa with size round up to 1 page --------------\n");
  int page_size = getpagesize();
  printf("You should see one free block with size %d\n", page_size);

  if (Mem_Init(page_size/2) == FAILURE){
    printf("Initialization error\n");
    exit(EXIT_FAILURE);
  }

  Mem_Dump();
}
