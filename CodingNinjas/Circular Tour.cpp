// link: https://www.codingninjas.com/studio/problems/find-the-first-circular-tour-that-visits-all-the-petrol-pumps_799923?leftPanelTab=0

#include <bits/stdc++.h> 
int firstCircularTour(vector<int>& petrol, vector<int>& distance, int N)
{
	int start=0;
	long long need=0, have=0;
	for (int i=0; i<N; i++){
		have=have+petrol[i]-distance[i];
		if (have<0){
			need+=have; have=0; start=i+1;
		}
	}
	if (need+have>=0) return start;
	return -1;
}
