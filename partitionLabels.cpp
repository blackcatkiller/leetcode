#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> partitionLabels(string S) {
        vector<int>ans;
        int i=0,j=0;
        while(i!=S.size()) {
            j++;
            if(S[i]==S[j]){
                i=j;
            }
            if(j==S.size()){
                ans.push_back(i);
                S=S.substr(0,i+1);
            }
        }
        return ans;
    }
};
void test(){
    Solution s;
    for(int i=0;i<s.partitionLabels("ababcbacadefegdehijhklij").size();i++){
        cout<<s.partitionLabels("ababcbacadefegdehijhklij")[i];
    }
}
int main(){
    test();
    return 0;
}