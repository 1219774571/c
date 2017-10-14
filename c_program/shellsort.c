

// shell排序算法
//控制两个被计较元素之间的距离
//元素间移动位置
//冒泡排序
void shellsort(int v[],int n)
{
	int gap, i, j, temp;

	for(gap = n/2; gap > 0; gap /=2)
	{
		for(i = gap; i < n; ++i)
		{
			for(j = i - gap; j >= 0 && v[j] > v[j+gap]; j -= gap)
			{
				temp = v[j];
				v[j] = v[j+gap];
				v[j+gap] = temp;
			}
		}
	}
}
