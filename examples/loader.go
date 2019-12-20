package main

import (
	"fmt"
	"github.com/kris-nova/barf/golibbpf"
)

func main() {
	fmt.Println(golibbpf.LoadBPF())

}
