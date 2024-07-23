	.file	"recursified_hard-u.c"
	.option nopic
	.attribute arch, "rv64i2p1_m2p0_a2p1_f2p2_d2p2_zicsr2p0_zifencei2p0"
	.attribute unaligned_access, 0
	.attribute stack_align, 16
	.text
.Ltext0:
	.cfi_sections	.debug_frame
	.file 0 "/home/grace/gitlib/rvemu/data/F_cov" "./recursified_hard-u.c"
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
	.file 1 "./recursified_hard-u.c"
	.loc 1 17 20
	.cfi_startproc
	addi	sp,sp,-16
	.cfi_def_cfa_offset 16
	sd	s0,8(sp)
	.cfi_offset 8, -8
	addi	s0,sp,16
	.cfi_def_cfa 8, 0
	.loc 1 18 23 discriminator 1
	lui	a5,%hi(assert_ret1)
	sw	zero,%lo(assert_ret1)(a5)
	.loc 1 19 3
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
	.loc 1 22 1
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
	.loc 1 23 6
	lw	a5,-20(s0)
	sext.w	a5,a5
	bne	a5,zero,.L6
	.loc 1 25 5
	nop
.L4:
	.loc 1 27 7
	call	reach_error
	.loc 1 34 3
	nop
.L6:
	nop
	.loc 1 35 1
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
	.globl	func_to_recursive_line_41_to_51_0
	.type	func_to_recursive_line_41_to_51_0, @function
