#include <assert.h>
#include <stdbool.h>
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
    int local_38;
    int local_34;
    long local_30;
    long local_28;
    unsigned long local_20;
    unsigned long local_18;

    if ((((-1 < local_34) && (local_34 < 6)) && (0 < local_38)) && ((-1 < local_38 && (local_38 < 6))))
    {
        local_18 = (unsigned long)local_34;
        local_20 = (unsigned long)local_38;
        local_28 = 1;
        local_30 = 0;
        while ((__VERIFIER_assert(local_18 * local_20 * local_28 + local_30 ==
                                  (long)local_34 * (long)local_38),
                local_18 != 0 && (local_20 != 0)))
        {
            if (((local_18 & 1) == 0) && ((local_20 & 1) == 0))
            {
                local_18 = (long)local_18 / 2;
                local_20 = (long)local_20 / 2;
                local_28 = local_28 << 2;
            }
            else if (((long)local_18 % 2 == 1) && ((local_20 & 1) == 0))
            {
                local_18 = local_18 - 1;
                local_30 = local_30 + local_20 * local_28;
            }
            else if (((local_18 & 1) == 0) && ((long)local_20 % 2 == 1))
            {
                local_20 = local_20 - 1;
                local_30 = local_30 + local_18 * local_28;
            }
            else
            {
                local_18 = local_18 - 1;
                local_20 = local_20 - 1;
                local_30 = local_30 + (local_18 + local_20 + 1) * local_28;
            }
        }
        __VERIFIER_assert(local_30 == (long)local_34 * (long)local_38);
        __VERIFIER_assert(local_18 * local_20 == 0);
    }
    return 0;
}
