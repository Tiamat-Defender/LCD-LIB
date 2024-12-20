#include "pico/stdlib.h"
#include "hardware/i2c.h"

#define ADRESS  0x27

void LCD_INIT()
{
    i2c_init(i2c_default, 100 * 1000);
    gpio_set_function(PICO_DEFAULT_I2C_SDA_PIN, GPIO_FUNC_I2C);
    gpio_set_function(PICO_DEFAULT_I2C_SCL_PIN, GPIO_FUNC_I2C);
    gpio_pull_up(PICO_DEFAULT_I2C_SDA_PIN);
    gpio_pull_up(PICO_DEFAULT_I2C_SCL_PIN);

    uint8_t data [] = {0x01, 0x41};

    i2c_write_blocking(i2c0, ADRESS, data, 2, 0);

}

void LCD_DRAW(uint8_t data[])
{
    i2c_write_blocking(i2c0, ADRESS, data, sizeof(data), 0);



}