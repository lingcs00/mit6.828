

#ifndef JOS_INC_SYSCALL_H
#define JOS_INC_SYSCALL_H

/* system call numbers */
enum {
	SYS_cputs = 0,
	SYS_cgetc,
	SYS_getenvid,
	SYS_env_destroy,
	NSYSCALLS
};

int
syscall_enter(int num, int check, int a1, int a2, int a3, int a4, int a5);
#endif /* !JOS_INC_SYSCALL_H */
