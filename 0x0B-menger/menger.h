#ifndef _SLIDE_LINE_H
#define _SLIDE_LINE_H

#include <stdlib.h>
#include <stdio.h>

#define SLIDE_LEFT 0
#define SLIDE_RIGHT 1

void left_order(int *line, size_t size);
void reverse_array(int *a, int n);
int slide_line(int *line, size_t size, int direction);

#endif
