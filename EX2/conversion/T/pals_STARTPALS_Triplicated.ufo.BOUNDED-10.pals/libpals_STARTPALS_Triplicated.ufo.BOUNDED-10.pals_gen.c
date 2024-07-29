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
extern _Bool read_his(int, _Bool, _Bool, _Bool);



/*******************    Function: read_his   *********************/
_Bool read_his(int arg0, _Bool arg1, _Bool arg2, _Bool arg3){
    cpu_t cpu;
    cpu_t *c=&cpu;
    char stack[48];
    c->gp_regs[sp]=(uint64_t)&stack[48-1];
    c->gp_regs[a0]=arg0;
    c->gp_regs[a1]=arg1;
    c->gp_regs[a2]=arg2;
    c->gp_regs[a3]=arg3;
L_10000: {//addi_read_his
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-32LL;
    }
L_10004: {//sd_read_his
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[8];
    *(uint64_t *)(rs1 + (int64_t)24LL) = (uint64_t)rs2;
    }
L_10008: {//addi_read_his
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = rs1 + (int64_t)32LL;
    }
L_1000c: {//addi_read_his
    uint64_t rs1 = c->gp_regs[10];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_10010: {//addi_read_his
    uint64_t rs1 = c->gp_regs[13];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_10014: {//sw_read_his
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_10018: {//addi_read_his
    uint64_t rs1 = c->gp_regs[11];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_1001c: {//sb_read_his
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint8_t *)(rs1 + (int64_t)-21LL) = (uint8_t)rs2;
    }
L_10020: {//addi_read_his
    uint64_t rs1 = c->gp_regs[12];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_10024: {//sb_read_his
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint8_t *)(rs1 + (int64_t)-22LL) = (uint8_t)rs2;
    }
L_10028: {//addi_read_his
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_1002c: {//sb_read_his
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint8_t *)(rs1 + (int64_t)-23LL) = (uint8_t)rs2;
    }
L_10030: {//lw_read_his
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_10034: {//addiw_read_his
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10038: {//bne_read_his
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_10044;
    }
    }
L_1003c: {//lbu_read_his
    uint64_t rs1 = c->gp_regs[8];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)-21LL);
    c->gp_regs[15] = rd;
    }
L_10040: {//jal_read_his
    goto L_10060;
    }
L_10044: {//lw_read_his
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_10048: {//addiw_read_his
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_1004c: {//addi_read_his
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_10050: {//bne_read_his
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_1005c;
    }
    }
L_10054: {//lbu_read_his
    uint64_t rs1 = c->gp_regs[8];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)-22LL);
    c->gp_regs[15] = rd;
    }
L_10058: {//jal_read_his
    goto L_10060;
    }
L_1005c: {//lbu_read_his
    uint64_t rs1 = c->gp_regs[8];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)-23LL);
    c->gp_regs[15] = rd;
    }
L_10060: {//addi_read_his
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[10] = rs1 + (int64_t)0LL;
    }
L_10064: {//ld_read_his
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)24LL);
    c->gp_regs[8] = rd;
    }
L_10068: {//addi_read_his
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)32LL;
    }
L_1006c: {//jalr_read_his
    uint64_t rs1 = c->gp_regs[1];
    return (_Bool)c->gp_regs[a0];
    }
}
