	.file	"test08.c"
	.option nopic
	.attribute arch, "rv64i2p1_m2p0_a2p1_f2p2_d2p2_zicsr2p0_zifencei2p0"
	.attribute unaligned_access, 0
	.attribute stack_align, 16
	.text
.Ltext0:
	.cfi_sections	.debug_frame
	.file 0 "/home/grace/gitlib/rvemu/data/F_cov" "./test08.c"
	.globl	assert_ret1
	.section	.sdata,"aw"
	.align	2
	.type	assert_ret1, @object
	.size	assert_ret1, 4
assert_ret1:
	.word	1
	.text
	.align	2
	.globl	reach_error
	.type	reach_error, @function
reach_error:
.LFB0:
	.file 1 "./test08.c"
	.loc 1 3 20
	.cfi_startproc
	addi	sp,sp,-16
	.cfi_def_cfa_offset 16
	sd	s0,8(sp)
	.cfi_offset 8, -8
	addi	s0,sp,16
	.cfi_def_cfa 8, 0
	.loc 1 4 23 discriminator 1
	lui	a5,%hi(assert_ret1)
	sw	zero,%lo(assert_ret1)(a5)
	.loc 1 5 2
	nop
	ld	s0,8(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 16
	addi	sp,sp,16
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE0:
	.size	reach_error, .-reach_error
	.globl	a
	.section	.sbss,"aw",@nobits
	.align	2
	.type	a, @object
	.size	a, 4
a:
	.zero	4
	.globl	b
	.align	2
	.type	b, @object
	.size	b, 4
b:
	.zero	4
	.globl	p1
	.align	3
	.type	p1, @object
	.size	p1, 8
p1:
	.zero	8
	.globl	p2
	.align	3
	.type	p2, @object
	.size	p2, 8
p2:
	.zero	8
	.text
	.align	2
	.globl	f
	.type	f, @function
f:
.LFB1:
	.loc 1 11 9
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sd	s0,24(sp)
	.cfi_offset 8, -8
	addi	s0,sp,32
	.cfi_def_cfa 8, 0
	.loc 1 12 13
	lui	a5,%hi(p1)
	ld	a5,%lo(p1)(a5)
	lw	a4,0(a5)
	.loc 1 12 19
	lui	a5,%hi(p2)
	ld	a5,%lo(p2)(a5)
	lw	a5,0(a5)
	.loc 1 12 17
	addw	a5,a4,a5
	sext.w	a4,a5
	.loc 1 12 23
	lui	a5,%hi(a)
	lw	a5,%lo(a)(a5)
	.loc 1 12 9
	subw	a5,a4,a5
	sw	a5,-20(s0)
	.loc 1 13 8
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,1
	bne	a4,a5,.L3
	.loc 1 14 12
	lui	a5,%hi(p2)
	ld	a4,%lo(p2)(a5)
	lui	a5,%hi(p1)
	sd	a4,%lo(p1)(a5)
	.loc 1 15 16
	lw	a5,-20(s0)
	j	.L4
.L3:
	.loc 1 17 16
	li	a5,0
.L4:
	.loc 1 19 1
	mv	a0,a5
	ld	s0,24(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 32
	addi	sp,sp,32
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE1:
	.size	f, .-f
	.align	2
	.globl	main
	.type	main, @function
main:
.LFB2:
	.loc 1 21 12
	.cfi_startproc
	addi	sp,sp,-16
	.cfi_def_cfa_offset 16
	sd	ra,8(sp)
	sd	s0,0(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,16
	.cfi_def_cfa 8, 0
	.loc 1 23 8
	lui	a5,%hi(p1)
	lui	a4,%hi(a)
	addi	a4,a4,%lo(a)
	sd	a4,%lo(p1)(a5)
	.loc 1 24 8
	lui	a5,%hi(p2)
	lui	a4,%hi(b)
	addi	a4,a4,%lo(b)
	sd	a4,%lo(p2)(a5)
	.loc 1 26 7
	lui	a5,%hi(b)
	li	a4,1
	sw	a4,%lo(b)(a5)
	.loc 1 27 7
	lui	a5,%hi(a)
	li	a4,5
	sw	a4,%lo(a)(a5)
	.loc 1 29 6
	lui	a5,%hi(a)
	lw	a5,%lo(a)(a5)
	addiw	a5,a5,-1
	sext.w	a4,a5
	lui	a5,%hi(a)
	sw	a4,%lo(a)(a5)
	.loc 1 31 9
	call	f
	mv	a5,a0
	mv	a4,a5
	.loc 1 31 7 discriminator 1
	lui	a5,%hi(a)
	sw	a4,%lo(a)(a5)
	.loc 1 33 9
	lui	a5,%hi(a)
	lw	a5,%lo(a)(a5)
	.loc 1 33 8
	beq	a5,zero,.L6
	.loc 1 33 17 discriminator 1
	lui	a5,%hi(p1)
	ld	a4,%lo(p1)(a5)
	lui	a5,%hi(p2)
	ld	a5,%lo(p2)(a5)
	.loc 1 33 11 discriminator 1
	beq	a4,a5,.L10
.L6:
	.loc 1 38 12
	li	a5,0
	j	.L8
.L10:
	.loc 1 34 9
	nop
.L7:
	.loc 1 40 13
	call	reach_error
	.loc 1 41 12
	li	a5,1
.L8:
	.loc 1 42 1
	mv	a0,a5
	ld	ra,8(sp)
	.cfi_restore 1
	ld	s0,0(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 16
	addi	sp,sp,16
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE2:
	.size	main, .-main
.Letext0:
	.section	.debug_info,"",@progbits
.Ldebug_info0:
	.4byte	0x117
	.2byte	0x5
	.byte	0x1
	.byte	0x8
	.4byte	.Ldebug_abbrev0
	.uleb128 0x2
	.4byte	.LASF4
	.byte	0x1d
	.4byte	.LASF0
	.4byte	.LASF1
	.8byte	.Ltext0
	.8byte	.Letext0-.Ltext0
	.4byte	.Ldebug_line0
	.uleb128 0x3
	.4byte	.LASF2
	.byte	0x1
	.byte	0x2
	.byte	0x5
	.4byte	0x44
	.uleb128 0x9
	.byte	0x3
	.8byte	assert_ret1
	.uleb128 0x4
	.byte	0x4
	.byte	0x5
	.string	"int"
	.uleb128 0x1
	.string	"a"
	.byte	0x8
	.byte	0x5
	.4byte	0x44
	.uleb128 0x9
	.byte	0x3
	.8byte	a
	.uleb128 0x1
	.string	"b"
	.byte	0x8
	.byte	0x8
	.4byte	0x44
	.uleb128 0x9
	.byte	0x3
	.8byte	b
	.uleb128 0x1
	.string	"p1"
	.byte	0x9
	.byte	0x6
	.4byte	0x85
	.uleb128 0x9
	.byte	0x3
	.8byte	p1
	.uleb128 0x5
	.byte	0x8
	.4byte	0x44
	.uleb128 0x1
	.string	"p2"
	.byte	0x9
	.byte	0xb
	.4byte	0x85
	.uleb128 0x9
	.byte	0x3
	.8byte	p2
	.uleb128 0x6
	.4byte	.LASF3
	.byte	0x1
	.byte	0x15
	.byte	0x5
	.4byte	0x44
	.8byte	.LFB2
	.8byte	.LFE2-.LFB2
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xd2
	.uleb128 0x7
	.4byte	.LASF5
	.byte	0x1
	.byte	0x28
	.byte	0x5
	.8byte	.L7
	.byte	0
	.uleb128 0x8
	.string	"f"
	.byte	0x1
	.byte	0xb
	.byte	0x5
	.4byte	0x44
	.8byte	.LFB1
	.8byte	.LFE1-.LFB1
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x100
	.uleb128 0x9
	.string	"v"
	.byte	0x1
	.byte	0xc
	.byte	0x9
	.4byte	0x44
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.uleb128 0xa
	.4byte	.LASF6
	.byte	0x1
	.byte	0x3
	.byte	0x6
	.8byte	.LFB0
	.8byte	.LFE0-.LFB0
	.uleb128 0x1
	.byte	0x9c
	.byte	0
	.section	.debug_abbrev,"",@progbits
.Ldebug_abbrev0:
	.uleb128 0x1
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 1
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x2
	.uleb128 0x11
	.byte	0x1
	.uleb128 0x25
	.uleb128 0xe
	.uleb128 0x13
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0x1f
	.uleb128 0x1b
	.uleb128 0x1f
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.uleb128 0x10
	.uleb128 0x17
	.byte	0
	.byte	0
	.uleb128 0x3
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x4
	.uleb128 0x24
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3e
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0x8
	.byte	0
	.byte	0
	.uleb128 0x5
	.uleb128 0xf
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x6
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.uleb128 0x40
	.uleb128 0x18
	.uleb128 0x7c
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x7
	.uleb128 0xa
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x11
	.uleb128 0x1
	.byte	0
	.byte	0
	.uleb128 0x8
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.uleb128 0x40
	.uleb128 0x18
	.uleb128 0x7a
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x9
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0xa
	.uleb128 0x2e
	.byte	0
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.uleb128 0x40
	.uleb128 0x18
	.uleb128 0x7a
	.uleb128 0x19
	.byte	0
	.byte	0
	.byte	0
	.section	.debug_aranges,"",@progbits
	.4byte	0x2c
	.2byte	0x2
	.4byte	.Ldebug_info0
	.byte	0x8
	.byte	0
	.2byte	0
	.2byte	0
	.8byte	.Ltext0
	.8byte	.Letext0-.Ltext0
	.8byte	0
	.8byte	0
	.section	.debug_line,"",@progbits
.Ldebug_line0:
	.section	.debug_str,"MS",@progbits,1
.LASF4:
	.string	"GNU C17 13.2.0 -mtune=rocket -mabi=lp64d -misa-spec=20191213 -march=rv64imafd_zicsr_zifencei -g -O0 -fno-toplevel-reorder -fno-asynchronous-unwind-tables"
.LASF3:
	.string	"main"
.LASF6:
	.string	"reach_error"
.LASF5:
	.string	"ERROR"
.LASF2:
	.string	"assert_ret1"
	.section	.debug_line_str,"MS",@progbits,1
.LASF1:
	.string	"/home/grace/gitlib/rvemu/data/F_cov"
.LASF0:
	.string	"./test08.c"
	.ident	"GCC: () 13.2.0"
