	.file	"string-1.c"
	.option nopic
	.attribute arch, "rv64i2p1_m2p0_a2p1_f2p2_d2p2_zicsr2p0_zifencei2p0"
	.attribute unaligned_access, 0
	.attribute stack_align, 16
	.text
.Ltext0:
	.cfi_sections	.debug_frame
	.file 0 "/home/grace/gitlib/rvemu/data/T_cov" "./string-1.c"
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
	.file 1 "./string-1.c"
	.loc 1 5 20
	.cfi_startproc
	addi	sp,sp,-16
	.cfi_def_cfa_offset 16
	sd	s0,8(sp)
	.cfi_offset 8, -8
	addi	s0,sp,16
	.cfi_def_cfa 8, 0
	.loc 1 6 23 discriminator 1
	lui	a5,%hi(assert_ret1)
	sw	zero,%lo(assert_ret1)(a5)
	.loc 1 7 2
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
	.globl	__VERIFIER_assert
	.type	__VERIFIER_assert, @function
__VERIFIER_assert:
.LFB1:
	.loc 1 10 34
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sd	ra,24(sp)
	sd	s0,16(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,32
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sw	a5,-20(s0)
	.loc 1 11 6
	lw	a5,-20(s0)
	sext.w	a5,a5
	bne	a5,zero,.L6
	.loc 1 12 5
	nop
.L4:
	.loc 1 12 13
	call	reach_error
	.loc 1 14 3
	nop
.L6:
	nop
	.loc 1 15 1
	ld	ra,24(sp)
	.cfi_restore 1
	ld	s0,16(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 32
	addi	sp,sp,32
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE1:
	.size	__VERIFIER_assert, .-__VERIFIER_assert
	.align	2
	.globl	main
	.type	main, @function
main:
.LFB2:
	.loc 1 21 1
	.cfi_startproc
	addi	sp,sp,-64
	.cfi_def_cfa_offset 64
	sd	ra,56(sp)
	sd	s0,48(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,64
	.cfi_def_cfa 8, 0
	.loc 1 23 25
	sw	zero,-36(s0)
	.loc 1 25 8
	sw	zero,-20(s0)
	.loc 1 25 3
	j	.L8
.L9:
	.loc 1 25 18 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L8:
	.loc 1 25 13 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,4
	ble	a4,a5,.L9
	.loc 1 27 17
	lbu	a5,-44(s0)
	.loc 1 27 6
	beq	a5,zero,.L10
	.loc 1 27 39 discriminator 1
	li	a5,0
	.loc 1 27 39 is_stmt 0
	j	.L27
.L10:
	.loc 1 29 8 is_stmt 1
	sw	zero,-20(s0)
	.loc 1 29 3
	j	.L12
.L13:
	.loc 1 29 18 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L12:
	.loc 1 29 13 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,4
	ble	a4,a5,.L13
	.loc 1 31 17
	lbu	a5,-52(s0)
	.loc 1 31 6
	beq	a5,zero,.L14
	.loc 1 31 39 discriminator 1
	li	a5,0
	.loc 1 31 39 is_stmt 0
	j	.L27
.L14:
	.loc 1 33 8 is_stmt 1
	sw	zero,-28(s0)
	.loc 1 34 8
	j	.L15
.L16:
	.loc 1 35 9
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sw	a5,-28(s0)
.L15:
	.loc 1 34 17
	lw	a5,-28(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	lbu	a5,-32(a5)
	.loc 1 34 23
	bne	a5,zero,.L16
	.loc 1 37 8
	sw	zero,-32(s0)
	.loc 1 38 8
	j	.L17
.L18:
	.loc 1 39 9
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
.L17:
	.loc 1 38 17
	lw	a5,-32(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	lbu	a5,-40(a5)
	.loc 1 38 23
	bne	a5,zero,.L18
	.loc 1 41 6
	lw	a5,-32(s0)
	mv	a4,a5
	lw	a5,-28(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	bge	a4,a5,.L19
	.loc 1 41 31 discriminator 1
	li	a5,0
	.loc 1 41 31 is_stmt 0
	j	.L27
.L19:
	.loc 1 44 6 is_stmt 1
	sw	zero,-24(s0)
	.loc 1 44 4
	lw	a5,-24(s0)
	sw	a5,-20(s0)
	.loc 1 45 8
	j	.L20
.L23:
	.loc 1 47 16
	lw	a5,-20(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	lbu	a4,-32(a5)
	.loc 1 47 31
	lw	a5,-24(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	lbu	a5,-40(a5)
	.loc 1 47 7
	bne	a4,a5,.L21
	.loc 1 49 9
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
	.loc 1 50 9
	lw	a5,-24(s0)
	addiw	a5,a5,1
	sw	a5,-24(s0)
	j	.L20
.L21:
	.loc 1 54 13
	lw	a5,-20(s0)
	mv	a4,a5
	lw	a5,-24(s0)
	subw	a5,a4,a5
	sext.w	a5,a5
	.loc 1 54 10
	addiw	a5,a5,1
	sw	a5,-20(s0)
	.loc 1 55 10
	sw	zero,-24(s0)
.L20:
	.loc 1 45 18
	lw	a5,-20(s0)
	mv	a4,a5
	lw	a5,-28(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	bge	a4,a5,.L22
	.loc 1 45 18 is_stmt 0 discriminator 1
	lw	a5,-24(s0)
	mv	a4,a5
	lw	a5,-32(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L23
.L22:
	.loc 1 59 13 is_stmt 1
	lw	a5,-32(s0)
	mv	a4,a5
	lw	a5,-24(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	sgt	a5,a4,a5
	seqz	a5,a5
	andi	a5,a5,0xff
	.loc 1 59 9
	sw	a5,-36(s0)
	.loc 1 61 3
	lw	a5,-36(s0)
	sext.w	a5,a5
	beq	a5,zero,.L24
	.loc 1 61 3 is_stmt 0 discriminator 2
	lw	a5,-36(s0)
	sext.w	a4,a5
	li	a5,1
	bne	a4,a5,.L25
.L24:
	.loc 1 61 3 discriminator 3
	li	a5,1
	.loc 1 61 3
	j	.L26
.L25:
	.loc 1 61 3 discriminator 4
	li	a5,0
.L26:
	.loc 1 61 3 discriminator 6
	mv	a0,a5
	call	__VERIFIER_assert
	.loc 1 63 10 is_stmt 1
	li	a5,0
.L27:
	.loc 1 64 1
	mv	a0,a5
	ld	ra,56(sp)
	.cfi_restore 1
	ld	s0,48(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 64
	addi	sp,sp,64
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE2:
	.size	main, .-main
.Letext0:
	.section	.debug_info,"",@progbits
.Ldebug_info0:
	.4byte	0x13d
	.2byte	0x5
	.byte	0x1
	.byte	0x8
	.4byte	.Ldebug_abbrev0
	.uleb128 0x4
	.4byte	.LASF11
	.byte	0x1d
	.4byte	.LASF0
	.4byte	.LASF1
	.8byte	.Ltext0
	.8byte	.Letext0-.Ltext0
	.4byte	.Ldebug_line0
	.uleb128 0x5
	.4byte	.LASF12
	.byte	0x1
	.byte	0x2
	.byte	0x5
	.4byte	0x44
	.uleb128 0x9
	.byte	0x3
	.8byte	assert_ret1
	.uleb128 0x6
	.byte	0x4
	.byte	0x5
	.string	"int"
	.uleb128 0x7
	.4byte	.LASF9
	.byte	0x1
	.byte	0x14
	.byte	0x5
	.4byte	0x44
	.8byte	.LFB2
	.8byte	.LFE2-.LFB2
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xca
	.uleb128 0x1
	.4byte	.LASF2
	.byte	0x16
	.byte	0x8
	.4byte	0xca
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x1
	.4byte	.LASF3
	.byte	0x16
	.byte	0x15
	.4byte	0xca
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x2
	.string	"i"
	.byte	0x7
	.4byte	0x44
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.string	"j"
	.byte	0xa
	.4byte	0x44
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.4byte	.LASF4
	.byte	0x17
	.byte	0xd
	.4byte	0x44
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x1
	.4byte	.LASF5
	.byte	0x17
	.byte	0x13
	.4byte	0x44
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1
	.4byte	.LASF6
	.byte	0x17
	.byte	0x19
	.4byte	0x44
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.byte	0
	.uleb128 0x8
	.4byte	0xe1
	.4byte	0xda
	.uleb128 0x9
	.4byte	0xda
	.byte	0x4
	.byte	0
	.uleb128 0x3
	.byte	0x8
	.byte	0x7
	.4byte	.LASF7
	.uleb128 0x3
	.byte	0x1
	.byte	0x8
	.4byte	.LASF8
	.uleb128 0xa
	.4byte	.LASF10
	.byte	0x1
	.byte	0xa
	.byte	0x6
	.8byte	.LFB1
	.8byte	.LFE1-.LFB1
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x126
	.uleb128 0xb
	.4byte	.LASF13
	.byte	0x1
	.byte	0xa
	.byte	0x1c
	.4byte	0x44
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0xc
	.4byte	.LASF14
	.byte	0x1
	.byte	0xc
	.byte	0x5
	.8byte	.L4
	.byte	0
	.uleb128 0xd
	.4byte	.LASF15
	.byte	0x1
	.byte	0x5
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
	.uleb128 0xe
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
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 1
	.uleb128 0x3b
	.uleb128 0x21
	.sleb128 23
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x3
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
	.uleb128 0x4
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
	.uleb128 0x5
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
	.uleb128 0x6
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
	.uleb128 0x7
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
	.uleb128 0x8
	.uleb128 0x1
	.byte	0x1
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x9
	.uleb128 0x21
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2f
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0xa
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
	.uleb128 0xb
	.uleb128 0x5
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
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0xc
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
	.uleb128 0xd
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
.LASF6:
	.string	"found"
.LASF11:
	.string	"GNU C17 13.2.0 -mtune=rocket -mabi=lp64d -misa-spec=20191213 -march=rv64imafd_zicsr_zifencei -g -O0 -fno-toplevel-reorder -fno-asynchronous-unwind-tables"
.LASF3:
	.string	"string_B"
.LASF13:
	.string	"cond"
.LASF5:
	.string	"nc_B"
.LASF8:
	.string	"char"
.LASF15:
	.string	"reach_error"
.LASF10:
	.string	"__VERIFIER_assert"
.LASF14:
	.string	"ERROR"
.LASF2:
	.string	"string_A"
.LASF12:
	.string	"assert_ret1"
.LASF9:
	.string	"main"
.LASF7:
	.string	"long unsigned int"
.LASF4:
	.string	"nc_A"
	.section	.debug_line_str,"MS",@progbits,1
.LASF1:
	.string	"/home/grace/gitlib/rvemu/data/T_cov"
.LASF0:
	.string	"./string-1.c"
	.ident	"GCC: () 13.2.0"
