	.file	"test24-2.c"
	.option nopic
	.attribute arch, "rv64i2p1_m2p0_a2p1_f2p2_d2p2_zicsr2p0_zifencei2p0"
	.attribute unaligned_access, 0
	.attribute stack_align, 16
	.text
.Ltext0:
	.cfi_sections	.debug_frame
	.file 0 "/home/grace/gitlib/rvemu/data/F_cov" "./test24-2.c"
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
	.file 1 "./test24-2.c"
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
	.loc 1 5 3
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
	.align	2
	.globl	check
	.type	check, @function
check:
.LFB1:
	.loc 1 14 1
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sd	s0,24(sp)
	.cfi_offset 8, -8
	addi	s0,sp,32
	.cfi_def_cfa 8, 0
	sd	a0,-24(s0)
	mv	a5,a1
	sw	a5,-28(s0)
	.loc 1 15 13
	lw	a5,-28(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	.loc 1 15 16
	lw	a4,0(a5)
	.loc 1 15 19
	lw	a5,-28(s0)
	sext.w	a5,a5
	sub	a5,a5,a4
	seqz	a5,a5
	andi	a5,a5,0xff
	sext.w	a5,a5
	.loc 1 16 1
	mv	a0,a5
	ld	s0,24(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 32
	addi	sp,sp,32
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE1:
	.size	check, .-check
	.align	2
	.globl	main
	.type	main, @function
main:
.LFB2:
	.loc 1 19 1
	.cfi_startproc
	addi	sp,sp,-208
	.cfi_def_cfa_offset 208
	sd	ra,200(sp)
	sd	s0,192(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,208
	.cfi_def_cfa 8, 0
	.loc 1 22 8
	sw	zero,-24(s0)
	.loc 1 22 3
	j	.L5
.L6:
	.loc 1 22 19 discriminator 3
	lw	a5,-24(s0)
	addiw	a5,a5,1
	sw	a5,-24(s0)
.L5:
	.loc 1 22 13 discriminator 1
	lw	a5,-24(s0)
	sext.w	a4,a5
	li	a5,19
	ble	a4,a5,.L6
	.loc 1 27 6
	lw	a5,-20(s0)
	sext.w	a5,a5
	blt	a5,zero,.L7
	.loc 1 27 14 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,9
	bgt	a4,a5,.L7
	.loc 1 28 9
	addi	a5,s0,-200
	sd	a5,-32(s0)
	.loc 1 29 14
	lw	a5,-20(s0)
	slli	a5,a5,3
	addi	a5,a5,-16
	add	a5,a5,s0
	lw	a4,-20(s0)
	sw	a4,-184(a5)
	.loc 1 30 8
	addi	a4,s0,-200
	lw	a5,-20(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	sd	a5,-40(s0)
	.loc 1 31 13
	lw	a5,-20(s0)
	slli	a5,a5,3
	ld	a4,-32(s0)
	add	a5,a4,a5
	.loc 1 31 16
	lw	a5,0(a5)
	.loc 1 31 7
	addiw	a5,a5,10
	sw	a5,-20(s0)
	.loc 1 32 11
	j	.L8
.L9:
	.loc 1 33 7
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L8:
	.loc 1 32 16
	ld	a5,-40(s0)
	lw	a4,0(a5)
	.loc 1 32 14
	lw	a5,-20(s0)
	sext.w	a5,a5
	blt	a5,a4,.L9
	.loc 1 35 10
	lw	a4,-20(s0)
	addi	a5,s0,-200
	mv	a1,a4
	mv	a0,a5
	call	check
	mv	a5,a0
	.loc 1 35 8 discriminator 1
	beq	a5,zero,.L14
.L7:
	.loc 1 40 10
	li	a5,0
	j	.L12
.L14:
	.loc 1 36 7
	nop
.L10:
	.loc 1 42 11
	call	reach_error
	.loc 1 43 10
	li	a5,1
.L12:
	.loc 1 44 1
	mv	a0,a5
	ld	ra,200(sp)
	.cfi_restore 1
	ld	s0,192(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 208
	addi	sp,sp,208
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE2:
	.size	main, .-main
.Letext0:
	.section	.debug_info,"",@progbits
.Ldebug_info0:
	.4byte	0x153
	.2byte	0x5
	.byte	0x1
	.byte	0x8
	.4byte	.Ldebug_abbrev0
	.uleb128 0x5
	.4byte	.LASF3
	.byte	0x1d
	.4byte	.LASF0
	.4byte	.LASF1
	.8byte	.Ltext0
	.8byte	.Letext0-.Ltext0
	.4byte	.Ldebug_line0
	.uleb128 0x6
	.4byte	.LASF4
	.byte	0x1
	.byte	0x2
	.byte	0x5
	.4byte	0x44
	.uleb128 0x9
	.byte	0x3
	.8byte	assert_ret1
	.uleb128 0x7
	.byte	0x4
	.byte	0x5
	.string	"int"
	.uleb128 0x8
	.4byte	.LASF5
	.byte	0x8
	.byte	0x1
	.byte	0x9
	.byte	0x8
	.4byte	0x6b
	.uleb128 0x2
	.string	"a"
	.byte	0x7
	.4byte	0x44
	.byte	0
	.uleb128 0x2
	.string	"b"
	.byte	0xa
	.4byte	0x44
	.byte	0x4
	.byte	0
	.uleb128 0x9
	.4byte	.LASF6
	.byte	0x1
	.byte	0x12
	.byte	0x5
	.4byte	0x44
	.8byte	.LFB2
	.8byte	.LFE2-.LFB2
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xe0
	.uleb128 0x1
	.string	"ad1"
	.byte	0x14
	.byte	0x10
	.4byte	0xe0
	.uleb128 0x3
	.byte	0x91
	.sleb128 -200
	.uleb128 0x1
	.string	"ad2"
	.byte	0x14
	.byte	0x1a
	.4byte	0xf7
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1
	.string	"i"
	.byte	0x15
	.byte	0x7
	.4byte	0x44
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1
	.string	"j"
	.byte	0x15
	.byte	0xa
	.4byte	0x44
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"pa"
	.byte	0x15
	.byte	0xe
	.4byte	0xfc
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0xa
	.4byte	.LASF7
	.byte	0x1
	.byte	0x2a
	.byte	0x3
	.8byte	.L10
	.byte	0
	.uleb128 0xb
	.4byte	0x4b
	.4byte	0xf0
	.uleb128 0xc
	.4byte	0xf0
	.byte	0x13
	.byte	0
	.uleb128 0xd
	.byte	0x8
	.byte	0x7
	.4byte	.LASF2
	.uleb128 0x3
	.4byte	0x4b
	.uleb128 0x3
	.4byte	0x44
	.uleb128 0xe
	.4byte	.LASF8
	.byte	0x1
	.byte	0xd
	.byte	0x5
	.4byte	0x44
	.8byte	.LFB1
	.8byte	.LFE1-.LFB1
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x13c
	.uleb128 0x4
	.string	"ad1"
	.byte	0x19
	.4byte	0xf7
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x4
	.string	"b"
	.byte	0x22
	.4byte	0x44
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.byte	0
	.uleb128 0xf
	.4byte	.LASF9
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
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x2
	.uleb128 0xd
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 1
	.uleb128 0x3b
	.uleb128 0x21
	.sleb128 10
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x38
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0x3
	.uleb128 0xf
	.byte	0
	.uleb128 0xb
	.uleb128 0x21
	.sleb128 8
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x4
	.uleb128 0x5
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 1
	.uleb128 0x3b
	.uleb128 0x21
	.sleb128 13
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x5
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
	.uleb128 0x6
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
	.uleb128 0x7
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
	.uleb128 0x8
	.uleb128 0x13
	.byte	0x1
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x9
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
	.uleb128 0xa
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
	.uleb128 0xb
	.uleb128 0x1
	.byte	0x1
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xc
	.uleb128 0x21
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2f
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0xd
	.uleb128 0x24
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3e
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0xe
	.byte	0
	.byte	0
	.uleb128 0xe
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
	.uleb128 0x27
	.uleb128 0x19
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
	.uleb128 0xf
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
.LASF7:
	.string	"ERROR"
.LASF3:
	.string	"GNU C17 13.2.0 -mtune=rocket -mabi=lp64d -misa-spec=20191213 -march=rv64imafd_zicsr_zifencei -g -O0 -fno-toplevel-reorder -fno-asynchronous-unwind-tables"
.LASF8:
	.string	"check"
.LASF6:
	.string	"main"
.LASF9:
	.string	"reach_error"
.LASF5:
	.string	"dummy"
.LASF4:
	.string	"assert_ret1"
.LASF2:
	.string	"long unsigned int"
	.section	.debug_line_str,"MS",@progbits,1
.LASF1:
	.string	"/home/grace/gitlib/rvemu/data/F_cov"
.LASF0:
	.string	"./test24-2.c"
	.ident	"GCC: () 13.2.0"
