	.file	"rangesum20.c"
	.option nopic
	.attribute arch, "rv64i2p1_m2p0_a2p1_f2p2_d2p2_zicsr2p0_zifencei2p0"
	.attribute unaligned_access, 0
	.attribute stack_align, 16
	.text
.Ltext0:
	.cfi_sections	.debug_frame
	.file 0 "/home/grace/gitlib/rvemu/data/F_cov" "./rangesum20.c"
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
	.file 1 "./rangesum20.c"
	.loc 1 9 20
	.cfi_startproc
	addi	sp,sp,-16
	.cfi_def_cfa_offset 16
	sd	s0,8(sp)
	.cfi_offset 8, -8
	addi	s0,sp,16
	.cfi_def_cfa 8, 0
	.loc 1 10 23 discriminator 1
	lui	a5,%hi(assert_ret1)
	sw	zero,%lo(assert_ret1)(a5)
	.loc 1 11 3
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
	.globl	init_nondet
	.type	init_nondet, @function
init_nondet:
.LFB1:
	.loc 1 14 28
	.cfi_startproc
	addi	sp,sp,-48
	.cfi_def_cfa_offset 48
	sd	s0,40(sp)
	.cfi_offset 8, -8
	addi	s0,sp,48
	.cfi_def_cfa 8, 0
	sd	a0,-40(s0)
	.loc 1 16 10
	sw	zero,-20(s0)
	.loc 1 16 3
	j	.L3
