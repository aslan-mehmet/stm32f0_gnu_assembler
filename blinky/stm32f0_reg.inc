/*
 * author: Mehmet ASLAN
 * date: February 26, 2017
 * no warranty, no licence agreement
 * use it at your own risk
 */

.equ GPIOA,             0x48000000
.equ GPIOB,             0x48000400
.equ GPIOC,             0x48000800
.equ GPIOD,             0x48000C00
.equ GPIOE,             0x48001000
.equ GPIOF,             0x48001400

.equ RCC,               0x40021000
.equ FLASH_R,           0x40022000
.equ OB,                0x1FFFF800
.equ CRC,               0x40023000
.equ TSC,               0x40024000

.equ TIM2,              0x40000000
.equ TIM3,              0x40000400
.equ TIM6,              0x40001000
.equ TIM7,              0x40001400
.equ TIM14,             0x40002000
.equ RTC,               0x40002800
.equ WWDG,              0x40002C00
.equ IWDG,              0x40003000
.equ SPI2,              0x40003800
.equ USART2,            0x40004400
.equ USART3,            0x40004800
.equ USART4,            0x40004C00
.equ USART5,            0x40005000
.equ I2C1,              0x40005400
.equ I2C2,              0x40005800
.equ CAN,               0x40006400
.equ CRS,               0x40006C00
.equ PWR,               0x40007000
.equ DAC,               0x40007400
.equ CEC,               0x40007800

.equ SYSCFG,            0x40010000
.equ COMP,              0x4001001C
.equ EXTI,              0x40010400
.equ USART6,            0x40011400
.equ USART7,            0x40011800
.equ USART8,            0x40011C00
.equ ADC1,              0x40012400
.equ ADC,               0x40012708
.equ TIM1,              0x40012C00
.equ SPI1,              0x40013000
.equ USART1,            0x40013800
.equ TIM15,             0x40014000
.equ TIM16,             0x40014400
.equ TIM17,             0x40014800
.equ DBGMCU,            0x40015800

.equ GPIOA_MODER,       0x48000000
.equ GPIOA_OTYPER,      0x48000004
.equ GPIOA_OSPEEDR,     0x48000008
.equ GPIOA_PUPDR,       0x4800000C
.equ GPIOA_IDR,         0x48000010
.equ GPIOA_ODR,         0x48000014
.equ GPIOA_BSRR,        0x48000018
.equ GPIOA_LCKR,        0x4800001C
.equ GPIOA_AFRL,        0x48000020
.equ GPIOA_AFRH,        0x48000024
.equ GPIOA_BRR,         0x48000028

.equ GPIOB_MODER,       0x48000400
.equ GPIOB_OTYPER,      0x48000404
.equ GPIOB_OSPEEDR,     0x48000408
.equ GPIOB_PUPDR,       0x4800040C
.equ GPIOB_IDR,         0x48000410
.equ GPIOB_ODR,         0x48000414
.equ GPIOB_BSRR,        0x48000418
.equ GPIOB_LCKR,        0x4800041C
.equ GPIOB_AFRL,        0x48000420
.equ GPIOB_AFRH,        0x48000424
.equ GPIOB_BRR,         0x48000428

.equ GPIOC_MODER,       0x48000800
.equ GPIOC_OTYPER,      0x48000804
.equ GPIOC_OSPEEDR,     0x48000808
.equ GPIOC_PUPDR,       0x4800080C
.equ GPIOC_IDR,         0x48000810
.equ GPIOC_ODR,         0x48000814
.equ GPIOC_BSRR,        0x48000818
.equ GPIOC_LCKR,        0x4800081C
.equ GPIOC_AFRL,        0x48000820
.equ GPIOC_AFRH,        0x48000824
.equ GPIOC_BRR,         0x48000828

.equ GPIOD_MODER,       0x48000C00
.equ GPIOD_OTYPER,      0x48000C04
.equ GPIOD_OSPEEDR,     0x48000C08
.equ GPIOD_PUPDR,       0x48000C0C
.equ GPIOD_IDR,         0x48000C10
.equ GPIOD_ODR,         0x48000C14
.equ GPIOD_BSRR,        0x48000C18
.equ GPIOD_LCKR,        0x48000C1C
.equ GPIOD_AFRL,        0x48000C20
.equ GPIOD_AFRH,        0x48000C24
.equ GPIOD_BRR,         0x48000C28

.equ GPIOE_MODER,       0x48001000
.equ GPIOE_OTYPER,      0x48001004
.equ GPIOE_OSPEEDR,     0x48001008
.equ GPIOE_PUPDR,       0x4800100C
.equ GPIOE_IDR,         0x48001010
.equ GPIOE_ODR,         0x48001014
.equ GPIOE_BSRR,        0x48001018
.equ GPIOE_LCKR,        0x4800101C
.equ GPIOE_AFRL,        0x48001020
.equ GPIOE_AFRH,        0x48001024
.equ GPIOE_BRR,         0x48001028

.equ GPIOF_MODER,       0x48001400
.equ GPIOF_OTYPER,      0x48001404
.equ GPIOF_OSPEEDR,     0x48001408
.equ GPIOF_PUPDR,       0x4800140C
.equ GPIOF_IDR,         0x48001410
.equ GPIOF_ODR,         0x48001414
.equ GPIOF_BSRR,        0x48001418
.equ GPIOF_LCKR,        0x4800141C
.equ GPIOF_AFRL,        0x48001420
.equ GPIOF_AFRH,        0x48001424
.equ GPIOF_BRR,         0x48001428

.equ RCC_CR,            0x40021000
.equ RCC_CFGR,          0x40021004
.equ RCC_CIR,           0x40021008
.equ RCC_APB2RSTR,      0x4002100C
.equ RCC_APB1RSTR,      0x40021010
.equ RCC_AHBENR,        0x40021014
.equ RCC_APB2ENR,       0x40021018
.equ RCC_APB1ENR,       0x4002101C
.equ RCC_BDCR,          0x40021020
.equ RCC_CSR,           0x40021024
.equ RCC_AHBRSTR,       0x40021028
.equ RCC_CFGR2,         0x4002102C
.equ RCC_CFGR3,         0x40021030
.equ RCC_CR2,           0x40021034
