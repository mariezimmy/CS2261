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
	.file	"gameLogic.c"
	.text
	.align	2
	.syntax unified
	.arm
	.fpu softvfp
	.type	drawBoxes.part.0, %function
drawBoxes.part.0:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	ldr	r2, [r0, #4]
	mvn	r2, r2, lsl #17
	mvn	r2, r2, lsr #17
	push	{r4, lr}
	ldr	r1, [r0, #44]
	ldr	r4, [r0, #36]
	ldr	r3, [r0, #28]
	ldr	ip, .L4
	ldr	lr, [r0]
	lsl	r1, r1, #3
	add	r3, r3, r4, lsl #5
	add	r0, ip, r1
	lsl	r3, r3, #2
	strh	lr, [ip, r1]	@ movhi
	strh	r2, [r0, #2]	@ movhi
	strh	r3, [r0, #4]	@ movhi
	pop	{r4, lr}
	bx	lr
.L5:
	.align	2
.L4:
	.word	shadowOAM
	.size	drawBoxes.part.0, .-drawBoxes.part.0
	.global	__aeabi_idivmod
	.align	2
	.syntax unified
	.arm
	.fpu softvfp
	.type	drawFish.part.1, %function
drawFish.part.1:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	ldr	r2, .L9
	ldr	r3, .L9+4
	ldr	r2, [r2]
	smull	r0, r1, r2, r3
	asr	r3, r2, #31
	rsb	r3, r3, r1, asr #2
	push	{r4, lr}
	add	r3, r3, r3, lsl #2
	ldr	r4, .L9+8
	cmp	r2, r3, lsl #1
	ldr	r1, [r4, #36]
	bne	.L7
	add	r0, r1, #1
	ldr	r3, .L9+12
	ldr	r1, [r4, #40]
	mov	lr, pc
	bx	r3
	str	r1, [r4, #36]
.L7:
	ldr	r0, [r4, #28]
	ldr	r2, [r4, #4]
	ldr	r3, .L9+16
	add	r0, r0, r1, lsl #5
	ldr	r1, [r4]
	lsl	r0, r0, #1
	orr	r2, r2, #16384
	strh	r0, [r3, #12]	@ movhi
	strh	r1, [r3, #8]	@ movhi
	strh	r2, [r3, #10]	@ movhi
	pop	{r4, lr}
	bx	lr
.L10:
	.align	2
.L9:
	.word	counter
	.word	1717986919
	.word	fish
	.word	__aeabi_idivmod
	.word	shadowOAM
	.size	drawFish.part.1, .-drawFish.part.1
	.align	2
	.global	initBoxes1
	.syntax unified
	.arm
	.fpu softvfp
	.type	initBoxes1, %function
initBoxes1:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	mov	r2, #2
	ldr	r1, .L15
	push	{r4, r5, r6, r7, r8, r9, lr}
	mov	r3, r1
	mov	r5, r2
	mov	ip, #32
	mov	r0, #1
	mov	r4, #0
	add	lr, r1, #1376
	add	lr, lr, #4
.L12:
	str	r2, [r3, #44]
	str	ip, [r3, #16]
	str	ip, [r3, #20]
	str	r0, [r3, #28]
	str	r4, [r3, #36]
	str	r0, [r3, #48]
	str	r5, [r3, #40]
	add	r3, r3, #60
	cmp	r3, lr
	add	r2, r2, #1
	bne	.L12
	mov	r2, #118
	mov	r3, #22
	mov	r4, #165
	mov	lr, #86
	mov	r0, #54
	mov	r5, #5
	mov	r8, #37
	mov	r6, #69
	mov	r7, #101
	mov	r9, #133
	mov	ip, #197
	str	r5, [r1, #4]
	str	r8, [r1, #64]
	str	r8, [r1, #424]
	str	r6, [r1, #124]
	str	r6, [r1, #484]
	str	r7, [r1, #184]
	str	r9, [r1, #244]
	str	r9, [r1, #664]
	str	r9, [r1, #844]
	str	r4, [r1, #304]
	str	r4, [r1, #544]
	str	r4, [r1, #724]
	str	r4, [r1, #904]
	str	lr, [r1, #420]
	str	lr, [r1, #480]
	str	lr, [r1, #540]
	str	lr, [r1, #600]
	str	r2, [r1]
	str	r2, [r1, #60]
	str	r2, [r1, #120]
	str	r2, [r1, #180]
	str	r2, [r1, #240]
	str	r2, [r1, #300]
	str	r2, [r1, #360]
	str	ip, [r1, #364]
	str	ip, [r1, #604]
	str	ip, [r1, #784]
	str	r0, [r1, #660]
	str	r0, [r1, #720]
	str	r0, [r1, #780]
	str	r3, [r1, #840]
	str	r3, [r1, #900]
	str	r3, [r1, #960]
	str	r8, [r1, #1204]
	str	r7, [r1, #1024]
	str	r7, [r1, #1084]
	str	r6, [r1, #1144]
	str	r5, [r1, #1264]
	str	r5, [r1, #1324]
	str	ip, [r1, #964]
	str	r0, [r1, #1020]
	str	r3, [r1, #1080]
	str	r3, [r1, #1140]
	str	r3, [r1, #1200]
	str	r3, [r1, #1260]
	str	r0, [r1, #1320]
	pop	{r4, r5, r6, r7, r8, r9, lr}
	bx	lr
.L16:
	.align	2
.L15:
	.word	boxes
	.size	initBoxes1, .-initBoxes1
	.align	2
	.global	initLevel1
	.syntax unified
	.arm
	.fpu softvfp
	.type	initLevel1, %function
initLevel1:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, r7, r8, lr}
	mov	r3, #256
	ldr	r4, .L19
	ldr	r2, .L19+4
	ldr	r1, .L19+8
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r0, #3
	mov	r3, #16384
	ldr	r2, .L19+12
	ldr	r1, .L19+16
	mov	lr, pc
	bx	r4
	mov	r4, #0
	mov	r1, #65
	ldr	r2, .L19+20
	ldr	r3, .L19+24
	str	r1, [r2]
	str	r4, [r3]
	mov	r7, #8
	bl	initBoxes1
	mov	r6, #4
	mov	r1, #32
	mov	lr, #1
	mov	r5, #11
	mov	ip, #16
	ldr	r0, .L19+28
	ldr	r2, [r0]
	ldr	r3, .L19+32
	sub	r2, r2, #18
	str	r2, [r3]
	ldr	r2, [r0, #4]
	str	r2, [r3, #4]
	ldr	r2, .L19+36
	str	r4, [r3, #28]
	str	r4, [r3, #36]
	str	r4, [r3, #56]
	str	r4, [r2, #36]
	ldr	r4, [r0, #1320]
	ldr	r0, [r0, #1324]
	add	r0, r0, #7
	str	r7, [r3, #40]
	str	r4, [r2]
	str	r6, [r2, #28]
	str	r5, [r2, #40]
	str	lr, [r3, #48]
	str	lr, [r2, #48]
	str	r1, [r3, #8]
	str	r0, [r2, #4]
	str	r1, [r3, #12]
	str	r1, [r3, #16]
	str	r1, [r3, #20]
	str	ip, [r2, #16]
	str	ip, [r2, #20]
	pop	{r4, r5, r6, r7, r8, lr}
	bx	lr
.L20:
	.align	2
.L19:
	.word	DMANow
	.word	83886592
	.word	spriteSheetPal
	.word	100728832
	.word	spriteSheetTiles
	.word	boxesRemaining
	.word	numberOfPets
	.word	boxes
	.word	kitty
	.word	fish
	.size	initLevel1, .-initLevel1
	.align	2
	.global	initBoxes2
	.syntax unified
	.arm
	.fpu softvfp
	.type	initBoxes2, %function
initBoxes2:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	ldr	r1, .L25
	push	{r4, r5, r6, r7, r8, r9, lr}
	mov	r2, #25
	mov	r3, r1
	mov	ip, #32
	mov	r0, #1
	mov	r5, #0
	mov	r4, #2
	add	lr, r1, #1200
.L22:
	str	r2, [r3, #44]
	str	ip, [r3, #16]
	str	ip, [r3, #20]
	str	r0, [r3, #28]
	str	r5, [r3, #36]
	str	r0, [r3, #48]
	str	r4, [r3, #40]
	add	r3, r3, #60
	cmp	r3, lr
	add	r2, r2, #1
	bne	.L22
	mov	r3, #54
	mov	r4, #118
	mov	lr, #37
	mov	r2, #86
	mov	r6, #165
	mov	r5, #69
	mov	ip, #101
	mov	r0, #22
	mov	r9, #197
	mov	r8, #133
	mov	r7, #5
	str	r4, [r1]
	str	r4, [r1, #60]
	str	r4, [r1, #120]
	str	r4, [r1, #180]
	str	r6, [r1, #4]
	str	r6, [r1, #424]
	str	r6, [r1, #784]
	str	lr, [r1, #64]
	str	lr, [r1, #244]
	str	lr, [r1, #544]
	str	r5, [r1, #124]
	str	r5, [r1, #304]
	str	r5, [r1, #604]
	str	r9, [r1, #484]
	str	r9, [r1, #844]
	str	r8, [r1, #724]
	str	r7, [r1, #904]
	str	ip, [r1, #184]
	str	ip, [r1, #364]
	str	ip, [r1, #664]
	str	r2, [r1, #240]
	str	r2, [r1, #300]
	str	r2, [r1, #360]
	str	r2, [r1, #420]
	str	r2, [r1, #480]
	str	r3, [r1, #540]
	str	r3, [r1, #600]
	str	r3, [r1, #660]
	str	r3, [r1, #720]
	str	r3, [r1, #780]
	str	r3, [r1, #840]
	str	r0, [r1, #900]
	str	r0, [r1, #960]
	str	lr, [r1, #964]
	str	r8, [r1, #1084]
	str	r7, [r1, #1144]
	str	r0, [r1, #1020]
	str	ip, [r1, #1024]
	str	r0, [r1, #1080]
	str	r3, [r1, #1140]
	pop	{r4, r5, r6, r7, r8, r9, lr}
	bx	lr
.L26:
	.align	2
.L25:
	.word	boxes2
	.size	initBoxes2, .-initBoxes2
	.align	2
	.global	initLevel2
	.syntax unified
	.arm
	.fpu softvfp
	.type	initLevel2, %function
initLevel2:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, r7, r8, lr}
	mov	r3, #256
	ldr	r4, .L29
	ldr	r2, .L29+4
	ldr	r1, .L29+8
	mov	r0, #3
	mov	r7, #8
	mov	lr, pc
	bx	r4
	mov	r3, #16384
	ldr	r2, .L29+12
	ldr	r1, .L29+16
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r6, #4
	bl	initBoxes2
	mov	r4, #1
	mov	r0, #32
	mov	r1, #0
	mov	lr, #16
	mov	r5, #11
	ldr	r2, .L29+20
	ldr	ip, [r2]
	ldr	r3, .L29+24
	sub	ip, ip, #18
	str	ip, [r3]
	ldr	ip, [r2, #1144]
	ldr	r8, [r2, #4]
	str	r7, [r3, #40]
	ldr	r7, [r2, #1140]
	ldr	r2, .L29+28
	add	ip, ip, #7
	str	r8, [r3, #4]
	stm	r2, {r7, ip}
	str	r6, [r2, #28]
	str	r5, [r2, #40]
	str	r4, [r3, #48]
	str	r4, [r2, #48]
	str	lr, [r2, #16]
	str	lr, [r2, #20]
	str	r0, [r3, #8]
	str	r0, [r3, #12]
	str	r0, [r3, #16]
	str	r0, [r3, #20]
	str	r1, [r3, #28]
	str	r1, [r3, #36]
	str	r1, [r3, #56]
	str	r1, [r2, #36]
	pop	{r4, r5, r6, r7, r8, lr}
	bx	lr
.L30:
	.align	2
.L29:
	.word	DMANow
	.word	83886592
	.word	spriteSheetPal
	.word	100728832
	.word	spriteSheetTiles
	.word	boxes2
	.word	kitty
	.word	fish
	.size	initLevel2, .-initLevel2
	.align	2
	.global	initBoxes3
	.syntax unified
	.arm
	.fpu softvfp
	.type	initBoxes3, %function
initBoxes3:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	ldr	r1, .L35
	push	{r4, r5, r6, r7, r8, r9, lr}
	mov	r2, #45
	mov	r3, r1
	mov	ip, #32
	mov	r0, #1
	mov	r5, #0
	mov	r4, #2
	add	lr, r1, #1312
	add	lr, lr, #8
.L32:
	str	r2, [r3, #44]
	str	ip, [r3, #16]
	str	ip, [r3, #20]
	str	r0, [r3, #28]
	str	r5, [r3, #36]
	str	r0, [r3, #48]
	str	r4, [r3, #40]
	add	r3, r3, #60
	cmp	r3, lr
	add	r2, r2, #1
	bne	.L32
	mov	r3, #54
	mov	r2, #118
	mov	lr, #22
	mov	r5, #197
	mov	r4, #37
	mov	r0, #86
	mov	ip, #69
	mov	r7, #133
	mov	r6, #5
	mov	r9, #101
	mov	r8, #165
	str	lr, [r1]
	str	r5, [r1, #4]
	str	r5, [r1, #364]
	str	r5, [r1, #604]
	str	r4, [r1, #64]
	str	r4, [r1, #424]
	str	r4, [r1, #724]
	str	r9, [r1, #184]
	str	r9, [r1, #844]
	str	r7, [r1, #244]
	str	r7, [r1, #544]
	str	r7, [r1, #904]
	str	r8, [r1, #304]
	str	r6, [r1, #664]
	str	r2, [r1, #60]
	str	r2, [r1, #120]
	str	r2, [r1, #180]
	str	r2, [r1, #240]
	str	r2, [r1, #300]
	str	r2, [r1, #360]
	str	ip, [r1, #124]
	str	ip, [r1, #484]
	str	ip, [r1, #784]
	str	r0, [r1, #420]
	str	r0, [r1, #480]
	str	r0, [r1, #540]
	str	r0, [r1, #600]
	str	r3, [r1, #660]
	str	r3, [r1, #720]
	str	r3, [r1, #780]
	str	r3, [r1, #840]
	str	r3, [r1, #900]
	str	r3, [r1, #960]
	str	r5, [r1, #1024]
	str	r8, [r1, #964]
	str	lr, [r1, #1080]
	str	r6, [r1, #1084]
	str	lr, [r1, #1140]
	str	r4, [r1, #1144]
	str	lr, [r1, #1200]
	str	r6, [r1, #1264]
	str	r3, [r1, #1020]
	str	ip, [r1, #1204]
	str	r0, [r1, #1260]
	pop	{r4, r5, r6, r7, r8, r9, lr}
	bx	lr
.L36:
	.align	2
.L35:
	.word	boxes3
	.size	initBoxes3, .-initBoxes3
	.align	2
	.global	initLevel3
	.syntax unified
	.arm
	.fpu softvfp
	.type	initLevel3, %function
initLevel3:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, r7, r8, lr}
	mov	r3, #256
	ldr	r4, .L39
	ldr	r2, .L39+4
	ldr	r1, .L39+8
	mov	r0, #3
	mov	r7, #8
	mov	lr, pc
	bx	r4
	mov	r3, #16384
	ldr	r2, .L39+12
	ldr	r1, .L39+16
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r6, #4
	bl	initBoxes3
	mov	r4, #1
	mov	r0, #32
	mov	r1, #0
	mov	lr, #16
	mov	r5, #11
	ldr	r2, .L39+20
	ldr	ip, [r2]
	ldr	r3, .L39+24
	sub	ip, ip, #18
	str	ip, [r3]
	ldr	ip, [r2, #1264]
	ldr	r8, [r2, #4]
	str	r7, [r3, #40]
	ldr	r7, [r2, #1260]
	ldr	r2, .L39+28
	add	ip, ip, #7
	str	r8, [r3, #4]
	stm	r2, {r7, ip}
	str	r6, [r2, #28]
	str	r5, [r2, #40]
	str	r4, [r3, #48]
	str	r4, [r2, #48]
	str	lr, [r2, #16]
	str	lr, [r2, #20]
	str	r0, [r3, #8]
	str	r0, [r3, #12]
	str	r0, [r3, #16]
	str	r0, [r3, #20]
	str	r1, [r3, #28]
	str	r1, [r3, #36]
	str	r1, [r3, #56]
	str	r1, [r2, #36]
	pop	{r4, r5, r6, r7, r8, lr}
	bx	lr
.L40:
	.align	2
.L39:
	.word	DMANow
	.word	83886592
	.word	spriteSheetPal
	.word	100728832
	.word	spriteSheetTiles
	.word	boxes3
	.word	kitty
	.word	fish
	.size	initLevel3, .-initLevel3
	.align	2
	.global	initKitty1
	.syntax unified
	.arm
	.fpu softvfp
	.type	initKitty1, %function
initKitty1:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, lr}
	mov	r2, #32
	mov	r1, #0
	mov	lr, #1
	mov	ip, #8
	ldr	r3, .L43
	ldm	r3, {r0, r4}
	ldr	r3, .L43+4
	sub	r0, r0, #18
	stm	r3, {r0, r4}
	str	lr, [r3, #48]
	str	ip, [r3, #40]
	str	r2, [r3, #8]
	str	r2, [r3, #12]
	str	r2, [r3, #16]
	str	r2, [r3, #20]
	str	r1, [r3, #28]
	str	r1, [r3, #36]
	str	r1, [r3, #56]
	pop	{r4, lr}
	bx	lr
.L44:
	.align	2
.L43:
	.word	boxes
	.word	kitty
	.size	initKitty1, .-initKitty1
	.align	2
	.global	initKitty2
	.syntax unified
	.arm
	.fpu softvfp
	.type	initKitty2, %function
initKitty2:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, lr}
	mov	r2, #32
	mov	r1, #0
	mov	lr, #1
	mov	ip, #8
	ldr	r3, .L47
	ldm	r3, {r0, r4}
	ldr	r3, .L47+4
	sub	r0, r0, #18
	stm	r3, {r0, r4}
	str	lr, [r3, #48]
	str	ip, [r3, #40]
	str	r2, [r3, #8]
	str	r2, [r3, #12]
	str	r2, [r3, #16]
	str	r2, [r3, #20]
	str	r1, [r3, #28]
	str	r1, [r3, #36]
	str	r1, [r3, #56]
	pop	{r4, lr}
	bx	lr
.L48:
	.align	2
.L47:
	.word	boxes2
	.word	kitty
	.size	initKitty2, .-initKitty2
	.align	2
	.global	initKitty3
	.syntax unified
	.arm
	.fpu softvfp
	.type	initKitty3, %function
initKitty3:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, lr}
	mov	r2, #32
	mov	r1, #0
	mov	lr, #1
	mov	ip, #8
	ldr	r3, .L51
	ldm	r3, {r0, r4}
	ldr	r3, .L51+4
	sub	r0, r0, #18
	stm	r3, {r0, r4}
	str	lr, [r3, #48]
	str	ip, [r3, #40]
	str	r2, [r3, #8]
	str	r2, [r3, #12]
	str	r2, [r3, #16]
	str	r2, [r3, #20]
	str	r1, [r3, #28]
	str	r1, [r3, #36]
	str	r1, [r3, #56]
	pop	{r4, lr}
	bx	lr
.L52:
	.align	2
.L51:
	.word	boxes3
	.word	kitty
	.size	initKitty3, .-initKitty3
	.align	2
	.global	initFish1
	.syntax unified
	.arm
	.fpu softvfp
	.type	initFish1, %function
initFish1:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, lr}
	mov	r1, #16
	mov	r4, #4
	mov	lr, #0
	mov	ip, #1
	mov	r0, #11
	ldr	r3, .L55
	ldr	r2, [r3, #1324]
	ldr	r5, [r3, #1320]
	ldr	r3, .L55+4
	add	r2, r2, #7
	str	r5, [r3]
	str	r4, [r3, #28]
	str	lr, [r3, #36]
	str	r2, [r3, #4]
	str	ip, [r3, #48]
	str	r0, [r3, #40]
	str	r1, [r3, #16]
	str	r1, [r3, #20]
	pop	{r4, r5, lr}
	bx	lr
.L56:
	.align	2
.L55:
	.word	boxes
	.word	fish
	.size	initFish1, .-initFish1
	.align	2
	.global	initFish2
	.syntax unified
	.arm
	.fpu softvfp
	.type	initFish2, %function
initFish2:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, lr}
	mov	r1, #16
	mov	r4, #4
	mov	lr, #0
	mov	ip, #1
	mov	r0, #11
	ldr	r3, .L59
	ldr	r2, [r3, #1144]
	ldr	r5, [r3, #1140]
	ldr	r3, .L59+4
	add	r2, r2, #7
	str	r5, [r3]
	str	r4, [r3, #28]
	str	lr, [r3, #36]
	str	r2, [r3, #4]
	str	ip, [r3, #48]
	str	r0, [r3, #40]
	str	r1, [r3, #16]
	str	r1, [r3, #20]
	pop	{r4, r5, lr}
	bx	lr
.L60:
	.align	2
.L59:
	.word	boxes2
	.word	fish
	.size	initFish2, .-initFish2
	.align	2
	.global	initFish3
	.syntax unified
	.arm
	.fpu softvfp
	.type	initFish3, %function
initFish3:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, lr}
	mov	r1, #16
	mov	r4, #4
	mov	lr, #0
	mov	ip, #1
	mov	r0, #11
	ldr	r3, .L63
	ldr	r2, [r3, #1264]
	ldr	r5, [r3, #1260]
	ldr	r3, .L63+4
	add	r2, r2, #7
	str	r5, [r3]
	str	r4, [r3, #28]
	str	lr, [r3, #36]
	str	r2, [r3, #4]
	str	ip, [r3, #48]
	str	r0, [r3, #40]
	str	r1, [r3, #16]
	str	r1, [r3, #20]
	pop	{r4, r5, lr}
	bx	lr
.L64:
	.align	2
.L63:
	.word	boxes3
	.word	fish
	.size	initFish3, .-initFish3
	.align	2
	.global	drawKitty
	.syntax unified
	.arm
	.fpu softvfp
	.type	drawKitty, %function
drawKitty:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	ldr	r2, .L72
	ldr	r3, .L72+4
	ldr	r2, [r2]
	smull	r0, r1, r2, r3
	asr	r3, r2, #31
	add	r1, r2, r1
	rsb	r3, r3, r1, asr #4
	push	{r4, lr}
	rsb	r3, r3, r3, lsl #4
	ldr	r4, .L72+8
	cmp	r2, r3, lsl #1
	ldr	r1, [r4, #36]
	bne	.L66
	add	r0, r1, #1
	ldr	r3, .L72+12
	ldr	r1, [r4, #40]
	mov	lr, pc
	bx	r3
	str	r1, [r4, #36]
.L66:
	ldr	r3, [r4, #4]
	mvn	r3, r3, lsl #17
	mvn	r3, r3, lsr #17
	ldr	r2, .L72+16
	ldr	r0, [r4]
	ldr	ip, [r4, #56]
	strh	r0, [r2]	@ movhi
	ldr	r0, [r4, #28]
	lsl	r3, r3, #16
	lsr	r3, r3, #16
	cmp	ip, #0
	add	r0, r0, r1, lsl #5
	strh	r3, [r2, #2]	@ movhi
	lsl	r0, r0, #2
	orrne	r3, r3, #4096
	strhne	r3, [r2, #2]	@ movhi
	strh	r0, [r2, #4]	@ movhi
	pop	{r4, lr}
	bx	lr
.L73:
	.align	2
.L72:
	.word	counter
	.word	-2004318071
	.word	kitty
	.word	__aeabi_idivmod
	.word	shadowOAM
	.size	drawKitty, .-drawKitty
	.align	2
	.global	drawLevel1
	.syntax unified
	.arm
	.fpu softvfp
	.type	drawLevel1, %function
drawLevel1:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	ldr	r2, .L84
	ldr	r3, [r2]
	push	{r4, r5, r6, r7, r8, lr}
	add	r3, r3, #1
	str	r3, [r2]
	bl	drawKitty
	ldr	r3, .L84+4
	ldr	r3, [r3, #48]
	cmp	r3, #0
	bne	.L82
	mov	r2, #512
	ldr	r3, .L84+8
	strh	r2, [r3, #8]	@ movhi
.L76:
	ldr	r4, .L84+12
	add	r5, r4, #1376
	mov	r7, #512
	ldr	r6, .L84+8
	add	r5, r5, #4
	b	.L79
.L77:
	ldr	r3, [r4, #44]
	add	r4, r4, #60
	lsl	r3, r3, #3
	cmp	r4, r5
	strh	r7, [r6, r3]	@ movhi
	beq	.L83
.L79:
	ldr	r3, [r4, #48]
	cmp	r3, #0
	beq	.L77
	mov	r0, r4
	add	r4, r4, #60
	bl	drawBoxes.part.0
	cmp	r4, r5
	bne	.L79
.L83:
	pop	{r4, r5, r6, r7, r8, lr}
	bx	lr
.L82:
	bl	drawFish.part.1
	b	.L76
.L85:
	.align	2
.L84:
	.word	counter
	.word	fish
	.word	shadowOAM
	.word	boxes
	.size	drawLevel1, .-drawLevel1
	.align	2
	.global	drawLevel2
	.syntax unified
	.arm
	.fpu softvfp
	.type	drawLevel2, %function
drawLevel2:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	ldr	r2, .L98
	ldr	r3, [r2]
	push	{r4, r5, r6, r7, r8, lr}
	add	r3, r3, #1
	str	r3, [r2]
	bl	drawKitty
	ldr	r3, .L98+4
	ldr	r3, [r3, #48]
	cmp	r3, #0
	bne	.L96
	mov	r3, #512
	ldr	r5, .L98+8
	strh	r3, [r5, #8]	@ movhi
.L88:
	ldr	r4, .L98+12
	mov	r7, #512
	add	r6, r4, #1200
	b	.L91
.L89:
	ldr	r3, [r4, #44]
	add	r4, r4, #60
	lsl	r3, r3, #3
	cmp	r4, r6
	strh	r7, [r5, r3]	@ movhi
	beq	.L97
.L91:
	ldr	r3, [r4, #48]
	cmp	r3, #0
	beq	.L89
	mov	r0, r4
	add	r4, r4, #60
	bl	drawBoxes.part.0
	cmp	r4, r6
	bne	.L91
.L97:
	mov	ip, #0
	mov	r0, #512
	ldr	r3, .L98+16
	add	r1, r3, #1376
	add	r1, r1, #4
.L92:
	ldr	r2, [r3, #44]
	str	ip, [r3, #48]
	add	r3, r3, #60
	lsl	r2, r2, #3
	cmp	r3, r1
	strh	r0, [r5, r2]	@ movhi
	bne	.L92
	pop	{r4, r5, r6, r7, r8, lr}
	bx	lr
.L96:
	bl	drawFish.part.1
	ldr	r5, .L98+8
	b	.L88
.L99:
	.align	2
.L98:
	.word	counter
	.word	fish
	.word	shadowOAM
	.word	boxes2
	.word	boxes
	.size	drawLevel2, .-drawLevel2
	.align	2
	.global	drawLevel3
	.syntax unified
	.arm
	.fpu softvfp
	.type	drawLevel3, %function
drawLevel3:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	ldr	r2, .L114
	ldr	r3, [r2]
	push	{r4, r5, r6, r7, r8, lr}
	add	r3, r3, #1
	str	r3, [r2]
	bl	drawKitty
	ldr	r3, .L114+4
	ldr	r3, [r3, #48]
	cmp	r3, #0
	bne	.L112
	mov	r3, #512
	ldr	r5, .L114+8
	strh	r3, [r5, #8]	@ movhi
.L102:
	ldr	r4, .L114+12
	add	r6, r4, #1312
	mov	r7, #512
	add	r6, r6, #8
	b	.L105
.L103:
	ldr	r3, [r4, #44]
	add	r4, r4, #60
	lsl	r3, r3, #3
	cmp	r4, r6
	strh	r7, [r5, r3]	@ movhi
	beq	.L113
.L105:
	ldr	r3, [r4, #48]
	cmp	r3, #0
	beq	.L103
	mov	r0, r4
	add	r4, r4, #60
	bl	drawBoxes.part.0
	cmp	r4, r6
	bne	.L105
.L113:
	mov	ip, #0
	mov	r0, #512
	ldr	r3, .L114+16
	add	r1, r3, #1376
	add	r1, r1, #4
.L106:
	ldr	r2, [r3, #44]
	str	ip, [r3, #48]
	add	r3, r3, #60
	lsl	r2, r2, #3
	cmp	r3, r1
	strh	r0, [r5, r2]	@ movhi
	bne	.L106
	mov	ip, #0
	mov	r0, #512
	ldr	r3, .L114+20
	add	r1, r3, #1200
.L107:
	ldr	r2, [r3, #44]
	str	ip, [r3, #48]
	add	r3, r3, #60
	lsl	r2, r2, #3
	cmp	r3, r1
	strh	r0, [r5, r2]	@ movhi
	bne	.L107
	pop	{r4, r5, r6, r7, r8, lr}
	bx	lr
.L112:
	bl	drawFish.part.1
	ldr	r5, .L114+8
	b	.L102
.L115:
	.align	2
.L114:
	.word	counter
	.word	fish
	.word	shadowOAM
	.word	boxes3
	.word	boxes
	.word	boxes2
	.size	drawLevel3, .-drawLevel3
	.align	2
	.global	drawBoxes
	.syntax unified
	.arm
	.fpu softvfp
	.type	drawBoxes, %function
drawBoxes:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	ldr	r2, [r0, #48]
	cmp	r2, #0
	bne	.L118
	mov	r1, #512
	ldr	r3, [r0, #44]
	ldr	r2, .L119
	lsl	r3, r3, #3
	strh	r1, [r2, r3]	@ movhi
	bx	lr
.L118:
	b	drawBoxes.part.0
.L120:
	.align	2
.L119:
	.word	shadowOAM
	.size	drawBoxes, .-drawBoxes
	.align	2
	.global	drawFish
	.syntax unified
	.arm
	.fpu softvfp
	.type	drawFish, %function
drawFish:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	ldr	r3, .L123
	ldr	r3, [r3, #48]
	cmp	r3, #0
	bne	drawFish.part.1
.L122:
	mov	r2, #512
	ldr	r3, .L123+4
	strh	r2, [r3, #8]	@ movhi
	bx	lr
.L124:
	.align	2
.L123:
	.word	fish
	.word	shadowOAM
	.size	drawFish, .-drawFish
	.align	2
	.global	updateKitty1
	.syntax unified
	.arm
	.fpu softvfp
	.type	updateKitty1, %function
updateKitty1:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 8
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, lr}
	ldr	r3, .L155
	ldr	r4, [r3]
	cmp	r4, #0
	sub	sp, sp, #12
	bne	.L128
	ldr	ip, [r0]
	mov	r2, r4
	mov	lr, #1
	ldr	r3, .L155+4
	add	ip, ip, #18
	b	.L129
.L127:
	add	r2, r2, #1
	cmp	r2, #23
	str	lr, [sp, #4]
	add	r3, r3, #60
	beq	.L128
.L129:
	ldr	r1, [r3, #-4]
	cmp	ip, r1
	bne	.L127
	ldr	r5, [r0, #4]
	ldr	r1, [r3]
	cmp	r5, r1
	bne	.L127
	mov	r3, #0
	str	r2, [sp]
	str	r3, [sp, #4]
.L128:
	ldr	r3, [sp, #4]
	cmp	r3, #1
	moveq	r3, #0
	ldr	r5, .L155+8
	streq	r3, [r0, #48]
	mov	r3, r5
	add	ip, r5, #1376
	add	ip, ip, #4
.L132:
	ldr	r2, [r3, #48]
	cmp	r2, #0
	bne	.L131
	ldr	r1, [r0]
	ldr	lr, [r3]
	add	r1, r1, #18
	cmp	r1, lr
	bne	.L131
	ldr	r1, [r3, #4]
	ldr	lr, [r0, #4]
	cmp	lr, r1
	streq	r2, [r0, #48]
.L131:
	add	r3, r3, #60
	cmp	ip, r3
	bne	.L132
	ldr	r3, .L155+12
	ldrh	r3, [r3]
	tst	r3, #32
	beq	.L133
	ldr	r2, .L155+16
	ldrh	r2, [r2]
	ands	r2, r2, #32
	beq	.L152
.L133:
	tst	r3, #16
	beq	.L135
	ldr	r2, .L155+16
	ldrh	r2, [r2]
	ands	r2, r2, #16
	beq	.L153
.L135:
	tst	r3, #64
	beq	.L138
	ldr	r2, .L155+16
	ldrh	r2, [r2]
	ands	r2, r2, #64
	beq	.L154
.L138:
	tst	r3, #128
	beq	.L125
	ldr	r3, .L155+16
	ldrh	r3, [r3]
	ands	r3, r3, #128
	bne	.L125
	ldr	r2, [sp]
	ldr	r1, [r0]
	ldr	ip, [r0, #8]
	rsb	r2, r2, r2, lsl #4
	cmp	r4, #0
	add	r5, r5, r2, lsl #2
	add	r2, r1, ip
	str	r2, [r0]
	ldreq	r2, .L155+20
	str	r3, [r5, #48]
	ldreq	r3, [r2]
	subeq	r3, r3, #1
	streq	r3, [r2]
.L125:
	add	sp, sp, #12
	@ sp needed
	pop	{r4, r5, lr}
	bx	lr
.L154:
	ldr	r1, [sp]
	ldr	ip, [r0]
	ldr	lr, [r0, #8]
	rsb	r1, r1, r1, lsl #4
	cmp	r4, #0
	add	r1, r5, r1, lsl #2
	sub	ip, ip, lr
	str	ip, [r0]
	str	r2, [r1, #48]
	ldreq	r1, .L155+20
	ldreq	r2, [r1]
	subeq	r2, r2, #1
	streq	r2, [r1]
	b	.L138
.L153:
	ldr	r1, [sp]
	ldr	ip, [r0, #4]
	ldr	lr, [r0, #12]
	rsb	r1, r1, r1, lsl #4
	cmp	r4, #0
	add	r1, r5, r1, lsl #2
	add	ip, ip, lr
	str	ip, [r0, #4]
	str	r2, [r1, #48]
	ldreq	r1, .L155+20
	ldreq	r2, [r1]
	subeq	r2, r2, #1
	streq	r2, [r1]
	mov	r2, #0
	str	r2, [r0, #56]
	b	.L135
.L152:
	ldr	r1, [sp]
	ldr	ip, [r0, #4]
	ldr	lr, [r0, #12]
	rsb	r1, r1, r1, lsl #4
	cmp	r4, #0
	add	r1, r5, r1, lsl #2
	sub	ip, ip, lr
	str	ip, [r0, #4]
	str	r2, [r1, #48]
	ldreq	r1, .L155+20
	ldreq	r2, [r1]
	subeq	r2, r2, #1
	streq	r2, [r1]
	mov	r2, #1
	str	r2, [r0, #56]
	b	.L133
.L156:
	.align	2
.L155:
	.word	cheat
	.word	boxes+4
	.word	boxes
	.word	oldButtons
	.word	buttons
	.word	boxesRemaining
	.size	updateKitty1, .-updateKitty1
	.align	2
	.global	updateLevel1
	.syntax unified
	.arm
	.fpu softvfp
	.type	updateLevel1, %function
updateLevel1:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	ldr	r0, .L158
	b	updateKitty1
.L159:
	.align	2
.L158:
	.word	kitty
	.size	updateLevel1, .-updateLevel1
	.align	2
	.global	updateKitty2
	.syntax unified
	.arm
	.fpu softvfp
	.type	updateKitty2, %function
updateKitty2:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 8
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, lr}
	ldr	r3, .L190
	ldr	r4, [r3]
	cmp	r4, #0
	sub	sp, sp, #12
	bne	.L163
	ldr	ip, [r0]
	mov	r2, r4
	mov	lr, #1
	ldr	r3, .L190+4
	add	ip, ip, #18
	b	.L164
.L162:
	add	r2, r2, #1
	cmp	r2, #20
	str	lr, [sp, #4]
	add	r3, r3, #60
	beq	.L163
.L164:
	ldr	r1, [r3, #-4]
	cmp	ip, r1
	bne	.L162
	ldr	r5, [r0, #4]
	ldr	r1, [r3]
	cmp	r5, r1
	bne	.L162
	mov	r3, #0
	str	r2, [sp]
	str	r3, [sp, #4]
.L163:
	ldr	r3, [sp, #4]
	cmp	r3, #1
	moveq	r3, #0
	ldr	r5, .L190+8
	streq	r3, [r0, #48]
	mov	r3, r5
	add	ip, r5, #1200
.L167:
	ldr	r2, [r3, #48]
	cmp	r2, #0
	bne	.L166
	ldr	r1, [r0]
	ldr	lr, [r3]
	add	r1, r1, #18
	cmp	r1, lr
	bne	.L166
	ldr	r1, [r3, #4]
	ldr	lr, [r0, #4]
	cmp	lr, r1
	streq	r2, [r0, #48]
.L166:
	add	r3, r3, #60
	cmp	ip, r3
	bne	.L167
	ldr	r3, .L190+12
	ldrh	r3, [r3]
	tst	r3, #32
	beq	.L168
	ldr	r2, .L190+16
	ldrh	r2, [r2]
	ands	r2, r2, #32
	beq	.L187
.L168:
	tst	r3, #16
	beq	.L170
	ldr	r2, .L190+16
	ldrh	r2, [r2]
	ands	r2, r2, #16
	beq	.L188
.L170:
	tst	r3, #64
	beq	.L173
	ldr	r2, .L190+16
	ldrh	r2, [r2]
	ands	r2, r2, #64
	beq	.L189
.L173:
	tst	r3, #128
	beq	.L160
	ldr	r3, .L190+16
	ldrh	r3, [r3]
	ands	r3, r3, #128
	bne	.L160
	ldr	r2, [sp]
	ldr	r1, [r0]
	ldr	ip, [r0, #8]
	rsb	r2, r2, r2, lsl #4
	cmp	r4, #0
	add	r5, r5, r2, lsl #2
	add	r2, r1, ip
	str	r2, [r0]
	ldreq	r2, .L190+20
	str	r3, [r5, #48]
	ldreq	r3, [r2]
	subeq	r3, r3, #1
	streq	r3, [r2]
.L160:
	add	sp, sp, #12
	@ sp needed
	pop	{r4, r5, lr}
	bx	lr
.L189:
	ldr	r1, [sp]
	ldr	ip, [r0]
	ldr	lr, [r0, #8]
	rsb	r1, r1, r1, lsl #4
	cmp	r4, #0
	add	r1, r5, r1, lsl #2
	sub	ip, ip, lr
	str	ip, [r0]
	str	r2, [r1, #48]
	ldreq	r1, .L190+20
	ldreq	r2, [r1]
	subeq	r2, r2, #1
	streq	r2, [r1]
	b	.L173
.L188:
	ldr	r1, [sp]
	ldr	ip, [r0, #4]
	ldr	lr, [r0, #12]
	rsb	r1, r1, r1, lsl #4
	cmp	r4, #0
	add	r1, r5, r1, lsl #2
	add	ip, ip, lr
	str	ip, [r0, #4]
	str	r2, [r1, #48]
	ldreq	r1, .L190+20
	ldreq	r2, [r1]
	subeq	r2, r2, #1
	streq	r2, [r1]
	mov	r2, #0
	str	r2, [r0, #56]
	b	.L170
.L187:
	ldr	r1, [sp]
	ldr	ip, [r0, #4]
	ldr	lr, [r0, #12]
	rsb	r1, r1, r1, lsl #4
	cmp	r4, #0
	add	r1, r5, r1, lsl #2
	sub	ip, ip, lr
	str	ip, [r0, #4]
	str	r2, [r1, #48]
	ldreq	r1, .L190+20
	ldreq	r2, [r1]
	subeq	r2, r2, #1
	streq	r2, [r1]
	mov	r2, #1
	str	r2, [r0, #56]
	b	.L168
.L191:
	.align	2
.L190:
	.word	cheat
	.word	boxes2+4
	.word	boxes2
	.word	oldButtons
	.word	buttons
	.word	boxesRemaining
	.size	updateKitty2, .-updateKitty2
	.align	2
	.global	updateLevel2
	.syntax unified
	.arm
	.fpu softvfp
	.type	updateLevel2, %function
updateLevel2:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	ldr	r0, .L193
	b	updateKitty2
.L194:
	.align	2
.L193:
	.word	kitty
	.size	updateLevel2, .-updateLevel2
	.align	2
	.global	updateKitty3
	.syntax unified
	.arm
	.fpu softvfp
	.type	updateKitty3, %function
updateKitty3:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 8
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, lr}
	ldr	r3, .L225
	ldr	r4, [r3]
	cmp	r4, #0
	sub	sp, sp, #12
	bne	.L198
	ldr	ip, [r0]
	mov	r2, r4
	mov	lr, #1
	ldr	r3, .L225+4
	add	ip, ip, #18
	b	.L199
.L197:
	add	r2, r2, #1
	cmp	r2, #22
	str	lr, [sp, #4]
	add	r3, r3, #60
	beq	.L198
.L199:
	ldr	r1, [r3, #-4]
	cmp	ip, r1
	bne	.L197
	ldr	r5, [r0, #4]
	ldr	r1, [r3]
	cmp	r5, r1
	bne	.L197
	mov	r3, #0
	str	r2, [sp]
	str	r3, [sp, #4]
.L198:
	ldr	r3, [sp, #4]
	cmp	r3, #1
	moveq	r3, #0
	ldr	r5, .L225+8
	streq	r3, [r0, #48]
	mov	r3, r5
	add	ip, r5, #1312
	add	ip, ip, #8
.L202:
	ldr	r2, [r3, #48]
	cmp	r2, #0
	bne	.L201
	ldr	r1, [r0]
	ldr	lr, [r3]
	add	r1, r1, #18
	cmp	r1, lr
	bne	.L201
	ldr	r1, [r3, #4]
	ldr	lr, [r0, #4]
	cmp	lr, r1
	streq	r2, [r0, #48]
.L201:
	add	r3, r3, #60
	cmp	ip, r3
	bne	.L202
	ldr	r3, .L225+12
	ldrh	r3, [r3]
	tst	r3, #32
	beq	.L203
	ldr	r2, .L225+16
	ldrh	r2, [r2]
	ands	r2, r2, #32
	beq	.L222
.L203:
	tst	r3, #16
	beq	.L205
	ldr	r2, .L225+16
	ldrh	r2, [r2]
	ands	r2, r2, #16
	beq	.L223
.L205:
	tst	r3, #64
	beq	.L208
	ldr	r2, .L225+16
	ldrh	r2, [r2]
	ands	r2, r2, #64
	beq	.L224
.L208:
	tst	r3, #128
	beq	.L195
	ldr	r3, .L225+16
	ldrh	r3, [r3]
	ands	r3, r3, #128
	bne	.L195
	ldr	r2, [sp]
	ldr	r1, [r0]
	ldr	ip, [r0, #8]
	rsb	r2, r2, r2, lsl #4
	cmp	r4, #0
	add	r5, r5, r2, lsl #2
	add	r2, r1, ip
	str	r2, [r0]
	ldreq	r2, .L225+20
	str	r3, [r5, #48]
	ldreq	r3, [r2]
	subeq	r3, r3, #1
	streq	r3, [r2]
.L195:
	add	sp, sp, #12
	@ sp needed
	pop	{r4, r5, lr}
	bx	lr
.L224:
	ldr	r1, [sp]
	ldr	ip, [r0]
	ldr	lr, [r0, #8]
	rsb	r1, r1, r1, lsl #4
	cmp	r4, #0
	add	r1, r5, r1, lsl #2
	sub	ip, ip, lr
	str	ip, [r0]
	str	r2, [r1, #48]
	ldreq	r1, .L225+20
	ldreq	r2, [r1]
	subeq	r2, r2, #1
	streq	r2, [r1]
	b	.L208
.L223:
	ldr	r1, [sp]
	ldr	ip, [r0, #4]
	ldr	lr, [r0, #12]
	rsb	r1, r1, r1, lsl #4
	cmp	r4, #0
	add	r1, r5, r1, lsl #2
	add	ip, ip, lr
	str	ip, [r0, #4]
	str	r2, [r1, #48]
	ldreq	r1, .L225+20
	ldreq	r2, [r1]
	subeq	r2, r2, #1
	streq	r2, [r1]
	mov	r2, #0
	str	r2, [r0, #56]
	b	.L205
.L222:
	ldr	r1, [sp]
	ldr	ip, [r0, #4]
	ldr	lr, [r0, #12]
	rsb	r1, r1, r1, lsl #4
	cmp	r4, #0
	add	r1, r5, r1, lsl #2
	sub	ip, ip, lr
	str	ip, [r0, #4]
	str	r2, [r1, #48]
	ldreq	r1, .L225+20
	ldreq	r2, [r1]
	subeq	r2, r2, #1
	streq	r2, [r1]
	mov	r2, #1
	str	r2, [r0, #56]
	b	.L203
.L226:
	.align	2
.L225:
	.word	cheat
	.word	boxes3+4
	.word	boxes3
	.word	oldButtons
	.word	buttons
	.word	boxesRemaining
	.size	updateKitty3, .-updateKitty3
	.align	2
	.global	updateLevel3
	.syntax unified
	.arm
	.fpu softvfp
	.type	updateLevel3, %function
updateLevel3:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	ldr	r0, .L228
	b	updateKitty3
.L229:
	.align	2
.L228:
	.word	kitty
	.size	updateLevel3, .-updateLevel3
	.align	2
	.global	collision
	.syntax unified
	.arm
	.fpu softvfp
	.type	collision, %function
collision:
	@ Function supports interworking.
	@ args = 16, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	ldr	ip, [sp]
	add	r2, r0, r2
	cmp	r2, ip
	blt	.L234
	ldr	r2, [sp, #8]
	add	ip, ip, r2
	cmp	ip, r0
	blt	.L234
	ldr	r2, [sp, #4]
	add	r3, r1, r3
	cmp	r3, r2
	blt	.L234
	mov	r3, r2
	ldr	r2, [sp, #12]
	add	r0, r3, r2
	cmp	r0, r1
	movlt	r0, #0
	movge	r0, #1
	bx	lr
.L234:
	mov	r0, #0
	bx	lr
	.size	collision, .-collision
	.comm	counter,4,4
	.comm	cheat,4,4
	.comm	shadowOAM,1024,4
	.comm	fish,60,4
	.comm	kitty,60,4
	.comm	numberOfPets,4,4
	.comm	boxesRemaining,4,4
	.comm	boxes3,1320,4
	.comm	boxes2,1200,4
	.comm	boxes,1380,4
	.comm	soundB,32,4
	.comm	soundA,32,4
	.ident	"GCC: (devkitARM release 47) 7.1.0"
