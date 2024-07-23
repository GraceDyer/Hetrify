	.file	"test27-1.c"
	.option nopic
	.attribute arch, "rv64i2p1_m2p0_a2p1_f2p2_d2p2_zicsr2p0_zifencei2p0"
	.attribute unaligned_access, 0
	.attribute stack_align, 16
	.text
.Ltext0:
	.cfi_sections	.debug_frame
	.file 0 "/home/grace/gitlib/rvemu/data/T_cov" "./test27-1.c"
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
	.file 1 "./test27-1.c"
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
	.globl	check
	.type	check, @function
check:
.LFB1:
	.loc 1 20 1
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
	.loc 1 21 12
	ld	a5,-24(s0)
	ld	a4,0(a5)
	.loc 1 21 19
	lw	a5,-28(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 21 22
	ld	a5,0(a5)
	.loc 1 21 29
	addi	a5,a5,4
	lw	a4,0(a5)
	.loc 1 21 33
	lw	a5,-28(s0)
	sext.w	a5,a5
	sub	a5,a5,a4
	seqz	a5,a5
	andi	a5,a5,0xff
	sext.w	a5,a5
	.loc 1 22 1
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
	.loc 1 25 1
	.cfi_startproc
	addi	sp,sp,-176
	.cfi_def_cfa_offset 176
	sd	ra,168(sp)
	sd	s0,160(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,176
	.cfi_def_cfa 8, 0
.LBB2:
	.loc 1 32 12
	sw	zero,-24(s0)
	.loc 1 32 3
	j	.L5
.L6:
	.loc 1 36 18
	lw	a5,-24(s0)
	slli	a5,a5,3
	addi	a5,a5,-16
	add	a5,a5,s0
	sd	zero,-112(a5)
	.loc 1 32 28 discriminator 3
	lw	a5,-24(s0)
	addiw	a5,a5,1
	sw	a5,-24(s0)
.L5:
	.loc 1 32 21 discriminator 1
	lw	a5,-24(s0)
	sext.w	a4,a5
	li	a5,9
	ble	a4,a5,.L6
.LBE2:
	.loc 1 38 6
	lw	a5,-20(s0)
	sext.w	a5,a5
	ble	a5,zero,.L7
	.loc 1 38 13 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,8
	bgt	a4,a5,.L7
	.loc 1 39 10
	lw	a5,-20(s0)
	slli	a5,a5,2
	addi	a5,a5,-16
	add	a5,a5,s0
	lw	a4,-20(s0)
	sw	a4,-152(a5)
	.loc 1 40 24
	lw	a5,-20(s0)
	addiw	a5,a5,-1
	sext.w	a5,a5
	.loc 1 40 19
	addi	a4,s0,-168
	slli	a5,a5,2
	add	a5,a4,a5
	.loc 1 40 17
	sd	a5,-48(s0)
	.loc 1 41 15
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	.loc 1 41 20
	slli	a5,a5,3
	addi	a5,a5,-16
	add	a5,a5,s0
	addi	a4,s0,-48
	sd	a4,-112(a5)
	.loc 1 42 16
	addi	a5,s0,-128
	addi	a5,a5,8
	sd	a5,-40(s0)
	.loc 1 43 15
	ld	a4,-40(s0)
	.loc 1 43 21
	lw	a5,-20(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 43 24
	ld	a5,0(a5)
	.loc 1 43 8
	addi	a5,a5,4
	sd	a5,-32(s0)
	.loc 1 44 10
	lw	a5,-20(s0)
	slli	a5,a5,2
	addi	a5,a5,-16
	add	a5,a5,s0
	lw	a5,-152(a5)
	.loc 1 44 8
	ble	a5,zero,.L7
	.loc 1 45 22
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	.loc 1 45 19
	slli	a5,a5,3
	addi	a5,a5,-16
	add	a5,a5,s0
	ld	a5,-112(a5)
	.loc 1 45 26
	ld	a5,0(a5)
	.loc 1 45 33
	addi	a5,a5,4
	lw	a5,0(a5)
	.loc 1 45 9
	addiw	a5,a5,-10
	sw	a5,-20(s0)
	.loc 1 46 13
	j	.L8
.L9:
	.loc 1 47 9
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L8:
	.loc 1 46 18
	ld	a5,-32(s0)
	lw	a4,0(a5)
	.loc 1 46 16
	lw	a5,-20(s0)
	sext.w	a5,a5
	blt	a5,a4,.L9
	.loc 1 49 12
	lw	a4,-20(s0)
	addi	a5,s0,-40
	mv	a1,a4
	mv	a0,a5
	call	check
	mv	a5,a0
	.loc 1 49 10 discriminator 1
	beq	a5,zero,.L14
.L7:
	.loc 1 55 10
	li	a5,0
	j	.L12
.L14:
	.loc 1 50 9
	nop
.L10:
	.loc 1 57 11
	call	reach_error
	.loc 1 58 10
	li	a5,1
.L12:
	.loc 1 59 1
	mv	a0,a5
	ld	ra,168(sp)
	.cfi_restore 1
	ld	s0,160(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 176
	addi	sp,sp,176
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE2:
	.size	main, .-main
.Letext0:
	.section	.debug_info,"",@progbits
.Ldebug_info0:
	.4byte	0x1a3
	.2byte	0x5
	.byte	0x1
	.byte	0x8
	.4byte	.Ldebug_abbrev0
	.uleb128 0x9
	.4byte	.LASF7
	.byte	0x1d
	.4byte	.LASF0
	.4byte	.LASF1
	.8byte	.Ltext0
	.8byte	.Letext0-.Ltext0
	.4byte	.Ldebug_line0
	.uleb128 0xa
	.4byte	.LASF8
	.byte	0x1
	.byte	0x2
	.byte	0x5
	.4byte	0x44
	.uleb128 0x9
	.byte	0x3
	.8byte	assert_ret1
	.uleb128 0xb
	.byte	0x4
	.byte	0x5
	.string	"int"
	.uleb128 0x4
	.4byte	.LASF2
	.byte	0xb
	.4byte	0x61
	.uleb128 0x5
	.4byte	.LASF4
	.byte	0xc
	.byte	0x8
	.4byte	0x61
	.byte	0
	.uleb128 0x1
	.4byte	0x44
	.uleb128 0x4
	.4byte	.LASF3
	.byte	0xf
	.4byte	0x7c
	.uleb128 0x5
	.4byte	.LASF4
	.byte	0x10
	.byte	0x12
	.4byte	0x7c
	.byte	0
	.uleb128 0x1
	.4byte	0x81
	.uleb128 0x1
	.4byte	0x4b
	.uleb128 0xc
	.4byte	.LASF9
	.byte	0x1
	.byte	0x18
	.byte	0x5
	.4byte	0x44
	.8byte	.LFB2
	.8byte	.LFE2-.LFB2
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x128
	.uleb128 0x3
	.4byte	.LASF3
	.byte	0x1a
	.byte	0xf
	.4byte	0x66
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x3
	.4byte	.LASF2
	.byte	0x1b
	.byte	0x10
	.4byte	0x4b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x3
	.4byte	.LASF5
	.byte	0x1c
	.byte	0x11
	.4byte	0x128
	.uleb128 0x3
	.byte	0x91
	.sleb128 -128
	.uleb128 0x2
	.string	"a"
	.byte	0x1d
	.byte	0x7
	.4byte	0x13e
	.uleb128 0x3
	.byte	0x91
	.sleb128 -168
	.uleb128 0x2
	.string	"i"
	.byte	0x1e
	.byte	0x7
	.4byte	0x44
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.string	"pa"
	.byte	0x1e
	.byte	0xb
	.4byte	0x61
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0xd
	.4byte	.LASF10
	.byte	0x1
	.byte	0x39
	.byte	0x3
	.8byte	.L10
	.uleb128 0xe
	.8byte	.LBB2
	.8byte	.LBE2-.LBB2
	.uleb128 0x2
	.string	"j"
	.byte	0x20
	.byte	0xc
	.4byte	0x44
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.byte	0
	.uleb128 0x6
	.4byte	0x81
	.4byte	0x137
	.uleb128 0x7
	.4byte	0x137
	.byte	0
	.uleb128 0xf
	.byte	0x8
	.byte	0x7
	.4byte	.LASF6
	.uleb128 0x6
	.4byte	0x44
	.4byte	0x14d
	.uleb128 0x7
	.4byte	0x137
	.byte	0
	.uleb128 0x10
	.4byte	.LASF11
	.byte	0x1
	.byte	0x13
	.byte	0x5
	.4byte	0x44
	.8byte	.LFB1
	.8byte	.LFE1-.LFB1
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x187
	.uleb128 0x8
	.string	"pc"
	.byte	0x18
	.4byte	0x187
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x8
	.string	"i"
	.byte	0x20
	.4byte	0x44
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.byte	0
	.uleb128 0x1
	.4byte	0x66
	.uleb128 0x11
	.4byte	.LASF12
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
	.uleb128 0xf
	.byte	0
	.uleb128 0xb
	.uleb128 0x21
	.sleb128 8
	.uleb128 0x49
	.uleb128 0x13
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
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x3
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
	.uleb128 0x4
	.uleb128 0x13
	.byte	0x1
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0xb
	.uleb128 0x21
	.sleb128 8
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 1
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0x21
	.sleb128 8
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x5
	.uleb128 0xd
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
	.uleb128 0x38
	.uleb128 0x21
	.sleb128 0
	.byte	0
	.byte	0
	.uleb128 0x6
	.uleb128 0x1
	.byte	0x1
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x7
	.uleb128 0x21
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2f
	.uleb128 0x21
	.sleb128 9
	.byte	0
	.byte	0
	.uleb128 0x8
	.uleb128 0x5
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 1
	.uleb128 0x3b
	.uleb128 0x21
	.sleb128 19
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x9
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
	.uleb128 0xa
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
	.uleb128 0xb
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
	.uleb128 0xc
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
	.uleb128 0xd
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
	.uleb128 0xe
	.uleb128 0xb
	.byte	0x1
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.byte	0
	.byte	0
	.uleb128 0xf
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
	.uleb128 0x10
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
	.uleb128 0x11
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
.LASF10:
	.string	"ERROR"
.LASF7:
	.string	"GNU C17 13.2.0 -mtune=rocket -mabi=lp64d -misa-spec=20191213 -march=rv64imafd_zicsr_zifencei -g -O0 -fno-toplevel-reorder -fno-asynchronous-unwind-tables"
.LASF6:
	.string	"long unsigned int"
.LASF11:
	.string	"check"
.LASF12:
	.string	"reach_error"
.LASF2:
	.string	"dummy"
.LASF8:
	.string	"assert_ret1"
.LASF3:
	.string	"cont"
.LASF9:
	.string	"main"
.LASF5:
	.string	"dummies"
.LASF4:
	.string	"array"
	.section	.debug_line_str,"MS",@progbits,1
.LASF1:
	.string	"/home/grace/gitlib/rvemu/data/T_cov"
.LASF0:
	.string	"./test27-1.c"
	.ident	"GCC: () 13.2.0"
