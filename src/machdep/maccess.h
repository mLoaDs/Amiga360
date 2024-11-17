 /*
  * UAE - The Un*x Amiga Emulator
  *
  * Memory access functions
  *
  * Copyright 1996 Bernd Schmidt
  */

STATIC_INLINE uae_u32 do_get_mem_long(uae_u32 *a)
{
    uae_u8 *b = (uae_u8 *)a;

    return (*b << 24) | (*(b+1) << 16) | (*(b+2) << 8) | (*(b+3));
}

STATIC_INLINE uae_u16 do_get_mem_word(uae_u16 *a)
{
    uae_u8 *b = (uae_u8 *)a;

    return (*b << 8) | (*(b+1));
}

STATIC_INLINE uae_u8 do_get_mem_byte(uae_u8 *a)
{
    return *a;
}

STATIC_INLINE void do_put_mem_long(uae_u32 *a, uae_u32 v)
{
    uae_u8 *b = (uae_u8 *)a;

    *b = v >> 24;
    *(b+1) = v >> 16;
    *(b+2) = v >> 8;
    *(b+3) = v;
}

STATIC_INLINE void do_put_mem_word(uae_u16 *a, uae_u16 v)
{
    uae_u8 *b = (uae_u8 *)a;

    *b = v >> 8;
    *(b+1) = (uae_u8)v;
}

STATIC_INLINE void do_put_mem_byte(uae_u8 *a, uae_u8 v)
{
    *a = v;
}

#define call_mem_get_func(func, addr) ((*func)(addr))
#define call_mem_put_func(func, addr, v) ((*func)(addr, v))
