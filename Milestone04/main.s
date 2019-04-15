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
	.file	"main.c"
	.text
	.align	2
	.global	goToStart
	.syntax unified
	.arm
	.fpu softvfp
	.type	goToStart, %function
goToStart:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, r7, r8, lr}
	mov	r2, #67108864
	mov	r5, #0
	ldr	r8, .L4
	ldr	r7, .L4+4
	ldr	r3, .L4+8
	ldr	r4, .L4+12
	str	r5, [r3]
	mov	r1, r7
	strh	r5, [r2, #16]	@ movhi
	mov	r3, r8
	strh	r5, [r2, #20]	@ movhi
	ldr	r6, .L4+16
	mov	r2, #100663296
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r3, r8
	mov	r1, r7
	ldr	r2, .L4+20
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r1, r6
	mov	r3, #1024
	ldr	r2, .L4+24
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r1, r6
	mov	r3, #1024
	ldr	r2, .L4+28
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r2, #83886080
	ldr	r1, .L4+32
	mov	r0, #3
	mov	r3, #256
	mov	lr, pc
	bx	r4
	ldr	r3, .L4+36
	mov	lr, pc
	bx	r3
	ldr	r6, .L4+40
	ldr	r2, .L4+44
	ldr	r1, .L4+48
	ldr	r0, .L4+52
	mov	r3, #1
	mov	lr, pc
	bx	r6
	ldr	r3, .L4+56
	mov	lr, pc
	bx	r3
	mov	r3, #512
	mov	r2, #117440512
	ldr	r1, .L4+60
	mov	r0, #3
	mov	lr, pc
	bx	r4
	ldr	r3, .L4+64
	mov	lr, pc
	bx	r3
	ldr	r3, .L4+68
	str	r5, [r3]
	pop	{r4, r5, r6, r7, r8, lr}
	bx	lr
.L5:
	.align	2
.L4:
	.word	7008
	.word	startTiles
	.word	cheat
	.word	DMANow
	.word	startMap
	.word	100696064
	.word	100720640
	.word	100724736
	.word	startPal
	.word	stopSound
	.word	playSoundA
	.word	11025
	.word	495736
	.word	mainMusic
	.word	hideSprites
	.word	shadowOAM
	.word	waitForVBlank
	.word	state
	.size	goToStart, .-goToStart
	.align	2
	.global	initialize
	.syntax unified
	.arm
	.fpu softvfp
	.type	initialize, %function
initialize:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	mov	r3, #67108864
	mov	r2, #7296
	push	{r4, lr}
	mov	lr, #4864
	mov	r1, #0
	ldr	r0, .L8
	strh	r2, [r3, #8]	@ movhi
	strh	r0, [r3, #10]	@ movhi
	ldr	r2, .L8+4
	ldr	r0, .L8+8
	ldrh	ip, [r2, #48]
	ldr	r2, .L8+12
	strh	lr, [r3]	@ movhi
	ldr	r3, .L8+16
	strh	ip, [r0]	@ movhi
	strh	r1, [r2]	@ movhi
	mov	lr, pc
	bx	r3
	ldr	r3, .L8+20
	mov	lr, pc
	bx	r3
	pop	{r4, lr}
	b	goToStart
.L9:
	.align	2
.L8:
	.word	7816
	.word	67109120
	.word	buttons
	.word	oldButtons
	.word	setupSounds
	.word	setupInterrupts
	.size	initialize, .-initialize
	.align	2
	.global	goToInstructions
	.syntax unified
	.arm
	.fpu softvfp
	.type	goToInstructions, %function
goToInstructions:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	mov	r2, #67108864
	mov	r1, #0
	push	{r4, r5, r6, r7, r8, lr}
	ldr	r7, .L12
	ldr	r6, .L12+4
	ldr	r4, .L12+8
	strh	r1, [r2, #16]	@ movhi
	mov	r3, r7
	strh	r1, [r2, #20]	@ movhi
	ldr	r5, .L12+12
	mov	r1, r6
	mov	r2, #100663296
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r3, r7
	mov	r1, r6
	ldr	r2, .L12+16
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r1, r5
	mov	r3, #1024
	ldr	r2, .L12+20
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r1, r5
	mov	r3, #1024
	ldr	r2, .L12+24
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r2, #83886080
	ldr	r1, .L12+28
	mov	r0, #3
	mov	r3, #256
	mov	lr, pc
	bx	r4
	ldr	r3, .L12+32
	mov	lr, pc
	bx	r3
	mov	r2, #117440512
	mov	r3, #512
	ldr	r1, .L12+36
	mov	r0, #3
	mov	lr, pc
	bx	r4
	ldr	r3, .L12+40
	mov	lr, pc
	bx	r3
	mov	r2, #1
	ldr	r3, .L12+44
	pop	{r4, r5, r6, r7, r8, lr}
	str	r2, [r3]
	bx	lr
.L13:
	.align	2
.L12:
	.word	9760
	.word	instructionsTiles
	.word	DMANow
	.word	instructionsMap
	.word	100696064
	.word	100720640
	.word	100724736
	.word	instructionsPal
	.word	hideSprites
	.word	shadowOAM
	.word	waitForVBlank
	.word	state
	.size	goToInstructions, .-goToInstructions
	.align	2
	.global	goToLevel1Intro
	.syntax unified
	.arm
	.fpu softvfp
	.type	goToLevel1Intro, %function
goToLevel1Intro:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	mov	r3, #67108864
	mov	r2, #0
	push	{r4, r5, r6, lr}
	ldr	r6, .L16
	ldr	r4, .L16+4
	strh	r2, [r3, #16]	@ movhi
	mov	r1, r6
	strh	r2, [r3, #20]	@ movhi
	ldr	r5, .L16+8
	mov	r3, #9344
	mov	r2, #100663296
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r1, r6
	mov	r3, #9344
	ldr	r2, .L16+12
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r1, r5
	mov	r3, #1024
	ldr	r2, .L16+16
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r1, r5
	mov	r3, #1024
	ldr	r2, .L16+20
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r2, #83886080
	ldr	r1, .L16+24
	mov	r0, #3
	mov	r3, #256
	mov	lr, pc
	bx	r4
	ldr	r3, .L16+28
	mov	lr, pc
	bx	r3
	ldr	r5, .L16+32
	ldr	r2, .L16+36
	ldr	r1, .L16+40
	ldr	r0, .L16+44
	mov	r3, #1
	mov	lr, pc
	bx	r5
	ldr	r3, .L16+48
	mov	lr, pc
	bx	r3
	mov	r2, #117440512
	mov	r3, #512
	ldr	r1, .L16+52
	mov	r0, #3
	mov	lr, pc
	bx	r4
	ldr	r3, .L16+56
	mov	lr, pc
	bx	r3
	mov	r2, #3
	ldr	r3, .L16+60
	pop	{r4, r5, r6, lr}
	str	r2, [r3]
	bx	lr
.L17:
	.align	2
.L16:
	.word	level1Tiles
	.word	DMANow
	.word	level1Map
	.word	100696064
	.word	100720640
	.word	100724736
	.word	level1Pal
	.word	stopSound
	.word	playSoundA
	.word	11025
	.word	396725
	.word	gameMusic
	.word	hideSprites
	.word	shadowOAM
	.word	waitForVBlank
	.word	state
	.size	goToLevel1Intro, .-goToLevel1Intro
	.align	2
	.global	startState
	.syntax unified
	.arm
	.fpu softvfp
	.type	startState, %function
startState:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	ldr	r3, .L32
	ldr	r2, .L32+4
	ldr	r0, [r3]
	ldrh	r2, [r2]
	add	r0, r0, #1
	tst	r2, #1
	str	r0, [r3]
	beq	.L19
	ldr	r3, .L32+8
	ldrh	r3, [r3]
	tst	r3, #1
	beq	.L31
.L19:
	tst	r2, #2
	bxeq	lr
	ldr	r3, .L32+8
	ldrh	r3, [r3]
	tst	r3, #2
	bxne	lr
	push	{r4, lr}
	ldr	r3, .L32+12
	mov	lr, pc
	bx	r3
	bl	goToLevel1Intro
	ldr	r3, .L32+16
	mov	lr, pc
	bx	r3
	pop	{r4, lr}
	bx	lr
.L31:
	b	goToInstructions
.L33:
	.align	2
.L32:
	.word	seed
	.word	oldButtons
	.word	buttons
	.word	srand
	.word	initLevel1
	.size	startState, .-startState
	.align	2
	.global	insturctionsState
	.syntax unified
	.arm
	.fpu softvfp
	.type	insturctionsState, %function
insturctionsState:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, lr}
	ldr	r4, .L46
	ldr	r3, [r4]
	ldr	r5, .L46+4
	add	r3, r3, #1
	ldr	r2, .L46+8
	str	r3, [r4]
	mov	lr, pc
	bx	r2
	ldrh	r3, [r5]
	tst	r3, #8
	beq	.L35
	ldr	r2, .L46+12
	ldrh	r2, [r2]
	tst	r2, #8
	beq	.L44
.L35:
	tst	r3, #4
	beq	.L34
	ldr	r3, .L46+12
	ldrh	r3, [r3]
	tst	r3, #4
	beq	.L45
.L34:
	pop	{r4, r5, r6, lr}
	bx	lr
.L45:
	pop	{r4, r5, r6, lr}
	b	goToStart
.L44:
	ldr	r0, [r4]
	ldr	r3, .L46+16
	mov	lr, pc
	bx	r3
	bl	goToLevel1Intro
	ldr	r3, .L46+20
	mov	lr, pc
	bx	r3
	ldrh	r3, [r5]
	b	.L35
.L47:
	.align	2
.L46:
	.word	seed
	.word	oldButtons
	.word	waitForVBlank
	.word	buttons
	.word	srand
	.word	initLevel1
	.size	insturctionsState, .-insturctionsState
	.align	2
	.global	goToLevel1
	.syntax unified
	.arm
	.fpu softvfp
	.type	goToLevel1, %function
goToLevel1:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, lr}
	mov	lr, #1
	ldr	ip, .L50
	ldr	r4, .L50+4
	ldr	r3, .L50+8
	mov	r2, #100663296
	ldr	r1, .L50+12
	mov	r0, #3
	str	lr, [ip]
	mov	lr, pc
	bx	r4
	mov	r3, #1024
	ldr	r2, .L50+16
	ldr	r1, .L50+20
	mov	r0, #3
	mov	lr, pc
	bx	r4
	ldr	r3, .L50+24
	ldr	r2, .L50+28
	ldr	r1, .L50+32
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r3, #1024
	ldr	r2, .L50+36
	ldr	r1, .L50+40
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r3, #256
	mov	r2, #83886080
	ldr	r1, .L50+44
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r3, #512
	mov	r2, #117440512
	ldr	r1, .L50+48
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r2, #2
	ldr	r3, .L50+52
	pop	{r4, lr}
	str	r2, [r3]
	bx	lr
.L51:
	.align	2
.L50:
	.word	.LANCHOR0
	.word	DMANow
	.word	7520
	.word	cloudBGTiles
	.word	100720640
	.word	cloudBGMap
	.word	7840
	.word	100696064
	.word	pawBGTiles
	.word	100724736
	.word	pawBGMap
	.word	pawBGPal
	.word	shadowOAM
	.word	state
	.size	goToLevel1, .-goToLevel1
	.align	2
	.global	level1IntroState
	.syntax unified
	.arm
	.fpu softvfp
	.type	level1IntroState, %function
level1IntroState:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 8
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	mov	r3, #0
	sub	sp, sp, #8
	str	r3, [sp, #4]
	ldr	r3, [sp, #4]
	ldr	r2, .L57
	cmp	r3, r2
	bgt	.L53
.L54:
	ldr	r3, [sp, #4]
	add	r3, r3, #1
	str	r3, [sp, #4]
	ldr	r3, [sp, #4]
	cmp	r3, r2
	ble	.L54
.L53:
	add	sp, sp, #8
	@ sp needed
	b	goToLevel1
.L58:
	.align	2
.L57:
	.word	499999
	.size	level1IntroState, .-level1IntroState
	.align	2
	.global	goToLevel2Intro
	.syntax unified
	.arm
	.fpu softvfp
	.type	goToLevel2Intro, %function
goToLevel2Intro:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	mov	r2, #67108864
	mov	r1, #0
	push	{r4, r5, r6, r7, r8, lr}
	ldr	r7, .L61
	ldr	r6, .L61+4
	ldr	r4, .L61+8
	strh	r1, [r2, #16]	@ movhi
	mov	r3, r7
	strh	r1, [r2, #20]	@ movhi
	ldr	r5, .L61+12
	mov	r1, r6
	mov	r2, #100663296
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r3, r7
	mov	r1, r6
	ldr	r2, .L61+16
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r1, r5
	mov	r3, #1024
	ldr	r2, .L61+20
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r1, r5
	mov	r3, #1024
	ldr	r2, .L61+24
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r2, #83886080
	ldr	r1, .L61+28
	mov	r0, #3
	mov	r3, #256
	mov	lr, pc
	bx	r4
	ldr	r3, .L61+32
	mov	lr, pc
	bx	r3
	mov	r2, #117440512
	mov	r3, #512
	ldr	r1, .L61+36
	mov	r0, #3
	mov	lr, pc
	bx	r4
	ldr	r3, .L61+40
	mov	lr, pc
	bx	r3
	mov	r2, #5
	ldr	r3, .L61+44
	pop	{r4, r5, r6, r7, r8, lr}
	str	r2, [r3]
	bx	lr
.L62:
	.align	2
.L61:
	.word	9568
	.word	level2Tiles
	.word	DMANow
	.word	level2Map
	.word	100696064
	.word	100720640
	.word	100724736
	.word	level1Pal
	.word	hideSprites
	.word	shadowOAM
	.word	waitForVBlank
	.word	state
	.size	goToLevel2Intro, .-goToLevel2Intro
	.align	2
	.global	goToLevel2
	.syntax unified
	.arm
	.fpu softvfp
	.type	goToLevel2, %function
goToLevel2:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, lr}
	mov	lr, #2
	ldr	ip, .L65
	ldr	r4, .L65+4
	ldr	r3, .L65+8
	mov	r2, #100663296
	ldr	r1, .L65+12
	mov	r0, #3
	str	lr, [ip]
	mov	lr, pc
	bx	r4
	mov	r3, #1024
	ldr	r2, .L65+16
	ldr	r1, .L65+20
	mov	r0, #3
	mov	lr, pc
	bx	r4
	ldr	r3, .L65+24
	ldr	r2, .L65+28
	ldr	r1, .L65+32
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r3, #1024
	ldr	r2, .L65+36
	ldr	r1, .L65+40
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r3, #256
	mov	r2, #83886080
	ldr	r1, .L65+44
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r3, #512
	mov	r2, #117440512
	ldr	r1, .L65+48
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r2, #4
	ldr	r3, .L65+52
	pop	{r4, lr}
	str	r2, [r3]
	bx	lr
.L66:
	.align	2
.L65:
	.word	.LANCHOR0
	.word	DMANow
	.word	7520
	.word	cloudBGTiles
	.word	100720640
	.word	cloudBGMap
	.word	7840
	.word	100696064
	.word	pawBGTiles
	.word	100724736
	.word	pawBGMap
	.word	pawBGPal
	.word	shadowOAM
	.word	state
	.size	goToLevel2, .-goToLevel2
	.align	2
	.global	level2IntroState
	.syntax unified
	.arm
	.fpu softvfp
	.type	level2IntroState, %function
level2IntroState:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 8
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	mov	r3, #0
	sub	sp, sp, #8
	str	r3, [sp, #4]
	ldr	r3, [sp, #4]
	ldr	r2, .L72
	cmp	r3, r2
	bgt	.L68
.L69:
	ldr	r3, [sp, #4]
	add	r3, r3, #1
	str	r3, [sp, #4]
	ldr	r3, [sp, #4]
	cmp	r3, r2
	ble	.L69
.L68:
	add	sp, sp, #8
	@ sp needed
	b	goToLevel2
.L73:
	.align	2
.L72:
	.word	499999
	.size	level2IntroState, .-level2IntroState
	.align	2
	.global	goToLevel3Intro
	.syntax unified
	.arm
	.fpu softvfp
	.type	goToLevel3Intro, %function
goToLevel3Intro:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	mov	r3, #67108864
	mov	r2, #0
	push	{r4, r5, r6, lr}
	ldr	r6, .L76
	ldr	r4, .L76+4
	strh	r2, [r3, #16]	@ movhi
	mov	r1, r6
	strh	r2, [r3, #20]	@ movhi
	ldr	r5, .L76+8
	mov	r3, #9536
	mov	r2, #100663296
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r1, r6
	mov	r3, #9536
	ldr	r2, .L76+12
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r1, r5
	mov	r3, #1024
	ldr	r2, .L76+16
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r1, r5
	mov	r3, #1024
	ldr	r2, .L76+20
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r2, #83886080
	ldr	r1, .L76+24
	mov	r0, #3
	mov	r3, #256
	mov	lr, pc
	bx	r4
	ldr	r3, .L76+28
	mov	lr, pc
	bx	r3
	mov	r2, #117440512
	mov	r3, #512
	ldr	r1, .L76+32
	mov	r0, #3
	mov	lr, pc
	bx	r4
	ldr	r3, .L76+36
	mov	lr, pc
	bx	r3
	mov	r2, #7
	ldr	r3, .L76+40
	pop	{r4, r5, r6, lr}
	str	r2, [r3]
	bx	lr
.L77:
	.align	2
.L76:
	.word	level3Tiles
	.word	DMANow
	.word	level3Map
	.word	100696064
	.word	100720640
	.word	100724736
	.word	level1Pal
	.word	hideSprites
	.word	shadowOAM
	.word	waitForVBlank
	.word	state
	.size	goToLevel3Intro, .-goToLevel3Intro
	.align	2
	.global	goToLevel3
	.syntax unified
	.arm
	.fpu softvfp
	.type	goToLevel3, %function
goToLevel3:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, lr}
	mov	r4, #3
	ldr	ip, .L80
	ldr	r5, .L80+4
	mov	r0, r4
	ldr	r3, .L80+8
	mov	r2, #100663296
	ldr	r1, .L80+12
	str	r4, [ip]
	mov	lr, pc
	bx	r5
	mov	r0, r4
	mov	r3, #1024
	ldr	r2, .L80+16
	ldr	r1, .L80+20
	mov	lr, pc
	bx	r5
	mov	r0, r4
	ldr	r3, .L80+24
	ldr	r2, .L80+28
	ldr	r1, .L80+32
	mov	lr, pc
	bx	r5
	mov	r0, r4
	mov	r3, #1024
	ldr	r2, .L80+36
	ldr	r1, .L80+40
	mov	lr, pc
	bx	r5
	mov	r0, r4
	mov	r3, #256
	mov	r2, #83886080
	ldr	r1, .L80+44
	mov	lr, pc
	bx	r5
	mov	r0, r4
	mov	r3, #512
	mov	r2, #117440512
	ldr	r1, .L80+48
	mov	lr, pc
	bx	r5
	mov	r2, #6
	ldr	r3, .L80+52
	pop	{r4, r5, r6, lr}
	str	r2, [r3]
	bx	lr
.L81:
	.align	2
.L80:
	.word	.LANCHOR0
	.word	DMANow
	.word	7520
	.word	cloudBGTiles
	.word	100720640
	.word	cloudBGMap
	.word	7840
	.word	100696064
	.word	pawBGTiles
	.word	100724736
	.word	pawBGMap
	.word	pawBGPal
	.word	shadowOAM
	.word	state
	.size	goToLevel3, .-goToLevel3
	.align	2
	.global	level3IntroState
	.syntax unified
	.arm
	.fpu softvfp
	.type	level3IntroState, %function
level3IntroState:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 8
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	mov	r3, #0
	sub	sp, sp, #8
	str	r3, [sp, #4]
	ldr	r3, [sp, #4]
	ldr	r2, .L87
	cmp	r3, r2
	bgt	.L83
.L84:
	ldr	r3, [sp, #4]
	add	r3, r3, #1
	str	r3, [sp, #4]
	ldr	r3, [sp, #4]
	cmp	r3, r2
	ble	.L84
.L83:
	add	sp, sp, #8
	@ sp needed
	b	goToLevel3
.L88:
	.align	2
.L87:
	.word	499999
	.size	level3IntroState, .-level3IntroState
	.align	2
	.global	pauseState
	.syntax unified
	.arm
	.fpu softvfp
	.type	pauseState, %function
pauseState:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	ldr	r3, .L108
	push	{r4, r5, r6, lr}
	mov	lr, pc
	bx	r3
	ldr	r3, .L108+4
	ldrh	r3, [r3]
	tst	r3, #8
	beq	.L90
	ldr	r2, .L108+8
	ldrh	r2, [r2]
	ands	r2, r2, #8
	beq	.L104
.L90:
	tst	r3, #4
	beq	.L95
	ldr	r3, .L108+8
	ldrh	r3, [r3]
	ands	r3, r3, #4
	beq	.L105
.L95:
	ldr	r1, .L108+12
	ldr	r3, [r1]
	ldr	r2, .L108+16
	add	r3, r3, #1
	smull	r4, r5, r3, r2
	asr	r2, r3, #31
	rsb	r2, r2, r5, asr #2
	add	r2, r2, r2, lsl #2
	cmp	r3, r2, lsl #1
	str	r3, [r1]
	bne	.L89
	mov	r1, #67108864
	ldr	r0, .L108+20
	ldr	r2, [r0]
	sub	r2, r2, #1
	lsl	r3, r2, #16
	lsr	r3, r3, #16
	str	r2, [r0]
	strh	r3, [r1, #20]	@ movhi
	strh	r3, [r1, #16]	@ movhi
.L89:
	pop	{r4, r5, r6, lr}
	bx	lr
.L104:
	mov	r1, #67108864
	ldr	r3, .L108+24
	strh	r2, [r1, #20]	@ movhi
	mov	lr, pc
	bx	r3
	ldr	r3, .L108+28
	mov	lr, pc
	bx	r3
	ldr	r3, .L108+32
	ldr	r3, [r3]
	cmp	r3, #1
	beq	.L106
	cmp	r3, #2
	beq	.L107
	cmp	r3, #3
	bne	.L89
	pop	{r4, r5, r6, lr}
	b	goToLevel3
.L105:
	mov	r2, #67108864
	pop	{r4, r5, r6, lr}
	strh	r3, [r2, #20]	@ movhi
	b	goToStart
.L106:
	pop	{r4, r5, r6, lr}
	b	goToLevel1
.L107:
	pop	{r4, r5, r6, lr}
	b	goToLevel2
.L109:
	.align	2
.L108:
	.word	waitForVBlank
	.word	oldButtons
	.word	buttons
	.word	vOff
	.word	1717986919
	.word	hOff
	.word	stopSoundB
	.word	unpauseSoundA
	.word	.LANCHOR0
	.size	pauseState, .-pauseState
	.align	2
	.global	goToPause
	.syntax unified
	.arm
	.fpu softvfp
	.type	goToPause, %function
goToPause:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	mov	r2, #67108864
	mov	r1, #0
	push	{r4, r5, r6, r7, r8, lr}
	ldr	r7, .L112
	ldr	r6, .L112+4
	ldr	r4, .L112+8
	strh	r1, [r2, #16]	@ movhi
	mov	r3, r7
	strh	r1, [r2, #20]	@ movhi
	ldr	r5, .L112+12
	mov	r1, r6
	mov	r2, #100663296
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r3, r7
	mov	r1, r6
	ldr	r2, .L112+16
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r1, r5
	mov	r3, #1024
	ldr	r2, .L112+20
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r1, r5
	mov	r3, #1024
	ldr	r2, .L112+24
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r2, #83886080
	ldr	r1, .L112+28
	mov	r0, #3
	mov	r3, #256
	mov	lr, pc
	bx	r4
	ldr	r3, .L112+32
	mov	lr, pc
	bx	r3
	mov	r2, #117440512
	ldr	r1, .L112+36
	mov	r0, #3
	mov	r3, #512
	mov	lr, pc
	bx	r4
	ldr	r3, .L112+40
	mov	lr, pc
	bx	r3
	ldr	r3, .L112+44
	mov	lr, pc
	bx	r3
	ldr	r4, .L112+48
	ldr	r2, .L112+52
	mov	r3, #1
	ldr	r1, .L112+56
	ldr	r0, .L112+60
	mov	lr, pc
	bx	r4
	ldr	r3, .L112+64
	mov	lr, pc
	bx	r3
	mov	r2, #8
	ldr	r3, .L112+68
	pop	{r4, r5, r6, r7, r8, lr}
	str	r2, [r3]
	bx	lr
.L113:
	.align	2
.L112:
	.word	7968
	.word	pauseTiles
	.word	DMANow
	.word	pauseMap
	.word	100696064
	.word	100720640
	.word	100724736
	.word	pausePal
	.word	hideSprites
	.word	shadowOAM
	.word	pauseSoundA
	.word	stopSoundB
	.word	playSoundB
	.word	11025
	.word	516432
	.word	pauseMusic
	.word	waitForVBlank
	.word	state
	.size	goToPause, .-goToPause
	.align	2
	.global	winState
	.syntax unified
	.arm
	.fpu softvfp
	.type	winState, %function
winState:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	ldr	r3, .L121
	push	{r4, lr}
	mov	lr, pc
	bx	r3
	ldr	r3, .L121+4
	ldrh	r3, [r3]
	tst	r3, #8
	beq	.L114
	ldr	r3, .L121+8
	ldrh	r3, [r3]
	tst	r3, #8
	beq	.L120
.L114:
	pop	{r4, lr}
	bx	lr
.L120:
	pop	{r4, lr}
	b	goToStart
.L122:
	.align	2
.L121:
	.word	waitForVBlank
	.word	oldButtons
	.word	buttons
	.size	winState, .-winState
	.align	2
	.global	loseState
	.syntax unified
	.arm
	.fpu softvfp
	.type	loseState, %function
loseState:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	b	winState
	.size	loseState, .-loseState
	.align	2
	.global	drawScore
	.syntax unified
	.arm
	.fpu softvfp
	.type	drawScore, %function
drawScore:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	ldr	r3, .L134
	ldr	r2, .L134+4
	ldr	r3, [r3]
	smull	r0, r1, r3, r2
	asr	r2, r3, #31
	rsb	r2, r2, r1, asr #2
	add	r1, r2, r2, lsl #2
	sub	r3, r3, r1, lsl #1
	cmp	r3, #7
	str	lr, [sp, #-4]!
	mov	r1, r2
	mov	lr, #70
	lsl	r3, r3, #7
	ldr	r0, .L134+8
	ldr	ip, .L134+12
	ble	.L125
	sub	r3, r3, #1008
	strh	r3, [r0, #4]	@ movhi
	strh	lr, [r0]	@ movhi
	strh	ip, [r0, #2]	@ movhi
.L128:
	cmp	r2, #7
	subgt	r1, r2, #8
	movgt	r3, #4
	movle	r3, #3
	cmp	r1, #0
	beq	.L124
	mov	r0, #70
	ldr	r2, .L134+16
	add	r3, r3, r1, lsl #5
	ldr	r1, .L134+20
	lsl	r3, r3, #2
	strh	r3, [r2, #4]	@ movhi
	strh	r0, [r2]	@ movhi
	strh	r1, [r2, #2]	@ movhi
.L124:
	ldr	lr, [sp], #4
	bx	lr
.L125:
	add	r3, r3, #12
	strh	r3, [r0, #4]	@ movhi
	strh	lr, [r0]	@ movhi
	strh	ip, [r0, #2]	@ movhi
	b	.L128
.L135:
	.align	2
.L134:
	.word	score
	.word	1717986919
	.word	shadowOAM+800
	.word	-32563
	.word	shadowOAM+808
	.word	-32581
	.size	drawScore, .-drawScore
	.align	2
	.global	goToWin
	.syntax unified
	.arm
	.fpu softvfp
	.type	goToWin, %function
goToWin:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	mov	r2, #0
	mov	r0, #67108864
	ldr	r3, .L138
	ldr	r3, [r3]
	push	{r4, r5, r6, lr}
	ldr	ip, .L138+4
	ldr	r6, .L138+8
	ldr	r1, .L138+12
	rsb	r3, r3, #65
	str	r3, [ip]
	ldr	r4, .L138+16
	str	r2, [r1]
	ldr	r5, .L138+20
	strh	r2, [r0, #16]	@ movhi
	mov	r1, r6
	strh	r2, [r0, #20]	@ movhi
	mov	r3, #3840
	mov	r2, #100663296
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r1, r6
	mov	r3, #3840
	ldr	r2, .L138+24
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r1, r5
	mov	r3, #1024
	ldr	r2, .L138+28
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r1, r5
	mov	r3, #1024
	ldr	r2, .L138+32
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r2, #83886080
	ldr	r1, .L138+36
	mov	r0, #3
	mov	r3, #256
	mov	lr, pc
	bx	r4
	ldr	r3, .L138+40
	mov	lr, pc
	bx	r3
	bl	drawScore
	mov	r2, #117440512
	mov	r3, #512
	ldr	r1, .L138+44
	mov	r0, #3
	mov	lr, pc
	bx	r4
	ldr	r3, .L138+48
	mov	lr, pc
	bx	r3
	mov	r2, #9
	ldr	r3, .L138+52
	pop	{r4, r5, r6, lr}
	str	r2, [r3]
	bx	lr
.L139:
	.align	2
.L138:
	.word	boxesRemaining
	.word	score
	.word	winTiles
	.word	cheat
	.word	DMANow
	.word	winMap
	.word	100696064
	.word	100720640
	.word	100724736
	.word	winPal
	.word	hideSprites
	.word	shadowOAM
	.word	waitForVBlank
	.word	state
	.size	goToWin, .-goToWin
	.align	2
	.global	goToLose
	.syntax unified
	.arm
	.fpu softvfp
	.type	goToLose, %function
goToLose:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	mov	r2, #0
	mov	r0, #67108864
	ldr	r3, .L142
	ldr	r3, [r3]
	push	{r4, r5, r6, lr}
	ldr	ip, .L142+4
	ldr	r6, .L142+8
	ldr	r1, .L142+12
	rsb	r3, r3, #65
	str	r3, [ip]
	ldr	r4, .L142+16
	str	r2, [r1]
	ldr	r5, .L142+20
	strh	r2, [r0, #16]	@ movhi
	mov	r1, r6
	strh	r2, [r0, #20]	@ movhi
	mov	r3, #4000
	mov	r2, #100663296
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r1, r6
	mov	r3, #4000
	ldr	r2, .L142+24
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r1, r5
	mov	r3, #1024
	ldr	r2, .L142+28
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r1, r5
	mov	r3, #1024
	ldr	r2, .L142+32
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r2, #83886080
	ldr	r1, .L142+36
	mov	r0, #3
	mov	r3, #256
	mov	lr, pc
	bx	r4
	ldr	r3, .L142+40
	mov	lr, pc
	bx	r3
	bl	drawScore
	mov	r2, #117440512
	mov	r3, #512
	ldr	r1, .L142+44
	mov	r0, #3
	mov	lr, pc
	bx	r4
	ldr	r3, .L142+48
	mov	lr, pc
	bx	r3
	mov	r2, #10
	ldr	r3, .L142+52
	pop	{r4, r5, r6, lr}
	str	r2, [r3]
	bx	lr
.L143:
	.align	2
.L142:
	.word	boxesRemaining
	.word	score
	.word	loseTiles
	.word	cheat
	.word	DMANow
	.word	loseMap
	.word	100696064
	.word	100720640
	.word	100724736
	.word	losePal
	.word	hideSprites
	.word	shadowOAM
	.word	waitForVBlank
	.word	state
	.size	goToLose, .-goToLose
	.align	2
	.global	level1State
	.syntax unified
	.arm
	.fpu softvfp
	.type	level1State, %function
level1State:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, lr}
	ldr	r3, .L163
	mov	lr, pc
	bx	r3
	ldr	r3, .L163+4
	mov	lr, pc
	bx	r3
	ldr	r3, .L163+8
	mov	lr, pc
	bx	r3
	ldr	r4, .L163+12
	mov	r3, #512
	mov	r2, #117440512
	ldr	r1, .L163+16
	mov	r0, #3
	mov	lr, pc
	bx	r4
	ldr	r3, .L163+20
	ldrh	r3, [r3]
	tst	r3, #4
	beq	.L145
	ldr	r2, .L163+24
	ldrh	r2, [r2]
	ands	r2, r2, #4
	beq	.L159
.L145:
	tst	r3, #8
	beq	.L147
	ldr	r3, .L163+24
	ldrh	r3, [r3]
	ands	r3, r3, #8
	beq	.L160
.L147:
	ldr	r2, .L163+28
	ldr	r1, .L163+32
	ldr	r3, [r2]
	ldr	r0, [r1]
	add	r3, r3, #18
	cmp	r3, r0
	beq	.L161
.L148:
	ldr	r3, [r2, #48]
	cmp	r3, #0
	beq	.L162
	ldr	r1, .L163+36
	ldr	r3, [r1]
	ldr	r2, .L163+40
	add	r3, r3, #1
	smull	r4, r5, r3, r2
	asr	r2, r3, #31
	rsb	r2, r2, r5, asr #2
	add	r2, r2, r2, lsl #2
	cmp	r3, r2, lsl #1
	str	r3, [r1]
	bne	.L144
	mov	r0, #67108864
	ldr	r1, .L163+44
	ldr	r3, [r1]
	sub	r3, r3, #1
	lsl	r2, r3, #16
	lsr	r2, r2, #16
	str	r3, [r1]
	strh	r2, [r0, #16]	@ movhi
.L144:
	pop	{r4, r5, r6, lr}
	bx	lr
.L159:
	ldr	r1, .L163+48
	ldr	r0, [r1]
	cmp	r0, #0
	moveq	r2, #1
	str	r2, [r1]
	b	.L145
.L161:
	ldr	r3, [r2, #4]
	ldr	r1, [r1, #4]
	add	r3, r3, #7
	cmp	r3, r1
	bne	.L148
	mov	r3, #67108864
	mov	r4, #0
	ldr	r2, .L163+52
	strh	r4, [r3, #16]	@ movhi
	strh	r4, [r3, #20]	@ movhi
	mov	lr, pc
	bx	r2
	mov	r3, r4
	ldr	r2, .L163+56
	ldr	r1, .L163+60
	ldr	r0, .L163+64
	ldr	r4, .L163+68
	mov	lr, pc
	bx	r4
	bl	goToLevel2Intro
	ldr	r3, .L163+72
	mov	lr, pc
	bx	r3
	b	.L144
.L162:
	mov	r2, #67108864
	pop	{r4, r5, r6, lr}
	strh	r3, [r2, #16]	@ movhi
	strh	r3, [r2, #20]	@ movhi
	b	goToLose
.L160:
	mov	r2, #67108864
	pop	{r4, r5, r6, lr}
	strh	r3, [r2, #16]	@ movhi
	strh	r3, [r2, #20]	@ movhi
	b	goToPause
.L164:
	.align	2
.L163:
	.word	updateLevel1
	.word	drawLevel1
	.word	waitForVBlank
	.word	DMANow
	.word	shadowOAM
	.word	oldButtons
	.word	buttons
	.word	kitty
	.word	fish
	.word	vOff
	.word	1717986919
	.word	hOff
	.word	cheat
	.word	stopSoundB
	.word	11025
	.word	5258
	.word	meow
	.word	playSoundB
	.word	initLevel2
	.size	level1State, .-level1State
	.align	2
	.global	level2State
	.syntax unified
	.arm
	.fpu softvfp
	.type	level2State, %function
level2State:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, lr}
	ldr	r3, .L184
	mov	lr, pc
	bx	r3
	ldr	r3, .L184+4
	mov	lr, pc
	bx	r3
	ldr	r3, .L184+8
	mov	lr, pc
	bx	r3
	ldr	r4, .L184+12
	mov	r3, #512
	mov	r2, #117440512
	ldr	r1, .L184+16
	mov	r0, #3
	mov	lr, pc
	bx	r4
	ldr	r3, .L184+20
	ldrh	r3, [r3]
	tst	r3, #4
	beq	.L166
	ldr	r2, .L184+24
	ldrh	r2, [r2]
	ands	r2, r2, #4
	beq	.L180
.L166:
	tst	r3, #8
	beq	.L168
	ldr	r3, .L184+24
	ldrh	r3, [r3]
	ands	r3, r3, #8
	beq	.L181
.L168:
	ldr	r2, .L184+28
	ldr	r1, .L184+32
	ldr	r3, [r2]
	ldr	r0, [r1]
	add	r3, r3, #18
	cmp	r3, r0
	beq	.L182
.L169:
	ldr	r3, [r2, #48]
	cmp	r3, #0
	beq	.L183
	ldr	r1, .L184+36
	ldr	r3, [r1]
	ldr	r2, .L184+40
	add	r3, r3, #1
	smull	r4, r5, r3, r2
	asr	r2, r3, #31
	rsb	r2, r2, r5, asr #2
	add	r2, r2, r2, lsl #2
	cmp	r3, r2, lsl #1
	str	r3, [r1]
	bne	.L165
	mov	r0, #67108864
	ldr	r1, .L184+44
	ldr	r3, [r1]
	sub	r3, r3, #1
	lsl	r2, r3, #16
	lsr	r2, r2, #16
	str	r3, [r1]
	strh	r2, [r0, #16]	@ movhi
.L165:
	pop	{r4, r5, r6, lr}
	bx	lr
.L180:
	ldr	r1, .L184+48
	ldr	r0, [r1]
	cmp	r0, #0
	moveq	r2, #1
	str	r2, [r1]
	b	.L166
.L182:
	ldr	r3, [r2, #4]
	ldr	r1, [r1, #4]
	add	r3, r3, #7
	cmp	r3, r1
	bne	.L169
	mov	r3, #67108864
	mov	r4, #0
	ldr	r2, .L184+52
	strh	r4, [r3, #16]	@ movhi
	strh	r4, [r3, #20]	@ movhi
	mov	lr, pc
	bx	r2
	mov	r3, r4
	ldr	r2, .L184+56
	ldr	r1, .L184+60
	ldr	r0, .L184+64
	ldr	r4, .L184+68
	mov	lr, pc
	bx	r4
	bl	goToLevel3Intro
	ldr	r3, .L184+72
	mov	lr, pc
	bx	r3
	b	.L165
.L183:
	mov	r2, #67108864
	pop	{r4, r5, r6, lr}
	strh	r3, [r2, #16]	@ movhi
	strh	r3, [r2, #20]	@ movhi
	b	goToLose
.L181:
	mov	r2, #67108864
	pop	{r4, r5, r6, lr}
	strh	r3, [r2, #16]	@ movhi
	strh	r3, [r2, #20]	@ movhi
	b	goToPause
.L185:
	.align	2
.L184:
	.word	updateLevel2
	.word	drawLevel2
	.word	waitForVBlank
	.word	DMANow
	.word	shadowOAM
	.word	oldButtons
	.word	buttons
	.word	kitty
	.word	fish
	.word	vOff
	.word	1717986919
	.word	hOff
	.word	cheat
	.word	stopSoundB
	.word	11025
	.word	5258
	.word	meow
	.word	playSoundB
	.word	initLevel3
	.size	level2State, .-level2State
	.align	2
	.global	level3State
	.syntax unified
	.arm
	.fpu softvfp
	.type	level3State, %function
level3State:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, lr}
	ldr	r3, .L205
	mov	lr, pc
	bx	r3
	ldr	r3, .L205+4
	mov	lr, pc
	bx	r3
	ldr	r3, .L205+8
	mov	lr, pc
	bx	r3
	ldr	r4, .L205+12
	mov	r3, #512
	mov	r2, #117440512
	ldr	r1, .L205+16
	mov	r0, #3
	mov	lr, pc
	bx	r4
	ldr	r3, .L205+20
	ldrh	r3, [r3]
	tst	r3, #4
	beq	.L187
	ldr	r2, .L205+24
	ldrh	r2, [r2]
	ands	r2, r2, #4
	beq	.L201
.L187:
	tst	r3, #8
	beq	.L189
	ldr	r3, .L205+24
	ldrh	r3, [r3]
	ands	r3, r3, #8
	beq	.L202
.L189:
	ldr	r2, .L205+28
	ldr	r1, .L205+32
	ldr	r3, [r2]
	ldr	r0, [r1]
	add	r3, r3, #18
	cmp	r3, r0
	beq	.L203
.L190:
	ldr	r3, [r2, #48]
	cmp	r3, #0
	beq	.L204
	ldr	r1, .L205+36
	ldr	r3, [r1]
	ldr	r2, .L205+40
	add	r3, r3, #1
	smull	r4, r5, r3, r2
	asr	r2, r3, #31
	rsb	r2, r2, r5, asr #2
	add	r2, r2, r2, lsl #2
	cmp	r3, r2, lsl #1
	str	r3, [r1]
	bne	.L186
	mov	r0, #67108864
	ldr	r1, .L205+44
	ldr	r3, [r1]
	sub	r3, r3, #1
	lsl	r2, r3, #16
	lsr	r2, r2, #16
	str	r3, [r1]
	strh	r2, [r0, #16]	@ movhi
.L186:
	pop	{r4, r5, r6, lr}
	bx	lr
.L201:
	ldr	r1, .L205+48
	ldr	r0, [r1]
	cmp	r0, #0
	moveq	r2, #1
	str	r2, [r1]
	b	.L187
.L203:
	ldr	r3, [r2, #4]
	ldr	r1, [r1, #4]
	add	r3, r3, #7
	cmp	r3, r1
	bne	.L190
	mov	r3, #67108864
	mov	r4, #0
	ldr	r2, .L205+52
	strh	r4, [r3, #16]	@ movhi
	strh	r4, [r3, #20]	@ movhi
	mov	lr, pc
	bx	r2
	mov	r3, r4
	ldr	r2, .L205+56
	ldr	r4, .L205+60
	ldr	r1, .L205+64
	ldr	r0, .L205+68
	mov	lr, pc
	bx	r4
	pop	{r4, r5, r6, lr}
	b	goToWin
.L204:
	mov	r2, #67108864
	pop	{r4, r5, r6, lr}
	strh	r3, [r2, #16]	@ movhi
	strh	r3, [r2, #20]	@ movhi
	b	goToLose
.L202:
	mov	r2, #67108864
	pop	{r4, r5, r6, lr}
	strh	r3, [r2, #16]	@ movhi
	strh	r3, [r2, #20]	@ movhi
	b	goToPause
.L206:
	.align	2
.L205:
	.word	updateLevel3
	.word	drawLevel3
	.word	waitForVBlank
	.word	DMANow
	.word	shadowOAM
	.word	oldButtons
	.word	buttons
	.word	kitty
	.word	fish
	.word	vOff
	.word	1717986919
	.word	hOff
	.word	cheat
	.word	stopSoundB
	.word	11025
	.word	playSoundB
	.word	5258
	.word	meow
	.size	level3State, .-level3State
	.section	.text.startup,"ax",%progbits
	.align	2
	.global	main
	.syntax unified
	.arm
	.fpu softvfp
	.type	main, %function
main:
	@ Function supports interworking.
	@ Volatile: function does not return.
	@ args = 0, pretend = 0, frame = 16
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r7, fp, lr}
	ldr	r3, .L233
	sub	sp, sp, #20
	mov	lr, pc
	bx	r3
	mov	r8, #0
	ldr	r7, .L233+4
	ldr	r10, .L233+8
	ldr	r6, .L233+12
	ldr	fp, .L233+16
	ldr	r9, .L233+20
	ldr	r5, .L233+24
	ldr	r4, .L233+28
.L208:
	ldr	r2, [r7]
	ldrh	r3, [r10]
.L209:
	strh	r3, [r6]	@ movhi
	ldrh	r3, [r5, #48]
	strh	r3, [r10]	@ movhi
	cmp	r2, #10
	ldrls	pc, [pc, r2, asl #2]
	b	.L209
.L211:
	.word	.L210
	.word	.L212
	.word	.L213
	.word	.L214
	.word	.L215
	.word	.L216
	.word	.L217
	.word	.L218
	.word	.L219
	.word	.L220
	.word	.L220
.L220:
	mov	lr, pc
	bx	r9
	b	.L208
.L219:
	ldr	r3, .L233+32
	mov	lr, pc
	bx	r3
	b	.L208
.L218:
	str	r8, [sp, #12]
	ldr	r3, [sp, #12]
	cmp	r3, r4
	bgt	.L226
.L227:
	ldr	r3, [sp, #12]
	add	r3, r3, #1
	str	r3, [sp, #12]
	ldr	r3, [sp, #12]
	cmp	r3, r4
	ble	.L227
.L226:
	ldr	r3, .L233+36
	mov	lr, pc
	bx	r3
	b	.L208
.L217:
	ldr	r3, .L233+40
	mov	lr, pc
	bx	r3
	b	.L208
.L216:
	str	r8, [sp, #8]
	ldr	r3, [sp, #8]
	cmp	r3, r4
	bgt	.L224
.L225:
	ldr	r3, [sp, #8]
	add	r3, r3, #1
	str	r3, [sp, #8]
	ldr	r3, [sp, #8]
	cmp	r3, r4
	ble	.L225
.L224:
	ldr	r3, .L233+44
	mov	lr, pc
	bx	r3
	b	.L208
.L215:
	ldr	r3, .L233+48
	mov	lr, pc
	bx	r3
	b	.L208
.L214:
	str	r8, [sp, #4]
	ldr	r3, [sp, #4]
	cmp	r3, r4
	bgt	.L222
.L223:
	ldr	r3, [sp, #4]
	add	r3, r3, #1
	str	r3, [sp, #4]
	ldr	r3, [sp, #4]
	cmp	r3, r4
	ble	.L223
.L222:
	ldr	r3, .L233+52
	mov	lr, pc
	bx	r3
	b	.L208
.L213:
	ldr	r3, .L233+56
	mov	lr, pc
	bx	r3
	b	.L208
.L212:
	ldr	r3, .L233+60
	mov	lr, pc
	bx	r3
	b	.L208
.L210:
	mov	lr, pc
	bx	fp
	b	.L208
.L234:
	.align	2
.L233:
	.word	initialize
	.word	state
	.word	buttons
	.word	oldButtons
	.word	startState
	.word	winState
	.word	67109120
	.word	499999
	.word	pauseState
	.word	goToLevel3
	.word	level3State
	.word	goToLevel2
	.word	level2State
	.word	goToLevel1
	.word	level1State
	.word	insturctionsState
	.size	main, .-main
	.comm	score,4,4
	.comm	shadowOAM,1024,4
	.comm	buffer,41,4
	.comm	vOff,4,4
	.comm	hOff,4,4
	.comm	oldButtons,2,2
	.comm	buttons,2,2
	.comm	seed,4,4
	.global	curLevel
	.comm	state,4,4
	.comm	soundB,32,4
	.comm	soundA,32,4
	.data
	.align	2
	.set	.LANCHOR0,. + 0
	.type	curLevel, %object
	.size	curLevel, 4
curLevel:
	.word	1
	.ident	"GCC: (devkitARM release 47) 7.1.0"
