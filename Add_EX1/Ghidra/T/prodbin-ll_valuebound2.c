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
    int local_30;
    int local_2c;
    long local_28;
    long local_20;
    long local_18;

    if ((((-1 < local_2c) && (local_2c < 3)) && (0 < local_30)) && ((-1 < local_30 && (local_30 < 3))))
    {
        local_18 = (long)local_2c;
        local_28 = 0;
        for (local_20 = (long)local_30;
             __VERIFIER_assert(local_18 * local_20 + local_28 == (long)local_2c * (long)local_30),
            local_20 != 0;
             local_20 = local_20 / 2)
        {
            if (local_20 % 2 == 1)
            {
                local_28 = local_28 + local_18;
                local_20 = local_20 + -1;
            }
            local_18 = local_18 << 1;
        }
        __VERIFIER_assert(local_28 == (long)local_20 * (long)local_30);
    }
    return 0;
}
