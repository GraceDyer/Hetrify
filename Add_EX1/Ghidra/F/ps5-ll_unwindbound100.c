#include<stdbool.h>
#include <assert.h>
int counter=0;
void reach_error(void)
{
    assert(0);
}

void __VERIFIER_assert(int param_1)
{
  if (param_1 == 0)
  {
    reach_error();
  }
  return;
}

int main(void)
{
  bool bVar1;
  int iVar2;
  short local_2a;
  long local_28;
  long local_20;
  long local_18;

  if (local_2a < 0x101)
  {
    local_18 = 0;
    local_20 = 0;
    for (local_28 = 0;
         (iVar2 = counter + 1, bVar1 = counter < 100, counter = iVar2, bVar1 && (__VERIFIER_assert(local_18 == local_18 * local_18 * local_18 * local_18 * local_18 * 6 + local_18 * local_18 * local_18 * local_18 * 0xf + local_18 * local_18 * local_18 * 10 + local_20 * -0x1e), local_28 < local_2a)); local_28 = local_28 + 1)
    {
      local_18 = local_18 + 1;
      local_20 = local_20 + local_18 * local_18 * local_18 * local_18;
    }
    __VERIFIER_assert(local_18 ==
                      local_18 * local_18 * local_18 * local_18 * local_18 * 6 +
                          local_18 * local_18 * local_18 * local_18 * 0xf +
                          local_18 * local_18 * local_18 * 10 + local_20 * -0x1e);
    __VERIFIER_assert(local_2a * local_18 - local_18 * local_18 == 0);
  }
  return 0;
}
