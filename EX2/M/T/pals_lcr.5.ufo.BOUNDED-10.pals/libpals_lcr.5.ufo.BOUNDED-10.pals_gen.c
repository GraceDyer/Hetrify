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
char nomsg = 255;
char r1 = 0;
int p1 = 0;
char p1_old = 0;
char p1_new = 0;
char id1 = 0;
char st1 = 0;
char send1 = 0;
_Bool mode1 = 0;
int p2 = 0;
char p2_old = 0;
char p2_new = 0;
char id2 = 0;
char st2 = 0;
char send2 = 0;
_Bool mode2 = 0;
int p3 = 0;
char p3_old = 0;
char p3_new = 0;
char id3 = 0;
char st3 = 0;
char send3 = 0;
_Bool mode3 = 0;
int p4 = 0;
char p4_old = 0;
char p4_new = 0;
char id4 = 0;
char st4 = 0;
char send4 = 0;
_Bool mode4 = 0;
int p5 = 0;
char p5_old = 0;
char p5_new = 0;
char id5 = 0;
char st5 = 0;
char send5 = 0;
_Bool mode5 = 0;
extern int check();
extern void node5();
extern void node4();
extern void node3();
extern void node2();
extern void node1();



/*******************    Function: node1   *********************/
void node1(){
    cpu_t cpu;
    cpu_t *c=&cpu;
    char stack[48];
    c->gp_regs[sp]=(uint64_t)&stack[48-1];
L_10000: {//addi_node1
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-32LL;
    }
L_10004: {//sd_node1
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[8];
    *(uint64_t *)(rs1 + (int64_t)24LL) = (uint64_t)rs2;
    }
L_10008: {//addi_node1
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = rs1 + (int64_t)32LL;
    }
L_1000c: {//lui_node1
    c->gp_regs[15] = 65536LL;
    }
L_10010: {//lbu_node1
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&nomsg);
    c->gp_regs[15] = rd;
    }
L_10014: {//sb_node1
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint8_t *)(rs1 + (int64_t)-17LL) = (uint8_t)rs2;
    }
L_10018: {//lui_node1
    c->gp_regs[15] = 65536LL;
    }
L_1001c: {//lbu_node1
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&mode1);
    c->gp_regs[15] = rd;
    }
L_10020: {//beq_node1
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    if ((uint64_t)rs1 == (uint64_t)rs2) {
        goto L_100bc;
    }
    }
L_10024: {//lui_node1
    c->gp_regs[15] = 65536LL;
    }
L_10028: {//lbu_node1
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&r1);
    c->gp_regs[15] = rd;
    }
L_1002c: {//addiw_node1
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)1LL);
    }
L_10030: {//andi_node1
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 & 255ULL;
    }
L_10034: {//lui_node1
    c->gp_regs[15] = 65536LL;
    }
L_10038: {//sb_node1
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint8_t *)(&r1) = (uint8_t)rs2;
    }
L_1003c: {//lui_node1
    c->gp_regs[15] = 65536LL;
    }
L_10040: {//lbu_node1
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&p5_old);
    c->gp_regs[15] = rd;
    }
L_10044: {//sb_node1
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint8_t *)(rs1 + (int64_t)-17LL) = (uint8_t)rs2;
    }
L_10048: {//lui_node1
    c->gp_regs[15] = 65536LL;
    }
L_1004c: {//lbu_node1
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&nomsg);
    c->gp_regs[14] = rd;
    }
L_10050: {//lui_node1
    c->gp_regs[15] = 65536LL;
    }
L_10054: {//sb_node1
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint8_t *)(&p5_old) = (uint8_t)rs2;
    }
L_10058: {//lui_node1
    c->gp_regs[15] = 65536LL;
    }
L_1005c: {//lbu_node1
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&nomsg);
    c->gp_regs[14] = rd;
    }
L_10060: {//lbu_node1
    uint64_t rs1 = c->gp_regs[8];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)-17LL);
    c->gp_regs[15] = rd;
    }
L_10064: {//andi_node1
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 & 255ULL;
    }
L_10068: {//beq_node1
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    if ((uint64_t)rs1 == (uint64_t)rs2) {
        goto L_100b0;
    }
    }
L_1006c: {//lui_node1
    c->gp_regs[15] = 65536LL;
    }
L_10070: {//lbu_node1
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&id1);
    c->gp_regs[14] = rd;
    }
L_10074: {//lbu_node1
    uint64_t rs1 = c->gp_regs[8];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)-17LL);
    c->gp_regs[15] = rd;
    }
L_10078: {//andi_node1
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 & 255ULL;
    }
L_1007c: {//bgeu_node1
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 >= (uint64_t)rs2) {
        goto L_10090;
    }
    }
L_10080: {//lui_node1
    c->gp_regs[15] = 65536LL;
    }
L_10084: {//lbu_node1
    uint64_t rs1 = c->gp_regs[8];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)-17LL);
    c->gp_regs[14] = rd;
    }
L_10088: {//sb_node1
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint8_t *)(&send1) = (uint8_t)rs2;
    }
L_1008c: {//jal_node1
    goto L_100b0;
    }
L_10090: {//lui_node1
    c->gp_regs[15] = 65536LL;
    }
L_10094: {//lbu_node1
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&id1);
    c->gp_regs[14] = rd;
    }
