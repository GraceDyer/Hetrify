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
int P_1_pc = 0;
int P_1_st = 0;
int P_1_i = 0;
int P_1_ev = 0;
int i = 0;
int max_loop = 0;
int num = 0;
extern int is_P_1_triggered();



/*******************    Function: is_P_1_triggered   *********************/
int is_P_1_triggered(){
    cpu_t cpu;
    cpu_t *c=&cpu;
    char stack[48];
    c->gp_regs[sp]=(uint64_t)&stack[48-1];
L_10000: {//addi_is_P_1_triggered
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-32LL;
    }
L_10004: {//sd_is_P_1_triggered
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[8];
    *(uint64_t *)(rs1 + (int64_t)24LL) = (uint64_t)rs2;
    }
L_10008: {//addi_is_P_1_triggered
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = rs1 + (int64_t)32LL;
    }
L_1000c: {//lui_is_P_1_triggered
    c->gp_regs[15] = 65536LL;
    }
L_10010: {//lw_is_P_1_triggered
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(&P_1_pc);
    c->gp_regs[15] = rd;
    }
L_10014: {//addi_is_P_1_triggered
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_10018: {//addi_is_P_1_triggered
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_1001c: {//bne_is_P_1_triggered
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_10040;
    }
    }
L_10020: {//lui_is_P_1_triggered
    c->gp_regs[15] = 65536LL;
    }
L_10024: {//lw_is_P_1_triggered
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(&P_1_ev);
    c->gp_regs[15] = rd;
    }
L_10028: {//addi_is_P_1_triggered
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_1002c: {//addi_is_P_1_triggered
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_10030: {//bne_is_P_1_triggered
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_10040;
    }
    }
L_10034: {//addi_is_P_1_triggered
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_10038: {//sw_is_P_1_triggered
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_1003c: {//jal_is_P_1_triggered
    goto L_10044;
    }
L_10040: {//sw_is_P_1_triggered
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_10044: {//lw_is_P_1_triggered
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_10048: {//addi_is_P_1_triggered
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[10] = rs1 + (int64_t)0LL;
    }
L_1004c: {//ld_is_P_1_triggered
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)24LL);
    c->gp_regs[8] = rd;
    }
L_10050: {//addi_is_P_1_triggered
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)32LL;
    }
L_10054: {//jalr_is_P_1_triggered
    uint64_t rs1 = c->gp_regs[1];
    return (int)c->gp_regs[a0];
    }
}
