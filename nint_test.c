#include "nint.h"
#include <stdio.h>

static void test_int(void);

void
test_int(void)
{
  int8_t i8;
  int16_t i16;
  int32_t i32;
  int64_t i64;
  uint8_t u8;
  uint16_t u16;
  uint32_t u32;
  uint64_t u64;

  i8 =  0x1;
  i16 = 0x1122;
  i32 = 0x11223344;
  i64 = 0x1122334455667788;

  u8 =  0x1;
  u16 = 0x1122;
  u32 = 0x11223344;
  u64 = 0x1122334455667788;

  printf("%s\n------------\n"
         "%"PRIi8"," "%"PRIi16"," "%"PRIi32"," "%"PRIi64"\n"
         "%"PRIu8"," "%"PRIu16"," "%"PRIu32"," "%"PRIu64"\n",
         __FUNCTION__,
         i8, i16, i32, i64, u8, u16, u32, u64);

}


int
main(void)
{
  test_int();

  return 0;
}
