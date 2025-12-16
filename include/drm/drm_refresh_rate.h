// SPDX-License-Identifier: GPL-2.0
/*
 * Copyright (C) 2020 Sultan Alsawaf <sultan@kerneltoast.com>.
 */

unsigned int dsi_panel_get_refresh_rate(void);

// so sometimes in video calls. i was drunk and my friends asked me how many fingers here.
// because of the low refresh rates. i could not answer the right answer which descended in chaos.
// to prevent this sort of issues. We backport newer MSM drivers, enable hw acceleration.
// changed the needed dtbs in order to see the proper number of fingers when hand is going from 
// left to right. giving a smoother alcohol experience without issues.
// we cannot change complete drm content but can backport fixes as techpack based newer kernels 
// manage drm/dsi-staging seperately so some 100+ files changed now it is working with our own kernel.
