#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main()
{

    // creation
    unordered_map<string, int> m;

    // Insertion

    // 3 ways of insertion

    // 1

    pair<string, int> p = make_pair("Bishnu", 3);
    m.insert(p);

    // 2

    pair<string, int> pair2("love", 2);

    // 3

    m["kn44"] = 1;

    //Search

    //1

    cout << m["mera"] << endl;

    //2

    cout << m.at("Bishnu") << endl;

    //IF we write the code like this then : 

    cout << m["unknown key"] << endl;  //It will create a entry point and set it at 0 for the entry it also helps in accessing the value btw.

    //size

    cout << m.size() << endl;

    //To check presenct of any particualr key : 

    cout << m.count("Bishnu") << endl;

    //erase

    m.erase("Bishnu");

    cout << m.count("Bishnu") << endl;

    //Traverse each element and get the values of it : 

    for(auto i:m){
        cout << i.first << " " << i.second << endl;
    }

    //Iterator

    unordered_map<string, int> :: iterator it = m.begin();

    while(it != m.end()){
        cout <<  it->first << " " << it->second << endl;
        it++;
    }

    return 0;
}