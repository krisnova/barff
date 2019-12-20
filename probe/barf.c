#include <linux/bpf.h>
#define SEC(NAME) __attribute__((section(NAME), used))


SEC("raw_syscalls/")
int bpf_prog(void *ctx) {
  char msg[] = "Dum dee dum";
  bpf_trace_printk(msg, sizeof(msg));
  return 0;
}
