#include <assembly.h>

void outb(unsigned short port, unsigned char value)
{
  asm volatile ("outb %1, %0" : : "dN" (port), "a" (value));
}

unsigned char inb(unsigned short port)
{
  unsigned char ret;
  asm volatile("inb %1, %0" : "=a" (ret) : "dN" (port));
  return ret;
}

unsigned short inw(unsigned short port)
{
  unsigned short ret;
  asm volatile ("inw %1, %0" : "=a" (ret) : "dN" (port));
  return ret;
}

void disable_interupts()
{
  asm volatile("cli");
}

void enable_interupts()
{
  asm volatile("sti");
}

void halt() 
{
  asm volatile("hlt");
}
