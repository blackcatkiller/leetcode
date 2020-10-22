#include<iostream>
using namespace std;
class Solution{
public:
    bool isLongPressedName(string name, string typed) {
        int i = 0, j = 0;

        while (j < typed.size()){
            if(i<name.length()&&name[i]==typed[j]){
                i++;
                j++;
            }else if(j>0 && typed[j]==typed[j-1]){
                j++;
            }else{
                return false;
            }
        }
        return i==name.length();
    }
};
void test(){
    Solution a;
    if(a.isLongPressedName("saeed", "ssaaedd")){
        cout<<"true";
        return;
    }
    cout<<"false";

}

int main(){
    test();
    return 0;
}