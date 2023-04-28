
cpp_test:	file format mach-o arm64

Disassembly of section __TEXT,__text:

0000000100003f84 <_main>:
100003f84: ff 43 00 d1 	sub	sp, sp, #16
100003f88: ff 0f 00 b9 	str	wzr, [sp, #12]
100003f8c: 01 00 00 14 	b	0x100003f90 <_main+0xc>
100003f90: 08 00 00 b0 	adrp	x8, 0x100004000 <_main+0x10>
100003f94: 08 01 40 b9 	ldr	w8, [x8]
100003f98: 08 01 00 71 	subs	w8, w8, #0
100003f9c: e8 17 9f 1a 	cset	w8, eq
100003fa0: 68 00 00 37 	tbnz	w8, #0, 0x100003fac <_main+0x28>
100003fa4: 01 00 00 14 	b	0x100003fa8 <_main+0x24>
100003fa8: fa ff ff 17 	b	0x100003f90 <_main+0xc>
100003fac: 00 00 80 52 	mov	w0, #0
100003fb0: ff 43 00 91 	add	sp, sp, #16
100003fb4: c0 03 5f d6 	ret
