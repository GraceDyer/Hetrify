	.file	"dijkstra-u_unwindbound1.c"
	.option nopic
	.attribute arch, "rv64i2p1_m2p0_a2p1_f2p2_d2p2_zicsr2p0_zifencei2p0"
	.attribute unaligned_access, 0
	.attribute stack_align, 16
	.text
.Ltext0:
	.cfi_sections	.debug_frame
	.file 0 "/home/grace/gitlib/rvemu/data/T_cov" "./dijkstra-u_unwindbound1.c"
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
	.file 1 "./dijkstra-u_unwindbound1.c"
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
	.loc 1 19 12
	.cfi_startproc
	addi	sp,sp,-48
	.cfi_def_cfa_offset 48
	sd	ra,40(sp)
	sd	s0,32(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,48
	.cfi_def_cfa 8, 0
	.loc 1 23 7
	lw	a5,-36(s0)
	sext.w	a4,a5
	li	a5,1073741824
	addi	a5,a5,-2
	bgtu	a4,a5,.L8
	.loc 1 25 7
	sw	zero,-20(s0)
	.loc 1 26 7
	li	a5,1
	sw	a5,-24(s0)
	.loc 1 27 7
	lw	a5,-36(s0)
	sw	a5,-28(s0)
	.loc 1 28 7
	sw	zero,-32(s0)
	.loc 1 29 11
	j	.L9
.L12:
	.loc 1 30 12
	lw	a5,-24(s0)
	mv	a4,a5
	lw	a5,-36(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	bgtu	a4,a5,.L18
	.loc 1 33 11
	lw	a5,-24(s0)
	slliw	a5,a5,2
	sw	a5,-24(s0)
.L9:
	.loc 1 29 19
	lui	a5,%hi(counter)
	lw	a5,%lo(counter)(a5)
	addiw	a4,a5,1
	sext.w	a3,a4
	lui	a4,%hi(counter)
	sw	a3,%lo(counter)(a4)
	.loc 1 29 21
	ble	a5,zero,.L12
	j	.L13
.L18:
	.loc 1 31 13
	nop
	.loc 1 37 11
	j	.L13
.L16:
	.loc 1 38 33
	lw	a5,-20(s0)
	slliw	a5,a5,1
	sext.w	a5,a5
	.loc 1 38 37
	lw	a4,-24(s0)
	addw	a5,a4,a5
	sext.w	a4,a5
	.loc 1 38 9
	lw	a5,-28(s0)
	sext.w	a5,a5
	sltu	a5,a5,a4
	andi	a5,a5,0xff
	sext.w	a5,a5
	mv	a0,a5
	call	__VERIFIER_assert
	.loc 1 39 28
	lw	a5,-20(s0)
	mulw	a5,a5,a5
	sext.w	a4,a5
	.loc 1 39 34
	lw	a5,-28(s0)
	mv	a3,a5
	lw	a5,-24(s0)
	mulw	a5,a3,a5
	sext.w	a5,a5
	.loc 1 39 31
	addw	a5,a4,a5
	sext.w	a4,a5
	.loc 1 39 41
	lw	a5,-36(s0)
	mv	a3,a5
	lw	a5,-24(s0)
	mulw	a5,a3,a5
	sext.w	a5,a5
	.loc 1 39 9
	sub	a5,a4,a5
	seqz	a5,a5
	andi	a5,a5,0xff
	sext.w	a5,a5
	mv	a0,a5
	call	__VERIFIER_assert
	.loc 1 40 29
	lw	a5,-32(s0)
	mulw	a5,a5,a5
	sext.w	a5,a5
	.loc 1 40 33
	lw	a4,-32(s0)
	mulw	a5,a4,a5
	sext.w	a4,a5
	.loc 1 40 46
	lw	a5,-32(s0)
	mv	a3,a5
	lw	a5,-36(s0)
	mulw	a5,a3,a5
	sext.w	a5,a5
	.loc 1 40 50
	lw	a3,-24(s0)
	mulw	a5,a3,a5
	sext.w	a5,a5
	mv	a3,a5
	mv	a5,a3
	slliw	a5,a5,1
	addw	a5,a5,a3
	slliw	a5,a5,2
	sext.w	a5,a5
	.loc 1 40 37
	subw	a5,a4,a5
	sext.w	a4,a5
	.loc 1 40 63
	lw	a5,-36(s0)
	mv	a3,a5
	lw	a5,-20(s0)
	mulw	a5,a3,a5
	sext.w	a5,a5
	.loc 1 40 67
	lw	a3,-24(s0)
	mulw	a5,a3,a5
	sext.w	a5,a5
	slliw	a5,a5,4
	sext.w	a5,a5
	.loc 1 40 54
	addw	a5,a4,a5
	sext.w	a4,a5
	.loc 1 40 108
	lw	a5,-32(s0)
	mv	a3,a5
	lw	a5,-24(s0)
	mulw	a5,a3,a5
	sext.w	a5,a5
	.loc 1 40 112
	lw	a3,-28(s0)
	mulw	a5,a3,a5
	sext.w	a5,a5
	.loc 1 40 99
	mv	a3,a5
	mv	a5,a3
	slliw	a5,a5,1
	addw	a5,a5,a3
	sext.w	a3,a5
	.loc 1 40 91
	lw	a5,-20(s0)
	mv	a2,a5
	lw	a5,-24(s0)
	mulw	a5,a2,a5
	sext.w	a5,a5
	.loc 1 40 95
	lw	a2,-24(s0)
	mulw	a5,a2,a5
	sext.w	a5,a5
	.loc 1 40 99
	subw	a5,a3,a5
	sext.w	a5,a5
	slliw	a5,a5,2
	sext.w	a3,a5
	.loc 1 40 75
	lw	a5,-32(s0)
	mv	a2,a5
	lw	a5,-24(s0)
	mulw	a5,a2,a5
	sext.w	a5,a5
	.loc 1 40 79
	lw	a2,-24(s0)
	mulw	a5,a2,a5
	sext.w	a5,a5
	.loc 1 40 99
	subw	a5,a3,a5
	sext.w	a5,a5
	addw	a5,a4,a5
	sext.w	a4,a5
	.loc 1 40 125
	lw	a5,-20(s0)
	mv	a3,a5
	lw	a5,-24(s0)
	mulw	a5,a3,a5
	sext.w	a5,a5
	.loc 1 40 129
	lw	a3,-28(s0)
	mulw	a5,a3,a5
	sext.w	a5,a5
	slliw	a5,a5,4
	sext.w	a5,a5
	.loc 1 40 9
	sub	a5,a4,a5
	seqz	a5,a5
	andi	a5,a5,0xff
	sext.w	a5,a5
	mv	a0,a5
	call	__VERIFIER_assert
	.loc 1 41 29
	lw	a5,-32(s0)
	mulw	a5,a5,a5
	sext.w	a5,a5
	.loc 1 41 33
	lw	a4,-36(s0)
	mulw	a5,a4,a5
	sext.w	a4,a5
	.loc 1 41 45
	lw	a5,-32(s0)
	mv	a3,a5
	lw	a5,-36(s0)
	mulw	a5,a3,a5
	sext.w	a5,a5
	.loc 1 41 49
	lw	a3,-20(s0)
	mulw	a5,a3,a5
	sext.w	a5,a5
	slliw	a5,a5,2
	sext.w	a5,a5
	.loc 1 41 37
	subw	a5,a4,a5
	sext.w	a4,a5
	.loc 1 41 62
	lw	a5,-36(s0)
	mulw	a5,a5,a5
	sext.w	a5,a5
	.loc 1 41 67
	lw	a3,-24(s0)
	mulw	a5,a3,a5
	sext.w	a5,a5
	slliw	a5,a5,2
	sext.w	a5,a5
	.loc 1 41 53
	addw	a5,a4,a5
	sext.w	a4,a5
	.loc 1 41 75
	lw	a5,-36(s0)
	mv	a3,a5
	lw	a5,-24(s0)
	mulw	a5,a3,a5
	sext.w	a5,a5
	.loc 1 41 79
	lw	a3,-24(s0)
	mulw	a5,a3,a5
	sext.w	a5,a5
	.loc 1 41 71
	subw	a5,a4,a5
	sext.w	a4,a5
	.loc 1 41 103
	lw	a5,-32(s0)
	mv	a3,a5
	lw	a5,-20(s0)
	mulw	a5,a3,a5
	sext.w	a5,a5
	.loc 1 41 107
	lw	a3,-28(s0)
	mulw	a5,a3,a5
	sext.w	a5,a5
	slliw	a5,a5,2
	sext.w	a3,a5
	.loc 1 41 87
	lw	a5,-32(s0)
	mulw	a5,a5,a5
	sext.w	a5,a5
	.loc 1 41 91
	lw	a2,-28(s0)
	mulw	a5,a2,a5
	sext.w	a5,a5
	.loc 1 41 95
	subw	a5,a3,a5
	sext.w	a5,a5
	addw	a5,a4,a5
	sext.w	a4,a5
	.loc 1 41 131
	lw	a5,-24(s0)
	mulw	a5,a5,a5
	sext.w	a5,a5
	.loc 1 41 135
	lw	a3,-28(s0)
	mulw	a5,a3,a5
	sext.w	a3,a5
	.loc 1 41 119
	lw	a5,-36(s0)
	mv	a2,a5
	lw	a5,-24(s0)
	mulw	a5,a2,a5
	sext.w	a5,a5
	.loc 1 41 123
	lw	a2,-28(s0)
	mulw	a5,a2,a5
	sext.w	a5,a5
	slliw	a5,a5,3
	sext.w	a5,a5
	.loc 1 41 127
	subw	a5,a3,a5
	sext.w	a5,a5
	addw	a5,a4,a5
	sext.w	a4,a5
	.loc 1 41 147
	lw	a5,-24(s0)
	mv	a3,a5
	lw	a5,-28(s0)
	mulw	a5,a3,a5
	sext.w	a5,a5
	.loc 1 41 151
	lw	a3,-28(s0)
	mulw	a5,a3,a5
	sext.w	a5,a5
	slliw	a5,a5,2
	sext.w	a5,a5
	.loc 1 41 139
	addw	a5,a4,a5
	sext.w	a5,a5
	.loc 1 41 9
	seqz	a5,a5
	andi	a5,a5,0xff
	sext.w	a5,a5
	mv	a0,a5
	call	__VERIFIER_assert
	.loc 1 42 29
	lw	a5,-32(s0)
	mulw	a5,a5,a5
	sext.w	a5,a5
	.loc 1 42 33
	lw	a4,-20(s0)
	mulw	a5,a4,a5
	sext.w	a4,a5
	.loc 1 42 45
	lw	a5,-32(s0)
	mv	a3,a5
	lw	a5,-36(s0)
	mulw	a5,a3,a5
	sext.w	a5,a5
	.loc 1 42 49
	lw	a3,-24(s0)
	mulw	a5,a3,a5
	sext.w	a5,a5
	slliw	a5,a5,2
	sext.w	a5,a5
	.loc 1 42 37
	subw	a5,a4,a5
	sext.w	a4,a5
	.loc 1 42 61
	lw	a5,-36(s0)
	mv	a3,a5
	lw	a5,-20(s0)
	mulw	a5,a3,a5
	sext.w	a5,a5
	.loc 1 42 65
	lw	a3,-24(s0)
	mulw	a5,a3,a5
	sext.w	a5,a5
	slliw	a5,a5,2
	sext.w	a5,a5
	.loc 1 42 53
	addw	a5,a4,a5
	sext.w	a4,a5
	.loc 1 42 89
	lw	a5,-32(s0)
	mv	a3,a5
	lw	a5,-24(s0)
	mulw	a5,a3,a5
	sext.w	a5,a5
	.loc 1 42 93
	lw	a3,-28(s0)
	mulw	a5,a3,a5
	sext.w	a5,a5
	slliw	a5,a5,2
	sext.w	a3,a5
	.loc 1 42 73
	lw	a5,-20(s0)
	mv	a2,a5
	lw	a5,-24(s0)
	mulw	a5,a2,a5
	sext.w	a5,a5
	.loc 1 42 77
	lw	a2,-24(s0)
	mulw	a5,a2,a5
	sext.w	a5,a5
	.loc 1 42 81
	subw	a5,a3,a5
	sext.w	a5,a5
	addw	a5,a4,a5
	sext.w	a4,a5
	.loc 1 42 105
	lw	a5,-20(s0)
	mv	a3,a5
	lw	a5,-24(s0)
	mulw	a5,a3,a5
	sext.w	a5,a5
	.loc 1 42 109
	lw	a3,-28(s0)
	mulw	a5,a3,a5
	sext.w	a5,a5
	slliw	a5,a5,2
	sext.w	a5,a5
	.loc 1 42 9
	sub	a5,a4,a5
	seqz	a5,a5
	andi	a5,a5,0xff
	sext.w	a5,a5
	mv	a0,a5
	call	__VERIFIER_assert
	.loc 1 43 29
	lw	a5,-20(s0)
	mulw	a5,a5,a5
	sext.w	a4,a5
	.loc 1 43 37
	lw	a5,-36(s0)
	mv	a3,a5
	lw	a5,-24(s0)
	mulw	a5,a3,a5
	sext.w	a5,a5
	.loc 1 43 33
	subw	a5,a4,a5
	sext.w	a4,a5
	.loc 1 43 45
	lw	a5,-24(s0)
	mv	a3,a5
	lw	a5,-28(s0)
	mulw	a5,a3,a5
	sext.w	a5,a5
	.loc 1 43 41
	addw	a5,a4,a5
	sext.w	a5,a5
	.loc 1 43 9
	seqz	a5,a5
	andi	a5,a5,0xff
	sext.w	a5,a5
	mv	a0,a5
	call	__VERIFIER_assert
	.loc 1 45 12
	lw	a5,-24(s0)
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L19
	.loc 1 48 11
	lw	a5,-24(s0)
	srliw	a5,a5,2
	sw	a5,-24(s0)
	.loc 1 49 11
	lw	a5,-20(s0)
	mv	a4,a5
	lw	a5,-24(s0)
	addw	a5,a4,a5
	sw	a5,-32(s0)
	.loc 1 50 11
	lw	a5,-20(s0)
	srliw	a5,a5,1
	sw	a5,-20(s0)
	.loc 1 51 12
	lw	a5,-28(s0)
	mv	a4,a5
	lw	a5,-32(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	bltu	a4,a5,.L13
	.loc 1 52 15
	lw	a5,-20(s0)
	mv	a4,a5
	lw	a5,-24(s0)
	addw	a5,a4,a5
	sw	a5,-20(s0)
	.loc 1 53 15
	lw	a5,-28(s0)
	mv	a4,a5
	lw	a5,-32(s0)
	subw	a5,a4,a5
	sw	a5,-28(s0)
.L13:
	.loc 1 37 19
	lui	a5,%hi(counter)
	lw	a5,%lo(counter)(a5)
	addiw	a4,a5,1
	sext.w	a3,a4
	lui	a4,%hi(counter)
	sw	a3,%lo(counter)(a4)
	.loc 1 37 21
	ble	a5,zero,.L16
	j	.L15
.L19:
	.loc 1 46 13
	nop
.L15:
	.loc 1 56 24
	lw	a5,-32(s0)
	mulw	a5,a5,a5
	sext.w	a5,a5
	.loc 1 56 26
	lw	a4,-32(s0)
	mulw	a5,a4,a5
	sext.w	a4,a5
	.loc 1 56 35
	lw	a5,-32(s0)
	mv	a3,a5
	lw	a5,-36(s0)
	mulw	a5,a3,a5
	sext.w	a5,a5
	mv	a3,a5
	mv	a5,a3
	slliw	a5,a5,1
	addw	a5,a5,a3
	slliw	a5,a5,2
	sext.w	a5,a5
	.loc 1 56 29
	subw	a5,a4,a5
	sext.w	a4,a5
	.loc 1 56 53
	lw	a5,-32(s0)
	mv	a3,a5
	lw	a5,-28(s0)
	mulw	a5,a3,a5
	sext.w	a5,a5
	mv	a3,a5
	mv	a5,a3
	slliw	a5,a5,1
	addw	a5,a5,a3
	slliw	a5,a5,2
	sext.w	a3,a5
	.loc 1 56 44
	lw	a5,-36(s0)
	mv	a2,a5
	lw	a5,-20(s0)
	mulw	a5,a2,a5
	sext.w	a5,a5
	slliw	a5,a5,4
	sext.w	a5,a5
	.loc 1 56 47
	addw	a5,a3,a5
	sext.w	a5,a5
	addw	a5,a4,a5
	sext.w	a4,a5
	.loc 1 56 62
	lw	a5,-20(s0)
	mv	a3,a5
	lw	a5,-28(s0)
	mulw	a5,a3,a5
	sext.w	a5,a5
	slliw	a5,a5,4
	sext.w	a5,a5
	.loc 1 56 56
	subw	a5,a4,a5
	sext.w	a5,a5
	.loc 1 56 65
	lw	a4,-32(s0)
	subw	a5,a5,a4
	sext.w	a4,a5
	.loc 1 56 72
	lw	a5,-20(s0)
	slliw	a5,a5,2
	sext.w	a5,a5
	.loc 1 56 5
	sub	a5,a4,a5
	seqz	a5,a5
	andi	a5,a5,0xff
	sext.w	a5,a5
	mv	a0,a5
	call	__VERIFIER_assert
	.loc 1 57 24
	lw	a5,-20(s0)
	mulw	a5,a5,a5
	sext.w	a5,a5
	.loc 1 57 27
	lw	a4,-36(s0)
	subw	a5,a5,a4
	sext.w	a5,a5
	.loc 1 57 31
	lw	a4,-28(s0)
	addw	a5,a4,a5
	sext.w	a5,a5
	.loc 1 57 5
	seqz	a5,a5
	andi	a5,a5,0xff
	sext.w	a5,a5
	mv	a0,a5
	call	__VERIFIER_assert
	.loc 1 58 24
	lw	a5,-32(s0)
	mulw	a5,a5,a5
	sext.w	a5,a5
	.loc 1 58 26
	lw	a4,-20(s0)
	mulw	a5,a4,a5
	sext.w	a4,a5
	.loc 1 58 34
	lw	a5,-32(s0)
	mv	a3,a5
	lw	a5,-36(s0)
	mulw	a5,a3,a5
	sext.w	a5,a5
	slliw	a5,a5,2
	sext.w	a5,a5
	.loc 1 58 29
	subw	a5,a4,a5
	sext.w	a4,a5
	.loc 1 58 50
	lw	a5,-32(s0)
	mv	a3,a5
	lw	a5,-28(s0)
	mulw	a5,a3,a5
	sext.w	a3,a5
	.loc 1 58 42
	lw	a5,-36(s0)
	mv	a2,a5
	lw	a5,-20(s0)
	mulw	a5,a2,a5
	sext.w	a5,a5
	.loc 1 58 45
	addw	a5,a3,a5
	sext.w	a5,a5
	slliw	a5,a5,2
	sext.w	a5,a5
	addw	a5,a4,a5
	sext.w	a4,a5
	.loc 1 58 58
	lw	a5,-20(s0)
	mv	a3,a5
	lw	a5,-28(s0)
	mulw	a5,a3,a5
	sext.w	a5,a5
	slliw	a5,a5,2
	sext.w	a5,a5
	.loc 1 58 53
	subw	a5,a4,a5
	sext.w	a4,a5
	.loc 1 58 5
	lw	a5,-20(s0)
	sext.w	a5,a5
	sub	a5,a5,a4
	seqz	a5,a5
	andi	a5,a5,0xff
	sext.w	a5,a5
	mv	a0,a5
	call	__VERIFIER_assert
.L8:
	.loc 1 60 12
	li	a5,0
	.loc 1 61 1
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
	.4byte	0x113
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
	.byte	0x12
	.4byte	0x42
	.uleb128 0x9
	.byte	0x3
	.8byte	counter
	.uleb128 0x5
	.4byte	.LASF5
	.byte	0x1
	.byte	0x13
	.byte	0x5
	.4byte	0x42
	.8byte	.LFB2
	.8byte	.LFE2-.LFB2
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xb7
	.uleb128 0x1
	.string	"n"
	.byte	0x12
	.4byte	0xb7
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x1
	.string	"p"
	.byte	0x15
	.4byte	0xb7
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1
	.string	"q"
	.byte	0x18
	.4byte	0xb7
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"r"
	.byte	0x1b
	.4byte	0xb7
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x1
	.string	"h"
	.byte	0x1e
	.4byte	0xb7
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.uleb128 0x6
	.byte	0x4
	.byte	0x7
	.4byte	.LASF4
	.uleb128 0x7
	.4byte	.LASF6
	.byte	0x1
	.byte	0xa
	.byte	0x6
	.8byte	.LFB1
	.8byte	.LFE1-.LFB1
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xfc
	.uleb128 0x8
	.4byte	.LASF8
	.byte	0x1
	.byte	0xa
	.byte	0x1c
	.4byte	0x42
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x9
	.4byte	.LASF9
	.byte	0x1
	.byte	0xc
	.byte	0x5
	.8byte	.L4
	.byte	0
	.uleb128 0xa
	.4byte	.LASF10
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
	.uleb128 0x21
	.sleb128 20
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
.LASF4:
	.string	"unsigned int"
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
.LASF8:
	.string	"cond"
	.section	.debug_line_str,"MS",@progbits,1
.LASF0:
	.string	"./dijkstra-u_unwindbound1.c"
.LASF1:
	.string	"/home/grace/gitlib/rvemu/data/T_cov"
	.ident	"GCC: () 13.2.0"
