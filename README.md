# 🧠 Arduino UNO Bare Metal Programming

Welcome to the **Arduino UNO Bare Metal Programming** repository!  
This repo contains low-level projects and examples for programming the **ATmega328P** microcontroller on the Arduino UNO board using **bare metal (register-level) C code**, without using any Arduino core functions like `digitalWrite()` or `pinMode()`.

---

## ⚙️ What is Bare Metal Programming?

Bare metal programming means interacting **directly with hardware registers**, bypassing the Arduino libraries. It allows:

🔸 **Precise control** of peripherals  
🔸 **Optimized performance** with minimal overhead  
🔸 **Deep understanding** of how microcontrollers work

---

## 📁 Repository Structure

```bash
arduino-uno-baremetal/
│
├── blink_led/               # Blink LED using direct PORTB register manipulation
├── timer_interrupts/        # Using Timer1 and Timer2 with ISR for timed tasks
├── uart_communication/      # Serial communication using USART registers
├── adc_reading/             # Read analog input using ADC without analogRead()
├── external_interrupts/     # Handling INT0/INT1 interrupts
├── i2c_master/              # I2C master communication using TWI registers
├── spi_master/              # SPI communication using SPCR, SPSR, SPDR
├── pwm_generation/          # Generate PWM using Timer registers
├── README.md                # This file
└── datasheets/              # Useful reference PDFs (ATmega328P datasheet, etc.)
