/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * Copyright (C) 2019 Philippe Reynes <philippe.reynes@softathome.com>
 */

#include <linux/sizes.h>

/*
 * common
 */

/* UART */
#define CONFIG_SYS_BAUDRATE_TABLE	{ 9600, 19200, 38400, 57600, 115200, \
					  230400, 500000, 1500000 }
/* Memory usage */
#define CONFIG_SYS_MAXARGS		24
#define CONFIG_SYS_BOOTM_LEN		(16 * 1024 * 1024)

/*
 * 63158
 */

/* RAM */
#define CONFIG_SYS_SDRAM_BASE		0x00000000

/* U-Boot */
#define CONFIG_SYS_INIT_SP_ADDR		(CONFIG_SYS_TEXT_BASE + SZ_16M)

#ifdef CONFIG_MTD_RAW_NAND
#define CONFIG_SYS_MAX_NAND_DEVICE	1
#define CONFIG_SYS_NAND_SELF_INIT
#endif /* CONFIG_MTD_RAW_NAND */

/*
 * bcm963158
 */
