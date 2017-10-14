
/*求最小公约数
  两个值,max and min
  (tem = max % min ) != 0 ?
  (min %  他们的模 )== 0 ? 他们的模  : 重复*/

#define max(x,y) ((x) > (y) ? (x) : (y))
#define min(x,y) ((x) > (y) ? (y) : (x))

int
minimum(int x,int y)
{
	int tmp;
	int big = max(x,y);
	int small = min(x,y);
	while(small > 0)//模是否为0
	{
		tmp = big % small;//求模
		big = small;//将被模的值赋值给求模值
		small = tmp;//被模值等于他们的模
	}
	return big;
}
