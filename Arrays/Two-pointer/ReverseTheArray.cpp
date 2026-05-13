#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> arr = {10,20,30,40,50};  // Initialize the Array
	 int start = 0 , end = arr.size()-1;
	 
	 while(start<end){
	     int temp = arr[start];
	     arr[start] = arr[end];
	     arr[end] = temp;
	     
	     start++;
	     end--;
	 }
	 
	 for(auto i:arr){
	     cout<<" "<<i;
	 }

}
