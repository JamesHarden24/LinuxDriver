/****************************************************************************
(a)MMU是中央处理器中用来管理虚拟存储器、物理存储器的控制线路，同时负责虚拟地
   址映射为物理地址。
(b)内存管理单元的基本思路:
   数据和堆栈的大小总和可以超过物理存储器的大小，操作系统把当前使用的部分数据
   保留在内存中，其它的保留在硬盘上
(c)内存管理单元----地址范围
   <1>32位的CPU地址范围是0~2的32次方
   <2>64位的CPU地址范围是0~2的64次方
(d)虚拟地址空间划分为页的单位，相应的物理地址空间被划分为帧。这个就是分页机制。
   页的大小必须一样，页帧的大小也必须一致
(e)虚拟地址和物理地址的转换
   MMU本质上是一个表格
   <1>MMU表格一边是CPU发送指令对应的物理地址，一边存储的是物理地址
   <2>虚拟地址转化为物理地址，内存通过物理地址去读取实际的数据
   在4412处理器中，内部寄存器也是通过虚拟地址和物理地址映射之后拿来使用的。
*****************************************************************************/
