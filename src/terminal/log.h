
#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

#ifndef LOG_H
#define LOG_H

/* Loglevel */
#define LOG_EMERG   0 /* system is unusable */
#define LOG_ALERT   1 /* action must be taken immediately */
#define LOG_CRIT    2 /* critical conditions */
#define LOG_ERR     3 /* error conditions */
#define LOG_WARNING 4 /* warning conditions */
#define LOG_NOTICE  5 /* normal but significant condition */
#define LOG_INFO    6 /* informational */
#define LOG_DEBUG   7 /* debug-level messages */

extern void log_printf(uint8_t prio, char *message);

#ifdef __cplusplus
}
#endif /*__cplusplus*/

#endif /* LOG_H */
