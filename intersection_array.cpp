#include <bits/stdc++.h> 
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	vector<int> vector;
	map<int,int> map;
	for(int i=0; i<arr1.size(); i++)
	{
		map[arr1[i]]++;
	}
	for(int i=0; i<arr2.size(); i++)
	{
		if(map[arr2[i]]>0)
		{
			vector.push_back(arr2[i]);
			map[arr2[i]]--;
		}
	}
	return vector;
}
