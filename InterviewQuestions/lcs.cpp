#include <iostream>
#include <string>
using namespace std;

// LONGEST COMMON SUBSEQUENCE 
int longestSubseq(string text, string pattern, int n, int m){

	//Base Case
	if (n == 0 || m == 0){
		return 0;
    }

	// If its a match
	if (text[n - 1] == pattern[m - 1]){
		return longestSubseq(text, pattern, n - 1, m - 1) + 1;
    }
    else{
	// No match Case
	return max(longestSubseq(text, pattern, n, m - 1), longestSubseq(text, pattern, n - 1, m));
    }
}

int main(){
	string text, pattern;
    cin>>text>>pattern;
	cout <<"Length of LCS: "<<longestSubseq(text, pattern, text.length(), pattern.length())<<endl;

	return 0;
}