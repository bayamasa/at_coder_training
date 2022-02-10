#include <iostream>
#include <regex> // 正規表現を取り扱うためのライブラリ 
using namespace std;

int main() {
    // 調べたい文字列を受け取る  
    string S;
    cin >> S;   
    // 調べる正規表現 ('R' で囲う)
    regex reg{R"(algo)"}; 
    // マッチした文字列情報が格納される (存在しなければ null) 
    smatch m;
    
    // マッチするか (bool 値) 
    bool search = regex_search(S, m, reg);  
    if (search) { 
        cout << "Yes" << endl;  
    }
    else {  
        cout << "No" << endl;
    }
    return 0;
}
