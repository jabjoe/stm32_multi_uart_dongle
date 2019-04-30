#ifndef __UARTS__
#define __UARTS__

extern void uarts_setup();

extern bool uart_is_tx_empty(unsigned uart);

extern bool uart_dma_out(unsigned uart, char *data, int size);

#endif //__UARTS__
