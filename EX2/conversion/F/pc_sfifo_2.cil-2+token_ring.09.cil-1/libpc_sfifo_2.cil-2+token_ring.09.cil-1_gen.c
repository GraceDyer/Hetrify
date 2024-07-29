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
int q_buf_0 = 0;
int q_free = 0;
int q_read_ev = 0;
int q_write_ev = 0;
int q_req_up = 0;
int q_ev = 0;
int p_num_write = 0;
int p_last_write = 0;
int p_dw_st = 0;
int p_dw_pc = 0;
int c_num_read = 0;
int c_last_read = 0;
int c_dr_st = 0;
int c_dr_pc = 0;
int c_dr_i = 0;
extern void init_model1(int*);
extern void update_fifo_q();



/*******************    Function: update_fifo_q   *********************/
void update_fifo_q(){
    cpu_t cpu;
    cpu_t *c=&cpu;
    char stack[32];
    c->gp_regs[sp]=(uint64_t)&stack[32-1];
L_10000: {//addi_update_fifo_q
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-16LL;
    }
L_10004: {//sd_update_fifo_q
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[8];
    *(uint64_t *)(rs1 + (int64_t)8LL) = (uint64_t)rs2;
    }
L_10008: {//addi_update_fifo_q
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = rs1 + (int64_t)16LL;
    }
L_1000c: {//lui_update_fifo_q
    c->gp_regs[15] = 65536LL;
    }
L_10010: {//lw_update_fifo_q
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(&q_free);
    c->gp_regs[15] = rd;
    }
L_10014: {//bne_update_fifo_q
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_10020;
    }
    }
L_10018: {//lui_update_fifo_q
    c->gp_regs[15] = 65536LL;
    }
L_1001c: {//sw_update_fifo_q
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    *(uint32_t *)(&q_write_ev) = (uint32_t)rs2;
    }
L_10020: {//lui_update_fifo_q
    c->gp_regs[15] = 65536LL;
    }
L_10024: {//lw_update_fifo_q
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(&q_free);
    c->gp_regs[15] = rd;
    }
L_10028: {//addi_update_fifo_q
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_1002c: {//addi_update_fifo_q
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_10030: {//bne_update_fifo_q
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_1003c;
    }
    }
L_10034: {//lui_update_fifo_q
    c->gp_regs[15] = 65536LL;
    }
L_10038: {//sw_update_fifo_q
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    *(uint32_t *)(&q_read_ev) = (uint32_t)rs2;
    }
L_1003c: {//lui_update_fifo_q
    c->gp_regs[15] = 65536LL;
    }
L_10040: {//sw_update_fifo_q
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    *(uint32_t *)(&q_ev) = (uint32_t)rs2;
    }
L_10044: {//lui_update_fifo_q
    c->gp_regs[15] = 65536LL;
    }
L_10048: {//sw_update_fifo_q
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    *(uint32_t *)(&q_req_up) = (uint32_t)rs2;
    }
L_1004c: {//addi_update_fifo_q
    uint64_t rs1 = 0;
    }
L_10050: {//ld_update_fifo_q
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)8LL);
    c->gp_regs[8] = rd;
    }
L_10054: {//addi_update_fifo_q
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)16LL;
    }
L_10058: {//jalr_update_fifo_q
    uint64_t rs1 = c->gp_regs[1];
    return;
    }
}



/*******************    Function: init_model1   *********************/
void init_model1(int* arg0){
    cpu_t cpu;
    cpu_t *c=&cpu;
    char stack[48];
    c->gp_regs[sp]=(uint64_t)&stack[48-1];
    c->gp_regs[a0]=arg0;
L_1005c: {//addi_init_model1
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-32LL;
    }
L_10060: {//sd_init_model1
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[8];
    *(uint64_t *)(rs1 + (int64_t)24LL) = (uint64_t)rs2;
    }
L_10064: {//addi_init_model1
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = rs1 + (int64_t)32LL;
    }
L_10068: {//sd_init_model1
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[10];
    *(uint64_t *)(rs1 + (int64_t)-24LL) = (uint64_t)rs2;
    }
L_1006c: {//lui_init_model1
    c->gp_regs[15] = 65536LL;
    }
L_10070: {//addi_init_model1
    uint64_t rs1 = 0;
    c->gp_regs[14] = rs1 + (int64_t)1LL;
    }
L_10074: {//sw_init_model1
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint32_t *)(&q_free) = (uint32_t)rs2;
    }
L_10078: {//lui_init_model1
    c->gp_regs[15] = 65536LL;
    }
L_1007c: {//addi_init_model1
    uint64_t rs1 = 0;
    c->gp_regs[14] = rs1 + (int64_t)2LL;
    }
L_10080: {//sw_init_model1
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint32_t *)(&q_write_ev) = (uint32_t)rs2;
    }
L_10084: {//lui_init_model1
    c->gp_regs[15] = 65536LL;
    }
L_10088: {//lw_init_model1
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(&q_write_ev);
    c->gp_regs[14] = rd;
    }
L_1008c: {//lui_init_model1
    c->gp_regs[15] = 65536LL;
    }
L_10090: {//sw_init_model1
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint32_t *)(&q_read_ev) = (uint32_t)rs2;
    }
L_10094: {//lui_init_model1
    c->gp_regs[15] = 65536LL;
    }
L_10098: {//sw_init_model1
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    *(uint32_t *)(&p_num_write) = (uint32_t)rs2;
    }
L_1009c: {//lui_init_model1
    c->gp_regs[15] = 65536LL;
    }
L_100a0: {//sw_init_model1
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    *(uint32_t *)(&p_dw_pc) = (uint32_t)rs2;
    }
L_100a4: {//ld_init_model1
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-24LL);
    c->gp_regs[15] = rd;
    }
L_100a8: {//addi_init_model1
    uint64_t rs1 = 0;
    c->gp_regs[14] = rs1 + (int64_t)1LL;
    }
L_100ac: {//sw_init_model1
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint32_t *)(rs1 + (int64_t)0LL) = (uint32_t)rs2;
    }
L_100b0: {//lui_init_model1
    c->gp_regs[15] = 65536LL;
    }
L_100b4: {//sw_init_model1
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    *(uint32_t *)(&c_num_read) = (uint32_t)rs2;
    }
L_100b8: {//lui_init_model1
    c->gp_regs[15] = 65536LL;
    }
L_100bc: {//sw_init_model1
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    *(uint32_t *)(&c_dr_pc) = (uint32_t)rs2;
    }
L_100c0: {//lui_init_model1
    c->gp_regs[15] = 65536LL;
    }
L_100c4: {//addi_init_model1
    uint64_t rs1 = 0;
    c->gp_regs[14] = rs1 + (int64_t)1LL;
    }
L_100c8: {//sw_init_model1
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint32_t *)(&c_dr_i) = (uint32_t)rs2;
    }
L_100cc: {//addi_init_model1
    uint64_t rs1 = 0;
    }
L_100d0: {//ld_init_model1
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)24LL);
    c->gp_regs[8] = rd;
    }
L_100d4: {//addi_init_model1
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)32LL;
    }
L_100d8: {//jalr_init_model1
    uint64_t rs1 = c->gp_regs[1];
    return;
    }
}
