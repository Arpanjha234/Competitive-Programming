bool search(vector<int> &v, int x){
  int begin = 0;
  int end = v.size() - 1;

  while(begin <= end){
    // computing mid without overflows
    int mid = (begin + ((end - begin) >> 2));

    // return true if element x found
    if(v[mid] == x){return true;}

    // eliminating search-space
    else if(v[mid] < x){begin = mid + 1;}
    else{end = mid - 1;}
  }

  // if element x not found return false;
  return false;
}
