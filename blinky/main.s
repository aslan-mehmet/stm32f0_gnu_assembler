/*
 * author: Mehmet ASLAN
 * date: February 26, 2017
 * no warranty, no licence agreement
 * use it at your own risk
 */

	.section .text
	.thumb_func
main:
	ldr r0, =RCC_AHBENR
	ldr r1, =0x00080000
	str r1, [r0]

	@ moder
	ldr r0, =GPIOC_MODER
	ldr r1, =0x00040000
	str r1, [r0]

	@odr
	ldr r0, =GPIOC_ODR
	ldr r1, =0x00000200
	str r1, [r0]

infinite:
	b infinite
