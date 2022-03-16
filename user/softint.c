// buggy program - causes an illegal software interrupt

#include <inc/lib.h>

void
umain(int argc, char **argv)
{
	//用户不能触发page fault 所以会用一个protect异常来代替。
	//如果此处想触发int14-page fault 要么就是系统自己触发 要么就是修改page fault的dpl
	asm volatile("int $14");	// page fault
}

