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
int __ste_email_isEncrypted0 = 0;
int __ste_email_isEncrypted1 = 0;
extern void setEmailIsEncrypted(int, int);
extern int isEncrypted(int);



/*******************    Function: isEncrypted   *********************/
int isEncrypted(int arg0){
    cpu_t cpu;
    cpu_t *c=&cpu;
    char stack[64];
    c->gp_regs[sp]=(uint64_t)&stack[64-1];
    c->gp_regs[a0]=arg0;
L_10000: {//addi_isEncrypted
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-48LL;
    }
L_10004: {//sd_isEncrypted
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[8];
    *(uint64_t *)(rs1 + (int64_t)40LL) = (uint64_t)rs2;
    }
L_10008: {//addi_isEncrypted
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = rs1 + (int64_t)48LL;
    }
L_1000c: {//addi_isEncrypted
    uint64_t rs1 = c->gp_regs[10];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_10010: {//sw_isEncrypted
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-36LL) = (uint32_t)rs2;
    }
L_10014: {//lw_isEncrypted
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-36LL);
    c->gp_regs[15] = rd;
    }
L_10018: {//addiw_isEncrypted
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_1001c: {//addi_isEncrypted
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_10020: {//bne_isEncrypted
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_10038;
    }
    }
L_10024: {//lui_isEncrypted
    c->gp_regs[15] = 65536LL;
    }
L_10028: {//lw_isEncrypted
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(&__ste_email_isEncrypted0);
    c->gp_regs[15] = rd;
    }
L_1002c: {//sw_isEncrypted
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_10030: {//lw_isEncrypted
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_10034: {//jal_isEncrypted
    goto L_10064;
    }
L_10038: {//lw_isEncrypted
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-36LL);
    c->gp_regs[15] = rd;
    }
L_1003c: {//addiw_isEncrypted
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10040: {//addi_isEncrypted
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)2LL;
    }
L_10044: {//bne_isEncrypted
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_1005c;
    }
    }
L_10048: {//lui_isEncrypted
    c->gp_regs[15] = 65536LL;
    }
L_1004c: {//lw_isEncrypted
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(&__ste_email_isEncrypted1);
    c->gp_regs[15] = rd;
    }
L_10050: {//sw_isEncrypted
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_10054: {//lw_isEncrypted
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_10058: {//jal_isEncrypted
    goto L_10064;
    }
L_1005c: {//sw_isEncrypted
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_10060: {//lw_isEncrypted
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_10064: {//addi_isEncrypted
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[10] = rs1 + (int64_t)0LL;
    }
L_10068: {//ld_isEncrypted
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)40LL);
    c->gp_regs[8] = rd;
    }
L_1006c: {//addi_isEncrypted
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)48LL;
    }
L_10070: {//jalr_isEncrypted
    uint64_t rs1 = c->gp_regs[1];
    return (int)c->gp_regs[a0];
    }
}



/*******************    Function: setEmailIsEncrypted   *********************/
void setEmailIsEncrypted(int arg0, int arg1){
    cpu_t cpu;
    cpu_t *c=&cpu;
    char stack[48];
    c->gp_regs[sp]=(uint64_t)&stack[48-1];
    c->gp_regs[a0]=arg0;
    c->gp_regs[a1]=arg1;
L_10074: {//addi_setEmailIsEncrypted
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-32LL;
    }
L_10078: {//sd_setEmailIsEncrypted
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[8];
    *(uint64_t *)(rs1 + (int64_t)24LL) = (uint64_t)rs2;
    }
L_1007c: {//addi_setEmailIsEncrypted
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = rs1 + (int64_t)32LL;
    }
L_10080: {//addi_setEmailIsEncrypted
    uint64_t rs1 = c->gp_regs[10];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_10084: {//addi_setEmailIsEncrypted
    uint64_t rs1 = c->gp_regs[11];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_10088: {//sw_setEmailIsEncrypted
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_1008c: {//addi_setEmailIsEncrypted
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_10090: {//sw_setEmailIsEncrypted
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-24LL) = (uint32_t)rs2;
    }
L_10094: {//lw_setEmailIsEncrypted
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_10098: {//addiw_setEmailIsEncrypted
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_1009c: {//addi_setEmailIsEncrypted
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_100a0: {//bne_setEmailIsEncrypted
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_100b4;
    }
    }
L_100a4: {//lui_setEmailIsEncrypted
    c->gp_regs[15] = 65536LL;
    }
L_100a8: {//lw_setEmailIsEncrypted
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-24LL);
    c->gp_regs[14] = rd;
    }
L_100ac: {//sw_setEmailIsEncrypted
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint32_t *)(&__ste_email_isEncrypted0) = (uint32_t)rs2;
    }
L_100b0: {//jal_setEmailIsEncrypted
    goto L_100d4;
    }
L_100b4: {//lw_setEmailIsEncrypted
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_100b8: {//addiw_setEmailIsEncrypted
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_100bc: {//addi_setEmailIsEncrypted
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)2LL;
    }
L_100c0: {//bne_setEmailIsEncrypted
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_100d4;
    }
    }
L_100c4: {//lui_setEmailIsEncrypted
    c->gp_regs[15] = 65536LL;
    }
L_100c8: {//lw_setEmailIsEncrypted
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-24LL);
    c->gp_regs[14] = rd;
    }
L_100cc: {//sw_setEmailIsEncrypted
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint32_t *)(&__ste_email_isEncrypted1) = (uint32_t)rs2;
    }
L_100d0: {//addi_setEmailIsEncrypted
    uint64_t rs1 = 0;
    }
L_100d4: {//addi_setEmailIsEncrypted
    uint64_t rs1 = 0;
    }
L_100d8: {//ld_setEmailIsEncrypted
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)24LL);
    c->gp_regs[8] = rd;
    }
L_100dc: {//addi_setEmailIsEncrypted
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)32LL;
    }
L_100e0: {//jalr_setEmailIsEncrypted
    uint64_t rs1 = c->gp_regs[1];
    return;
    }
}
