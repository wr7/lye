#ifndef H_LYE_UTILS
#define H_LYE_UTILS

#define ARRAY_LENGTH(array) (sizeof(array) / sizeof((array)[0]))
#define UNUSED(obj) ((void)(obj))

#include <stddef.h>

#include "config.h"
#include "draw.h"
#include "inputs.h"

void *malloc_or_throw(size_t size);
void *realloc_or_throw(void *old, size_t size);
void draw_cells(uint16_t x, uint16_t y, uint16_t w, uint16_t h, struct tb_cell *cells); // Jank
void desktop_load(struct desktop *target);
void hostname(char **out);
void free_hostname();
void switch_tty(struct term_buf *buf);
void save(struct desktop *desktop, struct text *login);
void load(struct desktop *desktop, struct text *login);

#endif
