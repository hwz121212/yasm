/* ANSI-C code produced by genperf */
/* Command-line: genperf x86regtmod.gperf x86regtmod.c */
#line 26 "x86regtmod.gperf"

#include <util.h>

#include <ctype.h>
#include <libyasm.h>
#include <libyasm/phash.h>

#include "modules/arch/x86/x86arch.h"

enum regtmod_type {
    REG = 1,
    REGGROUP,
    SEGREG,
    TARGETMOD
};
#line 50 "x86regtmod.gperf"
struct regtmod_parse_data {
    const char *name;
    unsigned int type:8;                /* regtmod_type */

    /* REG: register size
     * SEGREG: prefix encoding
     * Others: 0
     */
    unsigned int size_prefix:8;

    /* REG: register index
     * REGGROUP: register group type
     * SEGREG: register encoding
     * TARGETMOD: target modifier
     */
    unsigned int data:8;

    /* REG: required bits setting
     * SEGREG: BITS in which the segment is ignored
     * Others: 0
     */
    unsigned int bits:8;
};
static const struct regtmod_parse_data *
regtmod_find(const char *key, size_t len)
{
  static const struct regtmod_parse_data pd[152] = {
#line 109 "x86regtmod.gperf"
    {"st6",	REG,	X86_FPUREG,	6,	0},
#line 139 "x86regtmod.gperf"
    {"ymm1",	REG,	X86_YMMREG,	1,	0},
#line 161 "x86regtmod.gperf"
    {"rsp",	REG,	X86_REG64,	4,	64},
#line 167 "x86regtmod.gperf"
    {"r10",	REG,	X86_REG64,	10,	64},
#line 196 "x86regtmod.gperf"
    {"bp",	REG,	X86_REG16,	5,	0},
#line 218 "x86regtmod.gperf"
    {"r10b",	REG,	X86_REG8,	10,	64},
#line 114 "x86regtmod.gperf"
    {"mm2",	REG,	X86_MMXREG,	2,	0},
#line 164 "x86regtmod.gperf"
    {"rdi",	REG,	X86_REG64,	7,	64},
#line 150 "x86regtmod.gperf"
    {"ymm12",	REG,	X86_YMMREG,	12,	64},
#line 165 "x86regtmod.gperf"
    {"r8",	REG,	X86_REG64,	8,	64},
#line 246 "x86regtmod.gperf"
    {"gs",	SEGREG,	0x65,	0x05,	0},
#line 184 "x86regtmod.gperf"
    {"r10d",	REG,	X86_REG32,	10,	64},
#line 163 "x86regtmod.gperf"
    {"rsi",	REG,	X86_REG64,	6,	64},
#line 174 "x86regtmod.gperf"
    {"eax",	REG,	X86_REG32,	0,	0},
#line 115 "x86regtmod.gperf"
    {"mm3",	REG,	X86_MMXREG,	3,	0},
#line 98 "x86regtmod.gperf"
    {"tr6",	REG,	X86_TRREG,	6,	0},
#line 92 "x86regtmod.gperf"
    {"tr0",	REG,	X86_TRREG,	0,	0},
#line 212 "x86regtmod.gperf"
    {"ah",	REG,	X86_REG8,	4,	0},
#line 127 "x86regtmod.gperf"
    {"xmm6",	REG,	X86_XMMREG,	6,	0},
#line 89 "x86regtmod.gperf"
    {"dr6",	REG,	X86_DRREG,	6,	0},
#line 178 "x86regtmod.gperf"
    {"esp",	REG,	X86_REG32,	4,	0},
#line 226 "x86regtmod.gperf"
    {"bpl",	REG,	X86_REG8X,	5,	64},
#line 97 "x86regtmod.gperf"
    {"tr5",	REG,	X86_TRREG,	5,	0},
#line 191 "x86regtmod.gperf"
    {"ax",	REG,	X86_REG16,	0,	0},
#line 195 "x86regtmod.gperf"
    {"sp",	REG,	X86_REG16,	4,	0},
#line 223 "x86regtmod.gperf"
    {"r15b",	REG,	X86_REG8,	15,	64},
#line 135 "x86regtmod.gperf"
    {"xmm14",	REG,	X86_XMMREG,	14,	64},
#line 133 "x86regtmod.gperf"
    {"xmm12",	REG,	X86_XMMREG,	12,	64},
#line 168 "x86regtmod.gperf"
    {"r11",	REG,	X86_REG64,	11,	64},
#line 236 "x86regtmod.gperf"
    {"xmm",	REGGROUP,	0,	X86_XMMREG,	0},
#line 140 "x86regtmod.gperf"
    {"ymm2",	REG,	X86_YMMREG,	2,	0},
#line 179 "x86regtmod.gperf"
    {"ebp",	REG,	X86_REG32,	5,	0},
#line 129 "x86regtmod.gperf"
    {"xmm8",	REG,	X86_XMMREG,	8,	64},
#line 186 "x86regtmod.gperf"
    {"r12d",	REG,	X86_REG32,	12,	64},
#line 142 "x86regtmod.gperf"
    {"ymm4",	REG,	X86_YMMREG,	4,	0},
#line 141 "x86regtmod.gperf"
    {"ymm3",	REG,	X86_YMMREG,	3,	0},
#line 157 "x86regtmod.gperf"
    {"rax",	REG,	X86_REG64,	0,	64},
#line 124 "x86regtmod.gperf"
    {"xmm3",	REG,	X86_XMMREG,	3,	0},
#line 121 "x86regtmod.gperf"
    {"xmm0",	REG,	X86_XMMREG,	0,	0},
#line 90 "x86regtmod.gperf"
    {"dr7",	REG,	X86_DRREG,	7,	0},
#line 205 "x86regtmod.gperf"
    {"r14w",	REG,	X86_REG16,	14,	64},
#line 113 "x86regtmod.gperf"
    {"mm1",	REG,	X86_MMXREG,	1,	0},
#line 211 "x86regtmod.gperf"
    {"bl",	REG,	X86_REG8,	3,	0},
#line 200 "x86regtmod.gperf"
    {"r9w",	REG,	X86_REG16,	9,	64},
#line 151 "x86regtmod.gperf"
    {"ymm13",	REG,	X86_YMMREG,	13,	64},
#line 217 "x86regtmod.gperf"
    {"r9b",	REG,	X86_REG8,	9,	64},
#line 146 "x86regtmod.gperf"
    {"ymm8",	REG,	X86_YMMREG,	8,	64},
#line 193 "x86regtmod.gperf"
    {"dx",	REG,	X86_REG16,	2,	0},
#line 169 "x86regtmod.gperf"
    {"r12",	REG,	X86_REG64,	12,	64},
#line 203 "x86regtmod.gperf"
    {"r12w",	REG,	X86_REG16,	12,	64},
#line 166 "x86regtmod.gperf"
    {"r9",	REG,	X86_REG64,	9,	64},
#line 206 "x86regtmod.gperf"
    {"r15w",	REG,	X86_REG16,	15,	64},
#line 227 "x86regtmod.gperf"
    {"sil",	REG,	X86_REG8X,	6,	64},
#line 201 "x86regtmod.gperf"
    {"r10w",	REG,	X86_REG16,	10,	64},
#line 144 "x86regtmod.gperf"
    {"ymm6",	REG,	X86_YMMREG,	6,	0},
#line 243 "x86regtmod.gperf"
    {"ss",	SEGREG,	0x36,	0x02,	64},
#line 96 "x86regtmod.gperf"
    {"tr4",	REG,	X86_TRREG,	4,	0},
#line 79 "x86regtmod.gperf"
    {"cr3",	REG,	X86_CRREG,	3,	0},
#line 202 "x86regtmod.gperf"
    {"r11w",	REG,	X86_REG16,	11,	64},
#line 125 "x86regtmod.gperf"
    {"xmm4",	REG,	X86_XMMREG,	4,	0},
#line 103 "x86regtmod.gperf"
    {"st0",	REG,	X86_FPUREG,	0,	0},
#line 228 "x86regtmod.gperf"
    {"dil",	REG,	X86_REG8X,	7,	64},
#line 95 "x86regtmod.gperf"
    {"tr3",	REG,	X86_TRREG,	3,	0},
#line 187 "x86regtmod.gperf"
    {"r13d",	REG,	X86_REG32,	13,	64},
#line 199 "x86regtmod.gperf"
    {"r8w",	REG,	X86_REG16,	8,	64},
#line 134 "x86regtmod.gperf"
    {"xmm13",	REG,	X86_XMMREG,	13,	64},
#line 106 "x86regtmod.gperf"
    {"st3",	REG,	X86_FPUREG,	3,	0},
#line 136 "x86regtmod.gperf"
    {"xmm15",	REG,	X86_XMMREG,	15,	64},
#line 131 "x86regtmod.gperf"
    {"xmm10",	REG,	X86_XMMREG,	10,	64},
#line 241 "x86regtmod.gperf"
    {"es",	SEGREG,	0x26,	0x00,	64},
#line 81 "x86regtmod.gperf"
    {"cr8",	REG,	X86_CRREG,	8,	64},
#line 128 "x86regtmod.gperf"
    {"xmm7",	REG,	X86_XMMREG,	7,	0},
#line 225 "x86regtmod.gperf"
    {"spl",	REG,	X86_REG8X,	4,	64},
#line 172 "x86regtmod.gperf"
    {"r15",	REG,	X86_REG64,	15,	64},
#line 80 "x86regtmod.gperf"
    {"cr4",	REG,	X86_CRREG,	4,	0},
#line 245 "x86regtmod.gperf"
    {"fs",	SEGREG,	0x64,	0x04,	0},
#line 158 "x86regtmod.gperf"
    {"rcx",	REG,	X86_REG64,	1,	64},
#line 112 "x86regtmod.gperf"
    {"mm0",	REG,	X86_MMXREG,	0,	0},
#line 235 "x86regtmod.gperf"
    {"mm",	REGGROUP,	0,	X86_MMXREG,	0},
#line 93 "x86regtmod.gperf"
    {"tr1",	REG,	X86_TRREG,	1,	0},
#line 251 "x86regtmod.gperf"
    {"short",	TARGETMOD,	0,	X86_SHORT,	0},
#line 107 "x86regtmod.gperf"
    {"st4",	REG,	X86_FPUREG,	4,	0},
#line 77 "x86regtmod.gperf"
    {"cr0",	REG,	X86_CRREG,	0,	0},
#line 132 "x86regtmod.gperf"
    {"xmm11",	REG,	X86_XMMREG,	11,	64},
#line 116 "x86regtmod.gperf"
    {"mm4",	REG,	X86_MMXREG,	4,	0},
#line 215 "x86regtmod.gperf"
    {"bh",	REG,	X86_REG8,	7,	0},
#line 189 "x86regtmod.gperf"
    {"r15d",	REG,	X86_REG32,	15,	64},
#line 85 "x86regtmod.gperf"
    {"dr2",	REG,	X86_DRREG,	2,	0},
#line 182 "x86regtmod.gperf"
    {"r8d",	REG,	X86_REG32,	8,	64},
#line 145 "x86regtmod.gperf"
    {"ymm7",	REG,	X86_YMMREG,	7,	0},
#line 130 "x86regtmod.gperf"
    {"xmm9",	REG,	X86_XMMREG,	9,	64},
#line 220 "x86regtmod.gperf"
    {"r12b",	REG,	X86_REG8,	12,	64},
#line 105 "x86regtmod.gperf"
    {"st2",	REG,	X86_FPUREG,	2,	0},
#line 147 "x86regtmod.gperf"
    {"ymm9",	REG,	X86_YMMREG,	9,	64},
#line 110 "x86regtmod.gperf"
    {"st7",	REG,	X86_FPUREG,	7,	0},
#line 194 "x86regtmod.gperf"
    {"bx",	REG,	X86_REG16,	3,	0},
#line 149 "x86regtmod.gperf"
    {"ymm11",	REG,	X86_YMMREG,	11,	64},
#line 143 "x86regtmod.gperf"
    {"ymm5",	REG,	X86_YMMREG,	5,	0},
#line 153 "x86regtmod.gperf"
    {"ymm15",	REG,	X86_YMMREG,	15,	64},
#line 162 "x86regtmod.gperf"
    {"rbp",	REG,	X86_REG64,	5,	64},
#line 170 "x86regtmod.gperf"
    {"r13",	REG,	X86_REG64,	13,	64},
#line 117 "x86regtmod.gperf"
    {"mm5",	REG,	X86_MMXREG,	5,	0},
#line 197 "x86regtmod.gperf"
    {"si",	REG,	X86_REG16,	6,	0},
#line 210 "x86regtmod.gperf"
    {"dl",	REG,	X86_REG8,	2,	0},
#line 198 "x86regtmod.gperf"
    {"di",	REG,	X86_REG16,	7,	0},
#line 78 "x86regtmod.gperf"
    {"cr2",	REG,	X86_CRREG,	2,	0},
#line 188 "x86regtmod.gperf"
    {"r14d",	REG,	X86_REG32,	14,	64},
#line 152 "x86regtmod.gperf"
    {"ymm14",	REG,	X86_YMMREG,	14,	64},
#line 99 "x86regtmod.gperf"
    {"tr7",	REG,	X86_TRREG,	7,	0},
#line 244 "x86regtmod.gperf"
    {"ds",	SEGREG,	0x3e,	0x03,	64},
#line 192 "x86regtmod.gperf"
    {"cx",	REG,	X86_REG16,	1,	0},
#line 234 "x86regtmod.gperf"
    {"st",	REGGROUP,	0,	X86_FPUREG,	0},
#line 181 "x86regtmod.gperf"
    {"edi",	REG,	X86_REG32,	7,	0},
#line 208 "x86regtmod.gperf"
    {"al",	REG,	X86_REG8,	0,	0},
#line 119 "x86regtmod.gperf"
    {"mm7",	REG,	X86_MMXREG,	7,	0},
#line 177 "x86regtmod.gperf"
    {"ebx",	REG,	X86_REG32,	3,	0},
#line 123 "x86regtmod.gperf"
    {"xmm2",	REG,	X86_XMMREG,	2,	0},
#line 108 "x86regtmod.gperf"
    {"st5",	REG,	X86_FPUREG,	5,	0},
#line 230 "x86regtmod.gperf"
    {"rip",	REG,	X86_RIP,	0,	64},
#line 160 "x86regtmod.gperf"
    {"rbx",	REG,	X86_REG64,	3,	64},
#line 253 "x86regtmod.gperf"
    {"to",	TARGETMOD,	0,	X86_TO,		0},
#line 185 "x86regtmod.gperf"
    {"r11d",	REG,	X86_REG32,	11,	64},
#line 88 "x86regtmod.gperf"
    {"dr5",	REG,	X86_DRREG,	5,	0},
#line 84 "x86regtmod.gperf"
    {"dr1",	REG,	X86_DRREG,	1,	0},
#line 250 "x86regtmod.gperf"
    {"near",	TARGETMOD,	0,	X86_NEAR,	0},
#line 171 "x86regtmod.gperf"
    {"r14",	REG,	X86_REG64,	14,	64},
#line 214 "x86regtmod.gperf"
    {"dh",	REG,	X86_REG8,	6,	0},
#line 209 "x86regtmod.gperf"
    {"cl",	REG,	X86_REG8,	1,	0},
#line 87 "x86regtmod.gperf"
    {"dr4",	REG,	X86_DRREG,	4,	0},
#line 148 "x86regtmod.gperf"
    {"ymm10",	REG,	X86_YMMREG,	10,	64},
#line 86 "x86regtmod.gperf"
    {"dr3",	REG,	X86_DRREG,	3,	0},
#line 126 "x86regtmod.gperf"
    {"xmm5",	REG,	X86_XMMREG,	5,	0},
#line 118 "x86regtmod.gperf"
    {"mm6",	REG,	X86_MMXREG,	6,	0},
#line 204 "x86regtmod.gperf"
    {"r13w",	REG,	X86_REG16,	13,	64},
#line 252 "x86regtmod.gperf"
    {"far",	TARGETMOD,	0,	X86_FAR,	0},
#line 138 "x86regtmod.gperf"
    {"ymm0",	REG,	X86_YMMREG,	0,	0},
#line 237 "x86regtmod.gperf"
    {"ymm",	REGGROUP,	0,	X86_YMMREG,	0},
#line 213 "x86regtmod.gperf"
    {"ch",	REG,	X86_REG8,	5,	0},
#line 122 "x86regtmod.gperf"
    {"xmm1",	REG,	X86_XMMREG,	1,	0},
#line 180 "x86regtmod.gperf"
    {"esi",	REG,	X86_REG32,	6,	0},
#line 222 "x86regtmod.gperf"
    {"r14b",	REG,	X86_REG8,	14,	64},
#line 104 "x86regtmod.gperf"
    {"st1",	REG,	X86_FPUREG,	1,	0},
#line 216 "x86regtmod.gperf"
    {"r8b",	REG,	X86_REG8,	8,	64},
#line 219 "x86regtmod.gperf"
    {"r11b",	REG,	X86_REG8,	11,	64},
#line 221 "x86regtmod.gperf"
    {"r13b",	REG,	X86_REG8,	13,	64},
#line 175 "x86regtmod.gperf"
    {"ecx",	REG,	X86_REG32,	1,	0},
#line 94 "x86regtmod.gperf"
    {"tr2",	REG,	X86_TRREG,	2,	0},
#line 159 "x86regtmod.gperf"
    {"rdx",	REG,	X86_REG64,	2,	64},
#line 183 "x86regtmod.gperf"
    {"r9d",	REG,	X86_REG32,	9,	64},
#line 242 "x86regtmod.gperf"
    {"cs",	SEGREG,	0x2e,	0x01,	0},
#line 83 "x86regtmod.gperf"
    {"dr0",	REG,	X86_DRREG,	0,	0},
#line 176 "x86regtmod.gperf"
    {"edx",	REG,	X86_REG32,	2,	0}
  };
  static const unsigned char tab[] = {
    0,0,125,22,0,0,85,0,85,168,0,0,0,7,113,0,
    0,0,0,22,183,0,0,11,42,55,0,0,82,0,88,235,
    0,0,0,0,0,0,183,85,0,0,145,113,220,125,22,0,
    88,183,0,7,0,0,0,7,0,125,113,87,131,116,7,0,
    113,7,0,113,0,87,87,7,7,7,113,40,85,125,113,85,
    0,0,22,235,0,131,125,113,0,22,0,220,0,220,0,120,
    116,0,124,184,0,0,0,183,92,125,0,92,125,0,0,177,
    7,0,0,7,0,45,0,214,180,113,211,163,142,0,88,173,
  };

  const struct regtmod_parse_data *ret;
  unsigned long rsl, val = phash_lookup(key, len, 0x9e3779b9UL);
  rsl = ((val>>25)^tab[val&0x7f]);
  if (rsl >= 152) return NULL;
  ret = &pd[rsl];
  if (strcmp(key, ret->name) != 0) return NULL;
  return ret;
}

