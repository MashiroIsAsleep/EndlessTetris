#include <iostream>
#include <thread>
#include <chrono>

int main(){int p=0;while(1){std::cout<<"\033[2J\033[1;1H";for(int i=0;i<20;i++)std::cout<<"|"<<(i==p&&p<20?"         []         ":"                    ")<<"|"<<(i==0?"   Score: 0":"")<<std::endl;std::this_thread::sleep_for(std::chrono::milliseconds(700));p=p<20?p+1:21;}}
