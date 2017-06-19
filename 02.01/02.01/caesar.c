#include "caesar.h"

void caesar(char text[], char offset) {
	int i = 0;
	if (offset > 26) {
		offset = offset % 26;
	}
	char c;
	while (text[i] != '\0') {
		c = text[i];
		if (isAlphaChar(c)) {
			text[i] = encrypt((char) c, offset);
		}
		i++;
	}
}

char encrypt(char c, char offset) {
	if (c >= 'A' && c <= 'Z') {
		if (c + offset > 'Z') {
			c = 'A' + (c + offset - 'Z') - 1;
		}
		else if (c + offset < 'A') {
			c = 'Z' - ('A' - (c + offset));
		}
		else {
			c = c + offset;
		}
	}
	else if (c >= 'a' && c <= 'z') {
		if (c + offset > 'z') {
			c = 'a' + (c + offset - 'z') - 1;
		}
		else if (c + offset < 'a') {
			c = 'z' - ('a' - (c + offset));
		}
		else {
			c = c + offset;
		}
	}
	else {

	}
	return c;
}

int isAlphaChar(char c){
	if (c >= 'A' && c <= 'Z') {
		return 1;
	}
	else if (c >= 'a' && c <= 'z') {
		return 1;
	}
	return 0;
}

