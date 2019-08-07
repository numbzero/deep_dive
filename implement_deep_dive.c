#include <stdio.h>

void	Ox8fae(void)
{
	printf("%s", "now_breath_you");
}

int 	main(int argc, char const *argv[])
{
	int	var_20;
	int	var_1C;
	int	var_18;

	printf("Enter PIN: ");
	scanf("%d", &var_20);
	/*----------------------------------*/
	var_1C = var_20 + 0x539; // 0x539 = 1337
	/*----------------------------------*/
	/* cmp     [rbp+var_1C], 2710h		*/
	/* jle     loc_8BA					*/
	/*----------------------------------*/
	if (var_1C <= 0x2710)	// 0x2710 = 10000
		goto loc_8BA;
	/*----------------------------------*/
	var_18 = var_1C - 0x172a5; // 0x172a5 = 94885
	/*----------------------------------*/
	/* cmp     [rbp+var_18], 7A11Fh		*/
	/* jg      short loc_7F3			*/
	/*----------------------------------*/
	if (var_18 > 0x7a11f) // 0x7a11f = 499999
		goto loc_7F3;
	puts("Closer but still soo faaar...");
	goto loc_8CB;

loc_7F3:
	if (var_1C <= var_18)
		goto loc_8A7;
	if (var_20 <= 0x0dbb9f)	// 0x0dbb9f = 899999
		goto loc_894;
	/*----------------------------------*/
	/* cmp     eax, 0EED97h				*/
	/* jz      short loc_82D			*/
	/*----------------------------------*/
	if (var_20 == 0x0eed97) // 0x0eed97 = 978327
		goto loc_82D;
	puts("Ok. NOW you are close...");
	goto loc_8CB;

loc_82D:
	printf("Ooooh snap...");
	printf("1337.MD{");
	Ox8fae();
	printf("_found_it}\n");
	goto loc_8CB;

loc_894:
	puts("You have to dive deeper. C'mon!");
	goto loc_8CB;

loc_8A7:
	puts("Here will be Dragons  :D");
	goto loc_8CB;

loc_8BA:
	puts("Nope. Wrong PIN. Try again ...");
	goto loc_8CB;

loc_8CB:
	return 0;
}