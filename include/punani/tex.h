/* This file is part of punani-strike
 * Copyright (c) 2011 Gianni Tedesco
 * Released under the terms of GPLv3
*/
#ifndef _PUNANI_TEX_H
#define _PUNANI_TEX_H

typedef struct _texture *texture_t;

texture_t png_get_by_name(renderer_t r, const char *name);

void texture_put(texture_t t);
unsigned int texture_width(texture_t t);
unsigned int texture_height(texture_t t);
void texture_bind(texture_t t);

#endif /* _PUNANI_TEX_H */
