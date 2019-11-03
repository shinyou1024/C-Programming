
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    printf("Input any integer number : ");
    scanf_s("%d", &n);
    int cnt = 0;

    for(int i=1; i<=n; i++) {
        int num = i;
        int p=0; // shows how many places are in the number
        int tmp = num; // a temporary variable to find number of each place

        // if num has 2 or more place
        if(num>=10) {
            // to find the number of each digit
            while(tmp>=10) {
                p++;
                tmp/=10;
            }

            while(p>0) {
                int m = 1;
                for(int j=1; j<=p; j++) {
                    m*=10;
                }

                // p번째 자릿수가 1이면 cnt 증가
                if(num/m==1) {
                    cnt++;
                }
                num%=m;
                p--;
            }
        }

        // 일의 자릿수가 1이면 cnt 증가
        if(num%10==1) {
            printf("%d\n", i);
            cnt++;
        }
    }

    printf("The number of 1 is %d\n", cnt);
    return 0;
}
