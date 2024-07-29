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
int m_st = 0;
int t1_st = 0;
int t2_st = 0;
int t3_st = 0;
int m_i = 0;
int t1_i = 0;
int t2_i = 0;
int t3_i = 0;
extern int exists_runnable_thread();
extern void init_threads();



/*******************    Function: init_threads   *********************/
void init_threads(){
    cpu_t cpu;
    cpu_t *c=&cpu;
    char stack[32];
    c->gp_regs[sp]=(uint64_t)&stack[32-1];
L_10000: {//addi_init_threads
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-16LL;
    }
L_10004: {//sd_init_threads
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[8];
    *(uint64_t *)(rs1 + (int64_t)8LL) = (uint64_t)rs2;
    }
L_10008: {//addi_init_threads
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = rs1 + (int64_t)16LL;
    }
L_1000c: {//lui_init_threads
    c->gp_regs[15] = 65536LL;
    }
L_10010: {//lw_init_threads
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(&m_i);
    c->gp_regs[15] = rd;
    }
L_10014: {//addi_init_threads
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_10018: {//addi_init_threads
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_1001c: {//bne_init_threads
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_1002c;
    }
    }
L_10020: {//lui_init_threads
    c->gp_regs[15] = 65536LL;
    }
L_10024: {//sw_init_threads
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    *(uint32_t *)(&m_st) = (uint32_t)rs2;
    }
L_10028: {//jal_init_threads
    goto L_10038;
    }
L_1002c: {//lui_init_threads
    c->gp_regs[15] = 65536LL;
    }
L_10030: {//addi_init_threads
    uint64_t rs1 = 0;
    c->gp_regs[14] = rs1 + (int64_t)2LL;
    }
L_10034: {//sw_init_threads
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint32_t *)(&m_st) = (uint32_t)rs2;
    }
L_10038: {//lui_init_threads
    c->gp_regs[15] = 65536LL;
    }
L_1003c: {//lw_init_threads
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(&t1_i);
    c->gp_regs[15] = rd;
    }
L_10040: {//addi_init_threads
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_10044: {//addi_init_threads
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_10048: {//bne_init_threads
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_10058;
    }
    }
L_1004c: {//lui_init_threads
    c->gp_regs[15] = 65536LL;
    }
L_10050: {//sw_init_threads
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    *(uint32_t *)(&t1_st) = (uint32_t)rs2;
    }
L_10054: {//jal_init_threads
    goto L_10064;
    }
L_10058: {//lui_init_threads
    c->gp_regs[15] = 65536LL;
    }
L_1005c: {//addi_init_threads
    uint64_t rs1 = 0;
    c->gp_regs[14] = rs1 + (int64_t)2LL;
    }
L_10060: {//sw_init_threads
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint32_t *)(&t1_st) = (uint32_t)rs2;
    }
L_10064: {//lui_init_threads
    c->gp_regs[15] = 65536LL;
    }
L_10068: {//lw_init_threads
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(&t2_i);
    c->gp_regs[15] = rd;
    }
L_1006c: {//addi_init_threads
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_10070: {//addi_init_threads
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_10074: {//bne_init_threads
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_10084;
    }
    }
L_10078: {//lui_init_threads
    c->gp_regs[15] = 65536LL;
    }
L_1007c: {//sw_init_threads
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    *(uint32_t *)(&t2_st) = (uint32_t)rs2;
    }
L_10080: {//jal_init_threads
    goto L_10090;
    }
L_10084: {//lui_init_threads
    c->gp_regs[15] = 65536LL;
    }
L_10088: {//addi_init_threads
    uint64_t rs1 = 0;
    c->gp_regs[14] = rs1 + (int64_t)2LL;
    }
L_1008c: {//sw_init_threads
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint32_t *)(&t2_st) = (uint32_t)rs2;
    }
L_10090: {//lui_init_threads
    c->gp_regs[15] = 65536LL;
    }
L_10094: {//lw_init_threads
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(&t3_i);
    c->gp_regs[15] = rd;
    }
L_10098: {//addi_init_threads
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_1009c: {//addi_init_threads
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_100a0: {//bne_init_threads
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_100b0;
    }
    }
L_100a4: {//lui_init_threads
    c->gp_regs[15] = 65536LL;
    }
L_100a8: {//sw_init_threads
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    *(uint32_t *)(&t3_st) = (uint32_t)rs2;
    }
L_100ac: {//jal_init_threads
    goto L_100c0;
    }
L_100b0: {//lui_init_threads
    c->gp_regs[15] = 65536LL;
    }
L_100b4: {//addi_init_threads
    uint64_t rs1 = 0;
    c->gp_regs[14] = rs1 + (int64_t)2LL;
    }
L_100b8: {//sw_init_threads
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint32_t *)(&t3_st) = (uint32_t)rs2;
    }
L_100bc: {//addi_init_threads
    uint64_t rs1 = 0;
    }
L_100c0: {//ld_init_threads
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)8LL);
    c->gp_regs[8] = rd;
    }
