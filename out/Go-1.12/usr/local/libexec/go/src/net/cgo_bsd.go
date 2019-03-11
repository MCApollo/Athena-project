// Copyright 2011 The Go Authors. All rights reserved.
// Use of this source code is governed by a BSD-style
// license that can be found in the LICENSE file.

// +build cgo,!netgo
// +build darwin dragonfly freebsd

package net

/*
#include <netdb.h>
#cgo darwin,arm64 LDFLAGS: --sysroot=/usr/SDK -I/usr/local/include -I/usr/include -L/usr/local/lib -L/usr/lib -F/usr/SDK/System/Library/Frameworks/ -framework CoreFoundation
#cgo darwin,arm64 CFLAGS: --sysroot=/usr/SDK -I/usr/local/include -I/usr/include -L/usr/local/lib -L/usr/lib -F/usr/SDK/System/Library/Frameworks/ -framework CoreFoundation -Wno-unused-command-line-argument
*/
import "C"

const cgoAddrInfoFlags = (C.AI_CANONNAME | C.AI_V4MAPPED | C.AI_ALL) & C.AI_MASK
