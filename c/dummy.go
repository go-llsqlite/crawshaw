//go:build !linksqlite3
// +build !linksqlite3

// Package c contains only a C file.
//
// This Go file is part of a workaround for `go mod vendor`.
// Please see the file dummy.go at the root of the module for more information.
package c

/*
// SQLITE_* defines live in sqlite_config.h (shared with sqlite.go and the Makefile).
#cgo CFLAGS: -include sqlite_config.h
// False positive in GCC 14/15 at -O3: https://gcc.gnu.org/bugzilla/show_bug.cgi?id=115274
#cgo CFLAGS: -Wno-stringop-overread
#cgo windows LDFLAGS: -lwinpthread
#cgo linux LDFLAGS: -ldl -lm
#cgo linux CFLAGS: -std=c99
#cgo openbsd LDFLAGS: -lm
#cgo openbsd CFLAGS: -std=c99
#cgo freebsd LDFLAGS: -lm
#cgo freebsd CFLAGS: -std=c99
*/
import "C"
