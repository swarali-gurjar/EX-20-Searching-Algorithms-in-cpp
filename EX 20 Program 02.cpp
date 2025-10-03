#include<iostream>
#include<vector> 
class SearchArr{
    int binarysearch(const std::vector<int>& arr,int target){ 
       int low=0;
       int high=arr.size()-1;
       while(low<=high){
           int mid=low+(high-low)/2;
           if(arr[mid]==target){
               return mid;
           }
           else if(arr[mid]<target){
               low=mid+1;
           }
           else{
               high=mid-1;
           }
       }    

         return -1;

    }
public:
    int search(const std::vector<int>& arr,int target){ 
        return binarysearch(arr,target);
    }   

};
int main(){
    SearchArr obj;
    std::vector<int> arr={-1,0,3,5,9,12};
    int target=9;
    int result=obj.search(arr,target);
    std::cout<<result<<std::endl;
    return 0;
}