#line 254 "x86regtmod.gperf"


yasm_arch_regtmod
yasm_x86__parse_check_regtmod(yasm_arch *arch, const char *id, size_t id_len,
                              uintptr_t *data)
{
    yasm_arch_x86 *arch_x86 = (yasm_arch_x86 *)arch;
    /*@null@*/ const struct regtmod_parse_data *pdata;
    size_t i;
    static char lcaseid[8];
    unsigned int bits;
    yasm_arch_regtmod type;

    if (id_len > 7)
        return YASM_ARCH_NOTREGTMOD;
    for (i=0; i<id_len; i++)
        lcaseid[i] = tolower(id[i]);
    lcaseid[id_len] = '\0';

    pdata = regtmod_find(lcaseid, id_len);
    if (!pdata)
        return YASM_ARCH_NOTREGTMOD;

    type = (yasm_arch_regtmod)pdata->type;
    bits = pdata->bits;

    if (type == YASM_ARCH_REG && bits != 0 && arch_x86->mode_bits != bits) {
        yasm_warn_set(YASM_WARN_GENERAL,
                      N_("`%s' is a register in %u-bit mode"), id, bits);
        return YASM_ARCH_NOTREGTMOD;
    }

    if (type == YASM_ARCH_SEGREG && bits != 0 && arch_x86->mode_bits == bits) {
        yasm_warn_set(YASM_WARN_GENERAL,
                      N_("`%s' segment register ignored in %u-bit mode"), id,
                      bits);
    }

    if (type == YASM_ARCH_SEGREG)
        *data = (pdata->size_prefix<<8) | pdata->data;
    else
        *data = pdata->size_prefix | pdata->data;
    return type;
}
