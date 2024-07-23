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
extern void write_back(int*, int*, int*, int*, int*, int*);



/*******************    Function: write_back   *********************/
void write_back(int* arg0, int* arg1, int* arg2, int* arg3, int* arg4, int* arg5){
    cpu_t cpu;
    cpu_t *c=&cpu;
    char stack[80];
    c->gp_regs[sp]=(uint64_t)&stack[80-1];
    c->gp_regs[a0]=arg0;
    c->gp_regs[a1]=arg1;
    c->gp_regs[a2]=arg2;
    c->gp_regs[a3]=arg3;
    c->gp_regs[a4]=arg4;
    c->gp_regs[a5]=arg5;
L_10000: {//addi_write_back
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-64LL;
    }
L_10004: {//sd_write_back
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[8];
    *(uint64_t *)(rs1 + (int64_t)56LL) = (uint64_t)rs2;
    }
L_10008: {//addi_write_back
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = rs1 + (int64_t)64LL;
    }
L_1000c: {//sd_write_back
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[10];
    *(uint64_t *)(rs1 + (int64_t)-24LL) = (uint64_t)rs2;
    }
L_10010: {//sd_write_back
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[11];
    *(uint64_t *)(rs1 + (int64_t)-32LL) = (uint64_t)rs2;
    }
L_10014: {//sd_write_back
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[12];
    *(uint64_t *)(rs1 + (int64_t)-40LL) = (uint64_t)rs2;
    }
L_10018: {//sd_write_back
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[13];
    *(uint64_t *)(rs1 + (int64_t)-48LL) = (uint64_t)rs2;
    }
L_1001c: {//sd_write_back
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[14];
    *(uint64_t *)(rs1 + (int64_t)-56LL) = (uint64_t)rs2;
    }
L_10020: {//sd_write_back
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint64_t *)(rs1 + (int64_t)-64LL) = (uint64_t)rs2;
    }
L_10024: {//ld_write_back
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-24LL);
    c->gp_regs[15] = rd;
    }
L_10028: {//lw_write_back
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[15] = rd;
    }
L_1002c: {//beq_write_back
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    if ((uint64_t)rs1 == (uint64_t)rs2) {
        goto L_10048;
    }
    }
L_10030: {//ld_write_back
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-24LL);
    c->gp_regs[15] = rd;
    }
L_10034: {//lw_write_back
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[15] = rd;
    }
L_10038: {//addi_write_back
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_1003c: {//addi_write_back
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_10040: {//beq_write_back
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 == (uint64_t)rs2) {
        goto L_10068;
    }
    }
L_10044: {//jal_write_back
    goto L_1004c;
    }
L_10048: {//addi_write_back
    uint64_t rs1 = 0;
    }
L_1004c: {//ld_write_back
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-32LL);
    c->gp_regs[15] = rd;
    }
L_10050: {//addi_write_back
    uint64_t rs1 = 0;
    c->gp_regs[14] = rs1 + (int64_t)2LL;
    }
L_10054: {//sw_write_back
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint32_t *)(rs1 + (int64_t)0LL) = (uint32_t)rs2;
    }
L_10058: {//ld_write_back
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-24LL);
    c->gp_regs[15] = rd;
    }
L_1005c: {//addi_write_back
    uint64_t rs1 = 0;
    c->gp_regs[14] = rs1 + (int64_t)1LL;
    }
L_10060: {//sw_write_back
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint32_t *)(rs1 + (int64_t)0LL) = (uint32_t)rs2;
    }
L_10064: {//jal_write_back
    goto L_10098;
    }
L_10068: {//addi_write_back
    uint64_t rs1 = 0;
    }
L_1006c: {//ld_write_back
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-48LL);
    c->gp_regs[15] = rd;
    }
L_10070: {//lw_write_back
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[14] = rd;
    }
L_10074: {//ld_write_back
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-40LL);
    c->gp_regs[15] = rd;
    }
L_10078: {//sw_write_back
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint32_t *)(rs1 + (int64_t)0LL) = (uint32_t)rs2;
    }
L_1007c: {//ld_write_back
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-56LL);
    c->gp_regs[15] = rd;
    }
L_10080: {//addi_write_back
    uint64_t rs1 = 0;
    c->gp_regs[14] = rs1 + (int64_t)1LL;
    }
L_10084: {//sw_write_back
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint32_t *)(rs1 + (int64_t)0LL) = (uint32_t)rs2;
    }
L_10088: {//ld_write_back
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-64LL);
    c->gp_regs[15] = rd;
    }
L_1008c: {//addi_write_back
    uint64_t rs1 = 0;
    c->gp_regs[14] = rs1 + (int64_t)1LL;
    }
L_10090: {//sw_write_back
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint32_t *)(rs1 + (int64_t)0LL) = (uint32_t)rs2;
    }
L_10094: {//jal_write_back
    goto L_1004c;
    }
L_10098: {//addi_write_back
    uint64_t rs1 = 0;
    }
L_1009c: {//ld_write_back
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)56LL);
    c->gp_regs[8] = rd;
    }
L_100a0: {//addi_write_back
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)64LL;
    }
L_100a4: {//jalr_write_back
    uint64_t rs1 = c->gp_regs[1];
    return;
    }
}