L_10098: {//lbu_node1
    uint64_t rs1 = c->gp_regs[8];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)-17LL);
    c->gp_regs[15] = rd;
    }
L_1009c: {//andi_node1
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 & 255ULL;
    }
L_100a0: {//bne_node1
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_100b0;
    }
    }
L_100a4: {//lui_node1
    c->gp_regs[15] = 65536LL;
    }
L_100a8: {//addi_node1
    uint64_t rs1 = 0;
    c->gp_regs[14] = rs1 + (int64_t)1LL;
    }
L_100ac: {//sb_node1
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint8_t *)(&st1) = (uint8_t)rs2;
    }
L_100b0: {//lui_node1
    c->gp_regs[15] = 65536LL;
    }
L_100b4: {//sb_node1
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    *(uint8_t *)(&mode1) = (uint8_t)rs2;
    }
L_100b8: {//jal_node1
    goto L_10110;
    }
L_100bc: {//lui_node1
    c->gp_regs[15] = 65536LL;
    }
L_100c0: {//lbu_node1
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&send1);
    c->gp_regs[14] = rd;
    }
L_100c4: {//lui_node1
    c->gp_regs[15] = 65536LL;
    }
L_100c8: {//lbu_node1
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&nomsg);
    c->gp_regs[15] = rd;
    }
L_100cc: {//beq_node1
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 == (uint64_t)rs2) {
        goto L_100f0;
    }
    }
L_100d0: {//lui_node1
    c->gp_regs[15] = 65536LL;
    }
L_100d4: {//lbu_node1
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&p1_new);
    c->gp_regs[14] = rd;
    }
L_100d8: {//lui_node1
    c->gp_regs[15] = 65536LL;
    }
L_100dc: {//lbu_node1
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&nomsg);
    c->gp_regs[15] = rd;
    }
L_100e0: {//bne_node1
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_100f0;
    }
    }
L_100e4: {//lui_node1
    c->gp_regs[15] = 65536LL;
    }
L_100e8: {//lbu_node1
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&send1);
    c->gp_regs[15] = rd;
    }
L_100ec: {//jal_node1
    goto L_100f8;
    }
L_100f0: {//lui_node1
    c->gp_regs[15] = 65536LL;
    }
L_100f4: {//lbu_node1
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&p1_new);
    c->gp_regs[15] = rd;
    }
L_100f8: {//lui_node1
    c->gp_regs[14] = 65536LL;
    }
L_100fc: {//sb_node1
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    *(uint8_t *)(&p1_new) = (uint8_t)rs2;
    }
L_10100: {//lui_node1
    c->gp_regs[15] = 65536LL;
    }
L_10104: {//addi_node1
    uint64_t rs1 = 0;
    c->gp_regs[14] = rs1 + (int64_t)1LL;
    }
L_10108: {//sb_node1
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint8_t *)(&mode1) = (uint8_t)rs2;
    }
L_1010c: {//addi_node1
    uint64_t rs1 = 0;
    }
L_10110: {//ld_node1
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)24LL);
    c->gp_regs[8] = rd;
    }
L_10114: {//addi_node1
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)32LL;
    }
L_10118: {//jalr_node1
    uint64_t rs1 = c->gp_regs[1];
    return;
    }
}



/*******************    Function: node2   *********************/
void node2(){
    cpu_t cpu;
    cpu_t *c=&cpu;
    char stack[48];
    c->gp_regs[sp]=(uint64_t)&stack[48-1];
L_1011c: {//addi_node2
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-32LL;
    }
L_10120: {//sd_node2
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[8];
    *(uint64_t *)(rs1 + (int64_t)24LL) = (uint64_t)rs2;
    }
L_10124: {//addi_node2
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = rs1 + (int64_t)32LL;
    }
L_10128: {//lui_node2
    c->gp_regs[15] = 65536LL;
    }
L_1012c: {//lbu_node2
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&nomsg);
    c->gp_regs[15] = rd;
    }
L_10130: {//sb_node2
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint8_t *)(rs1 + (int64_t)-17LL) = (uint8_t)rs2;
    }
L_10134: {//lui_node2
    c->gp_regs[15] = 65536LL;
    }
L_10138: {//lbu_node2
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&mode2);
    c->gp_regs[15] = rd;
    }
L_1013c: {//beq_node2
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    if ((uint64_t)rs1 == (uint64_t)rs2) {
        goto L_101c0;
    }
    }
L_10140: {//lui_node2
    c->gp_regs[15] = 65536LL;
    }
L_10144: {//lbu_node2
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&p1_old);
    c->gp_regs[15] = rd;
    }
L_10148: {//sb_node2
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint8_t *)(rs1 + (int64_t)-17LL) = (uint8_t)rs2;
    }
L_1014c: {//lui_node2
    c->gp_regs[15] = 65536LL;
    }
L_10150: {//lbu_node2
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&nomsg);
    c->gp_regs[14] = rd;
    }
L_10154: {//lui_node2
    c->gp_regs[15] = 65536LL;
    }
L_10158: {//sb_node2
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint8_t *)(&p1_old) = (uint8_t)rs2;
    }
L_1015c: {//lui_node2
    c->gp_regs[15] = 65536LL;
    }
L_10160: {//lbu_node2
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&nomsg);
    c->gp_regs[14] = rd;
    }
