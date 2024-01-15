#include <iostream>
#include <unordered_map>

using namespace std;

vector<int> twoSum(vector<int> &numbers, int target)
    {   
        //Key is the number and value is the its index 
        vector<int> result;
        unordered_map<int, int> myDict;

        for(int i=0; i< numbers.size(); i++) {
            int numberToFind = target - numbers[i];
            if (myDict.find(numberToFind) != myDict.end()) {
                result.push_back(myDict[numberToFind] + 1);
                result.push_back(i+1);
                return result;
            }

            myDict[numbers[i]] = i;
        }
        return result;
    }

void main() {
    
}

