#include<stdbool.h>
#include <assert.h>

long rangesum(long param_1)
{
    long lVar1;
    int local_24;
    long local_20;
    int local_14;

    local_20 = 0;
    local_24 = 0;
    for (local_14 = 0; local_14 < 0x14; local_14 = local_14 + 1)
    {
        if (10 < local_14)
        {
            local_20 = local_20 + *(int *)(param_1 + (long)local_14 * 4);
            local_24 = local_24 + 1;
        }
    }
    if (local_24 == 0)
    {
        lVar1 = 0;
    }
    else
    {
        lVar1 = (long)(int)(local_20 / (long)local_24);
    }
    return lVar1;
}

void reach_error(void)
{
    __CPROVER_assert(0, "wrong");
    return;
}

int main(void)
{
    unsigned int uVar1;
    unsigned int local_78[19];
    unsigned int local_2c;
    int local_24;
    int local_20;
    unsigned int local_1c;
    int local_18;
    int local_14;

    local_18 = rangesum(local_78);
    uVar1 = local_78[0];
    local_1c = local_78[0];
    local_78[0] = local_78[1];
    local_78[1] = uVar1;
    local_20 = rangesum(local_78);
    local_1c = local_78[0];
    for (local_14 = 0; local_14 < 0x13; local_14 = local_14 + 1)
    {
        local_78[local_14] = local_78[local_14 + 1];
    }
    local_2c = local_1c;
    local_24 = rangesum(local_78);
    if ((local_18 == local_20) && (local_18 == local_24))
    {
        return 1;
    }
    reach_error();
    return 1;
}