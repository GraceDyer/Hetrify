	.file	"test06.c"
	.option nopic
	.attribute arch, "rv64i2p1_m2p0_a2p1_f2p2_d2p2_zicsr2p0_zifencei2p0"
	.attribute unaligned_access, 0
	.attribute stack_align, 16
	.text
.Ltext0:
	.cfi_sections	.debug_frame
	.file 0 "/home/grace/gitlib/rvemu/data/F_cov" "./test06.c"
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
	.file 1 "./test06.c"
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
	.loc 1 5 2
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
	.globl	g
	.type	g, @function
g:
.LFB1:
	.loc 1 8 28
	.cfi_startproc
	addi	sp,sp,-48
	.cfi_def_cfa_offset 48
	sd	s0,40(sp)
	.cfi_offset 8, -8
	addi	s0,sp,48
	.cfi_def_cfa 8, 0
	sd	a0,-40(s0)
	sd	a1,-48(s0)
	.loc 1 9 10
	ld	a5,-48(s0)
	ld	a5,0(a5)
	sd	a5,-24(s0)
	.loc 1 11 11
	ld	a5,-48(s0)
	ld	a4,0(a5)
	.loc 1 11 9
	ld	a5,-40(s0)
	sd	a4,0(a5)
	.loc 1 12 9
	ld	a5,-24(s0)
	sw	zero,0(a5)
	.loc 1 13 1
	nop
	ld	s0,40(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 48
	addi	sp,sp,48
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE1:
	.size	g, .-g
	.align	2
	.globl	f
	.type	f, @function
f:
.LFB2:
	.loc 1 15 34
	.cfi_startproc
	addi	sp,sp,-48
	.cfi_def_cfa_offset 48
	sd	ra,40(sp)
	sd	s0,32(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,48
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sd	a1,-32(s0)
	sd	a2,-40(s0)
	sw	a5,-20(s0)
	.loc 1 16 8
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,4
	bne	a4,a5,.L4
	.loc 1 17 9
	ld	a1,-40(s0)
	ld	a0,-32(s0)
	call	g
	.loc 1 18 16
	li	a5,1
	j	.L5
.L4:
	.loc 1 20 16
	li	a5,0
.L5:
	.loc 1 22 1
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
	.size	f, .-f
	.align	2
	.globl	main
	.type	main, @function
main:
.LFB3:
	.loc 1 24 12
	.cfi_startproc
	addi	sp,sp,-48
	.cfi_def_cfa_offset 48
	sd	ra,40(sp)
	sd	s0,32(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,48
	.cfi_def_cfa 8, 0
	.loc 1 28 8
	addi	a5,s0,-20
	sd	a5,-32(s0)
	.loc 1 29 8
	addi	a5,s0,-24
	sd	a5,-40(s0)
	.loc 1 31 7
	li	a5,1
	sw	a5,-24(s0)
	.loc 1 32 7
	li	a5,5
	sw	a5,-20(s0)
	.loc 1 34 6
	lw	a5,-20(s0)
	addiw	a5,a5,-1
	sext.w	a5,a5
	sw	a5,-20(s0)
	.loc 1 36 9
	lw	a5,-20(s0)
	addi	a3,s0,-40
	addi	a4,s0,-32
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	f
	mv	a5,a0
	.loc 1 36 7 discriminator 1
	sw	a5,-20(s0)
	.loc 1 38 9
	ld	a5,-32(s0)
	lw	a5,0(a5)
	.loc 1 38 8
	beq	a5,zero,.L12
	.loc 1 42 12
	li	a5,0
	j	.L10
.L12:
	.loc 1 39 9
	nop
.L8:
	.loc 1 44 13
	call	reach_error
	.loc 1 45 12
	li	a5,1
.L10:
	.loc 1 46 1
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
.LFE3:
	.size	main, .-main
.Letext0:
	.section	.debug_info,"",@progbits
.Ldebug_info0:
	.4byte	0x15c
	.2byte	0x5
	.byte	0x1
	.byte	0x8
	.4byte	.Ldebug_abbrev0
	.uleb128 0x4
	.4byte	.LASF3
	.byte	0x1d
	.4byte	.LASF0
	.4byte	.LASF1
	.8byte	.Ltext0
	.8byte	.Letext0-.Ltext0
	.4byte	.Ldebug_line0
	.uleb128 0x5
	.4byte	.LASF4
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
	.4byte	.LASF2
	.byte	0x1
	.byte	0x18
	.byte	0x5
	.4byte	0x44
	.8byte	.LFB3
	.8byte	.LFE3-.LFB3
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xb0
	.uleb128 0x1
	.string	"a"
	.byte	0x19
	.byte	0x9
	.4byte	0x44
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1
	.string	"b"
	.byte	0x19
	.byte	0xc
	.4byte	0x44
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"p1"
	.byte	0x1a
	.byte	0xa
	.4byte	0xb0
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1
	.string	"p2"
	.byte	0x1a
	.byte	0xf
	.4byte	0xb0
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x8
	.4byte	.LASF5
	.byte	0x1
	.byte	0x2c
	.byte	0x5
	.8byte	.L8
	.byte	0
	.uleb128 0x3
	.4byte	0x44
	.uleb128 0x9
	.string	"f"
	.byte	0x1
	.byte	0xf
	.byte	0x5
	.4byte	0x44
	.8byte	.LFB2
	.8byte	.LFE2-.LFB2
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xfc
	.uleb128 0x2
	.string	"a"
	.byte	0xf
	.byte	0xb
	.4byte	0x44
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.string	"p1"
	.byte	0xf
	.byte	0x14
	.4byte	0xfc
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x2
	.string	"p2"
	.byte	0xf
	.byte	0x1e
	.4byte	0xfc
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.uleb128 0x3
	.4byte	0xb0
	.uleb128 0xa
	.string	"g"
	.byte	0x1
	.byte	0x8
	.byte	0x6
	.8byte	.LFB1
	.8byte	.LFE1-.LFB1
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x145
	.uleb128 0x2
	.string	"p1"
	.byte	0x8
	.byte	0xe
	.4byte	0xfc
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.string	"p2"
	.byte	0x8
	.byte	0x18
	.4byte	0xfc
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x1
	.string	"pq"
	.byte	0x9
	.byte	0xa
	.4byte	0xb0
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0xb
	.4byte	.LASF6
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
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0x8
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
	.uleb128 0x7c
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xa
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0x8
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
	.uleb128 0xb
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
.LASF3:
	.string	"GNU C17 13.2.0 -mtune=rocket -mabi=lp64d -misa-spec=20191213 -march=rv64imafd_zicsr_zifencei -g -O0 -fno-toplevel-reorder -fno-asynchronous-unwind-tables"
.LASF6:
	.string	"reach_error"
.LASF5:
	.string	"ERROR"
.LASF4:
	.string	"assert_ret1"
.LASF2:
	.string	"main"
	.section	.debug_line_str,"MS",@progbits,1
.LASF0:
	.string	"./test06.c"
.LASF1:
	.string	"/home/grace/gitlib/rvemu/data/F_cov"
	.ident	"GCC: () 13.2.0"
