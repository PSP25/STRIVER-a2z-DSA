 #include<bits/stdc++.h>
 using namespace std;
void merge(vector<int>&arr,int low,int high,int mid){   
//S1:In the merge function, we will use a temp array to
    // store the elements of the two sorted arrays after
    // merging. Here, the range of the left array is low to 
    //mid and the range for the right half is mid+1 to high.

//S2:Now we will take two pointers left and right, where 
    //left starts from low and right starts from mid+1.

//S3:Using a while loop( while(left <= mid && right <= high)),
    // we will select two elements, one from each half, and 
    //will consider the smallest one among the two. Then, 
    //we will insert the smallest element in the temp array.

//S4:After that, the left-out elements in both halves will be
    // copied as it is into the temp array.

//S5:Now, we will just transfer the elements of the temp 
    //array to the range low to high in the original array.
        vector<int> temp;
        int left=low;
        int right=mid+1;//step 1 & 2
       
    while(left<=mid&&right<=high){
        if(arr[left]>=arr[(right)]){
            temp.push_back(arr[right]);
            right++;
        }
        else{
            temp.push_back(arr[left]);
            left++; 
        }
    }
    //if elements on the left half are still left 
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    //if elements on the right half are still left
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
    // transfering all elements from temporary to arr
    for(int j=low;j<=high;j++){
        arr[j]=temp[j-low];
    }
}
void mergesort(vector<int> &arr,int low,int high){
    if(low>=high)return;//base condition to stop recursion
    int mid=(low+high)/2;
    mergesort(arr,low,mid);//dividing left array
    mergesort(arr,(mid+1),high);//dividing right array
    merge(arr,low,high,mid);//merging the array
}

int main(){
    int n;
    cin>>n;
    
    vector<int> arr={1,9,7,5,3,4,8,0};
    for(auto it:arr){
        cout<<it<<" ";
    }
    cout<<endl;
   mergesort(arr,0,n-1);
    for(auto it:arr){
        cout<<it<<" ";
    }
}






                        //STRIVER SOLUTION

// #include <bits/stdc++.h>
// using namespace std;

// void merge(vector<int> &arr, int low, int mid, int high) {
//     vector<int> temp; // temporary array
//     int left = low;      // starting index of left half of arr
//     int right = mid + 1;   // starting index of right half of arr

//     //storing elements in the temporary array in a sorted manner//

//     while (left <= mid && right <= high) {
//         if (arr[left] <= arr[right]) {
//             temp.push_back(arr[left]);
//             left++;
//         }
//         else {
//             temp.push_back(arr[right]);
//             right++;
//         }
//     }

//     // if elements on the left half are still left //

//     while (left <= mid) {
//         temp.push_back(arr[left]);
//         left++;
//     }

//     //  if elements on the right half are still left //
//     while (right <= high) {
//         temp.push_back(arr[right]);
//         right++;
//     }

//     // transfering all elements from temporary to arr //
//     for (int i = low; i <= high; i++) {
//         arr[i] = temp[i - low];
//     }
// }

// void mergeSort(vector<int> &arr, int low, int high) {
//     if (low >= high) return;
//     int mid = (low + high) / 2 ;
//     mergeSort(arr, low, mid);  // left half
//     mergeSort(arr, mid + 1, high); // right half
//     merge(arr, low, mid, high);  // merging sorted halves
// }

// int main() {

//     vector<int> arr = {9, 4, 7, 6, 3, 1, 5}  ;
//     int n = 7;

//     cout << "Before Sorting Array: " << endl;
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " "  ;
//     }
//     cout << endl;
//     mergeSort(arr, 0, n - 1);
//     cout << "After Sorting Array: " << endl;
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " "  ;
//     }
//     cout << endl;
//     return 0 ;
// }