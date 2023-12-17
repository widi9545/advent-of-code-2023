#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std; 

class numberCount{
    public:
        vector<string> lines;
        int total;
        int fileLen;

        int sumNumbers(int firstNumber, int secondNumber){
            return 1;
        }

        void returnFileLen(){
            for(int i = 0; i < lines.size(); i ++){
                fileLen = i;

            }
        }

    

        int iterateVector(){
            int firstNumber;
            int secondNumber;

            for(auto & line : lines){
                for(auto & character : line){
                    if(isdigit(character)){
                        cout << character << endl;
                    }
                }
            }
            return 1;
        }

};



int main(){
    string line;
    string fileName = "day1.txt";
    ifstream file(fileName);

    numberCount numberCounter;

    if(file.is_open()){
        while(getline(file, line)){
            // cout << line << endl;
            numberCounter.lines.push_back(line);
        }
        file.close();
    }

    numberCounter.returnFileLen();
    numberCounter.iterateVector();



    return 1;
}