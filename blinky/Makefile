program: create assemble link binary

create:
	mkdir -p binaries

assemble:
	arm-none-eabi-as stm32f051_startup.s -mthumb -mcpu=cortex-m0 -g -o binaries/main.o

link:
	arm-none-eabi-ld -T stm32f051.ld -Map=binaries/main.map binaries/main.o -o binaries/main.elf

binary:
	arm-none-eabi-objcopy -O binary binaries/main.elf binaries/main.bin

flash:
	st-flash write binaries/main.bin 0x8000000

clean:
	rm -rf binaries
