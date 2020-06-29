#ifndef __buffer_H
#define __buffer_H

#include "main.h"

#define BUFSIZE 64

typedef struct
{
  uint8_t data[BUFSIZE];
  uint8_t head;
  uint8_t size;
} buffer;

void push(buffer *buf, uint8_t val);
uint8_t pop(buffer *buf);

#endif