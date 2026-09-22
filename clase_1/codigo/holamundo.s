	.file	"holamundo.cpp"
                                        # Start of file scope inline assembly
	.globl	_ZSt21ios_base_library_initv

                                        # End of file scope inline assembly
	.text
	.globl	main                            # -- Begin function main
	.p2align	4
	.type	main,@function
main:                                   # @main
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	pushq	%rbx
	pushq	%rax
	.cfi_offset %rbx, -24
	movq	_ZSt4cout@GOTPCREL(%rip), %rbx
	leaq	.L.str(%rip), %rsi
	movl	$11, %edx
	movq	%rbx, %rdi
	callq	_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l@PLT
	movq	(%rbx), %rax
	movq	-24(%rax), %rax
	movq	240(%rbx,%rax), %rbx
	testq	%rbx, %rbx
	je	.LBB0_5
# %bb.1:
	cmpb	$0, 56(%rbx)
	je	.LBB0_3
# %bb.2:
	movzbl	67(%rbx), %eax
	jmp	.LBB0_4
.LBB0_3:
	movq	%rbx, %rdi
	callq	_ZNKSt5ctypeIcE13_M_widen_initEv@PLT
	movq	(%rbx), %rax
	movq	%rbx, %rdi
	movl	$10, %esi
	callq	*48(%rax)
.LBB0_4:
	movsbl	%al, %esi
	movq	_ZSt4cout@GOTPCREL(%rip), %rdi
	callq	_ZNSo3putEc@PLT
	movq	%rax, %rdi
	callq	_ZNSo5flushEv@PLT
	xorl	%eax, %eax
	addq	$8, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.LBB0_5:
	.cfi_def_cfa %rbp, 16
	callq	_ZSt16__throw_bad_castv@PLT
.Lfunc_end0:
	.size	main, .Lfunc_end0-main
	.cfi_endproc
                                        # -- End function
	.type	.L.str,@object                  # @.str
	.section	.rodata.str1.1,"aMS",@progbits,1
.L.str:
	.asciz	"Hola mundo!"
	.size	.L.str, 12

	.ident	"clang version 22.1.2"
	.section	".note.GNU-stack","",@progbits
	.addrsig
	.addrsig_sym _ZSt4cout
