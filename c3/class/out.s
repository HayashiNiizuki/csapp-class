	.file	"out.c"
	.text
	.globl	out
	.type	out, @function
out:
.LFB0:
	.cfi_startproc
	endbr64
	movl	$114514, %eax
	ret
	.cfi_endproc
.LFE0:
	.size	out, .-out
	.ident	"GCC: (Ubuntu 9.4.0-1ubuntu1~20.04.2) 9.4.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:
