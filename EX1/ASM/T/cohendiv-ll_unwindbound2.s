	.file	"cohendiv-ll_unwindbound2.c"
	.option nopic
	.attribute arch, "rv64i2p1_m2p0_a2p1_f2p2_d2p2_zicsr2p0_zifencei2p0"
	.attribute unaligned_access, 0
	.attribute stack_align, 16
	.text
.Ltext0:
	.cfi_sections	.debug_frame
	.file 0 "/home/grace/gitlib/rvemu/data/T_cov" "./cohendiv-ll_unwindbound2.c"
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
	.file 1 "./cohendiv-ll_unwindbound2.c"
	.loc 1 4 20
	.cfi_startproc
	addi	sp,sp,-16
	.cfi_def_cfa_offset 16
	sd	s0,8(sp)
	.cfi_offset 8, -8
	addi	s0,sp,16
	.cfi_def_cfa 8, 0
	.loc 1 5 23 discriminator 1
	lui	a5,%hi(assert_ret1)
	sw	zero,%lo(assert_ret1)(a5)
	.loc 1 6 1
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
	.loc 1 9 34
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
	.loc 1 10 8
	lw	a5,-20(s0)
	sext.w	a5,a5
	bne	a5,zero,.L6
	.loc 1 11 5
	nop
.L4:
	.loc 1 12 10
	call	reach_error
	.loc 1 14 5
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
	.loc 1 17 12
	.cfi_startproc
	addi	sp,sp,-64
	.cfi_def_cfa_offset 64
	sd	ra,56(sp)
	sd	s0,48(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,64
	.cfi_def_cfa 8, 0
	.loc 1 24 7
	lw	a5,-52(s0)
	sext.w	a5,a5
	ble	a5,zero,.L8
	.loc 1 26 7
	sd	zero,-24(s0)
	.loc 1 27 7
	lw	a5,-56(s0)
	sd	a5,-32(s0)
	.loc 1 28 7
	sd	zero,-40(s0)
	.loc 1 29 7
	sd	zero,-48(s0)
	.loc 1 31 11
	j	.L9
.L16:
	.loc 1 32 26
	lw	a4,-52(s0)
	ld	a5,-40(s0)
	mul	a5,a4,a5
	.loc 1 32 2
	ld	a4,-48(s0)
	sub	a5,a4,a5
	seqz	a5,a5
	andi	a5,a5,0xff
	sext.w	a5,a5
	mv	a0,a5
	call	__VERIFIER_assert
	.loc 1 33 2
	lw	a4,-56(s0)
	.loc 1 33 26
	lw	a3,-52(s0)
	ld	a5,-24(s0)
	mul	a3,a3,a5
	.loc 1 33 29
	ld	a5,-32(s0)
	add	a5,a3,a5
	.loc 1 33 2
	sub	a5,a4,a5
	seqz	a5,a5
	andi	a5,a5,0xff
	sext.w	a5,a5
	mv	a0,a5
	call	__VERIFIER_assert
	.loc 1 35 6
	lw	a5,-52(s0)
	.loc 1 35 5
	ld	a4,-32(s0)
	blt	a4,a5,.L18
	.loc 1 37 4
	li	a5,1
	sd	a5,-40(s0)
	.loc 1 38 4
	lw	a5,-52(s0)
	sd	a5,-48(s0)
	.loc 1 40 8
	j	.L12
.L15:
	.loc 1 41 30
	lw	a4,-52(s0)
	ld	a5,-40(s0)
	mul	a5,a4,a5
	.loc 1 41 6
	ld	a4,-48(s0)
	sub	a5,a4,a5
	seqz	a5,a5
	andi	a5,a5,0xff
	sext.w	a5,a5
	mv	a0,a5
	call	__VERIFIER_assert
	.loc 1 42 6
	lw	a4,-56(s0)
	.loc 1 42 30
	lw	a3,-52(s0)
	ld	a5,-24(s0)
	mul	a3,a3,a5
	.loc 1 42 33
	ld	a5,-32(s0)
	add	a5,a3,a5
	.loc 1 42 6
	sub	a5,a4,a5
	seqz	a5,a5
	andi	a5,a5,0xff
	sext.w	a5,a5
	mv	a0,a5
	call	__VERIFIER_assert
	.loc 1 43 6
	ld	a5,-32(s0)
	not	a5,a5
	srli	a5,a5,63
	andi	a5,a5,0xff
	sext.w	a5,a5
	mv	a0,a5
	call	__VERIFIER_assert
	.loc 1 45 19
	ld	a5,-48(s0)
	slli	a5,a5,1
	.loc 1 45 9
	ld	a4,-32(s0)
	blt	a4,a5,.L19
	.loc 1 48 31
	lw	a5,-52(s0)
	slliw	a5,a5,1
	sext.w	a5,a5
	mv	a4,a5
	.loc 1 48 35
	ld	a5,-40(s0)
	mul	a5,a4,a5
	.loc 1 48 6
	ld	a4,-32(s0)
	slt	a5,a4,a5
	seqz	a5,a5
	andi	a5,a5,0xff
	sext.w	a5,a5
	mv	a0,a5
	call	__VERIFIER_assert
	.loc 1 50 8
	ld	a5,-40(s0)
	slli	a5,a5,1
	sd	a5,-40(s0)
	.loc 1 51 8
	ld	a5,-48(s0)
	slli	a5,a5,1
	sd	a5,-48(s0)
.L12:
	.loc 1 40 16
	lui	a5,%hi(counter)
	lw	a5,%lo(counter)(a5)
	addiw	a4,a5,1
	sext.w	a3,a4
	lui	a4,%hi(counter)
	sw	a3,%lo(counter)(a4)
	.loc 1 40 18
	mv	a4,a5
	li	a5,1
	ble	a4,a5,.L15
	j	.L14
.L19:
	.loc 1 46 3
	nop
.L14:
	.loc 1 53 4
	ld	a4,-32(s0)
	ld	a5,-48(s0)
	sub	a5,a4,a5
	sd	a5,-32(s0)
	.loc 1 54 4
	ld	a4,-24(s0)
	ld	a5,-40(s0)
	add	a5,a4,a5
	sd	a5,-24(s0)
.L9:
	.loc 1 31 19
	lui	a5,%hi(counter)
	lw	a5,%lo(counter)(a5)
	addiw	a4,a5,1
	sext.w	a3,a4
	lui	a4,%hi(counter)
	sw	a3,%lo(counter)(a4)
	.loc 1 31 21
	mv	a4,a5
	li	a5,1
	ble	a4,a5,.L16
	j	.L11
.L18:
	.loc 1 36 6
	nop
.L11:
	.loc 1 57 5
	lw	a4,-56(s0)
	.loc 1 57 29
	lw	a3,-52(s0)
	ld	a5,-24(s0)
	mul	a3,a3,a5
	.loc 1 57 32
	ld	a5,-32(s0)
	add	a5,a3,a5
	.loc 1 57 5
	sub	a5,a4,a5
	seqz	a5,a5
	andi	a5,a5,0xff
	sext.w	a5,a5
	mv	a0,a5
	call	__VERIFIER_assert
.L8:
	.loc 1 59 12
	li	a5,0
	.loc 1 60 1
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
	.4byte	0x124
	.2byte	0x5
	.byte	0x1
	.byte	0x8
	.4byte	.Ldebug_abbrev0
	.uleb128 0x3
	.4byte	.LASF7
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
	.uleb128 0x4
	.byte	0x4
	.byte	0x5
	.string	"int"
	.uleb128 0x2
	.4byte	.LASF3
	.byte	0x10
	.4byte	0x42
	.uleb128 0x9
	.byte	0x3
	.8byte	counter
	.uleb128 0x5
	.4byte	.LASF5
	.byte	0x1
	.byte	0x11
	.byte	0x5
	.4byte	0x42
	.8byte	.LFB2
	.8byte	.LFE2-.LFB2
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xc8
	.uleb128 0x1
	.string	"x"
	.byte	0x12
	.byte	0x9
	.4byte	0x42
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x1
	.string	"y"
	.byte	0x12
	.byte	0xc
	.4byte	0x42
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x1
	.string	"q"
	.byte	0x13
	.byte	0xf
	.4byte	0xc8
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"r"
	.byte	0x13
	.byte	0x12
	.4byte	0xc8
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1
	.string	"a"
	.byte	0x13
	.byte	0x15
	.4byte	0xc8
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x1
	.string	"b"
	.byte	0x13
	.byte	0x18
	.4byte	0xc8
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.byte	0
	.uleb128 0x6
	.byte	0x8
	.byte	0x5
	.4byte	.LASF4
	.uleb128 0x7
	.4byte	.LASF6
	.byte	0x1
	.byte	0x9
	.byte	0x6
	.8byte	.LFB1
	.8byte	.LFE1-.LFB1
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x10d
	.uleb128 0x8
	.4byte	.LASF8
	.byte	0x1
	.byte	0x9
	.byte	0x1c
	.4byte	0x42
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x9
	.4byte	.LASF9
	.byte	0x1
	.byte	0xb
	.byte	0x5
	.8byte	.L4
	.byte	0
	.uleb128 0xa
	.4byte	.LASF10
	.byte	0x1
	.byte	0x4
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
.LASF7:
	.string	"GNU C17 13.2.0 -mtune=rocket -mabi=lp64d -misa-spec=20191213 -march=rv64imafd_zicsr_zifencei -g -O0 -fno-toplevel-reorder -fno-asynchronous-unwind-tables"
.LASF8:
	.string	"cond"
.LASF3:
	.string	"counter"
.LASF10:
	.string	"reach_error"
.LASF6:
	.string	"__VERIFIER_assert"
.LASF9:
	.string	"ERROR"
.LASF2:
	.string	"assert_ret1"
.LASF5:
	.string	"main"
.LASF4:
	.string	"long long int"
	.section	.debug_line_str,"MS",@progbits,1
.LASF0:
	.string	"./cohendiv-ll_unwindbound2.c"
.LASF1:
	.string	"/home/grace/gitlib/rvemu/data/T_cov"
	.ident	"GCC: () 13.2.0"
