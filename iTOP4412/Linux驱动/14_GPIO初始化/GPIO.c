/*******************************************************************************
    GPIO的初始化
在文件源码 /drivers/gpio/gpio-exynos4.c
    <1> core_initcall(exynos4_gpiolib_init);
    <2> core_initcall 代表在linux初始化过程中会调用
    <3> 初始化函数是在源码目录下"include/linux/init.h"文件中定义的，该文件中定义
        了一系列的初始化函数，在linux启动过程中会按照级别调用
*******************************************************************************/
