#include <bits/stdc++.h>

void permute(std::string a, int l, int r){

  if(l == r){
    std::cout << a << "\n";
  }
  
  else{
    
    for(int i = l; i <= r; i++){

      std::swap(a[l], a[i]);
      permute(a, l + 1, r);
      std::swap(a[l], a[i]);

    }

  }

}
 
int main(){

  std::string str;
  std::cout << "Enter a string: ";
  getline(std::cin, str);
  std::cin.clear();
  
  int n = str.size();
  
  permute(str, 0, n - 1);
  
  return 0;

}