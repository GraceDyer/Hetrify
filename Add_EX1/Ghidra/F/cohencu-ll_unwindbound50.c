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
    short local_32;
    long local_30;
    long local_28;
    long local_20;
    long local_18;

    local_18 = 0;
    local_20 = 0;
    local_28 = 1;
    local_30 = 6;
    while (iVar2 = counter + 1, bVar1 = counter < 0x32, counter = iVar2, bVar1)
    {
        __VERIFIER_assert(local_30 == (local_18 + 1) * 6);
        __VERIFIER_assert(local_28 == (local_18 * local_18 + local_18) * 3 + 1);
        __VERIFIER_assert(local_20 == local_18 * local_18 * local_18);
        __VERIFIER_assert(local_28 * local_30 + local_20 * -0x12 + local_28 * -0xc + local_30 * 2 == 6);
        __VERIFIER_assert(local_30 * local_30 + local_28 * -0xc + local_30 * -6 == -0xc);
        if (local_32 < local_18)
            break;
        local_18 = local_18 + 1;
        local_20 = local_20 + local_28;
        local_28 = local_28 + local_30;
        local_30 = local_30 + 6;
    }
    __VERIFIER_assert(local_30 == (local_18 + 1) * 6);
    __VERIFIER_assert(((local_32 * 6) * local_20 - local_20 * local_30) + local_20 * 0xc == 0);
    __VERIFIER_assert((local_32 * local_30 - (long)(local_32 * 6)) + local_28 * -2 + local_30 * 2 ==
                      10);
    __VERIFIER_assert(local_28 * local_28 * 2 + local_20 * local_30 * -3 + local_20 * -0x12 +
                          local_28 * -10 + local_30 * 3 ==
                      10);
    __VERIFIER_assert(local_30 * local_30 + local_28 * -0xc + local_30 * -6 == -0xc);
    __VERIFIER_assert(local_28 * local_30 + local_20 * -0x12 + local_28 * -0xc + local_30 * 2 == 6);
    return 0;
}
