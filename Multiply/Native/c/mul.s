	.arch armv6
	.eabi_attribute 28, 1
	.eabi_attribute 20, 1
	.eabi_attribute 21, 1
	.eabi_attribute 23, 3
	.eabi_attribute 24, 1
	.eabi_attribute 25, 1
	.eabi_attribute 26, 2
	.eabi_attribute 30, 6
	.eabi_attribute 34, 1
	.eabi_attribute 18, 4
	.file	"mul.c"
	.text
	.section	.rodata
	.align	2
.LC0:
	.ascii	"2*pi*r = %.5f\012\000"
	.text
	.align	2
	.global	main
	.arch armv6
	.syntax unified
	.arm
	.fpu vfp
	.type	main, %function
main:
	@ args = 0, pretend = 0, frame = 16
	@ frame_needed = 1, uses_anonymous_args = 0
	push	{fp, lr}
	add	fp, sp, #4
	sub	sp, sp, #16
	ldr	r3, .L3
	str	r3, [fp, #-8]	@ float
	ldr	r3, .L3+4
	str	r3, [fp, #-12]	@ float
	vldr.32	s15, [fp, #-8]
	vadd.f32	s15, s15, s15
	vldr.32	s14, [fp, #-12]
	vmul.f32	s15, s14, s15
	vstr.32	s15, [fp, #-16]
	vldr.32	s15, [fp, #-16]
	vcvt.f64.f32	d7, s15
	vmov	r2, r3, d7
	ldr	r0, .L3+8
	bl	printf
	mov	r3, #0
	mov	r0, r3
	sub	sp, fp, #4
	@ sp needed
	pop	{fp, pc}
.L4:
	.align	2
.L3:
	.word	1078530000
	.word	1080033280
	.word	.LC0
	.size	main, .-main
	.ident	"GCC: (Raspbian 10.2.1-6+rpi1) 10.2.1 20210110"
	.section	.note.GNU-stack,"",%progbits
