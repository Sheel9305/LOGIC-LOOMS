#include <iostream>
#include<string.h>
using namespace std;

class Task{
    
    string description; 
    string name;    
    int priority;       
    
public:
    
    Task(){
        description="empty";
        name="empty";
        priority=-1;
    }
    
    Task(Task &t){
        this->description = t.getDes();
        this->name = t.getName();
        this->priority = t.getPriority();
    }
    
    ~Task(){}
    
    string getDes(){ 
        
        return description; 
        
    }
    string getName(){
        
        return name; 
        
    }
    int getPriority(){
        
        return priority;
        }
    
    void setDes(string description){ 
        
        this->description = description; 
        
    }
    void setName(string name){ 
        
        this->name = name; 
        
    }
    void setPriority(int priority){
        
        this->priority = priority;
    }
    
    void inputTask(){
        
        int p;
        cout<<"Enter Task priority:"<<endl;
        cout<<"Enter 4 for Highest priority and 1 for Lowest priority"<<endl;

//       setActivityUsingPriority(p);
        while (1) {
            cin>>p;
            cout<<"Enter Task Name: ";
            cin>>name;
            cout<<endl;
            if(p==4||p==3||p==2||p==1){
                setPriority(p);
                setTaskUsingPriority(p,name);
                break;
            }else{
                cout<<"Please enter proper priority !!"<<endl;
            }
        }
        cout<<"Enter task description"<<endl;
        getline(cin,description);
        cout<<endl;
    }
    
    void setTaskUsingPriority(int priority, string name){
        
        if (priority==4) {
            setName(name);
        }else if (priority==3) {
            setName("name");
        }else if(priority==2){
            setName("name");
        }else {
            setName("name");
        }
    }
    
    void printTask(){
        
        cout<<"-----------------------------"<<endl;
        cout<<"Task Name: "<<this->name<<endl;
        cout<<"Description: "<<this->description<<endl;
        cout<<"Priority of Task(4-> Highest && 1-> Lowest): "<<this->priority<<endl;
        cout<<"-----------------------------"<<endl;
    }
};
