/* this file is generated, don't edit it yourself */

#include <common.h>
#include <asm/arch/dram.h>

static struct dram_para dram_para = {
	.clock = 360,
	.type = 3,
	.rank_num = 1,
	.density = 4096,
	.io_width = 16,
	.bus_width = 32,
	.cas = 6,
	.zq = 0x7f,
	.odt_en = 0,
	.size = 1024,
	.tpr0 = 0x248d5590,
	.tpr1 = 0xa088,
	.tpr2 = 0x22a00,
	.tpr3 = 0x0,
	.tpr4 = 0x0,
	.tpr5 = 0x0,
	.emr1 = 0x0,
	.emr2 = 0x0,
	.emr3 = 0x0,
};

unsigned long sunxi_dram_init(void)
{
	return dramc_init(&dram_para);
}
