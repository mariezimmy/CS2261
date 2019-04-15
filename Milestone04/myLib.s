	.cpu arm7tdmi
	.eabi_attribute 20, 1
	.eabi_attribute 21, 1
	.eabi_attribute 23, 3
	.eabi_attribute 24, 1
	.eabi_attribute 25, 1
	.eabi_attribute 26, 1
	.eabi_attribute 30, 2
	.eabi_attribute 34, 0
	.eabi_attribute 18, 4
	.file	"myLib.c"
	.text
	.align	2
	.global	setPixel4
	.syntax unified
	.arm
	.fpu softvfp
	.type	setPixel4, %function
setPixel4:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	ldr	r3, .L5
	rsb	r0, r0, r0, lsl #4
	add	r0, r1, r0, lsl #4
	ldr	ip, [r3]
	add	r0, r0, r0, lsr #31
	bic	r0, r0, #1
	ldrh	r3, [ip, r0]
	tst	r1, #1
	andne	r3, r3, #255
	andeq	r3, r3, #65280
	orrne	r2, r3, r2, lsl #8
	orreq	r2, r3, r2
	strh	r2, [ip, r0]	@ movhi
	bx	lr
.L6:
	.align	2
.L5:
	.word	.LANCHOR0
	.size	setPixel4, .-setPixel4
	.align	2
	.global	drawRectangle4
	.syntax unified
	.arm
	.fpu softvfp
	.type	drawRectangle4, %function
