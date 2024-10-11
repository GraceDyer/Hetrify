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
    int uVar1;
    char acStack_38[4];
    char local_34;
    char acStack_30[4];
    char local_2c;
    unsigned int local_24;
    int local_20;
    int local_1c;
    int local_18;
    int local_14;

    local_24 = 0;
    for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1)
    {
    }
    if (local_2c == '\0')
    {
        for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1)
        {
        }
        if (local_34 == '\0')
        {
            for (local_1c = 0; acStack_30[local_1c] != '\0'; local_1c = local_1c + 1)
            {
            }
            for (local_20 = 0; acStack_38[local_20] != '\0'; local_20 = local_20 + 1)
            {
            }
            if (local_1c <= local_20)
            {
                local_18 = 0;
                local_14 = 0;
                while ((local_14 < local_1c && (local_18 < local_20)))
                {
                    if (acStack_30[local_14] == acStack_38[local_18])
                    {
                        local_14 = local_14 + 1;
                        local_18 = local_18 + 1;
                    }
                    else
                    {
                        local_14 = (local_14 - local_18) + 1;
                        local_18 = 0;
                    }
                }
                local_24 = (unsigned int)(local_20 <= local_14);
                if ((local_24 == 0) || (local_24 == 1))
                {
                    uVar1 = 1;
                }
                else
                {
                    uVar1 = 0;
                }
                __VERIFIER_assert(uVar1);
            }
        }
    }
    return 0;
}