func_to_recursive_line_41_to_51_0:
.LFB2:
	.loc 1 38 1
	.cfi_startproc
	addi	sp,sp,-64
	.cfi_def_cfa_offset 64
	sd	ra,56(sp)
	sd	s0,48(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,64
	.cfi_def_cfa 8, 0
	sd	a0,-24(s0)
	sd	a1,-32(s0)
	sd	a2,-40(s0)
	sd	a3,-48(s0)
	sd	a4,-56(s0)
	sd	a5,-64(s0)
	.loc 1 42 26
	ld	a5,-64(s0)
	lw	a3,0(a5)
	.loc 1 42 36
	ld	a5,-40(s0)
	lw	a4,0(a5)
	.loc 1 42 43
	ld	a5,-48(s0)
	lw	a5,0(a5)
	.loc 1 42 40
	mulw	a5,a4,a5
	sext.w	a4,a5
	.loc 1 42 51
	ld	a5,-56(s0)
	lw	a5,0(a5)
	.loc 1 42 48
	addw	a5,a4,a5
	sext.w	a5,a5
	.loc 1 42 7
	mv	a4,a3
	sub	a5,a4,a5
	seqz	a5,a5
	andi	a5,a5,0xff
	sext.w	a5,a5
	mv	a0,a5
	call	__VERIFIER_assert
	.loc 1 43 26
	ld	a5,-32(s0)
	lw	a3,0(a5)
	.loc 1 43 35
	ld	a5,-48(s0)
	lw	a4,0(a5)
	.loc 1 43 42
	ld	a5,-24(s0)
	lw	a5,0(a5)
	.loc 1 43 39
	mulw	a5,a4,a5
	sext.w	a5,a5
	.loc 1 43 7
	mv	a4,a3
	sub	a5,a4,a5
	seqz	a5,a5
	andi	a5,a5,0xff
	sext.w	a5,a5
	mv	a0,a5
	call	__VERIFIER_assert
	.loc 1 44 14
	ld	a5,-24(s0)
	lw	a5,0(a5)
	.loc 1 44 10
	mv	a4,a5
	li	a5,1
	beq	a4,a5,.L11
	.loc 1 51 13
	ld	a5,-32(s0)
	lw	a5,0(a5)
	.loc 1 51 17
	srliw	a5,a5,1
	sext.w	a4,a5
	.loc 1 51 10
	ld	a5,-32(s0)
	sw	a4,0(a5)
	.loc 1 52 13
	ld	a5,-24(s0)
	lw	a5,0(a5)
	.loc 1 52 17
	srliw	a5,a5,1
	sext.w	a4,a5
	.loc 1 52 10
	ld	a5,-24(s0)
	sw	a4,0(a5)
	.loc 1 53 12
	ld	a5,-56(s0)
	lw	a4,0(a5)
	.loc 1 53 20
	ld	a5,-32(s0)
	lw	a5,0(a5)
	.loc 1 53 10
	bltu	a4,a5,.L10
	.loc 1 55 15
	ld	a5,-56(s0)
	lw	a4,0(a5)
	.loc 1 55 22
	ld	a5,-32(s0)
	lw	a5,0(a5)
	.loc 1 55 19
	subw	a5,a4,a5
	sext.w	a4,a5
	.loc 1 55 12
	ld	a5,-56(s0)
	sw	a4,0(a5)
	.loc 1 56 15
	ld	a5,-40(s0)
	lw	a4,0(a5)
	.loc 1 56 22
	ld	a5,-24(s0)
	lw	a5,0(a5)
	.loc 1 56 19
	addw	a5,a4,a5
	sext.w	a4,a5
	.loc 1 56 12
	ld	a5,-40(s0)
	sw	a4,0(a5)
.L10:
	.loc 1 62 5
	ld	a5,-64(s0)
	ld	a4,-56(s0)
	ld	a3,-48(s0)
	ld	a2,-40(s0)
	ld	a1,-32(s0)
	ld	a0,-24(s0)
	call	func_to_recursive_line_41_to_51_0
	j	.L7
.L11:
	.loc 1 46 9
	nop
.L7:
	.loc 1 67 1
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
	.size	func_to_recursive_line_41_to_51_0, .-func_to_recursive_line_41_to_51_0
	.align	2
	.globl	func_to_recursive_line_31_to_38_0
	.type	func_to_recursive_line_31_to_38_0, @function
func_to_recursive_line_31_to_38_0:
.LFB3:
	.loc 1 70 1
	.cfi_startproc
	addi	sp,sp,-64
	.cfi_def_cfa_offset 64
	sd	ra,56(sp)
	sd	s0,48(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,64
	.cfi_def_cfa 8, 0
	sd	a0,-24(s0)
	sd	a1,-32(s0)
	sd	a2,-40(s0)
	sd	a3,-48(s0)
	sd	a4,-56(s0)
	sd	a5,-64(s0)
	.loc 1 74 26
	ld	a5,-40(s0)
	lw	a5,0(a5)
	.loc 1 74 7
	seqz	a5,a5
	andi	a5,a5,0xff
	sext.w	a5,a5
	mv	a0,a5
	call	__VERIFIER_assert
	.loc 1 75 26
	ld	a5,-56(s0)
	lw	a4,0(a5)
	.loc 1 75 34
	ld	a5,-64(s0)
	lw	a5,0(a5)
	.loc 1 75 7
	sub	a5,a4,a5
	seqz	a5,a5
	andi	a5,a5,0xff
	sext.w	a5,a5
	mv	a0,a5
	call	__VERIFIER_assert
	.loc 1 76 26
	ld	a5,-32(s0)
	lw	a3,0(a5)
	.loc 1 76 35
	ld	a5,-48(s0)
	lw	a4,0(a5)
	.loc 1 76 42
	ld	a5,-24(s0)
	lw	a5,0(a5)
	.loc 1 76 39
	mulw	a5,a4,a5
	sext.w	a5,a5
	.loc 1 76 7
	mv	a4,a3
	sub	a5,a4,a5
	seqz	a5,a5
	andi	a5,a5,0xff
	sext.w	a5,a5
	mv	a0,a5
	call	__VERIFIER_assert
	.loc 1 77 14
	ld	a5,-56(s0)
	lw	a4,0(a5)
	.loc 1 77 22
	ld	a5,-32(s0)
	lw	a5,0(a5)
	.loc 1 77 10
	bltu	a4,a5,.L15
	.loc 1 84 17
	ld	a5,-32(s0)
	lw	a5,0(a5)
	.loc 1 84 14
	slliw	a5,a5,1
	sext.w	a4,a5
	.loc 1 84 10
	ld	a5,-32(s0)
	sw	a4,0(a5)
	.loc 1 85 17
	ld	a5,-24(s0)
	lw	a5,0(a5)
	.loc 1 85 14
	slliw	a5,a5,1
	sext.w	a4,a5
	.loc 1 85 10
	ld	a5,-24(s0)
	sw	a4,0(a5)
	.loc 1 87 5
	ld	a5,-64(s0)
	ld	a4,-56(s0)
	ld	a3,-48(s0)
	ld	a2,-40(s0)
	ld	a1,-32(s0)
	ld	a0,-24(s0)
	call	func_to_recursive_line_31_to_38_0
	j	.L12
.L15:
	.loc 1 79 9
	nop
.L12:
	.loc 1 92 1
	ld	ra,56(sp)
	.cfi_restore 1
	ld	s0,48(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 64
	addi	sp,sp,64
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE3:
	.size	func_to_recursive_line_31_to_38_0, .-func_to_recursive_line_31_to_38_0
	.align	2
	.globl	main
	.type	main, @function
main:
.LFB4:
	.loc 1 95 1
	.cfi_startproc
	addi	sp,sp,-48
	.cfi_def_cfa_offset 48
	sd	ra,40(sp)
	sd	s0,32(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,48
	.cfi_def_cfa 8, 0
	.loc 1 104 8
	lw	a5,-24(s0)
	.loc 1 104 5
	beq	a5,zero,.L17
	.loc 1 105 7
	lw	a5,-20(s0)
	sw	a5,-28(s0)
	.loc 1 106 7
	lw	a5,-24(s0)
	sw	a5,-32(s0)
	.loc 1 107 7
	li	a5,1
	sw	a5,-36(s0)
	.loc 1 108 7
	sw	zero,-40(s0)
	.loc 1 109 5
	addi	a5,s0,-20
	addi	a4,s0,-28
	addi	a3,s0,-24
	addi	a2,s0,-40
	addi	a1,s0,-32
	addi	a0,s0,-36
	call	func_to_recursive_line_31_to_38_0
	.loc 1 110 5
	addi	a5,s0,-20
	addi	a4,s0,-28
	addi	a3,s0,-24
	addi	a2,s0,-40
	addi	a1,s0,-32
	addi	a0,s0,-36
	call	func_to_recursive_line_41_to_51_0
	.loc 1 111 32
	lw	a4,-32(s0)
	lw	a5,-40(s0)
	mulw	a5,a4,a5
	sext.w	a4,a5
	.loc 1 111 37
	lw	a5,-28(s0)
	addw	a5,a4,a5
	sext.w	a4,a5
	.loc 1 111 5
	lw	a5,-20(s0)
	sub	a5,a4,a5
	seqz	a5,a5
	andi	a5,a5,0xff
	sext.w	a5,a5
	mv	a0,a5
	call	__VERIFIER_assert
	.loc 1 112 5
	lw	a4,-24(s0)
	lw	a5,-32(s0)
	sub	a5,a4,a5
	seqz	a5,a5
	andi	a5,a5,0xff
	sext.w	a5,a5
	mv	a0,a5
	call	__VERIFIER_assert
.L17:
	.loc 1 114 10
	li	a5,0
	.loc 1 115 1
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
.LFE4:
	.size	main, .-main
.Letext0:
	.section	.debug_info,"",@progbits
.Ldebug_info0:
	.4byte	0x1da
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
	.uleb128 0x5
	.4byte	.LASF9
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
	.4byte	.LASF3
	.byte	0x1
	.byte	0x5e
	.byte	0x5
	.4byte	0x44
	.8byte	.LFB4
	.8byte	.LFE4-.LFB4
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xb0
	.uleb128 0x2
	.string	"A"
	.byte	0x60
	.4byte	0xb0
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.string	"B"
	.byte	0x61
	.4byte	0xb0
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.string	"r"
	.byte	0x62
	.4byte	0xb0
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x2
	.string	"d"
	.byte	0x63
	.4byte	0xb0
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x2
	.string	"p"
	.byte	0x64
	.4byte	0xb0
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x2
	.string	"q"
	.byte	0x65
	.4byte	0xb0
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.uleb128 0x8
	.byte	0x4
	.byte	0x7
	.4byte	.LASF2
	.uleb128 0x3
	.4byte	.LASF4
	.byte	0x45
	.8byte	.LFB3
	.8byte	.LFE3-.LFB3
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x11c
	.uleb128 0x1
	.string	"p"
	.byte	0x45
	.byte	0x36
	.4byte	0x11c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"d"
	.byte	0x45
	.byte	0x47
	.4byte	0x11c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1
	.string	"q"
	.byte	0x45
	.byte	0x58
	.4byte	0x11c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x1
	.string	"B"
	.byte	0x45
	.byte	0x69
	.4byte	0x11c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x1
	.string	"r"
	.byte	0x45
	.byte	0x7a
	.4byte	0x11c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x1
	.string	"A"
	.byte	0x45
	.byte	0x8b
	.4byte	0x11c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.byte	0
	.uleb128 0x9
	.byte	0x8
	.4byte	0xb0
	.uleb128 0x3
	.4byte	.LASF5
	.byte	0x25
	.8byte	.LFB2
	.8byte	.LFE2-.LFB2
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x187
	.uleb128 0x1
	.string	"p"
	.byte	0x25
	.byte	0x36
	.4byte	0x11c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"d"
	.byte	0x25
	.byte	0x47
	.4byte	0x11c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1
	.string	"q"
	.byte	0x25
	.byte	0x58
	.4byte	0x11c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x1
	.string	"B"
	.byte	0x25
	.byte	0x69
	.4byte	0x11c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x1
	.string	"r"
	.byte	0x25
	.byte	0x7a
	.4byte	0x11c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x1
	.string	"A"
	.byte	0x25
	.byte	0x8b
	.4byte	0x11c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.byte	0
	.uleb128 0x3
	.4byte	.LASF6
	.byte	0x15
	.8byte	.LFB1
	.8byte	.LFE1-.LFB1
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1c3
	.uleb128 0xa
	.4byte	.LASF7
	.byte	0x1
	.byte	0x15
	.byte	0x1c
	.4byte	0x44
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0xb
	.4byte	.LASF10
	.byte	0x1
	.byte	0x19
	.byte	0x5
	.8byte	.L4
	.byte	0
	.uleb128 0xc
	.4byte	.LASF11
	.byte	0x1
	.byte	0x11
	.byte	0x6
	.8byte	.LFB0
	.8byte	.LFE0-.LFB0
	.uleb128 0x1
	.byte	0x9c
	.byte	0
	.section	.debug_abbrev,"",@progbits
.Ldebug_abbrev0:
	.uleb128 0x1
	.uleb128 0x5
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
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 1
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0x21
	.sleb128 16
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x3
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 1
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0x21
	.sleb128 6
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
	.uleb128 0x9
	.uleb128 0xf
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xa
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
	.uleb128 0xb
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
	.uleb128 0xc
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
.LASF2:
	.string	"unsigned int"
.LASF7:
	.string	"cond"
.LASF4:
	.string	"func_to_recursive_line_31_to_38_0"
.LASF11:
	.string	"reach_error"
.LASF10:
	.string	"ERROR"
.LASF9:
	.string	"assert_ret1"
.LASF3:
	.string	"main"
.LASF6:
	.string	"__VERIFIER_assert"
.LASF5:
	.string	"func_to_recursive_line_41_to_51_0"
	.section	.debug_line_str,"MS",@progbits,1
.LASF1:
	.string	"/home/grace/gitlib/rvemu/data/F_cov"
.LASF0:
	.string	"./recursified_hard-u.c"
	.ident	"GCC: () 13.2.0"
