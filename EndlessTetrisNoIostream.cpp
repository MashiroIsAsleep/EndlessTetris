extern "C"{int printf(const char*,...);void sleep(unsigned);int system(const char*);}int main(){int p=0;while(1){system("clear");for(int i=0;i<20;i++)printf("|%s|%s\n",i==p&&p<20?"         []         ":"                    ",i?"":"   Score: 0");sleep(1);p=p<20?p+1:21;}}