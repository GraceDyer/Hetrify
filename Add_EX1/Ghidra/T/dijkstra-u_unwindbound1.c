#include <assert.h>
#include <stdbool.h>
int counter=0;
void reach_error(void)
{
  assert(0);
}
void __VERIFIER_assert(int param_1)
{
  if (param_1 == 0) {
    reach_error();
  }
  return;
}


int main(void)
{
  int bVar1;
  int iVar2;
  unsigned int local_24;
  unsigned int local_20;
  unsigned int local_1c;
  unsigned int local_18;
  unsigned int local_14;
  
  if (local_24 < 0x3fffffff) {
    local_14 = 0;
    local_1c = local_24;
    local_20 = 0;
    for (local_18 = 1;
        (iVar2 = counter + 1, bVar1 = counter < 1, counter = iVar2, bVar1 && (local_18 <= local_24 ))
        ; local_18 = local_18 << 2) {
    }
    while (iVar2 = counter + 1, bVar1 = counter < 1, counter = iVar2, bVar1) {
      __VERIFIER_assert(local_1c < local_18 + local_14 * 2);
      __VERIFIER_assert(local_14 * local_14 + local_1c * local_18 == local_24 * local_18);
      __VERIFIER_assert(local_20 * local_20 * local_20 + local_18 * local_20 * local_24 * -0xc +
                        local_18 * local_24 * local_14 * 0x10 +
                        ((local_1c * local_20 * local_18 * 3 - local_18 * local_14 * local_18) * 4  -
                        local_18 * local_20 * local_18) == local_1c * local_14 * local_18 * 0x10);
      __VERIFIER_assert(((local_24 * local_20 * local_20 + local_14 * local_20 * local_24 * -4 +
                         local_18 * local_24 * local_24 * 4) - local_18 * local_24 * local_18) +
                        (local_1c * local_20 * local_14 * 4 - local_1c * local_20 * local_20) +
                        local_1c * local_18 * local_18 + local_1c * local_24 * local_18 * -8 +
                        local_1c * local_18 * local_1c * 4 == 0);
      __VERIFIER_assert(local_14 * local_20 * local_20 + local_18 * local_20 * local_24 * -4 +
                        local_18 * local_24 * local_14 * 4 +
                        (local_1c * local_20 * local_18 * 4 - local_18 * local_14 * local_18) ==
                        local_1c * local_14 * local_18 * 4);
      __VERIFIER_assert((local_14 * local_14 - local_24 * local_18) + local_18 * local_1c == 0);
      if (local_18 == 1) break;
      local_18 = local_18 >> 2;
      local_20 = local_14 + local_18;
      local_14 = local_14 >> 1;
      if (local_20 <= local_1c) {
        local_14 = local_14 + local_18;
        local_1c = local_1c - local_20;
      }
    }
    __VERIFIER_assert((local_20 * local_20 * local_20 + local_20 * local_24 * -0xc +
                       local_20 * local_1c * 0xc + local_24 * local_14 * 0x10 +
                      local_14 * local_1c * -0x10) - local_20 == local_14 << 2);
    __VERIFIER_assert(local_1c + (local_14 * local_14 - local_24) == 0);
    __VERIFIER_assert(local_14 ==
                      local_14 * local_20 * local_20 + local_20 * local_24 * -4 +
                      (local_20 * local_1c + local_24 * local_14) * 4 + local_14 * local_1c * -4);
  }
  return 0;
}

