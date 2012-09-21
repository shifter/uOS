#ifndef KERROR_H
#define KERROR_H

#include <assembly.h>

#define ASSERT(cond) \
if(!(cond)) { \
  panic("Assertion failed in %s, %s() at line %d", __FILE__, __func__, __LINE__); \
}
        
void panic(char * reason, ...);
void handle_exception(struct registers reg);
void panic_exception(struct registers reg);

#endif
