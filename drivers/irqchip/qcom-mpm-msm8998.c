/* Copyright (c) 2018, The Linux Foundation. All rights reserved.
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

#include <soc/qcom/mpm.h>

const struct mpm_pin mpm_msm8998_gic_chip_data[] = {
	{ 0x1f,	212 },	/* usb30_power_event_irq	*/
	{ 0x2,	216 },	/* tsens1_upper_lower_int	*/
	{ 0x34,	275 },	/* qmp_usb3_lfps_rxterm_irq_cx	*/
	{ 0x57,	358 },	/*  spmi_periph_irq[0]	*/
	{ 0x4f,	379 },	/* usb2phy_intr: qusb2phy_dmse_hv	*/
	{ 0x51,	379 },	/* usb2phy_intr: qusb2phy_dpse_hv	*/
	{ 0x50,	384 },	/* sp_rmb_sp2soc_irq	*/
	{-1},
};
