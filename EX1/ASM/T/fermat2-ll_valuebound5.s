	.file	"fermat2-ll_valuebound5.c"
	.option nopic
	.attribute arch, "rv64i2p1_m2p0_a2p1_f2p2_d2p2_zicsr2p0_zifencei2p0"
	.attribute unaligned_access, 0
	.attribute stack_align, 16
	.text
.Ltext0:
	.cfi_sections	.debug_frame
	.file 0 "/home/grace/gitlib/rvemu/data/T_cov" "./fermat2-ll_valuebound5.c"
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
	.file 1 "./fermat2-ll_valuebound5.c"
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
	.loc 1 7 1
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
	.loc 1 11 8
	lw	a5,-20(s0)
	sext.w	a5,a5
	bne	a5,zero,.L6
	.loc 1 12 5
	nop
.L4:
	.loc 1 13 10
	call	reach_error
	.loc 1 15 5
	nop
.L6:
	nop
	.loc 1 16 1
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
	.loc 1 17 12
	.cfi_startproc
	addi	sp,sp,-48
	.cfi_def_cfa_offset 48
	sd	ra,40(sp)
	sd	s0,32(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,48
	.cfi_def_cfa 8, 0
	.loc 1 27 7
	lw	a5,-44(s0)
	sext.w	a5,a5
	blt	a5,zero,.L8
	.loc 1 27 13 discriminator 1
	lw	a5,-44(s0)
	sext.w	a4,a5
	li	a5,5
	bgt	a4,a5,.L8
	.loc 1 27 26 discriminator 2
	lw	a5,-44(s0)
	mv	a4,a5
	sraiw	a5,a4,31
	srliw	a5,a5,31
	addw	a4,a4,a5
	andi	a4,a4,1
	subw	a5,a4,a5
	sext.w	a5,a5
	.loc 1 27 21 discriminator 2
	mv	a4,a5
	li	a5,1
	bne	a4,a5,.L8
	.loc 1 28 5
	lw	a5,-48(s0)
	sext.w	a5,a5
	blt	a5,zero,.L8
	.loc 1 28 13 discriminator 1
	lw	a5,-48(s0)
	sext.w	a4,a5
	li	a5,5
	bgt	a4,a5,.L8
	.loc 1 28 25 discriminator 2
	lw	a5,-48(s0)
	.loc 1 28 39 discriminator 2
	addi	a4,a5,-1
	.loc 1 28 47 discriminator 2
	lw	a5,-48(s0)
	.loc 1 28 61 discriminator 2
	addi	a5,a5,-1
	.loc 1 28 44 discriminator 2
	mul	a4,a4,a5
	.loc 1 28 66 discriminator 2
	lw	a5,-44(s0)
	.loc 1 28 21 discriminator 2
	bge	a4,a5,.L8
	.loc 1 30 24
	lw	a5,-48(s0)
	slli	a5,a5,1
	.loc 1 30 7
	addi	a5,a5,1
	sd	a5,-24(s0)
	.loc 1 31 7
	li	a5,1
	sd	a5,-32(s0)
	.loc 1 32 10
	lw	a4,-48(s0)
	.loc 1 32 24
	lw	a5,-48(s0)
	mul	a4,a4,a5
	.loc 1 32 29
	lw	a5,-44(s0)
	.loc 1 32 7
	sub	a5,a4,a5
	sd	a5,-40(s0)
.L13:
	.loc 1 35 31
	lw	a4,-44(s0)
	ld	a5,-40(s0)
	add	a5,a4,a5
	.loc 1 35 28
	slli	a4,a5,2
	.loc 1 35 39
	ld	a5,-24(s0)
	mul	a3,a5,a5
	.loc 1 35 45
	ld	a5,-32(s0)
	mul	a5,a5,a5
	.loc 1 35 42
	sub	a3,a3,a5
	.loc 1 35 51
	ld	a5,-24(s0)
	slli	a5,a5,1
	.loc 1 35 48
	sub	a3,a3,a5
	.loc 1 35 57
	ld	a5,-32(s0)
	slli	a5,a5,1
	.loc 1 35 54
	add	a5,a3,a5
	.loc 1 35 9
	sub	a5,a4,a5
	seqz	a5,a5
	andi	a5,a5,0xff
	sext.w	a5,a5
	mv	a0,a5
	call	__VERIFIER_assert
	.loc 1 36 12
	ld	a5,-40(s0)
	beq	a5,zero,.L16
	.loc 1 38 12
	ld	a5,-40(s0)
	ble	a5,zero,.L11
	.loc 1 39 15
	ld	a4,-40(s0)
	ld	a5,-32(s0)
	sub	a5,a4,a5
	sd	a5,-40(s0)
	.loc 1 40 15
	ld	a5,-32(s0)
	addi	a5,a5,2
	sd	a5,-32(s0)
	j	.L13
.L11:
	.loc 1 42 15
	ld	a4,-40(s0)
	ld	a5,-24(s0)
	add	a5,a4,a5
	sd	a5,-40(s0)
	.loc 1 43 15
	ld	a5,-24(s0)
	addi	a5,a5,2
	sd	a5,-24(s0)
	.loc 1 35 9
	j	.L13
.L16:
	.loc 1 36 24
	nop
	.loc 1 48 37
	lw	a5,-44(s0)
	slli	a4,a5,2
	.loc 1 48 45
	ld	a5,-24(s0)
	mul	a3,a5,a5
	.loc 1 48 51
	ld	a5,-32(s0)
	mul	a5,a5,a5
	.loc 1 48 48
	sub	a3,a3,a5
	.loc 1 48 58
	ld	a5,-24(s0)
	slli	a5,a5,1
	.loc 1 48 55
	sub	a3,a3,a5
	.loc 1 48 64
	ld	a5,-32(s0)
	slli	a5,a5,1
	.loc 1 48 61
	add	a5,a3,a5
	.loc 1 48 5
	sub	a5,a4,a5
	seqz	a5,a5
	andi	a5,a5,0xff
	sext.w	a5,a5
	mv	a0,a5
	call	__VERIFIER_assert
.L8:
	.loc 1 50 12
	li	a5,0
	.loc 1 51 1
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
	.4byte	0x106
	.2byte	0x5
	.byte	0x1
	.byte	0x8
	.4byte	.Ldebug_abbrev0
	.uleb128 0x2
	.4byte	.LASF5
	.byte	0x1d
	.4byte	.LASF0
	.4byte	.LASF1
	.8byte	.Ltext0
	.8byte	.Letext0-.Ltext0
	.4byte	.Ldebug_line0
	.uleb128 0x3
	.4byte	.LASF6
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
	.4byte	.LASF3
	.byte	0x1
	.byte	0x11
	.byte	0x5
	.4byte	0x44
	.8byte	.LFB2
	.8byte	.LFE2-.LFB2
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xaa
	.uleb128 0x1
	.string	"A"
	.byte	0x12
	.byte	0x9
	.4byte	0x44
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x1
	.string	"R"
	.byte	0x12
	.byte	0xc
	.4byte	0x44
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x1
	.string	"u"
	.byte	0x13
	.byte	0xf
	.4byte	0xaa
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"v"
	.byte	0x13
	.byte	0x12
	.4byte	0xaa
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1
	.string	"r"
	.byte	0x13
	.byte	0x15
	.4byte	0xaa
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.uleb128 0x6
	.byte	0x8
	.byte	0x5
	.4byte	.LASF2
	.uleb128 0x7
	.4byte	.LASF4
	.byte	0x1
	.byte	0xa
	.byte	0x6
	.8byte	.LFB1
	.8byte	.LFE1-.LFB1
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xef
	.uleb128 0x8
	.4byte	.LASF7
	.byte	0x1
	.byte	0xa
	.byte	0x1c
	.4byte	0x44
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x9
	.4byte	.LASF8
	.byte	0x1
	.byte	0xc
	.byte	0x5
	.8byte	.L4
	.byte	0
	.uleb128 0xa
	.4byte	.LASF9
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
.LASF5:
	.string	"GNU C17 13.2.0 -mtune=rocket -mabi=lp64d -misa-spec=20191213 -march=rv64imafd_zicsr_zifencei -g -O0 -fno-toplevel-reorder -fno-asynchronous-unwind-tables"
.LASF9:
	.string	"reach_error"
.LASF4:
	.string	"__VERIFIER_assert"
.LASF8:
	.string	"ERROR"
.LASF6:
	.string	"assert_ret1"
.LASF3:
	.string	"main"
.LASF7:
	.string	"cond"
.LASF2:
	.string	"long long int"
	.section	.debug_line_str,"MS",@progbits,1
.LASF0:
	.string	"./fermat2-ll_valuebound5.c"
.LASF1:
	.string	"/home/grace/gitlib/rvemu/data/T_cov"
	.ident	"GCC: () 13.2.0"
