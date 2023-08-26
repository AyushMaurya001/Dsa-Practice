// link: https://www.codingninjas.com/studio/problems/gas-stations_985357?leftPanelTab=0

#include <bits/stdc++.h> 
int firstCircularTour(vector<int> &petrol, vector<int> &distance, int n)
{
	int start=0;
	long long have=0, need=0;
	for (int i=0; i<n; i++){
		have=have+petrol[i]-distance[i];
		if (have<0){
			need+=have; have=0; start=i+1;
		}
	}
	if (need+have>=0) return start;
	return -1;
}