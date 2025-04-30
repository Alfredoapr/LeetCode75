class Solution {
public:

    int gcd(int a,int b){
        if(b == 0) return a;
        return gcd(b, a % b);
    }

    string gcdOfStrings(string str1, string str2) {
        string aux = "";
        int tam = 0;
        int a = str1.length();
        int b = str2.length();
        int cd = gcd(a,b);
        do{
            if(str1[tam] == str2[tam]){
                aux += str1[tam];
            }
            tam++;
        }while(tam < cd);
     return aux;   
    }
};
