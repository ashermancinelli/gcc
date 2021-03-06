/* { dg-do compile } */
/* { dg-options "-O2 -march=skylake" } */

extern char *dst;

void
foo (void)
{
  __builtin_memset (dst, 0, 34);
}

/* { dg-final { scan-assembler-times "vmovdqu\[\\t \]%ymm\[0-9\]+, \\(%\[\^,\]+\\)" 1 } } */
/* { dg-final { scan-assembler-times "movw\[\\t \]+.+, 32\\(%\[\^,\]+\\)" 1 } } */
