#ifndef SRC_DRIVERS_UART_H_
#define SRC_DRIVERS_UART_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

/**
 * verwendeter UART Baustein
 */
typedef enum {
  UART_MODULE_NONE,
  UART_MODULE_A,
  UART_MODULE_B,
  UART_MODULE_C,
  UART_MODULE_D,
  UART_MODULE_E,
} uart_module_t;

/**
 * UART Zustand. 0 => OK
 */
typedef enum {
  UART_OK = 0,                           //!< Kein Fehler
  UART_ERR,
} uart_state_t;

/*
 * Laufzeitdaten UART
 */
typedef struct uart uart_t;

extern uart_state_t uart_init(uart_module_t uart);
extern uart_state_t uart_write(uart_module_t uart, const uint8_t *p_data, uint32_t size);
extern uart_state_t uart_read(uart_module_t uart, uint8_t *p_data, uint32_t *p_size);

#ifdef __cplusplus
}
#endif /*__cplusplus*/

#endif /* SRC_DRIVERS_UART_H_ */
