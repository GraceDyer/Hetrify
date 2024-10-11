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
    long local_20;
    long local_18;


    if ((((-1 < local_34) && (local_34 < 0x15)) && (0 < local_38)) &&
        ((-1 < local_38 && (local_38 < 0x15))))
    {
        local_18 = 0;
        local_20 = (long)local_34;
        local_28 = 0;
        local_30 = 0;
        while (true)
        {
            __VERIFIER_assert(local_30 == local_38 * local_28);
            __VERIFIER_assert((long)local_34 == local_38 * local_18 + local_20);
            if (local_20 < local_38)
                break;
            local_28 = 1;
            local_30 = (long)local_38;
            while (true)
            {
                __VERIFIER_assert(local_30 == local_38 * local_28);
                __VERIFIER_assert((long)local_34 == local_38 * local_28 + local_20);
                __VERIFIER_assert(~(unsigned int)((unsigned long)local_20 >> 0x20) >> 0x1f);
                if (local_20 < local_30 << 1)
                    break;
                __VERIFIER_assert((local_38 << 1) * local_28 <= local_20);
                local_28 = local_28 << 1;
                local_30 = local_30 << 1;
            }
            local_20 = local_20 - local_30;
            local_18 = local_18 + local_28;
        }
        __VERIFIER_assert((long)local_34 == local_38 * local_18 + local_20);
    }
    return 0;
}