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

            int firstNumber = 0;
            int secondNumber = 0;
            
            int digitCounter = 0;
            int sum = 0;

            for(auto & line : lines){
                int lineSize = line.size();
        
                for(int i = 0; i < lineSize; i++){

                    if(isdigit(line[i])){
                        firstNumber = line[i] - '0';
                        cout << firstNumber << endl;
                       
                    }
                    
                }
                

            }
            
           
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