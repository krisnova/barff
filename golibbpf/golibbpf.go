package golibbpf

/*
#include "golibbpf.h"
*/
import "C"

func LoadBPF() int {
    ci := C.load_bpf()
    return int(ci)
}
