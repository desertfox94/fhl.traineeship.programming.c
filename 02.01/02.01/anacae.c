#include "caesar.h"
#include "anacae.h"
#include <ctype.h>

int decrypt(char chars[]){
	char c = findEncryptedCharE(chars);
	if (c == '\0') {
		return 0;
	}
	char offset = 'E' - c;
	caesar(chars, offset);
	return 1;
}

char findEncryptedCharE(char encrypted[]){
	int i = 0;
	int charCount = 0;
	char chars[256];
	int frequency[256];
	char e = '\0';
	int indexInCharCounter;
	char c;
	while (encrypted[i] != '\0') {
		c = toupper(encrypted[i]);
		indexInCharCounter = contains(chars, c, charCount);
		if (indexInCharCounter) {
			frequency[indexInCharCounter] = frequency[indexInCharCounter] + 1;
		}
		else {
			chars[charCount] = c;
			frequency[charCount] = 1;
			charCount++;
		}
		i++;
	}
	int maxAt = findMax(frequency, charCount);
	if (maxAt) {
		e = chars[maxAt];
	}
	return e;
}

int findMax(int frequency[], int length) {
	int max = 0;
	if (length > 0) {
		max = frequency[0];
	}
	int i;
	int maxAt = 0;
	for (i = 0; i < length; i++) {
		if (frequency[i] > max) {
			max = frequency[i];
			maxAt = i;
		}
	}
	return maxAt;
}

int contains(char chars[], char c, int length) {
	int i = 0;
	while (i < length) {
		if (chars[i] == c) {
			return i;
		}
		i++;
	}
	return 0;
}