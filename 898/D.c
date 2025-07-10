#include <stdio.h>
int minoperations(char *s, int length, int brush_size){
        int operations = 0;
        int i = 0;
        while (i<length){
                if (s[i] == 'B') {
                        operations += 1;
                        i += brush_size;
                }
                else {
                        i++;
                }
        };
        return operations;
};

int main() {
	int cases;
	scanf("%d", &cases);
	for (int i = 0; i<cases; i++){
		int length,brush_size;
		scanf("%d" "%d", &length, &brush_size);	
		char test_case[200001];
		scanf("%s", test_case);
		int answer = minoperations(test_case, length, brush_size);
		printf("%d\n", answer);
	};
	return 0;
}


