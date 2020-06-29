#include "buffer.h"

void push(buffer *buf, uint8_t val)
{
  uint8_t offset = buf->head + buf->size;
  if (offset >= BUFSIZE)
    offset -= BUFSIZE;
  buf->data[offset] = val;
  if (buf->size == BUFSIZE)
  {
    buf->head++;
    if (buf->head >= BUFSIZE)
      buf->head = 0;
  }
  else
    buf->size++;
}

uint8_t pop(buffer *buf)
{
  uint8_t val = buf->data[buf->head];
  buf->head++;
    if (buf->head >= BUFSIZE)
      buf->head = 0;
  buf->size--;
  return val;
}