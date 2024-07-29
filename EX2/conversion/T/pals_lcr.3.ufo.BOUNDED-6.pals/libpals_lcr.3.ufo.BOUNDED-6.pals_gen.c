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
    uint8_t rd = *(uint8_t *)(&p3_old);
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
    *(uint8_t *)(&p3_old) = (uint8_t)rs2;
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
