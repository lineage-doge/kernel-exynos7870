/*
 * Copyright (c) 2014 Samsung Electronics Co., Ltd.
 *		http://www.samsung.com
 *
 * Header for EXYNOS SoC Chipid support
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __EXYNOS_SOC_H
#define __EXYNOS_SOC_H

#define EXYNOS3250_SOC_ID	0xE3472000
#define EXYNOS4210_SOC_ID	0x43210000
#define EXYNOS4212_SOC_ID	0x43220000
#define EXYNOS4412_SOC_ID	0xE4412000
#define EXYNOS4415_SOC_ID	0xE4415000
#define EXYNOS5250_SOC_ID	0x43520000
#define EXYNOS5260_SOC_ID	0xE5260000
#define EXYNOS5410_SOC_ID	0xE5410000
#define EXYNOS5420_SOC_ID	0xE5420000
#define EXYNOS5440_SOC_ID	0xE5440000
#define EXYNOS5800_SOC_ID	0xE5422000
#define EXYNOS7870_SOC_ID	0xE7870000
#define EXYNOS8890_SOC_ID	0xE8890000

#define EXYNOS_SOC_MASK		0xFFFFF000
#define EXYNOS_LOTID_MASK	0x001FFFFF

#define EXYNOS4210_REV_0	0x0
#define EXYNOS4210_REV_1_0	0x10
#define EXYNOS4210_REV_1_1	0x11

#define UNIQUE_ID1			0x14
#define UNIQUE_ID2			0x18

/**
 * Struct exynos_chipid_info
 * @soc_product_id: product id allocated to exynos SoC
 * @soc_revision: revision of exynos SoC
 */

struct exynos_chipid_info {
	u32 product_id;
	u32 revision;
	u32 lot_id;
	u64 unique_id;
};

extern struct exynos_chipid_info exynos_soc_info;

/* Since we need chipid to be initialized as early as possible
 * during secondary core bootup adding early initialization function
 */
extern void exynos_chipid_early_init(struct device *dev);

#endif /* __EXYNOS_SOC_H */
