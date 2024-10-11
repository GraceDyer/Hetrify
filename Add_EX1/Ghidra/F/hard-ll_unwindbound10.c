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
    unsigned int local_38;
    unsigned int local_34;
    long local_30;
    long local_28;
    unsigned long local_20;
    unsigned long local_18;

    if (local_34 != 0)
    {
        local_18 = (unsigned long)local_38;
        local_20 = (unsigned long)local_34;
        local_28 = 1;
        local_30 = 0;
        while (iVar2 = counter + 1, bVar1 = counter < 10, counter = iVar2, bVar1)
        {
            __VERIFIER_assert(1);
            __VERIFIER_assert(1);
            __VERIFIER_assert(local_20 == (unsigned long)local_34 * local_28);
            if ((long)local_18 < (long)local_20)
                break;
            local_20 = local_20 << 1;
            local_28 = local_28 << 1;
        }
    LAB_0001020c:
        iVar2 = counter + 1;
        bVar1 = counter < 10;
        counter = iVar2;
        if (bVar1)
        {
            __VERIFIER_assert((unsigned long)local_38 == (unsigned long)local_34 * local_30 + local_18);
            __VERIFIER_assert(local_20 == (unsigned long)local_34 * local_28);
            if (local_28 == 1)
                goto LAB_00010238;
            local_20 = (long)local_20 / 2;
            local_28 = local_28 / 2;
            if ((long)local_20 <= (long)local_18)
            {
                local_18 = local_18 - local_20;
                local_30 = local_30 + local_28;
            }
            goto LAB_0001020c;
        }
    LAB_00010238:
        __VERIFIER_assert((unsigned long)local_38 == local_20 * local_30 + local_18);
        __VERIFIER_assert(local_20 == local_34);
    }
    return 0;
}