L_10164: {//lbu_node2
    uint64_t rs1 = c->gp_regs[8];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)-17LL);
    c->gp_regs[15] = rd;
    }
L_10168: {//andi_node2
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 & 255ULL;
    }
L_1016c: {//beq_node2
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    if ((uint64_t)rs1 == (uint64_t)rs2) {
        goto L_101b4;
    }
    }
L_10170: {//lui_node2
    c->gp_regs[15] = 65536LL;
    }
L_10174: {//lbu_node2
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&id2);
    c->gp_regs[14] = rd;
    }
L_10178: {//lbu_node2
    uint64_t rs1 = c->gp_regs[8];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)-17LL);
    c->gp_regs[15] = rd;
    }
L_1017c: {//andi_node2
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 & 255ULL;
    }
L_10180: {//bgeu_node2
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 >= (uint64_t)rs2) {
        goto L_10194;
    }
    }
L_10184: {//lui_node2
    c->gp_regs[15] = 65536LL;
    }
L_10188: {//lbu_node2
    uint64_t rs1 = c->gp_regs[8];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)-17LL);
    c->gp_regs[14] = rd;
    }
L_1018c: {//sb_node2
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint8_t *)(&send2) = (uint8_t)rs2;
    }
L_10190: {//jal_node2
    goto L_101b4;
    }
L_10194: {//lui_node2
    c->gp_regs[15] = 65536LL;
    }
L_10198: {//lbu_node2
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&id2);
    c->gp_regs[14] = rd;
    }
L_1019c: {//lbu_node2
    uint64_t rs1 = c->gp_regs[8];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)-17LL);
    c->gp_regs[15] = rd;
    }
L_101a0: {//andi_node2
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 & 255ULL;
    }
L_101a4: {//bne_node2
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_101b4;
    }
    }
L_101a8: {//lui_node2
    c->gp_regs[15] = 65536LL;
    }
L_101ac: {//addi_node2
    uint64_t rs1 = 0;
    c->gp_regs[14] = rs1 + (int64_t)1LL;
    }
L_101b0: {//sb_node2
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint8_t *)(&st2) = (uint8_t)rs2;
    }
L_101b4: {//lui_node2
    c->gp_regs[15] = 65536LL;
    }
L_101b8: {//sb_node2
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    *(uint8_t *)(&mode2) = (uint8_t)rs2;
    }
L_101bc: {//jal_node2
    goto L_10214;
    }
L_101c0: {//lui_node2
    c->gp_regs[15] = 65536LL;
    }
L_101c4: {//lbu_node2
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&send2);
    c->gp_regs[14] = rd;
    }
L_101c8: {//lui_node2
    c->gp_regs[15] = 65536LL;
    }
L_101cc: {//lbu_node2
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&nomsg);
    c->gp_regs[15] = rd;
    }
L_101d0: {//beq_node2
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 == (uint64_t)rs2) {
        goto L_101f4;
    }
    }
L_101d4: {//lui_node2
    c->gp_regs[15] = 65536LL;
    }
L_101d8: {//lbu_node2
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&p2_new);
    c->gp_regs[14] = rd;
    }
L_101dc: {//lui_node2
    c->gp_regs[15] = 65536LL;
    }
L_101e0: {//lbu_node2
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&nomsg);
    c->gp_regs[15] = rd;
    }
L_101e4: {//bne_node2
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_101f4;
    }
    }
L_101e8: {//lui_node2
    c->gp_regs[15] = 65536LL;
    }
L_101ec: {//lbu_node2
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&send2);
    c->gp_regs[15] = rd;
    }
L_101f0: {//jal_node2
    goto L_101fc;
    }
L_101f4: {//lui_node2
    c->gp_regs[15] = 65536LL;
    }
L_101f8: {//lbu_node2
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&p2_new);
    c->gp_regs[15] = rd;
    }
L_101fc: {//lui_node2
    c->gp_regs[14] = 65536LL;
    }
L_10200: {//sb_node2
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    *(uint8_t *)(&p2_new) = (uint8_t)rs2;
    }
L_10204: {//lui_node2
    c->gp_regs[15] = 65536LL;
    }
L_10208: {//addi_node2
    uint64_t rs1 = 0;
    c->gp_regs[14] = rs1 + (int64_t)1LL;
    }
L_1020c: {//sb_node2
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint8_t *)(&mode2) = (uint8_t)rs2;
    }
L_10210: {//addi_node2
    uint64_t rs1 = 0;
    }
L_10214: {//ld_node2
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)24LL);
    c->gp_regs[8] = rd;
    }
L_10218: {//addi_node2
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)32LL;
    }
L_1021c: {//jalr_node2
    uint64_t rs1 = c->gp_regs[1];
    return;
    }
}



/*******************    Function: node3   *********************/
void node3(){
    cpu_t cpu;
    cpu_t *c=&cpu;
    char stack[48];
    c->gp_regs[sp]=(uint64_t)&stack[48-1];
L_10220: {//addi_node3
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-32LL;
    }
L_10224: {//sd_node3
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[8];
    *(uint64_t *)(rs1 + (int64_t)24LL) = (uint64_t)rs2;
    }
L_10228: {//addi_node3
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = rs1 + (int64_t)32LL;
    }
L_1022c: {//lui_node3
    c->gp_regs[15] = 65536LL;
    }
L_10230: {//lbu_node3
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&nomsg);
    c->gp_regs[15] = rd;
    }
