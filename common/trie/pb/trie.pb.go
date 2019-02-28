// Code generated by protoc-gen-gogo.
// source: trie.proto
// DO NOT EDIT!

/*
Package triepb is a generated protocol buffer package.

It is generated from these files:
	trie.proto

It has these top-level messages:
	Node
*/
package triepb

import (
	"fmt"
	"io"
)

type Node struct {
	Val [][]byte `protobuf:"bytes,1,rep,name=val" json:"val,omitempty"`
}

func (m *Node) Marshal() (data []byte, err error) {
	var l int
	var n int

	if len(m.Val) > 0 {
		for _, b := range m.Val {
			l = len(b)
			k := l
			for {
				n++
				l >>= 7
				if l == 0 {
					break
				}
			}
			n += 1 + k
		}
	}

	data = make([]byte, n)
	n = 0
	if len(m.Val) > 0 {
		for _, b := range m.Val {
			data[n] = 0xa
			n++
			v := uint64(len(b))
			for v >= 1<<7 {
				data[n] = uint8(v&0x7f | 0x80)
				v >>= 7
				n++
			}
			data[n] = uint8(v)
			n++
			n += copy(data[n:], b)
		}
	}

	return data[:n], nil
}

func (m *Node) Unmarshal(data []byte) error {
	l := len(data)
	var subSliceLength uint64
	var copyBytesCount int
	index := 0
	count := 0

	for index < l {
		if data[index] != DataSplitFlag {
			return ErrDataFormat
		}
		count++
		index++

		subSliceLength = 0
		for shift := uint(0); ; shift += 7 {
			if shift >= 64 {
				return ErrIntOverflowTrie
			}
			if index >= l {
				return io.ErrUnexpectedEOF
			}
			b := data[index]
			index++
			subSliceLength |= (uint64(b) & 0x7F) << shift
			if b < 0x80 {
				break
			}
		}
		index += int(subSliceLength)
	}

	m.Val = make([][]byte, count)
	count = 0
	index = 0
	for index < l {
		index++

		subSliceLength = 0
		for shift := uint(0); ; shift += 7 {
			b := data[index]
			index++
			subSliceLength |= (uint64(b) & 0x7F) << shift
			if b < 0x80 {
				break
			}
		}
		subSlice := make([]byte, subSliceLength)
		copyBytesCount = copy(subSlice, data[index:uint64(index)+subSliceLength])

		m.Val[count] = subSlice
		count++
		index += copyBytesCount
	}

	if index > l {
		return io.ErrUnexpectedEOF
	}

	return nil
}

var DataSplitFlag uint8 = 0xa
var (
	ErrInvalidLengthTrie = fmt.Errorf("proto: negative length found during unmarshaling")
	ErrIntOverflowTrie   = fmt.Errorf("proto: integer overflow")
	ErrDataFormat        = fmt.Errorf("proto: data format error")
)

