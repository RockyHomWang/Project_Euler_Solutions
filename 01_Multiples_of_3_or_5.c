#include <stdio.h>

#Brute Force   O(n)
int main() {
	int ans;
	for(int i = 1; i<1000; i++) {
		if(i % 3 == 0 || i % 5 ==0) ans += i;
	}
	printf("%d\n", ans);
}

#LCM and Sum of Arithmetic Sequence   O(1)
int main() {
	int sum3 = (3 + 999) * 333 / 2;
	int sum5 = (5 + 995) * 199 / 2;
	int sum15 = (15 + 990) * 66 / 2;
	printf("%d\n", sum3 + sum5 - sum15);
}

/**
① 3或5的倍数和 与 3的倍数和5的倍数之和之间的差别是：后者比前者多计算了一遍 3和5最小公倍数的倍数和（计算了2次）
② 等差数列求和公式：末项求值公式、项数
/*