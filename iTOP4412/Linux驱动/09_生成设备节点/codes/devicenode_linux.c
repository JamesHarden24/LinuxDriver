

#include <linux/init.h>
#include <linux/module.h>
#include <linux/platform_device.h>

#include <linux/miscdevice.h> /* �����豸��ͷ�ļ� */
#include <linux/fs.h>         /* ע���豸�ڵ��ͷ�ļ� */

static struct miscdevice  {
    int minor;        //���豸��
    const char *name; //�����豸�ڵ������
    const struct file_operations *fops;  //ָ��һ���豸�ڵ��ļ�
    struct list_head list;
    struct device *parent;
    struct device *this_device;
    const char *nodename;
    mode_t mode;
};

static int hello_open(struct inode *pstInode, struct file *pstFile)
{
    printk(KERN_EMERG"Hello Open\n");
    return 0;
}

static int hello_release(struct inode *pstInode, struct file *pstFile)
{
    printk(KERN_EMERG"Hello Release\n");
    return 0;
}

static long hello_ioctl(struct file *pstFile, unsigned int uiCmd, unsigned long ulArg)
{
    printk(KERN_EMERG"Hello Ioctl\n");
	
    return 0;
}

static struct file_operations hello_ops = {
    .owner = THIS_MODULE,
    .open  = hello_open,
    .release = hello_release,
    .unlocked_ioctl = hello_ioctl,
};
