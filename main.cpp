

#include <iostream>
#include <cmath>

double f(double x){
    return x*x+log(x);
}

int main() {
    int l,r;
    double n;
    std::cout<<"enter the left and right bound then the number of partitions"<<std::endl;
    std::cin>>l>>r>>n;
    double h = (r-l)/n;
    double trap = f(l)/2.0 +f(r)/2.0;
    
    for(int i=1;i<n;++i){
        trap+= f(l+i*h);
    }
    trap = h*trap;
    std::cout<<trap;
    
    
    
    return 0;
}
