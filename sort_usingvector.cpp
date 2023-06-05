#include <iostream>
#include <vector>
using namespace std;

// int main() {
//   vector <int> arr;

//   cout<<arr.size()<<endl;
//   cout<<arr.capacity()<<endl;

//   // insert
//   arr.push_back(5);
//   arr.push_back(6);

//   for(int i=0; i<arr.size(); i++){
//     cout<<arr[i]<<" ";
//   }

//   cout<<endl;
//   arr.pop_back();

//   for(int i=0; i<arr.size(); i++){
//     cout<<arr[i]<<" ";
//   }
//   cout<<endl;
  
// }

// Unique element by function

// int findUnique (vector <int> arr){
// int ans=0;
// for(int i=0; i<arr.size(); i++){
//   ans=ans^arr[i];
// }
//   return ans;
// }

// int main(){
//   int num;
//   cout<<"Enter the value you want to put in array:- ";
//   cin>>num;
//   vector <int> arr(num);
//   for(int i=0; i<arr.size(); i++){
//     cin>>arr[i];
//   }
//   cout<<"Array is:-";
//   for(int i=0; i<arr.size(); i++){
//     cout<<arr[i]<<" ";
//   }
//   cout<<endl;
//   int uniqueElement= findUnique(arr);
//   cout<<"Unique element is:- "<<uniqueElement<<endl;
// }

// Unique element without function

// int main(){
//   int num; 
//   cout<<"Enter the number of elements you want in array:-";
//   cin>>num;

//   vector <int> arr(num);
//   for(int i=0; i<arr.size(); i++){
//     cin>>arr[i];
//   }
//   cout<<"Array is:- ";
//   for(int i=0; i<arr.size(); i++){
//     cout<<arr[i]<<" ";
//   }
//   cout<<endl;

//   int uniqueElement=0;
//   for(int i=0; i<arr.size(); i++){
//     uniqueElement=uniqueElement^arr[i];
//   }

//   cout<<"Unique element is:-- "<<uniqueElement;

//   return 0;
// }

// Union of 2 arrays

// int main(){
//   int arr[]={1,2,3,4};
//   int sizea=4;
//   int brr[]={5,6,7,8};
//   int sizeb=4;

//   vector <int> ans;
//   //push all elements of arr a
//   for(int i=0; i<sizea; i++){
//     ans.push_back(arr[i]);
//   }

//   //push all elements of arr b
//   for(int i=0; i<sizeb; i++){
//     ans.push_back(brr[i]);
//   }

//   //print ans
//   cout<<"Printing ans array"<<endl;
//   for(int i=0; i<ans.size(); i++){
//     cout<<ans[i]<<" ";
    
//   }

// PAIR SUM
// int main(){
//   // vector <int> arr{10,20,30};
//   int n;
//   cout<<"Enter the number of elements in vector:-";
//   cin>>n;
//   vector <int> arr(n);
//   for(int i=0; i<arr.size(); i++){
//     cout<<"Enter the value of element "<<i+1<<":- ";
//     cin>>arr[i];
//   }
//   cout<<"Array is:- ";
//   cout<<"{";
//   for(int j=0; j<arr.size();j++){
//     cout<<arr[j];
//     if (j!= n - 1) {
//             cout << ", ";
//         }
//   }
//   cout<<"}";
//   cout<<endl;
  
//   int sum;
//   cout<<"Enter the value of Sum:-";
//   cin>>sum;
//   for(int k=0; k<arr.size(); k++){
//     for(int l=k+1; l<arr.size(); l++){
//       if(arr[k]+arr[l]==sum){
//       cout<<"("<<arr[k]<<","<<arr[l]<<")"<<endl;
//     }
//   }
// }
  
// }

// Triplet Sum

// int main(){
//   int n;
//   cout<<"Enter the number of elements in vector:-";
//   cin>>n;
//   vector <int> arr(n);
//   for(int i=0; i<arr.size(); i++){
//     cout<<"Enter the value of element "<<i+1<<":- ";
//     cin>>arr[i];
//   }
//   cout<<"Array is:- ";
//   cout<<"{";
//   for(int j=0; j<arr.size();j++){
//     cout<<arr[j];
//     if (j!= n - 1) {
//             cout << ", ";
//         }
//   }
//   cout<<"}";
//   cout<<endl;

//   int sum=80;
//   for(int k=0 ; k<arr.size(); k++){
//     int element1 =arr[k];
//   for(int l=k+1; l<arr.size(); l++){
//     int element2 =arr[l];
//   for(int m=l+1; m<arr.size(); m++){
//     int element3= arr[m];
//     if(element1+element2+element3==sum){
//       cout<<"Triplet Pair sum is:- ";
//       cout<<"{"<<element1<<","<<element2<<","<<element3<<"}"<<endl;
//     }
//   }
//  }
// }
// }

// SORT 0's AND 1's

int main(){
  int n;
  cout<<"Enter the number of elements in vector:-";
  cin>>n;
  vector <int> arr(n);
  for(int i=0; i<arr.size(); i++){
    cout<<"Enter the value of element "<<i+1<<":- ";
    cin>>arr[i];
  }
  cout<<"Array is:- ";
  cout<<"{";
  for(int j=0; j<arr.size();j++){
    cout<<arr[j];
    if (j!= n - 1) {
            cout << ", ";
        }
  }
  cout<<"}";
  cout<<endl;

  int start=0;
  int end= arr.size()-1;
  int i=0;

  while(i!= end){
    if(arr[i]==0){
      swap(arr[start],arr[i]);
      start++;
      i++;
    }
    else{
      swap(arr[end], arr[i]);
      end--;
    }
  }
  for(auto val: arr){
    cout<<val<<" ";
  }
}