L_10234: {//sb_node3
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint8_t *)(rs1 + (int64_t)-17LL) = (uint8_t)rs2;
    }
L_10238: {//lui_node3
    c->gp_regs[15] = 65536LL;
    }
L_1023c: {//lbu_node3
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&mode3);
    c->gp_regs[15] = rd;
    }
L_10240: {//beq_node3
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    if ((uint64_t)rs1 == (uint64_t)rs2) {
        goto L_102c4;
    }
    }
L_10244: {//lui_node3
    c->gp_regs[15] = 65536LL;
    }
L_10248: {//lbu_node3
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&p2_old);
    c->gp_regs[15] = rd;
    }
L_1024c: {//sb_node3
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint8_t *)(rs1 + (int64_t)-17LL) = (uint8_t)rs2;
    }
L_10250: {//lui_node3
    c->gp_regs[15] = 65536LL;
    }
L_10254: {//lbu_node3
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&nomsg);
    c->gp_regs[14] = rd;
    }
L_10258: {//lui_node3
    c->gp_regs[15] = 65536LL;
    }
L_1025c: {//sb_node3
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint8_t *)(&p2_old) = (uint8_t)rs2;
    }
L_10260: {//lui_node3
    c->gp_regs[15] = 65536LL;
    }
L_10264: {//lbu_node3
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&nomsg);
    c->gp_regs[14] = rd;
    }
L_10268: {//lbu_node3
    uint64_t rs1 = c->gp_regs[8];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)-17LL);
    c->gp_regs[15] = rd;
    }
L_1026c: {//andi_node3
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 & 255ULL;
    }
L_10270: {//beq_node3
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    if ((uint64_t)rs1 == (uint64_t)rs2) {
        goto L_102b8;
    }
    }
L_10274: {//lui_node3
    c->gp_regs[15] = 65536LL;
    }
L_10278: {//lbu_node3
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&id3);
    c->gp_regs[14] = rd;
    }
L_1027c: {//lbu_node3
    uint64_t rs1 = c->gp_regs[8];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)-17LL);
    c->gp_regs[15] = rd;
    }
L_10280: {//andi_node3
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 & 255ULL;
    }
L_10284: {//bgeu_node3
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 >= (uint64_t)rs2) {
        goto L_10298;
    }
    }
L_10288: {//lui_node3
    c->gp_regs[15] = 65536LL;
    }
L_1028c: {//lbu_node3
    uint64_t rs1 = c->gp_regs[8];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)-17LL);
    c->gp_regs[14] = rd;
    }
L_10290: {//sb_node3
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint8_t *)(&send3) = (uint8_t)rs2;
    }
L_10294: {//jal_node3
    goto L_102b8;
    }
L_10298: {//lui_node3
    c->gp_regs[15] = 65536LL;
    }
L_1029c: {//lbu_node3
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&id3);
    c->gp_regs[14] = rd;
    }
L_102a0: {//lbu_node3
    uint64_t rs1 = c->gp_regs[8];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)-17LL);
    c->gp_regs[15] = rd;
    }
L_102a4: {//andi_node3
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 & 255ULL;
    }
L_102a8: {//bne_node3
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_102b8;
    }
    }
L_102ac: {//lui_node3
    c->gp_regs[15] = 65536LL;
    }
L_102b0: {//addi_node3
    uint64_t rs1 = 0;
    c->gp_regs[14] = rs1 + (int64_t)1LL;
    }
L_102b4: {//sb_node3
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint8_t *)(&st3) = (uint8_t)rs2;
    }
L_102b8: {//lui_node3
    c->gp_regs[15] = 65536LL;
    }
L_102bc: {//sb_node3
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    *(uint8_t *)(&mode3) = (uint8_t)rs2;
    }
L_102c0: {//jal_node3
    goto L_10318;
    }
L_102c4: {//lui_node3
    c->gp_regs[15] = 65536LL;
    }
L_102c8: {//lbu_node3
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&send3);
    c->gp_regs[14] = rd;
    }
L_102cc: {//lui_node3
    c->gp_regs[15] = 65536LL;
    }
L_102d0: {//lbu_node3
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&nomsg);
    c->gp_regs[15] = rd;
    }
L_102d4: {//beq_node3
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 == (uint64_t)rs2) {
        goto L_102f8;
    }
    }
L_102d8: {//lui_node3
    c->gp_regs[15] = 65536LL;
    }
L_102dc: {//lbu_node3
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&p3_new);
    c->gp_regs[14] = rd;
    }
L_102e0: {//lui_node3
    c->gp_regs[15] = 65536LL;
    }
L_102e4: {//lbu_node3
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&nomsg);
    c->gp_regs[15] = rd;
    }
L_102e8: {//bne_node3
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_102f8;
    }
    }
L_102ec: {//lui_node3
    c->gp_regs[15] = 65536LL;
    }
L_102f0: {//lbu_node3
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&send3);
    c->gp_regs[15] = rd;
    }
L_102f4: {//jal_node3
    goto L_10300;
    }
L_102f8: {//lui_node3
    c->gp_regs[15] = 65536LL;
    }
