/*
 * Copyright (c) 2020 DarkMatterCore
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#ifndef __SERVICES_H__
#define __SERVICES_H__

/* Hardware clocks expressed in MHz */
#define CPU_CLKRT_NORMAL        1020
#define CPU_CLKRT_OVERCLOCKED   1785
#define MEM_CLKRT_NORMAL        1331
#define MEM_CLKRT_OVERCLOCKED   1600

bool servicesInitialize();
void servicesClose();

bool servicesCheckRunningServiceByName(const char *name);
bool servicesCheckInitializedServiceByName(const char *name);

void servicesChangeHardwareClockRates(u32 cpu_rate, u32 mem_rate);

#endif /* __SERVICES_H__ */