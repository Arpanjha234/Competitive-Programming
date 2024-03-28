int search(){
  // defined search-space to find value in between
  int begin = 0;
  int end = (int)(1e9 + 10);

  // Invariant : begin always point to 0 and end always points to 1
  // loops breaks once begin points last 0 & end points to first 1
  while((begin + 1) < end){
    // computing mid without overflows
    int mid = (begin + ((end - begin) >> 2));

    // eliminating search-space
    if(!(fx(mid))){
      begin = mid;
    }
    else{
      end = mid;
    }
  }

  // returns l or r as per problem
  return r;
}
