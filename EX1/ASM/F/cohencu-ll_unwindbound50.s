	.file	"cohencu-ll_unwindbound50.c"
	.option nopic
	.attribute arch, "rv64i2p1_m2p0_a2p1_f2p2_d2p2_zicsr2p0_zifencei2p0"
	.attribute unaligned_access, 0
	.attribute stack_align, 16
	.text
.Ltext0:
	.cfi_sections	.debug_frame
	.file 0 "/home/grace/gitlib/rvemu/data/F_cov" "./cohencu-ll_unwindbound50.c"
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
	.file 1 "./cohencu-ll_unwindbound50.c"
	.loc 1 7 20
	.cfi_startproc
	addi	sp,sp,-16
	.cfi_def_cfa_offset 16
	sd	s0,8(sp)
	.cfi_offset 8, -8
	addi	s0,sp,16
	.cfi_def_cfa 8, 0
	.loc 1 8 23 discriminator 1
	lui	a5,%hi(assert_ret1)
	sw	zero,%lo(assert_ret1)(a5)
	.loc 1 9 1
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
	.loc 1 10 39
	lw	a5,-20(s0)
	sext.w	a5,a5
	bne	a5,zero,.L5
	.loc 1 10 51
	nop
.L4:
	.loc 1 10 60 discriminator 1
	call	reach_error