L_102fc: {//lbu_node3
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&p3_new);
    c->gp_regs[15] = rd;
    }
L_10300: {//lui_node3
    c->gp_regs[14] = 65536LL;
    }
L_10304: {//sb_node3
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    *(uint8_t *)(&p3_new) = (uint8_t)rs2;
    }
L_10308: {//lui_node3
    c->gp_regs[15] = 65536LL;
    }
L_1030c: {//addi_node3
    uint64_t rs1 = 0;
    c->gp_regs[14] = rs1 + (int64_t)1LL;
    }
L_10310: {//sb_node3
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint8_t *)(&mode3) = (uint8_t)rs2;
    }
L_10314: {//addi_node3
    uint64_t rs1 = 0;
    }
L_10318: {//ld_node3
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)24LL);
    c->gp_regs[8] = rd;
    }
L_1031c: {//addi_node3
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)32LL;
    }
L_10320: {//jalr_node3
    uint64_t rs1 = c->gp_regs[1];
    return;
    }
}



/*******************    Function: node4   *********************/
void node4(){
    cpu_t cpu;
    cpu_t *c=&cpu;
    char stack[48];
    c->gp_regs[sp]=(uint64_t)&stack[48-1];
L_10324: {//addi_node4
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-32LL;
    }
L_10328: {//sd_node4
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[8];
    *(uint64_t *)(rs1 + (int64_t)24LL) = (uint64_t)rs2;
    }
L_1032c: {//addi_node4
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = rs1 + (int64_t)32LL;
    }
L_10330: {//lui_node4
    c->gp_regs[15] = 65536LL;
    }
L_10334: {//lbu_node4
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&nomsg);
    c->gp_regs[15] = rd;
    }
L_10338: {//sb_node4
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint8_t *)(rs1 + (int64_t)-17LL) = (uint8_t)rs2;
    }
L_1033c: {//lui_node4
    c->gp_regs[15] = 65536LL;
    }
L_10340: {//lbu_node4
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&mode4);
    c->gp_regs[15] = rd;
    }
L_10344: {//beq_node4
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    if ((uint64_t)rs1 == (uint64_t)rs2) {
        goto L_103c8;
    }
    }
L_10348: {//lui_node4
    c->gp_regs[15] = 65536LL;
    }
L_1034c: {//lbu_node4
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&p3_old);
    c->gp_regs[15] = rd;
    }
L_10350: {//sb_node4
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint8_t *)(rs1 + (int64_t)-17LL) = (uint8_t)rs2;
    }
L_10354: {//lui_node4
    c->gp_regs[15] = 65536LL;
    }
L_10358: {//lbu_node4
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&nomsg);
    c->gp_regs[14] = rd;
    }
L_1035c: {//lui_node4
    c->gp_regs[15] = 65536LL;
    }
L_10360: {//sb_node4
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint8_t *)(&p3_old) = (uint8_t)rs2;
    }
L_10364: {//lui_node4
    c->gp_regs[15] = 65536LL;
    }
L_10368: {//lbu_node4
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&nomsg);
    c->gp_regs[14] = rd;
    }
L_1036c: {//lbu_node4
    uint64_t rs1 = c->gp_regs[8];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)-17LL);
    c->gp_regs[15] = rd;
    }
L_10370: {//andi_node4
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 & 255ULL;
    }
L_10374: {//beq_node4
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    if ((uint64_t)rs1 == (uint64_t)rs2) {
        goto L_103bc;
    }
    }
L_10378: {//lui_node4
    c->gp_regs[15] = 65536LL;
    }
L_1037c: {//lbu_node4
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&id4);
    c->gp_regs[14] = rd;
    }
L_10380: {//lbu_node4
    uint64_t rs1 = c->gp_regs[8];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)-17LL);
    c->gp_regs[15] = rd;
    }
L_10384: {//andi_node4
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 & 255ULL;
    }
L_10388: {//bgeu_node4
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 >= (uint64_t)rs2) {
        goto L_1039c;
    }
    }
L_1038c: {//lui_node4
    c->gp_regs[15] = 65536LL;
    }
L_10390: {//lbu_node4
    uint64_t rs1 = c->gp_regs[8];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)-17LL);
    c->gp_regs[14] = rd;
    }
L_10394: {//sb_node4
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint8_t *)(&send4) = (uint8_t)rs2;
    }
L_10398: {//jal_node4
    goto L_103bc;
    }
L_1039c: {//lui_node4
    c->gp_regs[15] = 65536LL;
    }
L_103a0: {//lbu_node4
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&id4);
    c->gp_regs[14] = rd;
    }
L_103a4: {//lbu_node4
    uint64_t rs1 = c->gp_regs[8];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)-17LL);
    c->gp_regs[15] = rd;
    }
L_103a8: {//andi_node4
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 & 255ULL;
    }
L_103ac: {//bne_node4
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_103bc;
    }
    }
L_103b0: {//lui_node4
    c->gp_regs[15] = 65536LL;
    }
L_103b4: {//addi_node4
    uint64_t rs1 = 0;
    c->gp_regs[14] = rs1 + (int64_t)1LL;
    }
L_103b8: {//sb_node4
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint8_t *)(&st4) = (uint8_t)rs2;
    }
L_103bc: {//lui_node4
    c->gp_regs[15] = 65536LL;
    }
