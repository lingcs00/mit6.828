// hello, world
#include <inc/lib.h>


void
umain(int argc, char **argv)
{

	//触发一个系统调用
	// syscall_enter(SYS_cgetc,0,1,2,3,4,5);
	cprintf("hello, world\n");
	cprintf("i am environment %08x\n", thisenv->env_id);
}
