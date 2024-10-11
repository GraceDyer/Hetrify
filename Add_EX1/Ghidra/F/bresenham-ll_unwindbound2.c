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
    long lVar3;
    int local_30;
    int local_2c;
    long local_28;
    long local_20;
    long local_18;

    local_28 = (long)local_2c * 2 - (long)local_30;
    local_20 = 0;
    for (local_18 = 0;
         (iVar2 = counter + 1, bVar1 = counter < 2, counter = iVar2, bVar1 && (__VERIFIER_assert(local_28 == ((local_18 * local_2c - local_20 * local_30) * 2 - (long)local_30) + (long)local_2c * 2), local_18 <= local_30)); local_18 = local_18 + 1)
    {
        if (local_28 < 0)
        {
            lVar3 = (long)local_2c;
        }
        else
        {
            lVar3 = (long)local_2c - (long)local_30;
            local_20 = local_20 + 1;
        }
        local_28 = local_28 + lVar3 * 2;
    }
    __VERIFIER_assert(((((local_18 * local_2c - local_18 * local_20) * 2 - (long)local_30) +
                        (long)local_2c * 2) -
                       local_28) +
                          local_20 * 2 ==
                      0);
    return 0;
}