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
int assert_ret1 = 1;
int a = 0;
int b = 0;
int* p1 = 0;
int* p2 = 0;
extern int32_t start(cpu_t *c);
extern void f(cpu_t *c);
extern void reach_error(cpu_t *c);



/*******************    Function: reach_error   *********************/
void reach_error(cpu_t *c) { 
L_10000: {//addi_reach_error
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-16LL;
    }
L_10004: {//sd_reach_error
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[8];
    *(uint64_t *)(rs1 + (int64_t)8LL) = (uint64_t)rs2;
    }
L_10008: {//addi_reach_error
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = rs1 + (int64_t)16LL;
    }
L_1000c: {//lui_reach_error
    c->gp_regs[15] = 65536LL;
    }
L_10010: {//sw_reach_error
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    *(uint32_t *)(&assert_ret1) = (uint32_t)rs2;
    }
L_10014: {//addi_reach_error
    uint64_t rs1 = 0;
    }
L_10018: {//ld_reach_error
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)8LL);
    c->gp_regs[8] = rd;
    }
L_1001c: {//addi_reach_error
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)16LL;
    }
L_10020: {//jalr_reach_error
    uint64_t rs1 = c->gp_regs[1];
    return;
    }
}



/*******************    Function: f   *********************/
void f(cpu_t *c) { 
L_10024: {//addi_f
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-32LL;
    }
L_10028: {//sd_f
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[8];
    *(uint64_t *)(rs1 + (int64_t)24LL) = (uint64_t)rs2;
    }
L_1002c: {//addi_f
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = rs1 + (int64_t)32LL;
    }
L_10030: {//lui_f
    c->gp_regs[15] = 65536LL;
    }
L_10034: {//ld_f
    uint64_t rs1 = c->gp_regs[15];
    int64_t rd = *(int64_t *)(&p1);
    c->gp_regs[15] = rd;
    }
L_10038: {//lw_f
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[14] = rd;
    }
L_1003c: {//lui_f
    c->gp_regs[15] = 65536LL;
    }
L_10040: {//ld_f
    uint64_t rs1 = c->gp_regs[15];
    int64_t rd = *(int64_t *)(&p2);
    c->gp_regs[15] = rd;
    }
L_10044: {//lw_f
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[15] = rd;
    }
L_10048: {//addw_f
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + rs2);
    }
L_1004c: {//addiw_f
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10050: {//lui_f
    c->gp_regs[15] = 65536LL;
    }
L_10054: {//lw_f
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(&a);
    c->gp_regs[15] = rd;
    }
L_10058: {//subw_f
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 - rs2);
    }
L_1005c: {//sw_f
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_10060: {//lw_f
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_10064: {//addiw_f
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10068: {//addi_f
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_1006c: {//bne_f
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_10088;
    }
    }
L_10070: {//lui_f
    c->gp_regs[15] = 65536LL;
    }
L_10074: {//ld_f
    uint64_t rs1 = c->gp_regs[15];
    int64_t rd = *(int64_t *)(&p2);
    c->gp_regs[14] = rd;
    }
L_10078: {//lui_f
    c->gp_regs[15] = 65536LL;
    }
L_1007c: {//sd_f
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint64_t *)(&p1) = (uint64_t)rs2;
    }
L_10080: {//lw_f
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_10084: {//jal_f
    goto L_1008c;
    }
L_10088: {//addi_f
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_1008c: {//addi_f
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[10] = rs1 + (int64_t)0LL;
    }
L_10090: {//ld_f
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)24LL);
    c->gp_regs[8] = rd;
    }
L_10094: {//addi_f
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)32LL;
    }
L_10098: {//jalr_f
    uint64_t rs1 = c->gp_regs[1];
    return;
    }
}



/*******************    Function: main   *********************/
int32_t start(cpu_t *c) { 
L_1009c: {//addi_main
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-16LL;
    }
L_100a0: {//sd_main
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[1];
    *(uint64_t *)(rs1 + (int64_t)8LL) = (uint64_t)rs2;
    }
L_100a4: {//sd_main
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[8];
    *(uint64_t *)(rs1 + (int64_t)0LL) = (uint64_t)rs2;
    }
L_100a8: {//addi_main
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = rs1 + (int64_t)16LL;
    }
L_100ac: {//lui_main
    c->gp_regs[15] = 65536LL;
    }
L_100b0: {//lui_main
    c->gp_regs[14] = 65536LL;
    }
L_100b4: {//addi_main
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[14] = rs1 + (int64_t)352LL;
    }
L_100b8: {//sd_main
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint64_t *)(&p1) = (uint64_t)rs2;
    }
