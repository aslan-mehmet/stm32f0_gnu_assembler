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

loop_init:
        ldr r2, =100000
        ldr r3, [r0]
        eors r3, r3, r1
        str r3, [r0]
loop:
        subs r2, r2, #1
        beq loop_init
        b loop