.L5:
	.loc 1 10 78
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
	.loc 1 13 12
	.cfi_startproc
	addi	sp,sp,-64
	.cfi_def_cfa_offset 64
	sd	ra,56(sp)
	sd	s0,48(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,64
	.cfi_def_cfa 8, 0
	.loc 1 18 7
	sd	zero,-24(s0)
	.loc 1 19 7
	sd	zero,-32(s0)
	.loc 1 20 7
	li	a5,1
	sd	a5,-40(s0)
	.loc 1 21 7
	li	a5,6
	sd	a5,-48(s0)
	.loc 1 23 11
	j	.L7
.L10:
	.loc 1 24 38
	ld	a5,-24(s0)
	addi	a4,a5,1
	mv	a5,a4
	slli	a5,a5,1
	add	a5,a5,a4
	slli	a5,a5,1
	mv	a4,a5
	.loc 1 24 9
	ld	a5,-48(s0)
	sub	a5,a5,a4
	seqz	a5,a5
	andi	a5,a5,0xff
	sext.w	a5,a5
	mv	a0,a5
	call	__VERIFIER_assert
	.loc 1 25 38
	ld	a5,-24(s0)
	mul	a4,a5,a5
	.loc 1 25 42
	ld	a5,-24(s0)
	add	a4,a4,a5
	mv	a5,a4
	slli	a5,a5,1
	add	a5,a5,a4
	.loc 1 25 50
	addi	a5,a5,1
	.loc 1 25 9
	ld	a4,-40(s0)
	sub	a5,a4,a5
	seqz	a5,a5
	andi	a5,a5,0xff
	sext.w	a5,a5
	mv	a0,a5
	call	__VERIFIER_assert
	.loc 1 26 34
	ld	a5,-24(s0)
	mul	a4,a5,a5
	.loc 1 26 38
	ld	a5,-24(s0)
	mul	a5,a4,a5
	.loc 1 26 9
	ld	a4,-32(s0)
	sub	a5,a4,a5
	seqz	a5,a5
	andi	a5,a5,0xff
	sext.w	a5,a5
	mv	a0,a5
	call	__VERIFIER_assert
	.loc 1 27 21
	ld	a4,-40(s0)
	ld	a5,-48(s0)
	mul	a3,a4,a5
	.loc 1 27 28
	ld	a4,-32(s0)
	li	a5,0
	sub	a5,a5,a4
	slli	a5,a5,3
	sub	a5,a5,a4
	slli	a5,a5,1
	.loc 1 27 24
	add	a3,a3,a5
	.loc 1 27 35
	ld	a4,-40(s0)
	mv	a5,a4
	slli	a4,a4,2
	sub	a5,a5,a4
	slli	a5,a5,2
	.loc 1 27 31
	add	a4,a3,a5
	.loc 1 27 41
	ld	a5,-48(s0)
	slli	a5,a5,1
	.loc 1 27 38
	add	a5,a4,a5
	.loc 1 27 2
	addi	a5,a5,-6
	seqz	a5,a5
	andi	a5,a5,0xff
	sext.w	a5,a5
	mv	a0,a5
	call	__VERIFIER_assert
	.loc 1 28 22
	ld	a5,-48(s0)
	mul	a3,a5,a5
	.loc 1 28 30
	ld	a4,-40(s0)
	mv	a5,a4
	slli	a4,a4,2
	sub	a5,a5,a4
	slli	a5,a5,2
	.loc 1 28 26
	add	a3,a3,a5
	.loc 1 28 36
	ld	a4,-48(s0)
	mv	a5,a4
	slli	a4,a4,2
	sub	a5,a5,a4
	slli	a5,a5,1
	.loc 1 28 33
	add	a5,a3,a5
	.loc 1 28 2
	addi	a5,a5,12
	seqz	a5,a5
	andi	a5,a5,0xff
	sext.w	a5,a5
	mv	a0,a5
	call	__VERIFIER_assert
	.loc 1 29 13
	lh	a5,-50(s0)
	.loc 1 29 12
	ld	a4,-24(s0)
	bgt	a4,a5,.L12
	.loc 1 32 11
	ld	a5,-24(s0)
	addi	a5,a5,1
	sd	a5,-24(s0)
	.loc 1 33 11
	ld	a4,-32(s0)
	ld	a5,-40(s0)
	add	a5,a4,a5
	sd	a5,-32(s0)
	.loc 1 34 11
	ld	a4,-40(s0)
	ld	a5,-48(s0)
	add	a5,a4,a5
	sd	a5,-40(s0)
	.loc 1 35 11
	ld	a5,-48(s0)
	addi	a5,a5,6
	sd	a5,-48(s0)
.L7:
	.loc 1 23 19
	lui	a5,%hi(counter)
	lw	a5,%lo(counter)(a5)
	addiw	a4,a5,1
	sext.w	a3,a4
	lui	a4,%hi(counter)
	sw	a3,%lo(counter)(a4)
	.loc 1 23 21
	mv	a4,a5
	li	a5,49
	ble	a4,a5,.L10
	j	.L9
.L12:
	.loc 1 30 13
	nop
.L9:
	.loc 1 38 32
	ld	a5,-24(s0)
	addi	a4,a5,1
	mv	a5,a4
	slli	a5,a5,1
	add	a5,a5,a4
	slli	a5,a5,1
	mv	a4,a5
	.loc 1 38 5
	ld	a5,-48(s0)
	sub	a5,a5,a4
	seqz	a5,a5
	andi	a5,a5,0xff
	sext.w	a5,a5
	mv	a0,a5
	call	__VERIFIER_assert
	.loc 1 39 24
	lh	a5,-50(s0)
	sext.w	a5,a5
	mv	a4,a5
	mv	a5,a4
	slliw	a5,a5,1
	addw	a5,a5,a4
	slliw	a5,a5,1
	sext.w	a5,a5
	mv	a4,a5
	.loc 1 39 26
	ld	a5,-32(s0)
	mul	a4,a4,a5
	.loc 1 39 32
	ld	a3,-32(s0)
	ld	a5,-48(s0)
	mul	a5,a3,a5
	.loc 1 39 29
	sub	a3,a4,a5
	.loc 1 39 39
	ld	a4,-32(s0)
	mv	a5,a4
	slli	a5,a5,1
	add	a5,a5,a4
	slli	a5,a5,2
	.loc 1 39 35
	add	a5,a3,a5
	.loc 1 39 5
	seqz	a5,a5
	andi	a5,a5,0xff
	sext.w	a5,a5
	mv	a0,a5
	call	__VERIFIER_assert
	.loc 1 40 24
	lh	a4,-50(s0)
	ld	a5,-48(s0)
	mul	a4,a4,a5
	.loc 1 40 30
	lh	a5,-50(s0)
	sext.w	a5,a5
	mv	a3,a5
	mv	a5,a3
	slliw	a5,a5,1
	addw	a5,a5,a3
	slliw	a5,a5,1
	sext.w	a5,a5
	.loc 1 40 27
	sub	a4,a4,a5
	.loc 1 40 36
	ld	a5,-40(s0)
	slli	a5,a5,1
	.loc 1 40 33
	sub	a4,a4,a5
	.loc 1 40 42
	ld	a5,-48(s0)
	slli	a5,a5,1
	.loc 1 40 39
	add	a5,a4,a5
	.loc 1 40 5
	addi	a5,a5,-10
	seqz	a5,a5
	andi	a5,a5,0xff
	sext.w	a5,a5
	mv	a0,a5
	call	__VERIFIER_assert
	.loc 1 41 26
	ld	a5,-40(s0)
	mul	a5,a5,a5
	slli	a4,a5,1
	.loc 1 41 34
	ld	a3,-32(s0)
	ld	a5,-48(s0)
	mul	a5,a3,a5
	mv	a3,a5
	slli	a5,a5,2
	sub	a5,a3,a5
	.loc 1 41 29
	add	a3,a4,a5
	.loc 1 41 41
	ld	a4,-32(s0)
	li	a5,0
	sub	a5,a5,a4
	slli	a5,a5,3
	sub	a5,a5,a4
	slli	a5,a5,1
	.loc 1 41 37
	add	a3,a3,a5
	.loc 1 41 48
	ld	a4,-40(s0)
	li	a5,0
	sub	a5,a5,a4
	slli	a5,a5,2
	sub	a5,a5,a4
	slli	a5,a5,1
	.loc 1 41 44
	add	a3,a3,a5
	.loc 1 41 54
	ld	a4,-48(s0)
	mv	a5,a4
	slli	a5,a5,1
	add	a5,a5,a4
	.loc 1 41 51
	add	a5,a3,a5
	.loc 1 41 5
	addi	a5,a5,-10
	seqz	a5,a5
	andi	a5,a5,0xff
	sext.w	a5,a5
	mv	a0,a5
	call	__VERIFIER_assert
	.loc 1 42 24
	ld	a5,-48(s0)
	mul	a3,a5,a5
	.loc 1 42 31
	ld	a4,-40(s0)
	mv	a5,a4
	slli	a4,a4,2
	sub	a5,a5,a4
	slli	a5,a5,2
	.loc 1 42 27
	add	a3,a3,a5
	.loc 1 42 37
	ld	a4,-48(s0)
	mv	a5,a4
	slli	a4,a4,2
	sub	a5,a5,a4
	slli	a5,a5,1
	.loc 1 42 34
	add	a5,a3,a5
	.loc 1 42 5
	addi	a5,a5,12
	seqz	a5,a5
	andi	a5,a5,0xff
	sext.w	a5,a5
	mv	a0,a5
	call	__VERIFIER_assert
	.loc 1 43 24
	ld	a4,-40(s0)
	ld	a5,-48(s0)
	mul	a3,a4,a5
	.loc 1 43 31
	ld	a4,-32(s0)
	li	a5,0
	sub	a5,a5,a4
	slli	a5,a5,3
	sub	a5,a5,a4
	slli	a5,a5,1
	.loc 1 43 27
	add	a3,a3,a5
	.loc 1 43 38
	ld	a4,-40(s0)
	mv	a5,a4
	slli	a4,a4,2
	sub	a5,a5,a4
	slli	a5,a5,2
	.loc 1 43 34
	add	a4,a3,a5
	.loc 1 43 44
	ld	a5,-48(s0)
	slli	a5,a5,1
	.loc 1 43 41
	add	a5,a4,a5
	.loc 1 43 5
	addi	a5,a5,-6
	seqz	a5,a5
	andi	a5,a5,0xff
	sext.w	a5,a5
	mv	a0,a5
	call	__VERIFIER_assert
	.loc 1 45 12
	li	a5,0
	.loc 1 46 1
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
	.4byte	0x11d
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
	.byte	0xc
	.4byte	0x42
	.uleb128 0x9
	.byte	0x3
	.8byte	counter
	.uleb128 0x6
	.4byte	.LASF6
	.byte	0x1
	.byte	0xd
	.byte	0x5
	.4byte	0x42
	.8byte	.LFB2
	.8byte	.LFE2-.LFB2
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xbc
	.uleb128 0x1
	.string	"a"
	.byte	0xe
	.byte	0xb
	.4byte	0xbc
	.uleb128 0x2
	.byte	0x91
	.sleb128 -50
	.uleb128 0x1
	.string	"n"
	.byte	0xf
	.byte	0xf
	.4byte	0xc2
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"x"
	.byte	0xf
	.byte	0x12
	.4byte	0xc2
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1
	.string	"y"
	.byte	0xf
	.byte	0x15
	.4byte	0xc2
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x1
	.string	"z"
	.byte	0xf
	.byte	0x18
	.4byte	0xc2
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
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
	.byte	0xa
	.byte	0x6
	.8byte	.LFB1
	.8byte	.LFE1-.LFB1
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x106
	.uleb128 0x8
	.4byte	.LASF9
	.byte	0x1
	.byte	0xa
	.byte	0x1c
	.4byte	0x42
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x9
	.4byte	.LASF10
	.byte	0x1
	.byte	0xa
	.byte	0x33
	.8byte	.L4
	.byte	0
	.uleb128 0xa
	.4byte	.LASF11
	.byte	0x1
	.byte	0x7
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
.LASF0:
	.string	"./cohencu-ll_unwindbound50.c"
.LASF1:
	.string	"/home/grace/gitlib/rvemu/data/F_cov"
	.ident	"GCC: () 13.2.0"