L_100c4: {//addi_init_threads
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)16LL;
    }
L_100c8: {//jalr_init_threads
    uint64_t rs1 = c->gp_regs[1];
    return;
    }
}



/*******************    Function: exists_runnable_thread   *********************/
int exists_runnable_thread(){
    cpu_t cpu;
    cpu_t *c=&cpu;
    char stack[48];
    c->gp_regs[sp]=(uint64_t)&stack[48-1];
L_100cc: {//addi_exists_runnable_thread
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-32LL;
    }
L_100d0: {//sd_exists_runnable_thread
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[8];
    *(uint64_t *)(rs1 + (int64_t)24LL) = (uint64_t)rs2;
    }
L_100d4: {//addi_exists_runnable_thread
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = rs1 + (int64_t)32LL;
    }
L_100d8: {//lui_exists_runnable_thread
    c->gp_regs[15] = 65536LL;
    }
L_100dc: {//lw_exists_runnable_thread
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(&m_st);
    c->gp_regs[15] = rd;
    }
L_100e0: {//bne_exists_runnable_thread
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_100f0;
    }
    }
L_100e4: {//addi_exists_runnable_thread
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_100e8: {//sw_exists_runnable_thread
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_100ec: {//jal_exists_runnable_thread
    goto L_1013c;
    }
L_100f0: {//lui_exists_runnable_thread
    c->gp_regs[15] = 65536LL;
    }
L_100f4: {//lw_exists_runnable_thread
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(&t1_st);
    c->gp_regs[15] = rd;
    }
L_100f8: {//bne_exists_runnable_thread
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_10108;
    }
    }
L_100fc: {//addi_exists_runnable_thread
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_10100: {//sw_exists_runnable_thread
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_10104: {//jal_exists_runnable_thread
    goto L_1013c;
    }
L_10108: {//lui_exists_runnable_thread
    c->gp_regs[15] = 65536LL;
    }
L_1010c: {//lw_exists_runnable_thread
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(&t2_st);
    c->gp_regs[15] = rd;
    }
L_10110: {//bne_exists_runnable_thread
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_10120;
    }
    }
L_10114: {//addi_exists_runnable_thread
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_10118: {//sw_exists_runnable_thread
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_1011c: {//jal_exists_runnable_thread
    goto L_1013c;
    }
L_10120: {//lui_exists_runnable_thread
    c->gp_regs[15] = 65536LL;
    }
L_10124: {//lw_exists_runnable_thread
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(&t3_st);
    c->gp_regs[15] = rd;
    }
L_10128: {//bne_exists_runnable_thread
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_10138;
    }
    }
L_1012c: {//addi_exists_runnable_thread
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_10130: {//sw_exists_runnable_thread
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_10134: {//jal_exists_runnable_thread
    goto L_1013c;
    }
L_10138: {//sw_exists_runnable_thread
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_1013c: {//lw_exists_runnable_thread
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_10140: {//addi_exists_runnable_thread
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[10] = rs1 + (int64_t)0LL;
    }
L_10144: {//ld_exists_runnable_thread
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)24LL);
    c->gp_regs[8] = rd;
    }
L_10148: {//addi_exists_runnable_thread
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)32LL;
    }
L_1014c: {//jalr_exists_runnable_thread
    uint64_t rs1 = c->gp_regs[1];
    return (int)c->gp_regs[a0];
    }
}
