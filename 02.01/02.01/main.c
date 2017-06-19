#include "caesar.h"
#include <stdio.h>
int main(void) {
	char chars[] = "Hallo Welt!";
	caesar(chars, 53);
	int i = 0;
	while (chars[i] != '\0')
	{
		printf("%c", chars[i]);
		i++;
	}
	i = 0;
	// Die Allgemeine Erklärung der Menschenrechte Resolution 217 A(III) Artikel 1
	char encrypted[] = "Bmmf Nfotdifo tjoe gsfj voe hmfjdi bo Xvfsef voe Sfdiufo hfcpsfo.Tjf tjoe nju Wfsovogu voe Hfxjttfo cfhbcu voe	tpmmfo fjoboefs jn Hfjtuf efs Csvfefsmjdilfju cfhfhofo.";
	decrypt(encrypted);
	while (encrypted[i] != '\0')
	{
		printf("%c", encrypted[i]);
		i++;
	}
	scanf("%d");
}