drawRectangle4:
	@ Function supports interworking.
	@ args = 4, pretend = 0, frame = 16
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, r7, r8, r9, r10, fp, lr}
	sub	sp, sp, #20
	ldrb	ip, [sp, #56]	@ zero_extendqisi2
	ldrb	lr, [sp, #56]	@ zero_extendqisi2
	cmp	r2, #0
	orr	ip, ip, lr, lsl #8
	strh	ip, [sp, #14]	@ movhi
	ble	.L7
	sub	lr, r3, #2
	sub	fp, r3, #1
	asr	lr, lr, #1
	add	r2, r2, r0
	add	r9, r1, r3
	orr	lr, lr, #-2130706432
	ldr	ip, .L24
	add	r7, r3, r3, lsr #31
	asr	r5, fp, #1
	rsb	r2, r2, r2, lsl #4
	rsb	r0, r0, r0, lsl #4
	asr	r7, r7, #1
	sub	r9, r9, #1
	str	lr, [sp, #4]
	orr	lr, r5, #-2130706432
	add	r2, r1, r2, lsl #4
	add	r0, r1, r0, lsl #4
	ldm	ip, {r4, ip}
	str	lr, [sp]
	orr	r7, r7, #-2130706432
	and	r9, r9, #1
	and	r1, r1, #1
	and	r8, r3, #1
	add	r10, sp, #14
	b	.L20
.L9:
	cmp	r8, #0
	beq	.L15
	cmp	r3, #1
	ble	.L23
	mov	r5, #0
	add	lr, r0, #1
	add	lr, lr, lr, lsr #31
	bic	lr, lr, #1
	add	lr, r4, lr
	str	r5, [ip, #44]
	str	r10, [ip, #36]
	str	lr, [ip, #40]
	ldr	lr, [sp]
	str	lr, [ip, #44]
.L23:
	add	lr, r0, r0, lsr #31
	bic	lr, lr, #1
	ldrb	r5, [r4, lr]	@ zero_extendqisi2
	ldrb	r6, [sp, #56]	@ zero_extendqisi2
	orr	r5, r5, r6, lsl #8
	strh	r5, [r4, lr]	@ movhi
.L11:
	add	r0, r0, #240
	cmp	r0, r2
	beq	.L7
.L20:
	cmp	r1, #0
	bne	.L9
	cmp	r8, #0
	bne	.L10
	add	lr, r0, r0, lsr #31
	bic	lr, lr, #1
	add	r0, r0, #240
	add	lr, r4, lr
	cmp	r0, r2
	str	r8, [ip, #44]
	str	r10, [ip, #36]
	str	lr, [ip, #40]
	str	r7, [ip, #44]
	bne	.L20
.L7:
	add	sp, sp, #20
	@ sp needed
	pop	{r4, r5, r6, r7, r8, r9, r10, fp, lr}
	bx	lr
.L10:
	cmp	r3, #1
	ble	.L12
	add	lr, r0, r0, lsr #31
	bic	lr, lr, #1
	add	lr, r4, lr
	str	r1, [ip, #44]
	str	r10, [ip, #36]
	str	lr, [ip, #40]
	ldr	lr, [sp]
	str	lr, [ip, #44]
.L12:
	add	lr, fp, r0
	add	lr, lr, lr, lsr #31
	bic	lr, lr, #1
	ldrh	r6, [r4, lr]
	ldrb	r5, [sp, #56]	@ zero_extendqisi2
	cmp	r9, #0
	and	r5, r5, #255
	andne	r6, r6, #255
	andeq	r6, r6, #65280
	orrne	r6, r6, r5, lsl #8
	orreq	r6, r6, r5
	strh	r6, [r4, lr]	@ movhi
	b	.L11
.L15:
	cmp	r3, #2
	ble	.L17
	add	lr, r0, #1
	add	lr, lr, lr, lsr #31
	bic	lr, lr, #1
	add	lr, r4, lr
	str	r8, [ip, #44]
	str	r10, [ip, #36]
	str	lr, [ip, #40]
	ldr	lr, [sp, #4]
	str	lr, [ip, #44]
.L17:
	add	lr, fp, r0
	add	lr, lr, lr, lsr #31
	bic	lr, lr, #1
	ldrh	r6, [r4, lr]
	ldrb	r5, [sp, #56]	@ zero_extendqisi2
	cmp	r9, #0
	and	r5, r5, #255
	andne	r6, r6, #255
	andeq	r6, r6, #65280
	orrne	r6, r6, r5, lsl #8
	orreq	r6, r6, r5
	strh	r6, [r4, lr]	@ movhi
	b	.L23
.L25:
	.align	2
.L24:
	.word	.LANCHOR0
	.size	drawRectangle4, .-drawRectangle4
	.align	2
	.global	drawSquare4
	.syntax unified
	.arm
	.fpu softvfp
	.type	drawSquare4, %function
drawSquare4:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 8
	@ frame_needed = 0, uses_anonymous_args = 0
	str	lr, [sp, #-4]!
	sub	sp, sp, #20
	strb	r3, [sp, #15]
	ldrb	ip, [sp, #15]	@ zero_extendqisi2
	mov	r3, r2
	str	ip, [sp]
	bl	drawRectangle4
	add	sp, sp, #20
	@ sp needed
	ldr	lr, [sp], #4
	bx	lr
	.size	drawSquare4, .-drawSquare4
	.align	2
	.global	drawHorizontalLine4
	.syntax unified
	.arm
	.fpu softvfp
	.type	drawHorizontalLine4, %function
drawHorizontalLine4:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	cmp	r2, #0
	bxle	lr
	rsb	r0, r0, r0, lsl #4
	ldr	ip, .L38
	lsl	r0, r0, #4
	push	{r4, r5, lr}
	add	r1, r1, r0
	lsl	r5, r3, #24
	ldr	r4, [ip]
	add	r2, r1, r2
	asr	r5, r5, #16
.L32:
	add	ip, r1, r1, lsr #31
	bic	ip, ip, #1
	ldrh	lr, [r4, ip]
	and	r0, lr, #255
	tst	r1, #1
	orr	r0, r5, r0
	lsl	r0, r0, #16
	add	r1, r1, #1
	andeq	r0, lr, #65280
	lsrne	r0, r0, #16
	orreq	r0, r0, r3
	cmp	r2, r1
	strh	r0, [r4, ip]	@ movhi
	bne	.L32
	pop	{r4, r5, lr}
	bx	lr
.L39:
	.align	2
.L38:
	.word	.LANCHOR0
	.size	drawHorizontalLine4, .-drawHorizontalLine4
	.align	2
	.global	fillScreen4
	.syntax unified
	.arm
	.fpu softvfp
	.type	fillScreen4, %function
fillScreen4:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 16
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	mov	ip, #0
	sub	sp, sp, #16
	strb	r0, [sp, #7]
	ldrb	r3, [sp, #7]	@ zero_extendqisi2
	ldrb	r0, [sp, #7]	@ zero_extendqisi2
	ldr	r1, .L42
	add	r2, sp, #16
	orr	r3, r3, r0, lsl #8
	strh	r3, [r2, #-2]!	@ movhi
	ldm	r1, {r0, r3}
	ldr	r1, .L42+4
	str	ip, [r3, #44]
	str	r2, [r3, #36]
	str	r0, [r3, #40]
	str	r1, [r3, #44]
	add	sp, sp, #16
	@ sp needed
	bx	lr
.L43:
	.align	2
.L42:
	.word	.LANCHOR0
	.word	-2130687232
	.size	fillScreen4, .-fillScreen4
	.align	2
	.global	drawImage4
	.syntax unified
	.arm
	.fpu softvfp
	.type	drawImage4, %function
drawImage4:
	@ Function supports interworking.
	@ args = 4, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	cmp	r2, #0
	bxle	lr
	push	{r4, r5, r6, lr}
	mov	r4, #0
	ldr	r5, .L52
	add	lr, r0, r2
	add	r3, r3, r3, lsr #31
	asr	r3, r3, #1
	rsb	r0, r0, r0, lsl #4
	rsb	lr, lr, lr, lsl #4
	ldr	ip, [sp, #16]
	ldr	r6, [r5]
	ldr	r2, [r5, #4]
	add	lr, r1, lr, lsl #4
	orr	r5, r3, #-2147483648
	add	r1, r1, r0, lsl #4
	lsl	r0, r3, #1
.L46:
	add	r3, r1, r1, lsr #31
	bic	r3, r3, #1
	add	r1, r1, #240
	add	r3, r6, r3
	cmp	r1, lr
	str	r4, [r2, #44]
	str	ip, [r2, #36]
	str	r3, [r2, #40]
	add	ip, ip, r0
	str	r5, [r2, #44]
	bne	.L46
	pop	{r4, r5, r6, lr}
	bx	lr
.L53:
	.align	2
.L52:
	.word	.LANCHOR0
	.size	drawImage4, .-drawImage4
	.align	2
	.global	drawFullscreenImage4
	.syntax unified
	.arm
	.fpu softvfp
	.type	drawFullscreenImage4, %function
drawFullscreenImage4:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	mov	ip, #0
	ldr	r2, .L55
	ldr	r1, .L55+4
	ldm	r2, {r2, r3}
	str	ip, [r3, #44]
	str	r0, [r3, #36]
	str	r2, [r3, #40]
	str	r1, [r3, #44]
	bx	lr
.L56:
	.align	2
.L55:
	.word	.LANCHOR0
	.word	-2147464448
	.size	drawFullscreenImage4, .-drawFullscreenImage4
	.align	2
	.global	DMANow
	.syntax unified
	.arm
	.fpu softvfp
	.type	DMANow, %function
DMANow:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, lr}
	mov	r4, #0
	ldr	ip, .L59
	add	r0, r0, r0, lsl #1
	ldr	lr, [ip, #4]
	lsl	r0, r0, #2
	add	ip, lr, r0
	orr	r3, r3, #-2147483648
	str	r4, [ip, #8]
	str	r1, [lr, r0]
	str	r2, [ip, #4]
	pop	{r4, lr}
	str	r3, [ip, #8]
	bx	lr
.L60:
	.align	2
.L59:
	.word	.LANCHOR0
	.size	DMANow, .-DMANow
	.align	2
	.global	hideSprites
	.syntax unified
	.arm
	.fpu softvfp
	.type	hideSprites, %function
hideSprites:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	mov	r1, #512
	ldr	r3, .L65
	add	r2, r3, #1024
.L62:
	strh	r1, [r3], #8	@ movhi
	cmp	r3, r2
	bne	.L62
	bx	lr
.L66:
	.align	2
.L65:
	.word	shadowOAM
	.size	hideSprites, .-hideSprites
	.align	2
	.global	waitForVBlank
	.syntax unified
	.arm
	.fpu softvfp
	.type	waitForVBlank, %function
waitForVBlank:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	mov	r2, #67108864
.L68:
	ldrh	r3, [r2, #6]
	cmp	r3, #160
	bhi	.L68
	mov	r2, #67108864
.L69:
	ldrh	r3, [r2, #6]
	cmp	r3, #159
	bls	.L69
	bx	lr
	.size	waitForVBlank, .-waitForVBlank
	.align	2
	.global	flipPage
	.syntax unified
	.arm
	.fpu softvfp
	.type	flipPage, %function
flipPage:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	mov	r3, #67108864
	ldrh	r3, [r3]
	tst	r3, #16
	moveq	r1, #100663296
	ldrne	r2, .L76
	ldreq	r2, .L76
	ldrne	r1, .L76+4
	str	r1, [r2]
	mov	r2, #67108864
	eor	r3, r3, #16
	strh	r3, [r2]	@ movhi
	bx	lr
.L77:
	.align	2
.L76:
	.word	.LANCHOR0
	.word	100704256
	.size	flipPage, .-flipPage
	.global	dma
	.global	videoBuffer
	.comm	soundB,32,4
	.comm	soundA,32,4
	.data
	.align	2
	.set	.LANCHOR0,. + 0
	.type	videoBuffer, %object
	.size	videoBuffer, 4
videoBuffer:
	.word	100663296
	.type	dma, %object
	.size	dma, 4
dma:
	.word	67109040
	.ident	"GCC: (devkitARM release 47) 7.1.0"