L_103c0: {//sb_node4
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    *(uint8_t *)(&mode4) = (uint8_t)rs2;
    }
L_103c4: {//jal_node4
    goto L_1041c;
    }
L_103c8: {//lui_node4
    c->gp_regs[15] = 65536LL;
    }
L_103cc: {//lbu_node4
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&send4);
    c->gp_regs[14] = rd;
    }
L_103d0: {//lui_node4
    c->gp_regs[15] = 65536LL;
    }
L_103d4: {//lbu_node4
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&nomsg);
    c->gp_regs[15] = rd;
    }
L_103d8: {//beq_node4
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 == (uint64_t)rs2) {
        goto L_103fc;
    }
    }
L_103dc: {//lui_node4
    c->gp_regs[15] = 65536LL;
    }
L_103e0: {//lbu_node4
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&p4_new);
    c->gp_regs[14] = rd;
    }
L_103e4: {//lui_node4
    c->gp_regs[15] = 65536LL;
    }
L_103e8: {//lbu_node4
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&nomsg);
    c->gp_regs[15] = rd;
    }
L_103ec: {//bne_node4
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_103fc;
    }
    }
L_103f0: {//lui_node4
    c->gp_regs[15] = 65536LL;
    }
L_103f4: {//lbu_node4
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&send4);
    c->gp_regs[15] = rd;
    }
L_103f8: {//jal_node4
    goto L_10404;
    }
L_103fc: {//lui_node4
    c->gp_regs[15] = 65536LL;
    }
L_10400: {//lbu_node4
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&p4_new);
    c->gp_regs[15] = rd;
    }
L_10404: {//lui_node4
    c->gp_regs[14] = 65536LL;
    }
L_10408: {//sb_node4
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    *(uint8_t *)(&p4_new) = (uint8_t)rs2;
    }
L_1040c: {//lui_node4
    c->gp_regs[15] = 65536LL;
    }
L_10410: {//addi_node4
    uint64_t rs1 = 0;
    c->gp_regs[14] = rs1 + (int64_t)1LL;
    }
L_10414: {//sb_node4
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint8_t *)(&mode4) = (uint8_t)rs2;
    }
L_10418: {//addi_node4
    uint64_t rs1 = 0;
    }
L_1041c: {//ld_node4
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)24LL);
    c->gp_regs[8] = rd;
    }
L_10420: {//addi_node4
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)32LL;
    }
L_10424: {//jalr_node4
    uint64_t rs1 = c->gp_regs[1];
    return;
    }
}



/*******************    Function: node5   *********************/
void node5(){
    cpu_t cpu;
    cpu_t *c=&cpu;
    char stack[48];
    c->gp_regs[sp]=(uint64_t)&stack[48-1];
L_10428: {//addi_node5
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-32LL;
    }
L_1042c: {//sd_node5
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[8];
    *(uint64_t *)(rs1 + (int64_t)24LL) = (uint64_t)rs2;
    }
L_10430: {//addi_node5
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = rs1 + (int64_t)32LL;
    }
L_10434: {//lui_node5
    c->gp_regs[15] = 65536LL;
    }
L_10438: {//lbu_node5
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&nomsg);
    c->gp_regs[15] = rd;
    }
L_1043c: {//sb_node5
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint8_t *)(rs1 + (int64_t)-17LL) = (uint8_t)rs2;
    }
L_10440: {//lui_node5
    c->gp_regs[15] = 65536LL;
    }
L_10444: {//lbu_node5
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&mode5);
    c->gp_regs[15] = rd;
    }
L_10448: {//beq_node5
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    if ((uint64_t)rs1 == (uint64_t)rs2) {
        goto L_104cc;
    }
    }
L_1044c: {//lui_node5
    c->gp_regs[15] = 65536LL;
    }
L_10450: {//lbu_node5
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&p4_old);
    c->gp_regs[15] = rd;
    }
L_10454: {//sb_node5
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint8_t *)(rs1 + (int64_t)-17LL) = (uint8_t)rs2;
    }
L_10458: {//lui_node5
    c->gp_regs[15] = 65536LL;
    }
L_1045c: {//lbu_node5
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&nomsg);
    c->gp_regs[14] = rd;
    }
L_10460: {//lui_node5
    c->gp_regs[15] = 65536LL;
    }
L_10464: {//sb_node5
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint8_t *)(&p4_old) = (uint8_t)rs2;
    }
L_10468: {//lui_node5
    c->gp_regs[15] = 65536LL;
    }
L_1046c: {//lbu_node5
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&nomsg);
    c->gp_regs[14] = rd;
    }
L_10470: {//lbu_node5
    uint64_t rs1 = c->gp_regs[8];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)-17LL);
    c->gp_regs[15] = rd;
    }
L_10474: {//andi_node5
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 & 255ULL;
    }
L_10478: {//beq_node5
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    if ((uint64_t)rs1 == (uint64_t)rs2) {
        goto L_104c0;
    }
    }
L_1047c: {//lui_node5
    c->gp_regs[15] = 65536LL;
    }
L_10480: {//lbu_node5
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&id5);
    c->gp_regs[14] = rd;
    }
L_10484: {//lbu_node5
    uint64_t rs1 = c->gp_regs[8];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)-17LL);
    c->gp_regs[15] = rd;
    }
