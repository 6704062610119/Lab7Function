#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random100to200();

int main() {
    int M, N;
    int A[20][20];
    int i, j, x, y;
    int rnum, ok;

    scanf("%d %d", &M, &N);

    // check MN
    if (M <= 2 || N <= 2 || M >= 20 || N >= 20 || M*N > 101) {
        return 0;
    }

    srand(time(NULL));

    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {

            ok = 1;
            while (ok==1) {
                rnum = random100to200();
                ok = 0;

                // check duplicate
                for (x = 0; x < M; x++) {
                    for (y = 0; y < N; y++) {
                    	if (x == i && y == j){
                    		x = M;
                    		break;
						}
                        if (A[x][y] == rnum) {
                            ok = 1;
                            x = M;
                            break;
                        }
                    }
                }
            }
            A[i][j] = rnum;
        }
    }

    // print
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}

int random100to200() {
    return rand() % 101 + 100;  // 100–200
}

