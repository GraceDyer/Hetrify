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
extern int is_do_read_c_triggered(int*, int*);
extern int is_do_write_p_triggered(int*, int*);



/*******************    Function: is_do_write_p_triggered   *********************/
int is_do_write_p_triggered(int* arg0, int* arg1){
    cpu_t cpu;
    cpu_t *c=&cpu;
    char stack[64];
    c->gp_regs[sp]=(uint64_t)&stack[64-1];
    c->gp_regs[a0]=arg0;
    c->gp_regs[a1]=arg1;
L_10000: {//addi_is_do_write_p_triggered
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-48LL;
    }
L_10004: {//sd_is_do_write_p_triggered
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[8];
    *(uint64_t *)(rs1 + (int64_t)40LL) = (uint64_t)rs2;
    }
L_10008: {//addi_is_do_write_p_triggered
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = rs1 + (int64_t)48LL;
    }
L_1000c: {//sd_is_do_write_p_triggered
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[10];
    *(uint64_t *)(rs1 + (int64_t)-40LL) = (uint64_t)rs2;
    }
L_10010: {//sd_is_do_write_p_triggered
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[11];
    *(uint64_t *)(rs1 + (int64_t)-48LL) = (uint64_t)rs2;
    }
L_10014: {//ld_is_do_write_p_triggered
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-40LL);
    c->gp_regs[15] = rd;
    }
L_10018: {//lw_is_do_write_p_triggered
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[15] = rd;
    }
L_1001c: {//addi_is_do_write_p_triggered
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_10020: {//addi_is_do_write_p_triggered
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_10024: {//bne_is_do_write_p_triggered
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_10048;
    }
    }
L_10028: {//ld_is_do_write_p_triggered
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-48LL);
    c->gp_regs[15] = rd;
    }
L_1002c: {//lw_is_do_write_p_triggered
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[15] = rd;
    }
L_10030: {//addi_is_do_write_p_triggered
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_10034: {//addi_is_do_write_p_triggered
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_10038: {//bne_is_do_write_p_triggered
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_10048;
    }
    }
L_1003c: {//addi_is_do_write_p_triggered
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_10040: {//sw_is_do_write_p_triggered
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_10044: {//jal_is_do_write_p_triggered
    goto L_1004c;
    }
L_10048: {//sw_is_do_write_p_triggered
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_1004c: {//lw_is_do_write_p_triggered
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_10050: {//addi_is_do_write_p_triggered
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[10] = rs1 + (int64_t)0LL;
    }
L_10054: {//ld_is_do_write_p_triggered
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)40LL);
    c->gp_regs[8] = rd;
    }
L_10058: {//addi_is_do_write_p_triggered
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)48LL;
    }
L_1005c: {//jalr_is_do_write_p_triggered
    uint64_t rs1 = c->gp_regs[1];
    return (int)c->gp_regs[a0];
    }
}



/*******************    Function: is_do_read_c_triggered   *********************/
int is_do_read_c_triggered(int* arg0, int* arg1){
    cpu_t cpu;
    cpu_t *c=&cpu;
    char stack[64];
    c->gp_regs[sp]=(uint64_t)&stack[64-1];
    c->gp_regs[a0]=arg0;
    c->gp_regs[a1]=arg1;
L_10060: {//addi_is_do_read_c_triggered
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-48LL;
    }
L_10064: {//sd_is_do_read_c_triggered
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[8];
    *(uint64_t *)(rs1 + (int64_t)40LL) = (uint64_t)rs2;
    }
L_10068: {//addi_is_do_read_c_triggered
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = rs1 + (int64_t)48LL;
    }
L_1006c: {//sd_is_do_read_c_triggered
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[10];
    *(uint64_t *)(rs1 + (int64_t)-40LL) = (uint64_t)rs2;
    }
L_10070: {//sd_is_do_read_c_triggered
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[11];
    *(uint64_t *)(rs1 + (int64_t)-48LL) = (uint64_t)rs2;
    }
L_10074: {//ld_is_do_read_c_triggered
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-40LL);
    c->gp_regs[15] = rd;
    }
L_10078: {//lw_is_do_read_c_triggered
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[15] = rd;
    }
L_1007c: {//addi_is_do_read_c_triggered
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_10080: {//addi_is_do_read_c_triggered
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_10084: {//bne_is_do_read_c_triggered
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_100a8;
    }
    }
L_10088: {//ld_is_do_read_c_triggered
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-48LL);
    c->gp_regs[15] = rd;
    }
L_1008c: {//lw_is_do_read_c_triggered
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[15] = rd;
    }
L_10090: {//addi_is_do_read_c_triggered
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_10094: {//addi_is_do_read_c_triggered
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_10098: {//bne_is_do_read_c_triggered
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_100a8;
    }
    }
L_1009c: {//addi_is_do_read_c_triggered
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_100a0: {//sw_is_do_read_c_triggered
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_100a4: {//jal_is_do_read_c_triggered
    goto L_100ac;
    }
L_100a8: {//sw_is_do_read_c_triggered
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_100ac: {//lw_is_do_read_c_triggered
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_100b0: {//addi_is_do_read_c_triggered
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[10] = rs1 + (int64_t)0LL;
    }
L_100b4: {//ld_is_do_read_c_triggered
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)40LL);
    c->gp_regs[8] = rd;
    }
L_100b8: {//addi_is_do_read_c_triggered
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)48LL;
    }
L_100bc: {//jalr_is_do_read_c_triggered
    uint64_t rs1 = c->gp_regs[1];
    return (int)c->gp_regs[a0];
    }
}
