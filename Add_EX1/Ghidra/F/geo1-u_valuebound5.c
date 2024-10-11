#include<stdbool.h>
#include <assert.h>

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
    unsigned int local_30;
    unsigned int local_2c;
    long local_28;
    unsigned long local_20;
    long local_18;

    if ((local_2c < 6) && (local_30 < 6))
    {
        local_18 = 1;
        local_20 = (unsigned long)local_2c;
        for (local_28 = 1; __VERIFIER_assert(((unsigned long)local_2c * local_18 - local_18) - local_20 == -1),
            local_28 < (long)(unsigned long)local_30;
             local_28 = local_28 + 1)
        {
            local_18 = (unsigned long)local_2c * local_18 + 1;
            local_20 = local_20 * local_2c;
        }
        __VERIFIER_assert(local_20 == local_18 * (unsigned long)(local_2c - 1) + 1);
    }
    return 0;
}
