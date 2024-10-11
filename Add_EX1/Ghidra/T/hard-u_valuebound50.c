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
    unsigned int local_28;
    unsigned int local_24;
    int local_20;
    unsigned int local_1c;
    unsigned int local_18;
    unsigned int local_14;

    if (((local_24 < 0x33) && (local_28 != 0)) && (local_28 < 0x33))
    {
        local_14 = local_24;
        local_18 = local_28;
        local_1c = 1;
        local_20 = 0;
        while (true)
        {
            __VERIFIER_assert(1);
            __VERIFIER_assert(1);
            __VERIFIER_assert(local_18 == local_28 * local_1c);
            if (local_24 < local_18)
                break;
            local_18 = local_18 << 1;
            local_1c = local_1c << 1;
        }
        while (true)
        {
            __VERIFIER_assert(local_24 == local_14 + local_20 * local_28);
            __VERIFIER_assert(local_18 == local_28 * local_1c);
            if (local_1c == 1)
                break;
            local_18 = local_18 >> 1;
            local_1c = local_1c >> 1;
            if (local_18 <= local_14)
            {
                local_14 = local_14 - local_18;
                local_20 = local_20 + local_1c;
            }
        }
        __VERIFIER_assert(local_24 == local_14 + local_18 * local_20);
        __VERIFIER_assert(local_28 == local_18);
    }
    return 0;
}
