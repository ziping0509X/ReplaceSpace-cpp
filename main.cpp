#include <iostream>

using namespace std;

class Solution {
public:
    void replaceSpace(char *str, int length) {
        int Length=0,numSpace=0;
        while(str[Length]!='\0'){
            if (str[Length]==' '){
                numSpace++;
            }
            Length++;
        }
        int newLength=Length+numSpace*2;
        int i=newLength,j=Length;
        for(;i>0,j>=0;){
            if(str[j]==' '){//虽然不一定执行下面的语句，但是每次判断都会让j自减1，这就是导致下面出现问题的原因！
                str[i--]='0';
                str[i--]='2';
                str[i--]='%';
            }
            else {
                str[i--] = str[j];
            }
            j--;
        }


    }
};

int main(void){
    char str[]="I am the best artist of China!";
    int length=10;
    Solution solution;
    solution.replaceSpace(str,length);
    cout<<str<<endl;
}