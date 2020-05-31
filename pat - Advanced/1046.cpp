#include<stdio.h>
/*
5 
0 1-2 1		1
1 2-3 2		3
2 3-4 4		7
3 4-5 14	21
4 5-1 9		30
			
 --------------
 1 3	
 2 5 
 4 1 
 1 2 
*/


int main() {
	int i, n;
	int total = 0;
	scanf("%d",&n);

	int D[n], dis[n];
	for (i = 0; i < n; i++) {
		scanf("%d",&D[i]);
		total += D[i];
		dis[i] = total;
	}
	int m;
	scanf("%d", &m);
	int start, end;
	int result;
	int s1, s2;
	while (m--) {
		s1 = 0;
		scanf("%d %d", &start, &end);
		if (start == end) {
			result = 0;
		}
		else {
			if (start > end) {
				int temp = start;
				start = end;
				end = temp;
			}
			if (start == 1) {
				s1 = dis[end - 2];
			}
			else {
				s1 = dis[end - 2] - dis[start - 2];
			}
			s2 = total - s1;
			result = s1 < s2 ? s1 : s2;
		} 		
		printf("%d\n",result);
	}

	return 0;
}