.L4:
	.loc 1 16 23 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L3:
	.loc 1 16 17 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,19
	ble	a4,a5,.L4
	.loc 1 19 1
	nop
	nop
	ld	s0,40(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 48
	addi	sp,sp,48
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE1:
	.size	init_nondet, .-init_nondet
	.align	2
	.globl	rangesum
	.type	rangesum, @function
rangesum:
.LFB2:
	.loc 1 22 1
	.cfi_startproc
	addi	sp,sp,-64
	.cfi_def_cfa_offset 64
	sd	s0,56(sp)
	.cfi_offset 8, -8
	addi	s0,sp,64
	.cfi_def_cfa 8, 0
	sd	a0,-56(s0)
	.loc 1 25 7
	sd	zero,-32(s0)
	.loc 1 26 7
	sw	zero,-36(s0)
	.loc 1 27 10
	sw	zero,-20(s0)
	.loc 1 27 3
	j	.L6
.L8:
	.loc 1 28 7
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,10
	ble	a4,a5,.L7
	.loc 1 29 21
	lw	a5,-20(s0)
	slli	a5,a5,2
	ld	a4,-56(s0)
	add	a5,a4,a5
	lw	a5,0(a5)
	mv	a4,a5
	.loc 1 29 12
	ld	a5,-32(s0)
	add	a5,a5,a4
	sd	a5,-32(s0)
	.loc 1 30 12
	lw	a5,-36(s0)
	addiw	a5,a5,1
	sw	a5,-36(s0)
.L7:
	.loc 1 27 23 discriminator 2
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L6:
	.loc 1 27 17 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,19
	ble	a4,a5,.L8
	.loc 1 33 6
	lw	a5,-36(s0)
	sext.w	a5,a5
	beq	a5,zero,.L9
	.loc 1 34 16
	lw	a5,-36(s0)
	ld	a4,-32(s0)
	div	a5,a4,a5
	sext.w	a5,a5
	j	.L10
.L9:
	.loc 1 36 12
	li	a5,0
.L10:
	.loc 1 37 1
	mv	a0,a5
	ld	s0,56(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 64
	addi	sp,sp,64
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE2:
	.size	rangesum, .-rangesum
	.align	2
	.globl	main
	.type	main, @function
main:
.LFB3:
	.loc 1 40 1
	.cfi_startproc
	addi	sp,sp,-128
	.cfi_def_cfa_offset 128
	sd	ra,120(sp)
	sd	s0,112(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,128
	.cfi_def_cfa 8, 0
	.loc 1 42 3
	addi	a5,s0,-120
	mv	a0,a5
	call	init_nondet
	.loc 1 48 9
	addi	a5,s0,-120
	mv	a0,a5
	call	rangesum
	mv	a5,a0
	sw	a5,-24(s0)
	.loc 1 50 7
	lw	a5,-120(s0)
	sw	a5,-28(s0)
	.loc 1 50 21
	lw	a5,-116(s0)
	.loc 1 50 18
	sw	a5,-120(s0)
	.loc 1 50 31
	lw	a5,-28(s0)
	sw	a5,-116(s0)
	.loc 1 51 10
	addi	a5,s0,-120
	mv	a0,a5
	call	rangesum
	mv	a5,a0
	sw	a5,-32(s0)
	.loc 1 52 7
	lw	a5,-120(s0)
	sw	a5,-28(s0)
.LBB2:
	.loc 1 53 11
	sw	zero,-20(s0)
	.loc 1 53 3
	j	.L12
.L13:
	.loc 1 54 16
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	.loc 1 54 14
	slli	a5,a5,2
	addi	a5,a5,-16
	add	a5,a5,s0
	lw	a4,-104(a5)
	.loc 1 54 11
	lw	a5,-20(s0)
	slli	a5,a5,2
	addi	a5,a5,-16
	add	a5,a5,s0
	sw	a4,-104(a5)
	.loc 1 53 26 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L12:
	.loc 1 53 19 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,18
	ble	a4,a5,.L13
.LBE2:
	.loc 1 56 10
	lw	a5,-28(s0)
	sw	a5,-44(s0)
	.loc 1 57 10
	addi	a5,s0,-120
	mv	a0,a5
	call	rangesum
	mv	a5,a0
	sw	a5,-36(s0)
	.loc 1 59 5
	lw	a5,-24(s0)
	mv	a4,a5
	lw	a5,-32(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	bne	a4,a5,.L14
	.loc 1 59 18 discriminator 1
	lw	a5,-24(s0)
	mv	a4,a5
	lw	a5,-36(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	beq	a4,a5,.L15
.L14:
	.loc 1 60 6
	call	reach_error
.L15:
	.loc 1 62 10
	li	a5,1
	.loc 1 63 1
	mv	a0,a5
	ld	ra,120(sp)
	.cfi_restore 1
	ld	s0,112(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 128
	addi	sp,sp,128
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE3:
	.size	main, .-main
.Letext0:
	.section	.debug_info,"",@progbits
.Ldebug_info0:
	.4byte	0x195
	.2byte	0x5
	.byte	0x1
	.byte	0x8
	.4byte	.Ldebug_abbrev0
	.uleb128 0x5
	.4byte	.LASF9
	.byte	0x1d
	.4byte	.LASF0
	.4byte	.LASF1
	.8byte	.Ltext0
	.8byte	.Letext0-.Ltext0
	.4byte	.Ldebug_line0
	.uleb128 0x6
	.4byte	.LASF10
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
	.4byte	.LASF7
	.byte	0x1
	.byte	0x27
	.byte	0x5
	.4byte	0x44
	.8byte	.LFB3
	.8byte	.LFE3-.LFB3
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xce
	.uleb128 0x1
	.string	"x"
	.byte	0x29
	.byte	0x7
	.4byte	0xce
	.uleb128 0x3
	.byte	0x91
	.sleb128 -120
	.uleb128 0x2
	.4byte	.LASF2
	.byte	0x2b
	.4byte	0x44
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x1
	.string	"ret"
	.byte	0x2c
	.byte	0x7
	.4byte	0x44
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.4byte	.LASF3
	.byte	0x2d
	.4byte	0x44
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x2
	.4byte	.LASF4
	.byte	0x2e
	.4byte	0x44
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x9
	.8byte	.LBB2
	.8byte	.LBE2-.LBB2
	.uleb128 0x1
	.string	"i"
	.byte	0x35
	.byte	0xb
	.4byte	0x44
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.byte	0
	.uleb128 0xa
	.4byte	0x44
	.4byte	0xde
	.uleb128 0xb
	.4byte	0xde
	.byte	0x13
	.byte	0
	.uleb128 0x3
	.byte	0x7
	.4byte	.LASF5
	.uleb128 0xc
	.4byte	.LASF11
	.byte	0x1
	.byte	0x15
	.byte	0x5
	.4byte	0x44
	.8byte	.LFB2
	.8byte	.LFE2-.LFB2
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x13b
	.uleb128 0x4
	.string	"x"
	.byte	0x15
	.byte	0x13
	.4byte	0x13b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x1
	.string	"i"
	.byte	0x17
	.byte	0x7
	.4byte	0x44
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1
	.string	"ret"
	.byte	0x18
	.byte	0xd
	.4byte	0x141
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1
	.string	"cnt"
	.byte	0x1a
	.byte	0x7
	.4byte	0x44
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.byte	0
	.uleb128 0xd
	.byte	0x8
	.4byte	0x44
	.uleb128 0x3
	.byte	0x5
	.4byte	.LASF6
	.uleb128 0xe
	.4byte	.LASF8
	.byte	0x1
	.byte	0xe
	.byte	0x6
	.8byte	.LFB1
	.8byte	.LFE1-.LFB1
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x17e
	.uleb128 0x4
	.string	"x"
	.byte	0xe
	.byte	0x16
	.4byte	0x13b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x1
	.string	"i"
	.byte	0xf
	.byte	0x7
	.4byte	0x44
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.uleb128 0xf
	.4byte	.LASF12
	.byte	0x1
	.byte	0x9
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
	.sleb128 7
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
	.uleb128 0x21
	.sleb128 8
	.uleb128 0x3e
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0xe
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
	.uleb128 0xb
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
	.uleb128 0x9
	.uleb128 0xb
	.byte	0x1
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.byte	0
	.byte	0
	.uleb128 0xa
	.uleb128 0x1
	.byte	0x1
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xb
	.uleb128 0x21
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2f
	.uleb128 0xb
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
	.uleb128 0xd
	.uleb128 0xf
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
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
.LASF9:
	.string	"GNU C17 13.2.0 -mtune=rocket -mabi=lp64d -misa-spec=20191213 -march=rv64imafd_zicsr_zifencei -g -O0 -fno-toplevel-reorder -fno-asynchronous-unwind-tables"
.LASF5:
	.string	"long unsigned int"
.LASF11:
	.string	"rangesum"
.LASF12:
	.string	"reach_error"
.LASF10:
	.string	"assert_ret1"
.LASF7:
	.string	"main"
.LASF2:
	.string	"temp"
.LASF6:
	.string	"long long int"
.LASF3:
	.string	"ret2"
.LASF4:
	.string	"ret5"
.LASF8:
	.string	"init_nondet"
	.section	.debug_line_str,"MS",@progbits,1
.LASF0:
	.string	"./rangesum20.c"
.LASF1:
	.string	"/home/grace/gitlib/rvemu/data/F_cov"
	.ident	"GCC: () 13.2.0"
