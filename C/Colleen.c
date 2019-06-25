/*
** Created by Jules SPENDER on 2019-06-25.
*/

#include <stdio.h>
#define __unused __attribute__((unused))

static int	function_useless(__unused int argc)
{
	return (0);
}

int			main(int argc, char **argv)
{
	/*
	** Well formated commented code
	*/
	char*a="/*%c**%cCreated%cby%cJules%cSPENDER%con%c2019-06-25.%c*/%c%c#include%c<stdio.h>%c#define%c__unused%c__attribute__((unused))%c%cstatic%cint%cfunction_useless(__unused%cint%cargc)%c{%c%creturn%c(0);%c}%c%cint%c%c%cmain(int%cargc,%cchar%c**argv)%c{%c%c/*%c%c**%cWell%cformated%ccommented%ccode%c%c*/%c%cchar*a=%c%s%c;%c%cprintf(a,10,32,32,32,32,32,32,10,10,10,32,10,32,32,10,10,32,9,32,32,10,10,9,32,10,10,10,9,9,9,32,32,32,10,10,9,10,9,32,32,32,32,10,9,10,9,34,a,34,10,9,10,9,10,9,32,10);%c%cfunction_useless(argc);%c%creturn%c(0);%c}";
	printf(a,10,32,32,32,32,32,32,10,10,10,32,10,32,32,10,10,32,9,32,32,10,10,9,32,10,10,10,9,9,9,32,32,32,10,10,9,10,9,32,32,32,32,10,9,10,9,34,a,34,10,9,10,9,10,9,32,10);
	function_useless(argc);
	return (0);
}