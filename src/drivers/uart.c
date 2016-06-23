#include <string.h>
#include <stdlib.h>

#include "uart.h"
#include "log.h"

uart_state_t uart_init(uart_module_t uart)
{
  log_printf(LOG_ERR, "uart init failed");
  return UART_ERR;
}

uart_state_t uart_write(uart_module_t uart, const uint8_t *p_data, uint32_t size)
{
  log_printf(LOG_ERR, "uart tx failed");
  return UART_ERR;
}

uart_state_t uart_read(uart_module_t uart, uint8_t *p_data, uint32_t *p_size)
{
  log_printf(LOG_ERR, "uart rx failed");
  return UART_ERR;
}
