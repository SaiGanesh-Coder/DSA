#include<iostream>
using namespace std;

class dynamicArray{
    int *data;
    int nextIndex;
    int capacity;

    public:
        dynamicArray(){
            data = new int[5];
            nextIndex=0;
            capacity=5;
            cout<<"hey"<<endl;
        }
        dynamicArray(dynamicArray const &d){
            this->nextIndex = d.nextIndex;
            this->capacity = d.capacity;
            //this->data = d.data;   //shallow copy done by copy constructor
            //DEEP COPY   
            this->data = new int[capacity];
            for(int i=0;i<d.nextIndex;i++){
                this->data[i]=d.data[i];
            }
        }
        void operator=(dynamicArray const &d){
            this->nextIndex = d.nextIndex;
            this->capacity = d.capacity;
            //this->data = d.data;   //shallow copy done by copy constructor
            //DEEP COPY   
            this->data = new int[d.capacity];
            for(int i=0;i<d.nextIndex;i++){
                this->data[i]=d.data[i];
            }
        }
        void addElement(int element){
            if(nextIndex == capacity){
               int *newData = new int[2*capacity];
               for(int i=0;i<capacity;i++){
                newData[i]=data[i];
               }
               delete []data;
               data = newData;
               capacity *= 2;
            }
            data[nextIndex]=element;
            nextIndex++;
        }
        void addElement(int element,int index){
            if(index<nextIndex){
                data[index]=element;
            }else if(index == nextIndex){
                addElement(element);
            }else{
                return;
            }
        }
        int getElement(int g) const{ 
            if( g>=0 && g<nextIndex){
                return data[g];
            }else{
                return -1;
            }
        }
        void print() const{
            for(int i=0;i<nextIndex;i++){
                cout<<data[i]<<"  ";
            }
            cout<<endl;
        }
        int getCapacity() const{
            return capacity;
        }
};