L_100bc: {//lui_main
    c->gp_regs[15] = 65536LL;
    }
L_100c0: {//lui_main
    c->gp_regs[14] = 65536LL;
    }
L_100c4: {//addi_main
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[14] = rs1 + (int64_t)356LL;
    }
L_100c8: {//sd_main
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint64_t *)(&p2) = (uint64_t)rs2;
    }
L_100cc: {//lui_main
    c->gp_regs[15] = 65536LL;
    }
L_100d0: {//addi_main
    uint64_t rs1 = 0;
    c->gp_regs[14] = rs1 + (int64_t)1LL;
    }
L_100d4: {//sw_main
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint32_t *)(&b) = (uint32_t)rs2;
    }
L_100d8: {//lui_main
    c->gp_regs[15] = 65536LL;
    }
L_100dc: {//addi_main
    uint64_t rs1 = 0;
    c->gp_regs[14] = rs1 + (int64_t)5LL;
    }
L_100e0: {//sw_main
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint32_t *)(&a) = (uint32_t)rs2;
    }
L_100e4: {//lui_main
    c->gp_regs[15] = 65536LL;
    }
L_100e8: {//lw_main
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(&a);
    c->gp_regs[15] = rd;
    }
L_100ec: {//addiw_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)-1LL);
    }
L_100f0: {//addiw_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_100f4: {//lui_main
    c->gp_regs[15] = 65536LL;
    }
L_100f8: {//sw_main
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint32_t *)(&a) = (uint32_t)rs2;
    }
L_100fc: {//jal_main
    c->gp_regs[1] = 65792LL;
    f(c);
    }
L_10100: {//addi_main
    uint64_t rs1 = c->gp_regs[10];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_10104: {//addi_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_10108: {//lui_main
    c->gp_regs[15] = 65536LL;
    }
L_1010c: {//sw_main
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint32_t *)(&a) = (uint32_t)rs2;
    }
L_10110: {//lui_main
    c->gp_regs[15] = 65536LL;
    }
L_10114: {//lw_main
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(&a);
    c->gp_regs[15] = rd;
    }
L_10118: {//beq_main
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    if ((uint64_t)rs1 == (uint64_t)rs2) {
        goto L_10130;
    }
    }
L_1011c: {//lui_main
    c->gp_regs[15] = 65536LL;
    }
L_10120: {//ld_main
    uint64_t rs1 = c->gp_regs[15];
    int64_t rd = *(int64_t *)(&p1);
    c->gp_regs[14] = rd;
    }
L_10124: {//lui_main
    c->gp_regs[15] = 65536LL;
    }
L_10128: {//ld_main
    uint64_t rs1 = c->gp_regs[15];
    int64_t rd = *(int64_t *)(&p2);
    c->gp_regs[15] = rd;
    }
L_1012c: {//beq_main
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 == (uint64_t)rs2) {
        goto L_10138;
    }
    }
L_10130: {//addi_main
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_10134: {//jal_main
    goto L_10144;
    }
L_10138: {//addi_main
    uint64_t rs1 = 0;
    }
L_1013c: {//jal_main
    c->gp_regs[1] = 65856LL;
    reach_error(c);
    }
L_10140: {//addi_main
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_10144: {//addi_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[10] = rs1 + (int64_t)0LL;
    }
L_10148: {//ld_main
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)8LL);
    c->gp_regs[1] = rd;
    }
L_1014c: {//ld_main
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[8] = rd;
    }
L_10150: {//addi_main
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)16LL;
    }
L_10154: {//jalr_main
    uint64_t rs1 = c->gp_regs[1];
L_end:
    return 0;
    }
}
#define STACK_SIZE 96
int32_t main() {                                     
    cpu_t cpu;                                 
    cpu_t *c=&cpu;                                 
    char stack[STACK_SIZE];                          
    char *stack_top=&stack[STACK_SIZE-1];                  
    c->gp_regs[2]=(uint64_t)stack_top;                
    c->gp_regs[0]= 0;                                     
    /**************Pls input your assume expr, setting the args by the pointers of args (p_arg0 ~ p_arg7)*************/ 



    /****************************************************************************************************************/
    start(c);                     
    uint64_t ret= cpu.gp_regs[a0];                      
    /************************************************ Pls input your assert expr ********************************/
	assert(assert_ret1 == 1);



    /************************************************************************************************************/
    return 0;                               
}                                      