L_10488: {//andi_node5
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 & 255ULL;
    }
L_1048c: {//bgeu_node5
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 >= (uint64_t)rs2) {
        goto L_104a0;
    }
    }
L_10490: {//lui_node5
    c->gp_regs[15] = 65536LL;
    }
L_10494: {//lbu_node5
    uint64_t rs1 = c->gp_regs[8];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)-17LL);
    c->gp_regs[14] = rd;
    }
L_10498: {//sb_node5
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint8_t *)(&send5) = (uint8_t)rs2;
    }
L_1049c: {//jal_node5
    goto L_104c0;
    }
L_104a0: {//lui_node5
    c->gp_regs[15] = 65536LL;
    }
L_104a4: {//lbu_node5
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&id5);
    c->gp_regs[14] = rd;
    }
L_104a8: {//lbu_node5
    uint64_t rs1 = c->gp_regs[8];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)-17LL);
    c->gp_regs[15] = rd;
    }
L_104ac: {//andi_node5
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 & 255ULL;
    }
L_104b0: {//bne_node5
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_104c0;
    }
    }
L_104b4: {//lui_node5
    c->gp_regs[15] = 65536LL;
    }
L_104b8: {//addi_node5
    uint64_t rs1 = 0;
    c->gp_regs[14] = rs1 + (int64_t)1LL;
    }
L_104bc: {//sb_node5
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint8_t *)(&st5) = (uint8_t)rs2;
    }
L_104c0: {//lui_node5
    c->gp_regs[15] = 65536LL;
    }
L_104c4: {//sb_node5
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    *(uint8_t *)(&mode5) = (uint8_t)rs2;
    }
L_104c8: {//jal_node5
    goto L_10520;
    }
L_104cc: {//lui_node5
    c->gp_regs[15] = 65536LL;
    }
L_104d0: {//lbu_node5
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&send5);
    c->gp_regs[14] = rd;
    }
L_104d4: {//lui_node5
    c->gp_regs[15] = 65536LL;
    }
L_104d8: {//lbu_node5
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&nomsg);
    c->gp_regs[15] = rd;
    }
L_104dc: {//beq_node5
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 == (uint64_t)rs2) {
        goto L_10500;
    }
    }
L_104e0: {//lui_node5
    c->gp_regs[15] = 65536LL;
    }
L_104e4: {//lbu_node5
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&p5_new);
    c->gp_regs[14] = rd;
    }
L_104e8: {//lui_node5
    c->gp_regs[15] = 65536LL;
    }
L_104ec: {//lbu_node5
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&nomsg);
    c->gp_regs[15] = rd;
    }
L_104f0: {//bne_node5
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_10500;
    }
    }
L_104f4: {//lui_node5
    c->gp_regs[15] = 65536LL;
    }
L_104f8: {//lbu_node5
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&send5);
    c->gp_regs[15] = rd;
    }
L_104fc: {//jal_node5
    goto L_10508;
    }
L_10500: {//lui_node5
    c->gp_regs[15] = 65536LL;
    }
L_10504: {//lbu_node5
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&p5_new);
    c->gp_regs[15] = rd;
    }
L_10508: {//lui_node5
    c->gp_regs[14] = 65536LL;
    }
L_1050c: {//sb_node5
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    *(uint8_t *)(&p5_new) = (uint8_t)rs2;
    }
L_10510: {//lui_node5
    c->gp_regs[15] = 65536LL;
    }
L_10514: {//addi_node5
    uint64_t rs1 = 0;
    c->gp_regs[14] = rs1 + (int64_t)1LL;
    }
L_10518: {//sb_node5
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint8_t *)(&mode5) = (uint8_t)rs2;
    }
L_1051c: {//addi_node5
    uint64_t rs1 = 0;
    }
L_10520: {//ld_node5
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)24LL);
    c->gp_regs[8] = rd;
    }
L_10524: {//addi_node5
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)32LL;
    }
L_10528: {//jalr_node5
    uint64_t rs1 = c->gp_regs[1];
    return;
    }
}



/*******************    Function: check   *********************/
int check(){
    cpu_t cpu;
    cpu_t *c=&cpu;
    char stack[48];
    c->gp_regs[sp]=(uint64_t)&stack[48-1];
L_1052c: {//addi_check
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-32LL;
    }
L_10530: {//sd_check
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[8];
    *(uint64_t *)(rs1 + (int64_t)24LL) = (uint64_t)rs2;
    }
L_10534: {//addi_check
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = rs1 + (int64_t)32LL;
    }
L_10538: {//lui_check
    c->gp_regs[15] = 65536LL;
    }
L_1053c: {//lbu_check
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&st1);
    c->gp_regs[15] = rd;
    }
L_10540: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10544: {//lui_check
    c->gp_regs[15] = 65536LL;
    }
L_10548: {//lbu_check
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&st2);
    c->gp_regs[15] = rd;
    }
L_1054c: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10550: {//addw_check
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + rs2);
    }
L_10554: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10558: {//lui_check
    c->gp_regs[15] = 65536LL;
    }
L_1055c: {//lbu_check
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&st3);
    c->gp_regs[15] = rd;
    }
L_10560: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10564: {//addw_check
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + rs2);
    }
