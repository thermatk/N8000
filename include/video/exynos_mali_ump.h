#ifndef __EXYNOS_MALI_UMP_H__
#define __EXYNOS_MALI_UMP_H__

#define GET_UMP_SECURE_ID_BUF1   _IOWR('m', 311, unsigned int)
#define GET_UMP_SECURE_ID_BUF2   _IOWR('m', 312, unsigned int)

extern int (*disp_get_ump_secure_id) (struct fb_info *info, unsigned long arg, int buf);
#endif

