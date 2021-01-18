#include <iostream>
#include <cassert>

using namespace std;

bool linearSearch(int arr[], int n, int x) 
{	
   //YOUR CODEE FOR LINEAR SEARCH GOES HERE
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            return true;
        }
    }
    return false;
}
 
bool binarySearch(int arr[],int x,int low,int high) 
{ 
   //YOUR CODEE FOR BINARY SEARCH GOES HERE
    int mid=(low+high)/2;
    while(low<=high){
        if(x==arr[mid]){
            return true;
        }
        else if(x<arr[mid]){
            return binarySearch(arr,x,low,mid-1);
        }
        else{
            return binarySearch(arr,x,mid+1,high);
        }
    }
    return false;
}

int linearSearchSUM2 (int A1[], int A2[], int n1, int n2, int x)
{
    //YOUR CODEE FOR BINARY SEARCH GOES HERE
    int counter=0;
    for(int i=0;i<n1;i++){
        int v2=x-A1[i];
        if(linearSearch(A2,n2,v2)){
            counter++;
        }
    }
    return counter;
}

int binarySearchSUM2 (int A1[], int A2[], int n1, int n2, int x){
   //YOUR CODEE FOR BINARY SEARCH GOES HERE
    int counter=0;
    for(int i=0;i<n1;i++){
        int v2=x-A1[i];
        if(binarySearch(A2,v2,0,n2-1)){
            counter++;
        }
    }
    return counter;
}


int main()
{
	//TEST THE FUNCTIONS WITH INPUTS FROM FIRST EXERCISE
	//Notice that array2 must be sorted for binary search to work
	int array1[] = {4,5,2,7,8,10};
	int array2[] = {-7,-6,-4,1,9,12};  
	assert(linearSearchSUM2(array1, array2, 6, 6, 3) == 3);
	assert(binarySearchSUM2(array1, array2, 6, 6, 3) == 3);		
    std::cout<<"Successful\n";
	//You must continue the rest of the tests here
    assert(linearSearchSUM2(array1, array2, 6, 6, 0) == 2);
	assert(binarySearchSUM2(array1, array2, 6, 6, 0) == 2);
    std::cout<<"Successful\n";
    assert(linearSearchSUM2(array1, array2, 6, 6, 7) == 0);
	assert(binarySearchSUM2(array1, array2, 6, 6, 7) == 0);
    std::cout<<"Successful\n";
    int a1[]={5,2,7,-8,10,-20,13,64,0,-36,-10,-4,-44};
    int a2[]={1,2,3,5,6,7,8,10,12,13,14,15,16,17,19,20,21,
            22,23,25,26,27,28,30,31,33,34,35,36,37,41,41,43,
            44,47,48,49,50,51,52,53,54,56,57,58,63,64,65,67,
            68,69,70,75,80};
    assert(linearSearchSUM2(a1, a2, 13, 54, 14) == 8);
	assert(binarySearchSUM2(a1, a2, 13, 54, 14) == 8);
    std::cout<<"Successful\n";
    return 0;
}
