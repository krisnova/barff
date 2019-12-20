package main

import (
	"fmt"
	"os"

	"github.com/kris-nova/barf/golibbpf"
)

func main() {
	program, err := golibbpf.LoadProgram("file.o")
	if err != nil {
		fmt.Println(err.Error())
		os.Exit(1)
	}
	fmt.Println(program.FilePath)
	fmt.Println(program.LoadReturnCode)
}
