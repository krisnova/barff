//#include "bpf_load.h"
//#include <stdio.h>
//
//
//
//
//int main(int argc, char **argv) {
//  if (load_bpf_file("hello_world_kern.o") != 0) {
//    printf("The kernel didn't load the BPF program\\n");
//    return -1;
//  }
//
//  read_trace_pipe();
//
//  return 0;
//}




// ---------------------------------------------------------------------------------------------------------------------


//##!/bin/bash
//#
//#TOOLS=/kernel-src/samples/bpf
//#INCLUDE=/kernel-src/tools/lib
//#PERF_INCLUDE=/kernel-src/tools/perf
//#KERNEL_TOOLS_INCLUDE=/kernel-src/tools/include/
//#clang -o loader -lelf\
//#  -I${INCLUDE} \
//#  -I${PERF_INCLUDE} \
//#  -I${KERNEL_TOOLS_INCLUDE} \
//#  -I${TOOLS} \
//#  ${TOOLS}/bpf_load.c \
//#  loader.c
