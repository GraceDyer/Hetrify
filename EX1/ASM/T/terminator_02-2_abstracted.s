	.file	"terminator_02-2_abstracted.c"
	.option nopic
	.attribute arch, "rv64i2p1_m2p0_a2p1_f2p2_d2p2_zicsr2p0_zifencei2p0"
	.attribute unaligned_access, 0
	.attribute stack_align, 16
	.text
.Ltext0:
	.cfi_sections	.debug_frame
	.file 0 "/home/grace/gitlib/rvemu/data/T_cov" "./terminator_02-2_abstracted.c"
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
	.file 1 "./terminator_02-2_abstracted.c"
	.loc 1 14 20
	.cfi_startproc
	addi	sp,sp,-16
	.cfi_def_cfa_offset 16
	sd	s0,8(sp)
	.cfi_offset 8, -8
	addi	s0,sp,16
	.cfi_def_cfa 8, 0
	.loc 1 15 23 discriminator 1
	lui	a5,%hi(assert_ret1)
	sw	zero,%lo(assert_ret1)(a5)
	.loc 1 16 1
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
	.loc 1 18 34
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
	.loc 1 19 6
	lw	a5,-20(s0)
	sext.w	a5,a5
	bne	a5,zero,.L6
	.loc 1 20 5
	nop
.L4:
	.loc 1 20 13
	call	reach_error
	.loc 1 22 3
	nop
.L6:
	nop
	.loc 1 23 1
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
	.loc 1 28 1
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sd	ra,24(sp)
	sd	s0,16(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,32
	.cfi_def_cfa 8, 0
	.loc 1 32 8
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,-99
	bge	a4,a5,.L8
	.loc 1 32 27 discriminator 1
	li	a5,0
	.loc 1 32 27 is_stmt 0
	j	.L9
.L8:
	.loc 1 33 8 is_stmt 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,199
	ble	a4,a5,.L10
	.loc 1 33 26 discriminator 1
	li	a5,0
	.loc 1 33 26 is_stmt 0
	j	.L9
.L10:
	.loc 1 34 8 is_stmt 1
	lw	a5,-24(s0)
	sext.w	a4,a5
	li	a5,100
	bgt	a4,a5,.L11
	.loc 1 34 26 discriminator 1
	li	a5,0
	.loc 1 34 26 is_stmt 0
	j	.L9
.L11:
	.loc 1 35 8 is_stmt 1
	lw	a5,-24(s0)
	sext.w	a4,a5
	li	a5,199
	ble	a4,a5,.L12
	.loc 1 35 26 discriminator 1
	li	a5,0
	.loc 1 35 26 is_stmt 0
	j	.L9
.L12:
	.loc 1 37 21 is_stmt 1
	lw	a5,-24(s0)
	sext.w	a4,a5
	li	a5,100
	sgt	a5,a4,a5
	andi	a4,a5,0xff
	lw	a5,-20(s0)
	sext.w	a3,a5
	li	a5,99
	sgt	a5,a3,a5
	seqz	a5,a5
	andi	a5,a5,0xff
	and	a5,a4,a5
	andi	a5,a5,0xff
	.loc 1 37 8
	beq	a5,zero,.L13
	.loc 1 38 7
	lw	a5,-28(s0)
	sw	a5,-24(s0)
	.loc 1 39 7
	lw	a5,-32(s0)
	sw	a5,-20(s0)
.L13:
	.loc 1 41 21
	lw	a5,-24(s0)
	sext.w	a4,a5
	li	a5,100
	sgt	a5,a4,a5
	andi	a4,a5,0xff
	lw	a5,-20(s0)
	sext.w	a3,a5
	li	a5,99
	sgt	a5,a3,a5
	seqz	a5,a5
	andi	a5,a5,0xff
	and	a5,a4,a5
	andi	a5,a5,0xff
	.loc 1 41 8
	beq	a5,zero,.L14
	.loc 1 41 43 discriminator 1
	li	a5,0
	.loc 1 41 43 is_stmt 0
	j	.L9
.L14:
	.loc 1 44 5 is_stmt 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,99
	bgt	a4,a5,.L15
	.loc 1 44 5 is_stmt 0 discriminator 2
	lw	a5,-24(s0)
	sext.w	a4,a5
	li	a5,100
	bgt	a4,a5,.L16
.L15:
	.loc 1 44 5 discriminator 3
	li	a5,1
	.loc 1 44 5
	j	.L17
.L16:
	.loc 1 44 5 discriminator 4
	li	a5,0
.L17:
	.loc 1 44 5 discriminator 6
	mv	a0,a5
	call	__VERIFIER_assert
	.loc 1 46 12 is_stmt 1
	li	a5,0
.L9:
	.loc 1 47 1
	mv	a0,a5
	ld	ra,24(sp)
	.cfi_restore 1
	ld	s0,16(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 32
	addi	sp,sp,32
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE2:
	.size	main, .-main
.Letext0:
	.section	.debug_info,"",@progbits
.Ldebug_info0:
	.4byte	0xf3
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
	.4byte	.LASF5
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
	.uleb128 0x5
	.4byte	.LASF2
	.byte	0x1
	.byte	0x1b
	.byte	0x5
	.4byte	0x44
	.8byte	.LFB2
	.8byte	.LFE2-.LFB2
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x9e
	.uleb128 0x1
	.string	"x"
	.byte	0x1d
	.byte	0x9
	.4byte	0x44
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1
	.string	"z"
	.byte	0x1e
	.byte	0x9
	.4byte	0x44
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"a"
	.byte	0x1f
	.byte	0x9
	.4byte	0x44
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x1
	.string	"b"
	.byte	0x1f
	.byte	0xb
	.4byte	0x44
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.uleb128 0x6
	.4byte	.LASF3
	.byte	0x1
	.byte	0x12
	.byte	0x6
	.8byte	.LFB1
	.8byte	.LFE1-.LFB1
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xdc
	.uleb128 0x7
	.4byte	.LASF6
	.byte	0x1
	.byte	0x12
	.byte	0x1c
	.4byte	0x44
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x8
	.4byte	.LASF7
	.byte	0x1
	.byte	0x14
	.byte	0x5
	.8byte	.L4
	.byte	0
	.uleb128 0x9
	.4byte	.LASF8
	.byte	0x1
	.byte	0xe
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
	.uleb128 0x7
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
	.uleb128 0x8
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
	.uleb128 0x9
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
.LASF6:
	.string	"cond"
.LASF8:
	.string	"reach_error"
.LASF3:
	.string	"__VERIFIER_assert"
.LASF7:
	.string	"ERROR"
.LASF5:
	.string	"assert_ret1"
.LASF2:
	.string	"main"
	.section	.debug_line_str,"MS",@progbits,1
.LASF0:
	.string	"./terminator_02-2_abstracted.c"
.LASF1:
	.string	"/home/grace/gitlib/rvemu/data/T_cov"
	.ident	"GCC: () 13.2.0"
