#include <stdio.h>
#include <stdbool.h>
#include <map>
using namespace std;
void solution(int *a, int n, int k);

int main(){
    int T;
    scanf("%d", &T);
    for (int i = 0; i<T; i++) {
        int n, k;
        scanf("%d %d", &n, &k);
        int a[1000];
        for (int j = 0; j<n; j++) {
            scanf("%d", &a[j]);
        }
        solution(a, n, k);
    }
    return 0;
}
void solution(int*a, int n, int k){
    bool found = false;
    bool possible = false;
    for (int i=0; i<n; i++){
        if (a[i] == k){
            int j = i;
            if (i == n-1) {
                possible = false;
            }
            found = true;
            map<int, int> book_keeper;
            int last_max = 0;
            while (j<n){
                book_keeper[a[j]] = book_keeper[a[j]]+1;
                if (j == i+1){
                    last_max = a[j]; 
                }
                if (book_keeper[a[j]] > book_keeper[last_max]) {
                    last_max = a[j];
                }
                if (book_keeper[a[i]]+1 > book_keeper[last_max]){
                    possible = true;
                }
                j++; 
            }
        }
    }
    if (possible){
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }
    
}
