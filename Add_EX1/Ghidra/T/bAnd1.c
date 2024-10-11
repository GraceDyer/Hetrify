#include <assert.h>
#include <stdbool.h>
void reach_error(void)
{
  assert(0);
}

long bAnd(unsigned int *param_1)
{
  unsigned int uVar1;
  int local_14;
  
  uVar1 = *param_1;
  for (local_14 = 1; local_14 < 100; local_14 = local_14 + 1) {
    uVar1 = uVar1 & param_1[local_14];
  }
  return (long)(int)uVar1;
}





int main(void)
{
  unsigned int uVar1;
  unsigned int local_1b8 [99];
  unsigned int local_2c;
  int local_28;
  int local_24;
  unsigned int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  for (local_14 = 0; local_14 < 100; local_14 = local_14 + 1) {
  }
  local_1c = bAnd(local_1b8);
  uVar1 = local_1b8[0];
  local_20 = local_1b8[0];
  local_1b8[0] = local_1b8[1];
  local_1b8[1] = uVar1;
  local_24 = bAnd(local_1b8);
  local_20 = local_1b8[0];
  for (local_18 = 0; local_18 < 99; local_18 = local_18 + 1) {
    local_1b8[local_18] = local_1b8[local_18 + 1];
  }
  local_2c = local_20;
  local_28 = bAnd(local_1b8);
  if ((local_1c == local_24) && (local_1c == local_28)) {
    return 1;
  }
  reach_error();
  return 1;
}