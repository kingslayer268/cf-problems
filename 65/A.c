#include <stdio.h>
#include <string.h>
int main() {
	int c;
	scanf("%d", &c);
	for (int i=0; i<c;i++){
		char s[101];
		scanf("%s", s);
		int length = strlen(s);
		if (length <= 10) {
			printf("%s\n", s);
		}
		else {
			printf("%c%d%c\n", s[0], length-2, s[length-1]);
		}
	}
	return 0;
}

