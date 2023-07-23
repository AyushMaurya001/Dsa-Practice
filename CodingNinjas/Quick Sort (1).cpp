// link: https://www.codingninjas.com/studio/problems/quick-sort-code_5844?leftPanelTab=0

/*
	The function is called with the parameters:
	quickSort(input, 0, size - 1);

*/

int partitionArray(int arr[], int s, int e) {
	
	int p=arr[s], cnt=0;
	for (int i=s+1; i<=e; i++){
		if (arr[i]<=p) cnt++;
	}
	swap(arr[s], arr[s+cnt]);
	int index=s+cnt;
	while (s<index && e>index){
		while (arr[s]<=p) s++;
		while (arr[e]>p) e--;
		if (s<index && e>index) swap(arr[s], arr[e]);
	}
	return index;

}

void quickSort(int arr[], int s, int e) {
	
	if (s>=e) return;
	int p=partitionArray(arr, s, e);
	quickSort(arr, s, p-1);
	quickSort(arr, p+1, e);

}