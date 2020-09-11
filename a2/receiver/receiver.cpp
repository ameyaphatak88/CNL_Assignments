#include<iostream>
using namespace std;

int main()
{
    string crc, encoded, cmpmsg;
    cout << "Enter message=";
    getline(cin,encoded);
    cout << "Enter the crc generator polynomial=";
    getline(cin,crc);
    for(int i = 0; i <= encoded.length() - crc.length(); )
    {
        for(int j = 0; j < crc.length(); j++)
        {
            encoded[i+j] = encoded[i+j] == crc[j] ? '0':'1';
        }
        for(; i < encoded.length() && encoded[i]!='1'; i++)
        {

        }
    }
    
    cmpmsg = "";
    for(int i = 1; i <= encoded.substr(encoded.length() - crc.length()).length(); i++)
    {
        cmpmsg = cmpmsg + '0';
    }
    cout << encoded.substr(encoded.length() - crc.length()) << endl;
    cout << cmpmsg;
    if(encoded.substr(encoded.length() - crc.length()) == cmpmsg)
    {
        cout << "No error";
    }
    else
    {
        cout << "Error";
    }
    return 0;
}