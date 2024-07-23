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
int m_i = 0;
int t1_i = 0;
int t2_i = 0;
int t3_i = 0;
int t4_i = 0;
int t5_i = 0;
int t6_i = 0;
int t7_i = 0;
int t8_i = 0;
int t9_i = 0;
int t10_i = 0;
int t11_i = 0;
int t12_i = 0;
extern void init_model();



/*******************    Function: init_model   *********************/
void init_model(){
    cpu_t cpu;
    cpu_t *c=&cpu;
    char stack[32];
    c->gp_regs[sp]=(uint64_t)&stack[32-1];
L_10000: {//addi_init_model
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-16LL;
    }
L_10004: {//sd_init_model
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[8];
    *(uint64_t *)(rs1 + (int64_t)8LL) = (uint64_t)rs2;
    }
L_10008: {//addi_init_model
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = rs1 + (int64_t)16LL;
    }
L_1000c: {//lui_init_model
    c->gp_regs[15] = 65536LL;
    }
L_10010: {//addi_init_model
    uint64_t rs1 = 0;
    c->gp_regs[14] = rs1 + (int64_t)1LL;
    }
L_10014: {//sw_init_model
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint32_t *)(&m_i) = (uint32_t)rs2;
    }
L_10018: {//lui_init_model
    c->gp_regs[15] = 65536LL;
    }
L_1001c: {//addi_init_model
    uint64_t rs1 = 0;
    c->gp_regs[14] = rs1 + (int64_t)1LL;
    }
L_10020: {//sw_init_model
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint32_t *)(&t1_i) = (uint32_t)rs2;
    }
L_10024: {//lui_init_model
    c->gp_regs[15] = 65536LL;
    }
L_10028: {//addi_init_model
    uint64_t rs1 = 0;
    c->gp_regs[14] = rs1 + (int64_t)1LL;
    }
L_1002c: {//sw_init_model
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint32_t *)(&t2_i) = (uint32_t)rs2;
    }
L_10030: {//lui_init_model
    c->gp_regs[15] = 65536LL;
    }
L_10034: {//addi_init_model
    uint64_t rs1 = 0;
    c->gp_regs[14] = rs1 + (int64_t)1LL;
    }
L_10038: {//sw_init_model
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint32_t *)(&t3_i) = (uint32_t)rs2;
    }
L_1003c: {//lui_init_model
    c->gp_regs[15] = 65536LL;
    }
L_10040: {//addi_init_model
    uint64_t rs1 = 0;
    c->gp_regs[14] = rs1 + (int64_t)1LL;
    }
L_10044: {//sw_init_model
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint32_t *)(&t4_i) = (uint32_t)rs2;
    }
L_10048: {//lui_init_model
    c->gp_regs[15] = 65536LL;
    }
L_1004c: {//addi_init_model
    uint64_t rs1 = 0;
    c->gp_regs[14] = rs1 + (int64_t)1LL;
    }
L_10050: {//sw_init_model
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint32_t *)(&t5_i) = (uint32_t)rs2;
    }
L_10054: {//lui_init_model
    c->gp_regs[15] = 65536LL;
    }
L_10058: {//addi_init_model
    uint64_t rs1 = 0;
    c->gp_regs[14] = rs1 + (int64_t)1LL;
    }
L_1005c: {//sw_init_model
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint32_t *)(&t6_i) = (uint32_t)rs2;
    }
L_10060: {//lui_init_model
    c->gp_regs[15] = 65536LL;
    }
L_10064: {//addi_init_model
    uint64_t rs1 = 0;
    c->gp_regs[14] = rs1 + (int64_t)1LL;
    }
L_10068: {//sw_init_model
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint32_t *)(&t7_i) = (uint32_t)rs2;
    }
L_1006c: {//lui_init_model
    c->gp_regs[15] = 65536LL;
    }
L_10070: {//addi_init_model
    uint64_t rs1 = 0;
    c->gp_regs[14] = rs1 + (int64_t)1LL;
    }
L_10074: {//sw_init_model
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint32_t *)(&t8_i) = (uint32_t)rs2;
    }
L_10078: {//lui_init_model
    c->gp_regs[15] = 65536LL;
    }
L_1007c: {//addi_init_model
    uint64_t rs1 = 0;
    c->gp_regs[14] = rs1 + (int64_t)1LL;
    }
L_10080: {//sw_init_model
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint32_t *)(&t9_i) = (uint32_t)rs2;
    }
L_10084: {//lui_init_model
    c->gp_regs[15] = 65536LL;
    }
L_10088: {//addi_init_model
    uint64_t rs1 = 0;
    c->gp_regs[14] = rs1 + (int64_t)1LL;
    }
L_1008c: {//sw_init_model
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint32_t *)(&t10_i) = (uint32_t)rs2;
    }
L_10090: {//lui_init_model
    c->gp_regs[15] = 65536LL;
    }
L_10094: {//addi_init_model
    uint64_t rs1 = 0;
    c->gp_regs[14] = rs1 + (int64_t)1LL;
    }
L_10098: {//sw_init_model
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint32_t *)(&t11_i) = (uint32_t)rs2;
    }
L_1009c: {//lui_init_model
    c->gp_regs[15] = 65536LL;
    }
L_100a0: {//addi_init_model
    uint64_t rs1 = 0;
    c->gp_regs[14] = rs1 + (int64_t)1LL;
    }
L_100a4: {//sw_init_model
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint32_t *)(&t12_i) = (uint32_t)rs2;
    }
L_100a8: {//addi_init_model
    uint64_t rs1 = 0;
    }
L_100ac: {//ld_init_model
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)8LL);
    c->gp_regs[8] = rd;
    }
L_100b0: {//addi_init_model
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)16LL;
    }
L_100b4: {//jalr_init_model
    uint64_t rs1 = c->gp_regs[1];
    return;
    }
}
