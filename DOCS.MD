i2c_write_byte(uint8_t val)

The i2c_write_byte function is used for debugging purposes or for creating custom functions that are not natively supported by the library. It should be noted that when writing a byte, you must provide a 7-bit ASCII hexadecimal value. Failing to do so may result in a function failure, or in the worst case, crash the LCD.
lcd_toggle_enable(uint8_t val)

The lcd_toggle_enable function toggles the enable pin on the LCD display. This is useful for implementing custom functions. The input must be a 7-bit ASCII hexadecimal value. Using an incorrect value may lead to undefined behavior.
lcd_send_byte(uint8_t val, int mode)

The lcd_send_byte function sends a byte as two separate nibble transfers. This is part of the communication protocol for the LCD and ensures the correct data format is sent to the display.
lcd_clear(void)

The lcd_clear function clears the LCD screen, removing any existing text or data.
lcd_set_cursor(int Line, int position)

The lcd_set_cursor function sets the position of the cursor on the LCD screen. You can specify the line and position to move the cursor to a specific location where the next character will be printed.

    Line: The line number (typically 1 or 2 for a 2-line display).
    Position: The position on the line (usually 0-15 for a 16x2 LCD).

lcd_char(char val)

The lcd_char function sends a single character to the LCD. It internally calls the lcd_send_byte() function to transmit the character data.
*lcd_string(const char s)

The lcd_string function sends a complete string to the LCD. It repeatedly calls the lcd_char() function until the entire string has been transmitted.
lcd_init(void)

The lcd_init function initializes the LCD display. It should be called each time the device is reset to ensure proper configuration and functionality of the LCD.
