
/* Copyright (c) 2012-2021, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#ifndef DT_PARSE
#define DT_PARSE
#include <linux/of.h>
#include "msm_vidc_resources.h"
#include "msm_vidc_common.h"
void msm_vidc_free_platform_resources(
		struct msm_vidc_platform_resources *res);

int read_hfi_type(struct platform_device *pdev);

int read_platform_resources_from_drv_data(
		struct msm_vidc_core *core);
int read_platform_resources_from_dt(
		struct msm_vidc_platform_resources *res);

int read_context_bank_resources_from_dt(struct platform_device *pdev);

int read_bus_resources_from_dt(struct platform_device *pdev);
int read_mem_cdsp_resources_from_dt(struct platform_device *pdev);

int msm_vidc_load_u32_table(struct platform_device *pdev,
		struct device_node *of_node, char *table_name, int struct_size,
		u32 **table, u32 *num_elements);

int msm_vidc_enable_cma(struct msm_vidc_platform_resources *res, bool enable);

#endif