L_10568: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_1056c: {//lui_check
    c->gp_regs[15] = 65536LL;
    }
L_10570: {//lbu_check
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&st4);
    c->gp_regs[15] = rd;
    }
L_10574: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10578: {//addw_check
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + rs2);
    }
L_1057c: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10580: {//lui_check
    c->gp_regs[15] = 65536LL;
    }
L_10584: {//lbu_check
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&st5);
    c->gp_regs[15] = rd;
    }
L_10588: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_1058c: {//addw_check
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + rs2);
    }
L_10590: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10594: {//addi_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_10598: {//addi_check
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_1059c: {//blt_check
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    if ((int64_t)rs1 < (int64_t)rs2) {
        goto L_106c0;
    }
    }
L_105a0: {//lui_check
    c->gp_regs[15] = 65536LL;
    }
L_105a4: {//lbu_check
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&r1);
    c->gp_regs[15] = rd;
    }
L_105a8: {//addi_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_105ac: {//addi_check
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)4LL;
    }
L_105b0: {//bltu_check
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    if ((uint64_t)rs1 < (uint64_t)rs2) {
        goto L_10618;
    }
    }
L_105b4: {//lui_check
    c->gp_regs[15] = 65536LL;
    }
L_105b8: {//lbu_check
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&st1);
    c->gp_regs[15] = rd;
    }
L_105bc: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_105c0: {//lui_check
    c->gp_regs[15] = 65536LL;
    }
L_105c4: {//lbu_check
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&st2);
    c->gp_regs[15] = rd;
    }
L_105c8: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_105cc: {//addw_check
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + rs2);
    }
L_105d0: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_105d4: {//lui_check
    c->gp_regs[15] = 65536LL;
    }
L_105d8: {//lbu_check
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&st3);
    c->gp_regs[15] = rd;
    }
L_105dc: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_105e0: {//addw_check
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + rs2);
    }
L_105e4: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_105e8: {//lui_check
    c->gp_regs[15] = 65536LL;
    }
L_105ec: {//lbu_check
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&st4);
    c->gp_regs[15] = rd;
    }
L_105f0: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_105f4: {//addw_check
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + rs2);
    }
L_105f8: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_105fc: {//lui_check
    c->gp_regs[15] = 65536LL;
    }
L_10600: {//lbu_check
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&st5);
    c->gp_regs[15] = rd;
    }
L_10604: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10608: {//addw_check
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + rs2);
    }
L_1060c: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10610: {//bne_check
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_106b8;
    }
    }
L_10614: {//jal_check
    goto L_1061c;
    }
L_10618: {//addi_check
    uint64_t rs1 = 0;
    }
L_1061c: {//lui_check
    c->gp_regs[15] = 65536LL;
    }
L_10620: {//lbu_check
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&r1);
    c->gp_regs[15] = rd;
    }
L_10624: {//addi_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_10628: {//addi_check
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)4LL;
    }
L_1062c: {//bltu_check
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    if ((uint64_t)rs1 < (uint64_t)rs2) {
        goto L_1063c;
    }
    }
L_10630: {//addi_check
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_10634: {//sw_check
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_10638: {//jal_check
    goto L_106c4;
    }
L_1063c: {//lui_check
    c->gp_regs[15] = 65536LL;
    }
L_10640: {//lbu_check
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&st1);
    c->gp_regs[15] = rd;
    }
L_10644: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10648: {//lui_check
    c->gp_regs[15] = 65536LL;
    }
L_1064c: {//lbu_check
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&st2);
    c->gp_regs[15] = rd;
    }
L_10650: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10654: {//addw_check
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + rs2);
    }
L_10658: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_1065c: {//lui_check
    c->gp_regs[15] = 65536LL;
    }
L_10660: {//lbu_check
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&st3);
    c->gp_regs[15] = rd;
    }
L_10664: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10668: {//addw_check
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + rs2);
    }
L_1066c: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10670: {//lui_check
    c->gp_regs[15] = 65536LL;
    }
L_10674: {//lbu_check
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&st4);
    c->gp_regs[15] = rd;
    }
L_10678: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_1067c: {//addw_check
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + rs2);
    }
L_10680: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10684: {//lui_check
    c->gp_regs[15] = 65536LL;
    }
L_10688: {//lbu_check
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&st5);
    c->gp_regs[15] = rd;
    }
L_1068c: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10690: {//addw_check
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + rs2);
    }
L_10694: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10698: {//addi_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_1069c: {//addi_check
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_106a0: {//bne_check
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_106b0;
    }
    }
L_106a4: {//addi_check
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_106a8: {//sw_check
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_106ac: {//jal_check
    goto L_106c4;
    }
L_106b0: {//sw_check
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_106b4: {//jal_check
    goto L_106c4;
    }
L_106b8: {//sw_check
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_106bc: {//jal_check
    goto L_106c4;
    }
L_106c0: {//sw_check
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_106c4: {//lw_check
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_106c8: {//addi_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[10] = rs1 + (int64_t)0LL;
    }
L_106cc: {//ld_check
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)24LL);
    c->gp_regs[8] = rd;
    }
L_106d0: {//addi_check
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)32LL;
    }
L_106d4: {//jalr_check
    uint64_t rs1 = c->gp_regs[1];
    return (int)c->gp_regs[a0];
    }
}
