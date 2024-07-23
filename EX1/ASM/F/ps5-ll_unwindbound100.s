	.file	"ps5-ll_unwindbound100.c"
	.option nopic
	.attribute arch, "rv64i2p1_m2p0_a2p1_f2p2_d2p2_zicsr2p0_zifencei2p0"
	.attribute unaligned_access, 0
	.attribute stack_align, 16
	.text
.Ltext0:
	.cfi_sections	.debug_frame
	.file 0 "/home/grace/gitlib/rvemu/data/F_cov" "./ps5-ll_unwindbound100.c"
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
	.file 1 "./ps5-ll_unwindbound100.c"
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
	.loc 1 5 1
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
	.loc 1 6 34
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
	.loc 1 6 39
	lw	a5,-20(s0)
	sext.w	a5,a5
	bne	a5,zero,.L5
	.loc 1 6 51
	nop
.L4:
	.loc 1 6 60 discriminator 1
	call	reach_error
.L5:
	.loc 1 6 78
	nop
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
	.globl	counter
	.section	.sbss,"aw",@nobits
	.align	2
	.type	counter, @object
	.size	counter, 4
counter:
	.zero	4
	.text
	.align	2
	.globl	main
	.type	main, @function
main:
.LFB2:
	.loc 1 10 12
	.cfi_startproc
	addi	sp,sp,-48
	.cfi_def_cfa_offset 48
	sd	ra,40(sp)
	sd	s0,32(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,48
	.cfi_def_cfa 8, 0
	.loc 1 14 7
	lh	a5,-42(s0)
	sext.w	a4,a5
	li	a5,256
	bgt	a4,a5,.L7
	.loc 1 16 11
	sd	zero,-24(s0)
	.loc 1 17 11
	sd	zero,-32(s0)
	.loc 1 18 11
	sd	zero,-40(s0)
	.loc 1 20 15
	j	.L8
.L11:
	.loc 1 21 34
	ld	a5,-24(s0)
	mul	a4,a5,a5
	.loc 1 21 36
	ld	a5,-24(s0)
	mul	a4,a4,a5
	.loc 1 21 38
	ld	a5,-24(s0)
	mul	a4,a4,a5
	.loc 1 21 40
	ld	a5,-24(s0)
	mul	a4,a4,a5
	mv	a5,a4
	slli	a5,a5,1
	add	a5,a5,a4
	slli	a5,a5,1
	mv	a3,a5
	.loc 1 21 49
	ld	a5,-24(s0)
	mul	a4,a5,a5
	.loc 1 21 51
	ld	a5,-24(s0)
	mul	a4,a4,a5
	.loc 1 21 53
	ld	a5,-24(s0)
	mul	a4,a4,a5
	mv	a5,a4
	slli	a5,a5,4
	sub	a5,a5,a4
	.loc 1 21 43
	add	a3,a3,a5
	.loc 1 21 62
	ld	a5,-24(s0)
	mul	a4,a5,a5
	.loc 1 21 64
	ld	a5,-24(s0)
	mul	a4,a4,a5
	mv	a5,a4
	slli	a5,a5,2
	add	a5,a5,a4
	slli	a5,a5,1
	.loc 1 21 56
	add	a3,a3,a5
	.loc 1 21 71
	ld	a4,-32(s0)
	mv	a5,a4
	slli	a4,a4,4
	sub	a5,a5,a4
	slli	a5,a5,1
	.loc 1 21 67
	add	a5,a3,a5
	.loc 1 21 13
	ld	a4,-24(s0)
	sub	a5,a4,a5
	seqz	a5,a5
	andi	a5,a5,0xff
	sext.w	a5,a5
	mv	a0,a5
	call	__VERIFIER_assert
	.loc 1 23 17
	lh	a5,-42(s0)
	.loc 1 23 16
	ld	a4,-40(s0)
	bge	a4,a5,.L13
	.loc 1 26 15
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
	.loc 1 27 15
	ld	a5,-24(s0)
	addi	a5,a5,1
	sd	a5,-24(s0)
	.loc 1 28 19
	ld	a5,-24(s0)
	mul	a4,a5,a5
	.loc 1 28 23
	ld	a5,-24(s0)
	mul	a4,a4,a5
	.loc 1 28 27
	ld	a5,-24(s0)
	mul	a5,a4,a5
	.loc 1 28 15
	ld	a4,-32(s0)
	add	a5,a4,a5
	sd	a5,-32(s0)
.L8:
	.loc 1 20 23
	lui	a5,%hi(counter)
	lw	a5,%lo(counter)(a5)
	addiw	a4,a5,1
	sext.w	a3,a4
	lui	a4,%hi(counter)
	sw	a3,%lo(counter)(a4)
	.loc 1 20 25
	mv	a4,a5
	li	a5,99
	ble	a4,a5,.L11
	j	.L10
.L13:
	.loc 1 24 17
	nop
.L10:
	.loc 1 31 30
	ld	a5,-24(s0)
	mul	a4,a5,a5
	.loc 1 31 32
	ld	a5,-24(s0)
	mul	a4,a4,a5
	.loc 1 31 34
	ld	a5,-24(s0)
	mul	a4,a4,a5
	.loc 1 31 36
	ld	a5,-24(s0)
	mul	a4,a4,a5
	mv	a5,a4
	slli	a5,a5,1
	add	a5,a5,a4
	slli	a5,a5,1
	mv	a3,a5
	.loc 1 31 45
	ld	a5,-24(s0)
	mul	a4,a5,a5
	.loc 1 31 47
	ld	a5,-24(s0)
	mul	a4,a4,a5
	.loc 1 31 49
	ld	a5,-24(s0)
	mul	a4,a4,a5
	mv	a5,a4
	slli	a5,a5,4
	sub	a5,a5,a4
	.loc 1 31 39
	add	a3,a3,a5
	.loc 1 31 58
	ld	a5,-24(s0)
	mul	a4,a5,a5
	.loc 1 31 60
	ld	a5,-24(s0)
	mul	a4,a4,a5
	mv	a5,a4
	slli	a5,a5,2
	add	a5,a5,a4
	slli	a5,a5,1
	.loc 1 31 52
	add	a3,a3,a5
	.loc 1 31 67
	ld	a4,-32(s0)
	mv	a5,a4
	slli	a4,a4,4
	sub	a5,a5,a4
	slli	a5,a5,1
	.loc 1 31 63
	add	a5,a3,a5
	.loc 1 31 9
	ld	a4,-24(s0)
	sub	a5,a4,a5
	seqz	a5,a5
	andi	a5,a5,0xff
	sext.w	a5,a5
	mv	a0,a5
	call	__VERIFIER_assert
	.loc 1 32 28
	lh	a4,-42(s0)
	ld	a5,-24(s0)
	mul	a4,a4,a5
	.loc 1 32 35
	ld	a5,-24(s0)
	mul	a5,a5,a5
	.loc 1 32 9
	sub	a5,a4,a5
	seqz	a5,a5
	andi	a5,a5,0xff
	sext.w	a5,a5
	mv	a0,a5
	call	__VERIFIER_assert
.L7:
	.loc 1 34 12
	li	a5,0
	.loc 1 35 1
	mv	a0,a5
	ld	ra,40(sp)
	.cfi_restore 1
	ld	s0,32(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 48
	addi	sp,sp,48
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE2:
	.size	main, .-main
.Letext0:
	.section	.debug_info,"",@progbits
.Ldebug_info0:
	.4byte	0x111
	.2byte	0x5
	.byte	0x1
	.byte	0x8
	.4byte	.Ldebug_abbrev0
	.uleb128 0x4
	.4byte	.LASF8
	.byte	0x1d
	.4byte	.LASF0
	.4byte	.LASF1
	.8byte	.Ltext0
	.8byte	.Letext0-.Ltext0
	.4byte	.Ldebug_line0
	.uleb128 0x2
	.4byte	.LASF2
	.byte	0x2
	.4byte	0x42
	.uleb128 0x9
	.byte	0x3
	.8byte	assert_ret1
	.uleb128 0x5
	.byte	0x4
	.byte	0x5
	.string	"int"
	.uleb128 0x2
	.4byte	.LASF3
	.byte	0x9
	.4byte	0x42
	.uleb128 0x9
	.byte	0x3
	.8byte	counter
	.uleb128 0x6
	.4byte	.LASF6
	.byte	0x1
	.byte	0xa
	.byte	0x5
	.4byte	0x42
	.8byte	.LFB2
	.8byte	.LFE2-.LFB2
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xb0
	.uleb128 0x1
	.string	"k"
	.byte	0xb
	.byte	0xb
	.4byte	0xb0
	.uleb128 0x2
	.byte	0x91
	.sleb128 -42
	.uleb128 0x1
	.string	"y"
	.byte	0xc
	.byte	0xf
	.4byte	0xb6
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"x"
	.byte	0xc
	.byte	0x12
	.4byte	0xb6
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1
	.string	"c"
	.byte	0xc
	.byte	0x15
	.4byte	0xb6
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.uleb128 0x3
	.byte	0x2
	.4byte	.LASF4
	.uleb128 0x3
	.byte	0x8
	.4byte	.LASF5
	.uleb128 0x7
	.4byte	.LASF7
	.byte	0x1
	.byte	0x6
	.byte	0x6
	.8byte	.LFB1
	.8byte	.LFE1-.LFB1
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xfa
	.uleb128 0x8
	.4byte	.LASF9
	.byte	0x1
	.byte	0x6
	.byte	0x1c
	.4byte	0x42
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x9
	.4byte	.LASF10
	.byte	0x1
	.byte	0x6
	.byte	0x33
	.8byte	.L4
	.byte	0
	.uleb128 0xa
	.4byte	.LASF11
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
	.uleb128 0x21
	.sleb128 5
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x3f
	.uleb128 0x19
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
	.uleb128 0x21
	.sleb128 5
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
	.uleb128 0x8
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
	.uleb128 0x9
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
.LASF8:
	.string	"GNU C17 13.2.0 -mtune=rocket -mabi=lp64d -misa-spec=20191213 -march=rv64imafd_zicsr_zifencei -g -O0 -fno-toplevel-reorder -fno-asynchronous-unwind-tables"
.LASF9:
	.string	"cond"
.LASF3:
	.string	"counter"
.LASF4:
	.string	"short int"
.LASF11:
	.string	"reach_error"
.LASF7:
	.string	"__VERIFIER_assert"
.LASF10:
	.string	"ERROR"
.LASF2:
	.string	"assert_ret1"
.LASF6:
	.string	"main"
.LASF5:
	.string	"long long int"
	.section	.debug_line_str,"MS",@progbits,1
.LASF1:
	.string	"/home/grace/gitlib/rvemu/data/F_cov"
.LASF0:
	.string	"./ps5-ll_unwindbound100.c"
	.ident	"GCC: () 13.2.0"
