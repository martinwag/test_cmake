
#include <stdio.h>

#include "uart.h"
#include "log.h"


void log_printf(uint8_t prio, char *message)
{
  char buf[100];
  int count;

  count = snprintf(buf, sizeof(buf), "%d %s\n", prio, message);
  uart_write(UART_MODULE_B, (uint8_t*)buf, count);
}
