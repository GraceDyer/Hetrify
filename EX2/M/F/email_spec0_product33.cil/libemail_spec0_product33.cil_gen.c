#include <stdint.h>
#include <string.h>
#include <assert.h>
enum gp_reg_type_t {                           
    zero, ra, sp, gp, tp,  t0, t1, t2, s0, s1,             
    a0, a1, a2, a3, a4, a5, a6, a7,                          
    s2, s3, s4, s5, s6, s7, s8, s9, s10, s11,                        
    t3, t4, t5, t6,                             
};                                              
typedef struct {                               
    uint64_t gp_regs[32];                      
    uint64_t pc;                               
} cpu_t;                                       
extern void set_Client_Keyring0(int, int, int*, int*);



/*******************    Function: set_Client_Keyring0   *********************/
void set_Client_Keyring0(int arg0, int arg1, int* arg2, int* arg3){
    cpu_t cpu;
    cpu_t *c=&cpu;
    char stack[64];
    c->gp_regs[sp]=(uint64_t)&stack[64-1];
    c->gp_regs[a0]=arg0;
    c->gp_regs[a1]=arg1;
    c->gp_regs[a2]=arg2;
    c->gp_regs[a3]=arg3;
L_10000: {//addi_set_Client_Keyring0
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-48LL;
    }
L_10004: {//sd_set_Client_Keyring0
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[8];
    *(uint64_t *)(rs1 + (int64_t)40LL) = (uint64_t)rs2;
    }
L_10008: {//addi_set_Client_Keyring0
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = rs1 + (int64_t)48LL;
    }
L_1000c: {//addi_set_Client_Keyring0
    uint64_t rs1 = c->gp_regs[10];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_10010: {//addi_set_Client_Keyring0
    uint64_t rs1 = c->gp_regs[11];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_10014: {//sd_set_Client_Keyring0
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[12];
    *(uint64_t *)(rs1 + (int64_t)-32LL) = (uint64_t)rs2;
    }
L_10018: {//sd_set_Client_Keyring0
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[13];
    *(uint64_t *)(rs1 + (int64_t)-40LL) = (uint64_t)rs2;
    }
L_1001c: {//sw_set_Client_Keyring0
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_10020: {//addi_set_Client_Keyring0
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_10024: {//sw_set_Client_Keyring0
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-24LL) = (uint32_t)rs2;
    }
L_10028: {//lw_set_Client_Keyring0
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_1002c: {//addiw_set_Client_Keyring0
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10030: {//bne_set_Client_Keyring0
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_10044;
    }
    }
L_10034: {//ld_set_Client_Keyring0
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-32LL);
    c->gp_regs[15] = rd;
    }
L_10038: {//lw_set_Client_Keyring0
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-24LL);
    c->gp_regs[14] = rd;
    }
L_1003c: {//sw_set_Client_Keyring0
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint32_t *)(rs1 + (int64_t)0LL) = (uint32_t)rs2;
    }
L_10040: {//jal_set_Client_Keyring0
    goto L_10060;
    }
L_10044: {//lw_set_Client_Keyring0
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_10048: {//addiw_set_Client_Keyring0
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_1004c: {//addi_set_Client_Keyring0
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_10050: {//bne_set_Client_Keyring0
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_10060;
    }
    }
L_10054: {//ld_set_Client_Keyring0
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-40LL);
    c->gp_regs[15] = rd;
    }
L_10058: {//lw_set_Client_Keyring0
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-24LL);
    c->gp_regs[14] = rd;
    }
L_1005c: {//sw_set_Client_Keyring0
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint32_t *)(rs1 + (int64_t)0LL) = (uint32_t)rs2;
    }
L_10060: {//addi_set_Client_Keyring0
    uint64_t rs1 = 0;
    }
L_10064: {//ld_set_Client_Keyring0
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)40LL);
    c->gp_regs[8] = rd;
    }
L_10068: {//addi_set_Client_Keyring0
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)48LL;
    }
L_1006c: {//jalr_set_Client_Keyring0
    uint64_t rs1 = c->gp_regs[1];
    return;
    }
}
