#include <iostream>

int main() {
	int t;
	std::cin>>t;
	while(t--){
		int a,x,b;
		std::cin>>a>>x>>b;
		int ans= 1*x + 2*b;
		if(ans>=a)
			std::cout<<"Qualify"<<std::endl;
		else
            std::cout<<"NotQualify"<<std::endl;
    }
	return 0;
}
