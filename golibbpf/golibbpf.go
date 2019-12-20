package golibbpf

/*
#include "golibbpf.h"
*/
import "C"

type BPFProgram struct {
	FilePath       string
	LoadReturnCode int
}

func LoadProgram(filepath string) (*BPFProgram, error) {
	ci := C.load_bpf_object_by_filename(C.CString(filepath))
	return &BPFProgram{
		FilePath:       filepath,
		LoadReturnCode: int(ci),
	}, nil
}
