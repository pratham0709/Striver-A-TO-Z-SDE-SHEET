int NthRoot(int n, int m) {
  // Write your code here.
   int start = 1;
   int end = m;

   while(start<=end){
     int mid = start + (end - start) / 2;

     if(pow(mid,n) == m) return mid;

     if(pow(mid,n) > m) {
       end = mid - 1;
     }
     else{
       start = mid + 1;
     }
   }
   return -1;
}
