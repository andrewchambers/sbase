/* See LICENSE file for copyright and license details. */
#include <stdarg.h>
#include <stdlib.h>
#include "../util.h"

extern void venprintf(int, const char *, va_list);

void
eprintf(const char *fmt, ...)
{
	va_list ap;

	va_start(ap, fmt);
	venprintf(EXIT_FAILURE, fmt, ap);
	va_end(ap);
}
